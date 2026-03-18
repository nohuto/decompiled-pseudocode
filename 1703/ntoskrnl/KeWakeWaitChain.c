/*
 * XREFs of KeWakeWaitChain @ 0x14002CAF8
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x140025ACC (ExpConvertExclusiveToSharedLite.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14014D0C4 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14014D328 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14014DCBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14014DF20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14014E868 (ExpReleaseFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14067E238 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(_QWORD **a1, int a2, char a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // ebx
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  bool v16; // zf
  int v17; // ecx
  char v18; // al
  __int64 v19; // rsi
  _QWORD *v20; // r15
  struct _KPRCB *v21; // rax
  _KTHREAD *CurrentThread; // r14
  __int64 v23; // r8
  __int64 v24; // r14
  int v25; // r8d
  __int64 *v26; // rdx
  __int64 v27; // [rsp+38h] [rbp-60h]
  _QWORD *v28; // [rsp+40h] [rbp-58h]
  _QWORD *v29; // [rsp+48h] [rbp-50h]
  char CurrentIrql; // [rsp+50h] [rbp-48h]
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
    v9 = v3 + 2;
    v28 = (_QWORD *)*v3;
    KiAcquireKobjectLockSafe(v3 + 2);
    v10 = v8 + 3;
    *((_DWORD *)v8 + 5) = 1;
    v11 = (_QWORD *)v8[3];
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
          KiTryUnwaitThread(CurrentPrcb, v12, 256LL, 0LL);
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
        KiAcquireKobjectLockSafe(v19);
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
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
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
  if ( (a3 & 1) != 0 && (v18 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread), a2) )
  {
    v17 = 2;
    if ( v18 > (char)a2 )
      a2 = v18;
  }
  else
  {
    v17 = 1;
  }
  if ( (a3 & 2) != 0 && v17 == 1 )
    a2 = 1;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, v17, a2, CurrentIrql);
  *a1 = 0LL;
  return v4;
}
