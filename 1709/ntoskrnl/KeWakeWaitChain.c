/*
 * XREFs of KeWakeWaitChain @ 0x140115E38
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 *     ExpConvertExclusiveToSharedLite @ 0x14011BAE8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14014002C (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140140250 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1401404C0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401408BC (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14028575C (ExpReleaseDisownedFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406A92B8 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(volatile signed __int32 **a1, unsigned int a2, char a3)
{
  volatile signed __int32 *v3; // rax
  unsigned int v4; // ebx
  struct _KPRCB *CurrentPrcb; // r13
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  bool v16; // zf
  char v17; // al
  int v18; // ecx
  __int64 v19; // rsi
  _QWORD *v20; // r15
  struct _KPRCB *v21; // rax
  _KTHREAD *CurrentThread; // r14
  __int64 v23; // r8
  __int64 v24; // r14
  int v25; // r8d
  __int64 *v26; // rdx
  __int64 v27; // [rsp+38h] [rbp-60h]
  volatile signed __int32 *v28; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v29; // [rsp+48h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp-48h]
  int v33; // [rsp+B8h] [rbp+20h]

  v3 = *a1;
  v4 = 0;
  v33 = 0;
  v29 = *a1;
  if ( !*a1 )
    return v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  do
  {
    v8 = v3;
    v9 = (__int64 *)(v3 + 4);
    v28 = *(volatile signed __int32 **)v3;
    KiAcquireKobjectLockSafe(v3 + 4);
    v10 = v8 + 6;
    *((_DWORD *)v8 + 5) = 1;
    v11 = (_QWORD *)*((_QWORD *)v8 + 3);
    while ( v11 != v10 )
    {
      v12 = (__int64)v11;
      v11 = (_QWORD *)*v11;
      v13 = *(_QWORD *)v12;
      v14 = *(_QWORD **)(v12 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *(_BYTE *)(v12 + 16);
      if ( v15 != 1 )
      {
        if ( v15 != 2 )
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
          goto LABEL_39;
        }
        *(_BYTE *)(v12 + 17) = 5;
        v19 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)v12 = 0LL;
        v20 = (_QWORD *)(v19 + 8);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v21 = KeGetCurrentPrcb();
        v27 = (__int64)v21;
        CurrentThread = v21->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v23) = KeIsThreadRunning(v21->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v12, v23);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v19);
        if ( (_QWORD *)*v20 == v20
          || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15 )
        {
          v24 = v27;
        }
        else
        {
          v24 = v27;
          if ( KiWakeQueueWaiter(v27, v19, v12) )
            goto LABEL_36;
        }
        v25 = *(_DWORD *)(v19 + 4);
        *(_DWORD *)(v19 + 4) = v25 + 1;
        v26 = *(__int64 **)(v19 + 32);
        if ( *v26 != v19 + 24 )
          __fastfail(3u);
        *(_QWORD *)v12 = v19 + 24;
        *(_QWORD *)(v12 + 8) = v26;
        *v26 = v12;
        *(_QWORD *)(v19 + 32) = v12;
        if ( !v25 && (_QWORD *)*v20 != v20 )
          KiWakeOtherQueueWaiters(v24, v19);
LABEL_36:
        _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
        v16 = (*((_DWORD *)v9 + 1))-- == 1;
        if ( v16 )
          break;
        goto LABEL_39;
      }
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
      {
        v16 = (*((_DWORD *)v9 + 1))-- == 1;
        if ( v16 )
          break;
      }
LABEL_39:
      v10 = v9 + 1;
    }
    _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
    v3 = v28;
    v4 = ++v33;
  }
  while ( v28 != v29 );
  if ( (a3 & 1) != 0 && (v17 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread), a2) )
  {
    v18 = 2;
    if ( v17 > (char)a2 )
      a2 = v17;
  }
  else
  {
    v18 = 1;
  }
  if ( (a3 & 2) != 0 && v18 == 1 )
    a2 = 1;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, v18, a2, CurrentIrql);
  *a1 = 0LL;
  return v4;
}
