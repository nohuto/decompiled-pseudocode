/*
 * XREFs of KeWakeWaitChain @ 0x1400BDED8
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1400BB3D8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x140157BB0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x140157DF4 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140157FDC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x140158310 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401596CC (ExpReleaseFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14070D9D4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(_QWORD **a1, int a2, char a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // ebx
  int v6; // r12d
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  char v18; // al
  __int64 v19; // rsi
  _QWORD *v20; // r15
  struct _KPRCB *v21; // rax
  _KTHREAD *CurrentThread; // r14
  __int64 v23; // r8
  __int64 v24; // r14
  int v25; // r8d
  __int64 *v26; // rdx
  __int64 v27; // [rsp+30h] [rbp-68h]
  _QWORD *v28; // [rsp+38h] [rbp-60h]
  _QWORD *v29; // [rsp+40h] [rbp-58h]
  _QWORD *v30; // [rsp+48h] [rbp-50h]
  char CurrentIrql; // [rsp+50h] [rbp-48h]
  int v34; // [rsp+B8h] [rbp+20h]

  v3 = *a1;
  v4 = 0;
  v34 = 0;
  v30 = *a1;
  v6 = 1;
  if ( !*a1 )
    return v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  do
  {
    v9 = v3;
    v10 = v3 + 2;
    v29 = (_QWORD *)*v3;
    KiAcquireKobjectLockSafe(v3 + 2);
    v11 = v9 + 3;
    *((_DWORD *)v9 + 5) = 1;
    v12 = (_QWORD *)v9[3];
    while ( v12 != v11 )
    {
      v13 = (_QWORD *)*v12;
      v14 = (__int64)v12;
      v12 = v13;
      v28 = v13;
      v15 = *(_QWORD **)(v14 + 8);
      if ( v13[1] != v14 || *v15 != v14 )
        __fastfail(3u);
      *v15 = v13;
      v13[1] = v15;
      v16 = *(_BYTE *)(v14 + 16);
      if ( v16 != 1 )
      {
        if ( v16 != 2 )
        {
          KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
          goto LABEL_36;
        }
        *(_BYTE *)(v14 + 17) = 5;
        v19 = *(_QWORD *)(v14 + 24);
        *(_QWORD *)v14 = 0LL;
        v20 = (_QWORD *)(v19 + 8);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v21 = KeGetCurrentPrcb();
        v27 = (__int64)v21;
        CurrentThread = v21->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v23) = KeIsThreadRunning(v21->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v14, v23);
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
          if ( KiWakeQueueWaiter(v27, v19, v14) )
          {
LABEL_33:
            _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
            v17 = (*((_DWORD *)v10 + 1))-- == 1;
            if ( v17 )
              break;
            v12 = v28;
            goto LABEL_36;
          }
        }
        v25 = *(_DWORD *)(v19 + 4);
        *(_DWORD *)(v19 + 4) = v25 + 1;
        v26 = *(__int64 **)(v19 + 32);
        if ( *v26 != v19 + 24 )
          __fastfail(3u);
        *(_QWORD *)v14 = v19 + 24;
        *(_QWORD *)(v14 + 8) = v26;
        *v26 = v14;
        *(_QWORD *)(v19 + 32) = v14;
        if ( !v25 && (_QWORD *)*v20 != v20 )
          KiWakeOtherQueueWaiters(v24, v19);
        goto LABEL_33;
      }
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
      {
        v17 = (*((_DWORD *)v10 + 1))-- == 1;
        if ( v17 )
          break;
      }
LABEL_36:
      v11 = v10 + 1;
    }
    _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
    v3 = v29;
    v4 = ++v34;
  }
  while ( v29 != v30 );
  if ( (a3 & 1) != 0 )
  {
    v18 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    if ( a2 )
    {
      v6 = 2;
      if ( v18 > (char)a2 )
        a2 = v18;
    }
  }
  if ( (a3 & 2) != 0 && v6 == 1 )
    a2 = 1;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, v6, a2, CurrentIrql);
  *a1 = 0LL;
  return v4;
}
