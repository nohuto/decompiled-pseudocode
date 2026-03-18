/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x1400C4D40
 * Callers:
 *     MiDecrementAndInsertStandbyPages @ 0x14000BC90 (MiDecrementAndInsertStandbyPages.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertProtectedStandbyPage @ 0x1400AA270 (MiInsertProtectedStandbyPage.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v5; // r13d
  unsigned __int8 v6; // di
  __int64 *v7; // r8
  __int64 v9; // r15
  __int64 *v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 *v13; // rax
  __int64 v14; // rdx
  int v15; // r12d
  unsigned int v16; // esi
  __int64 *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rcx
  char v20; // dl
  bool v21; // zf
  unsigned __int64 v22; // rcx
  char v23; // al
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a4;
  v7 = a2;
  v9 = 0LL;
  if ( a1 )
  {
    if ( a3 )
    {
      v10 = a2;
      v11 = a3;
      do
      {
        MiInsertProtectedStandbyPage(a1, *v10++);
        --v11;
      }
      while ( v11 );
      goto LABEL_5;
    }
    goto LABEL_6;
  }
  v15 = 0xFFFFFF;
  v16 = 0;
  if ( !a3 )
    goto LABEL_6;
  v17 = a2;
  do
  {
    v18 = *v17;
    v19 = *(_QWORD *)(*v17 + 24);
    if ( (v19 & 0x3FFFFFFFFFFFFFFFLL) != 0 || (v20 = *(_BYTE *)(v18 + 34), (v20 & 7) == 6) || (v20 & 0x10) != 0 )
      KeBugCheckEx(0x4Eu, 6uLL, (*v17 + 0x58000000000LL) / 48, v19 & 0x3FFFFFFFFFFFFFFFLL, *(unsigned int *)(v18 + 32));
    v21 = (v19 & 0x4000000000000000LL) == 0;
    v22 = *(_QWORD *)(v18 + 40);
    if ( v21 )
    {
      if ( (v22 & 0x10000000000000LL) != 0 )
        goto LABEL_38;
    }
    else if ( (v22 & 0x10000000000000LL) != 0 )
    {
      goto LABEL_38;
    }
    v23 = *(_BYTE *)(v18 + 35);
    if ( (v23 & 0x40) == 0 )
    {
      if ( (v23 & 8) != 0 )
        v24 = 5;
      else
        v24 = v23 & 7;
      v25 = qword_14036C8F8;
      if ( !v9 )
        v9 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v22 >> 40) & 0x3FF));
      if ( v24 != v15 || v9 != *(_QWORD *)(qword_14036C8F8 + 8 * ((v22 >> 40) & 0x3FF)) )
      {
        if ( v15 != 0xFFFFFF )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v25 = qword_14036C8F8;
        }
        v15 = v24;
        v9 = *(_QWORD *)(v25 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 8 * (v24 + 4 * (v24 + 69LL)));
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9 + 8 * (v24 + 4 * (v24 + 69LL)));
        }
        else
        {
          v27 = (_QWORD *)_InterlockedExchange64(
                            (volatile __int64 *)(v9 + 8 * (v24 + 4 * (v24 + 69LL))),
                            (__int64)&LockHandle);
          if ( v27 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v27);
        }
      }
      v26 = 132LL;
      goto LABEL_29;
    }
LABEL_38:
    if ( v15 != 0xFFFFFF )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v15 = 0xFFFFFF;
    }
    v26 = 4LL;
LABEL_29:
    MiInsertPageInList(v18, v26);
    ++v16;
    ++v17;
  }
  while ( v16 < a3 );
  if ( v15 != 0xFFFFFF )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_5:
  v7 = a2;
  v6 = a4;
LABEL_6:
  v12 = a3 - 1;
  if ( v6 == 17 )
    v12 = a3;
  if ( v12 )
  {
    v13 = v7;
    v14 = v12;
    v5 = v12;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*v13++ + 24), 0x7FFFFFFFFFFFFFFFuLL);
      --v14;
    }
    while ( v14 );
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7[v5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
  }
}
