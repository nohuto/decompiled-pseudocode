/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x140051C80
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102A40 (MiDecrementAndInsertStandbyPages.c)
 * Callees:
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140051F60 (MiInsertProtectedStandbyPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v5; // r13d
  unsigned __int8 v6; // bl
  __int64 *v7; // r14
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // esi
  __int64 v12; // rdi
  char v13; // dl
  unsigned __int64 v14; // rdx
  char v15; // al
  unsigned int v16; // ebx
  __int16 v17; // dx
  unsigned int v18; // ecx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rbx
  __int64 v22; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a4;
  v7 = a2;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0xFFFFFF;
    v11 = 0;
    if ( !a3 )
      goto LABEL_21;
    while ( 1 )
    {
      v12 = *v7;
      if ( (*(_QWORD *)(*v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
        || (v13 = *(_BYTE *)(v12 + 34), (v13 & 7) == 6)
        || (v13 & 0x10) != 0 )
      {
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          (*v7 + 0x58000000000LL) / 48,
          *(_QWORD *)(*v7 + 24) & 0x3FFFFFFFFFFFFFFFLL,
          *(unsigned int *)(v12 + 32));
      }
      v14 = *(_QWORD *)(v12 + 40);
      if ( (*(_QWORD *)(*v7 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v14 & 0x10000000000000LL) != 0 )
        {
LABEL_39:
          if ( v10 != 0xFFFFFF )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v10 = 0xFFFFFF;
          }
          v17 = 4;
          goto LABEL_16;
        }
      }
      else if ( (v14 & 0x10000000000000LL) != 0 )
      {
        goto LABEL_39;
      }
      v15 = *(_BYTE *)(v12 + 35);
      if ( (v15 & 0x40) != 0 )
        goto LABEL_39;
      if ( (v15 & 8) != 0 )
        v16 = 5;
      else
        v16 = v15 & 7;
      if ( !v9 )
        v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((v14 >> 40) & 0x3FF));
      if ( v16 != v10 || v9 != *(_QWORD *)(qword_140388AF0 + 8 * ((v14 >> 40) & 0x3FF)) )
      {
        if ( v10 != 0xFFFFFF )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v10 = v16;
        v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL));
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 8 * (v16 + 4 * (v16 + 73LL)));
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9 + 8 * (v16 + 4 * (v16 + 73LL)));
        }
        else if ( _InterlockedExchange64((volatile __int64 *)(v9 + 8 * (v16 + 4 * (v16 + 73LL))), (__int64)&LockHandle) )
        {
          KxWaitForLockOwnerShip(&LockHandle);
        }
      }
      v17 = 132;
LABEL_16:
      MiInsertPageInList(v12, v17);
      ++v11;
      ++v7;
      if ( v11 >= a3 )
      {
        if ( v10 != 0xFFFFFF )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v7 = a2;
LABEL_20:
        v6 = a4;
        goto LABEL_21;
      }
    }
  }
  if ( a3 )
  {
    v21 = a2;
    v22 = a3;
    do
    {
      MiInsertProtectedStandbyPage(a1, *v21++);
      --v22;
    }
    while ( v22 );
    goto LABEL_20;
  }
LABEL_21:
  v18 = a3 - 1;
  if ( v6 == 17 )
    v18 = a3;
  if ( v18 )
  {
    v19 = v7;
    v20 = v18;
    v5 = v18;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*v19++ + 24), 0x7FFFFFFFFFFFFFFFuLL);
      --v20;
    }
    while ( v20 );
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7[v5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
  }
}
