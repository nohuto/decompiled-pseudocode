/*
 * XREFs of MiUnlinkNodeLargePage @ 0x1400C6570
 * Callers:
 *     MiGetFreeZeroLargePage @ 0x1400C4F80 (MiGetFreeZeroLargePage.c)
 *     MiDemoteLocalLargePage @ 0x1400C62F0 (MiDemoteLocalLargePage.c)
 *     MiGetHugePageToZero @ 0x140134BB0 (MiGetHugePageToZero.c)
 *     MiGetPagesToZero @ 0x1401352C8 (MiGetPagesToZero.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiBeginPageAccessor @ 0x1400C73E4 (MiBeginPageAccessor.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        char a7,
        __int64 a8)
{
  int v8; // r10d
  __int64 v9; // rdi
  unsigned int v10; // r9d
  __int64 v11; // r13
  unsigned __int8 *v12; // r11
  unsigned __int8 *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rsi
  unsigned int v16; // r15d
  int *v17; // r14
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  int v21; // r8d
  unsigned int v22; // eax
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v24; // rdx
  __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 Next; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v34; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v35; // [rsp+A4h] [rbp+Ch]
  unsigned int v36; // [rsp+A8h] [rbp+10h]
  unsigned int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v36 = a2;
  v8 = a4;
  v9 = *(_QWORD *)(a1 + 16) + 8256LL * a3;
  v10 = a2;
  v34 = a5;
  v11 = (a7 & 1) == 0;
  v35 = a5 != 1;
  v37 = ((a7 & 2) != 0) + 1;
  while ( 2 )
  {
    if ( v8 == 4 )
    {
      v12 = (unsigned __int8 *)(v9 + 8189);
      v13 = (unsigned __int8 *)(v9 + 8189 + (unsigned int)MmNumberOfChannels);
    }
    else
    {
      LOBYTE(a5) = v8;
      v12 = (unsigned __int8 *)&a5;
      v13 = (unsigned __int8 *)&a5 + 1;
    }
LABEL_4:
    v14 = *v12;
    v15 = 0LL;
LABEL_5:
    v16 = 0;
    v17 = &v34;
    while ( 1 )
    {
      v18 = *v17;
      if ( v10 != 2 )
      {
        v19 = (_QWORD *)(v9 + 16 * (v14 + 4 * (v18 + 2 * (v15 + 2LL * v10)) + 27));
        if ( (_QWORD *)*v19 != v19 )
          goto LABEL_18;
        goto LABEL_8;
      }
      v21 = 0;
      v22 = (a6 >> 4) & ((unsigned int)dword_140388540 >> 4);
      if ( dword_140388550 )
        break;
      v10 = v36;
LABEL_8:
      ++v16;
      ++v17;
      if ( v16 >= v37 )
      {
        if ( ++v15 <= v11 )
          goto LABEL_5;
        if ( ++v12 == v13 )
          return 0LL;
        goto LABEL_4;
      }
    }
    while ( 1 )
    {
      v19 = (_QWORD *)(v9 + 16 * (v22 + 16 * (v14 + 4 * (v18 + 2 * v15)) + 59));
      if ( (_QWORD *)*v19 != v19 )
        break;
      if ( ++v22 == dword_140388550 )
        v22 = 0;
      if ( ++v21 >= (unsigned int)dword_140388550 )
      {
        v10 = v36;
        goto LABEL_8;
      }
    }
LABEL_18:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 8200);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9 + 8200);
    }
    else
    {
      v24 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v9 + 8200), (__int64)&LockHandle);
      if ( v24 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v24);
    }
    if ( (_QWORD *)*v19 == v19 || _interlockedbittestandset64((volatile signed __int32 *)(v19[1] + 24LL), 0x3FuLL) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      v10 = v36;
      v8 = v38;
      continue;
    }
    break;
  }
  v25 = v19[1];
  if ( *(_QWORD **)v25 != v19 || (v26 = *(_QWORD **)(v25 + 8), *v26 != v25) )
    __fastfail(3u);
  v27 = a8;
  v28 = v19[1];
  v19[1] = v26;
  *v26 = v19;
  if ( v27 )
  {
    v30 = (_QWORD *)*v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      __fastfail(3u);
    *(_QWORD *)v25 = v30;
    *(_QWORD *)(v25 + 8) = v19;
    v30[1] = v25;
    *v19 = v25;
    if ( !(unsigned int)MiBeginPageAccessor(v27, v25) )
      v28 = 0LL;
  }
  else
  {
    v28 = MiUnlinkNodeLargePageHelper(v9, v25, v36, v14, a7);
    if ( !v28 )
    {
      v31 = (_QWORD *)v19[1];
      if ( (_QWORD *)*v31 != v19 )
        __fastfail(3u);
      *(_QWORD *)v25 = v19;
      *(_QWORD *)(v25 + 8) = v31;
      *v31 = v25;
      v19[1] = v25;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_30;
  }
  _m_prefetchw(&LockHandle);
  Next = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_36:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_30;
  }
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = KxWaitForLockChainValid(&LockHandle);
    goto LABEL_36;
  }
LABEL_30:
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v28;
}
