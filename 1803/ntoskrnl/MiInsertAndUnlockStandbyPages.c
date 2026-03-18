/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x14002E460
 * Callers:
 *     MiDecrementAndInsertStandbyPages @ 0x14002E730 (MiDecrementAndInsertStandbyPages.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 * Callees:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, ULONG_PTR *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v5; // r13d
  unsigned __int8 v6; // bl
  ULONG_PTR *v7; // r15
  __int64 v9; // r14
  int v10; // r12d
  unsigned int v11; // esi
  ULONG_PTR v12; // rdi
  char v13; // dl
  unsigned __int64 v14; // r8
  char v15; // al
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  ULONG_PTR *v19; // rax
  __int64 v20; // rdx
  ULONG_PTR *v21; // rbx
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
          (__int64)(*v7 + 0x58000000000LL) / 48,
          *(_QWORD *)(*v7 + 24) & 0x3FFFFFFFFFFFFFFFLL,
          *(unsigned int *)(v12 + 32));
      }
      v14 = *(_QWORD *)(v12 + 40);
      if ( (*(_QWORD *)(*v7 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v14 & 0x10000000000000LL) != 0 )
        {
LABEL_37:
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
        goto LABEL_37;
      }
      v15 = *(_BYTE *)(v12 + 35);
      if ( (v15 & 0x40) != 0 )
        goto LABEL_37;
      if ( (v15 & 8) != 0 )
        v16 = 5;
      else
        v16 = v15 & 7;
      if ( !v9 )
        v9 = *(_QWORD *)(qword_1403CBD88 + 8LL * ((HIDWORD(v14) >> 8) & 0x3FF));
      if ( v16 != v10 || v9 != *(_QWORD *)(qword_1403CBD88 + 8 * ((v14 >> 40) & 0x3FF)) )
      {
        if ( v10 != 0xFFFFFF )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v14 = *(_QWORD *)(v12 + 40);
        }
        v10 = v16;
        v9 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v14 >> 40) & 0x3FF));
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 40 * (v16 + 60LL));
        KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock);
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
