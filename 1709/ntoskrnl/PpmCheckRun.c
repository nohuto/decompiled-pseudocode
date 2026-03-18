/*
 * XREFs of PpmCheckRun @ 0x14008F490
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

void PpmCheckRun()
{
  int v0; // ecx
  unsigned __int8 (*v1)(void); // r8
  __int64 v2; // rbx
  int v3; // edi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  int v6; // eax
  __int64 *v7; // rsi
  REGHANDLE v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rax
  char v12; // al
  __int64 v13; // r13
  _QWORD *v14; // r12
  unsigned __int8 IsThreadRunning; // al
  __int64 v16; // r9
  int v17; // edx
  __int64 *v18; // rcx
  __int64 *v19; // r12
  __int64 v20; // rsi
  char v21; // al
  __int64 v22; // r8
  __int64 v23; // r15
  _QWORD *v24; // r13
  unsigned __int8 v25; // al
  __int64 v26; // r9
  int v27; // edx
  __int64 *v28; // rcx
  struct _KPRCB *v29; // [rsp+40h] [rbp-58h]
  struct _KPRCB *v30; // [rsp+40h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  _KTHREAD *v32; // [rsp+48h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-48h] BYREF

  v0 = PpmCheckPipelineIndex;
  v1 = *(unsigned __int8 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( !v1 )
  {
LABEL_4:
    v2 = PpmPerfPolicyLock;
    PpmPerfPolicyLock = 0LL;
    if ( (dword_140365EC8 & 0x7F) != 0 )
    {
      v3 = 0;
    }
    else
    {
      if ( dword_140365ECC == 1 )
        goto LABEL_10;
      v3 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(&dword_140365EC8);
    v6 = dword_140365ECC;
    dword_140365ECC = 1;
    if ( !v6 )
    {
      if ( !v3 )
      {
        v7 = (__int64 *)qword_140365ED0;
        if ( (__int64 *)qword_140365ED0 != &qword_140365ED0 )
        {
          while ( 1 )
          {
            v9 = (__int64)v7;
            v7 = (__int64 *)*v7;
            v10 = *(_QWORD *)v9;
            v11 = *(_QWORD **)(v9 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v11 != v9 )
              __fastfail(3u);
            *v11 = v10;
            *(_QWORD *)(v10 + 8) = v11;
            v12 = *(_BYTE *)(v9 + 16);
            if ( v12 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v9, *(unsigned __int16 *)(v9 + 18), 0LL) )
              {
                if ( !--dword_140365ECC )
                  goto LABEL_9;
              }
            }
            else if ( v12 == 2 )
            {
              *(_BYTE *)(v9 + 17) = 5;
              v13 = *(_QWORD *)(v9 + 24);
              *(_QWORD *)v9 = 0LL;
              v14 = (_QWORD *)(v13 + 8);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v29 = KeGetCurrentPrcb();
              CurrentThread = v29->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v29->CurrentThread);
                EtwTraceEnqueueWork(v16, v9, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v13);
              if ( (_QWORD *)*v14 == v14
                || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v29, v13, v9) )
              {
                v17 = *(_DWORD *)(v13 + 4);
                *(_DWORD *)(v13 + 4) = v17 + 1;
                v18 = *(__int64 **)(v13 + 32);
                if ( *v18 != v13 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v9 = v13 + 24;
                *(_QWORD *)(v9 + 8) = v18;
                *v18 = v9;
                *(_QWORD *)(v13 + 32) = v9;
                if ( !v17 && (_QWORD *)*v14 != v14 )
                  KiWakeOtherQueueWaiters((__int64)v29, v13);
              }
              _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
              if ( !--dword_140365ECC )
                goto LABEL_9;
            }
            else
            {
              KiTryUnwaitThread((__int64)CurrentPrcb, v9, 256LL, 0LL);
            }
            if ( v7 == &qword_140365ED0 )
              goto LABEL_9;
          }
        }
        goto LABEL_9;
      }
      v19 = (__int64 *)qword_140365ED0;
      while ( v19 != &qword_140365ED0 )
      {
        v20 = (__int64)v19;
        v19 = (__int64 *)*v19;
        v21 = *(_BYTE *)(v20 + 16);
        if ( v21 == 1 )
        {
          v22 = *(unsigned __int16 *)(v20 + 18);
        }
        else
        {
          if ( v21 == 2 )
          {
            *(_BYTE *)(v20 + 17) = 5;
            v23 = *(_QWORD *)(v20 + 24);
            *(_QWORD *)v20 = 0LL;
            v24 = (_QWORD *)(v23 + 8);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v30 = KeGetCurrentPrcb();
            v32 = v30->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v25 = KeIsThreadRunning(v30->CurrentThread);
              EtwTraceEnqueueWork(v26, v20, v25);
            }
            KiAcquireKobjectLockSafe(v23);
            if ( (_QWORD *)*v24 == v24
              || *(_DWORD *)(v23 + 40) >= *(_DWORD *)(v23 + 44)
              || v32->Queue == (_DISPATCHER_HEADER *volatile)v23 && v32->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v30, v23, v20) )
            {
              v27 = *(_DWORD *)(v23 + 4);
              *(_DWORD *)(v23 + 4) = v27 + 1;
              v28 = *(__int64 **)(v23 + 32);
              if ( *v28 != v23 + 24 )
                __fastfail(3u);
              *(_QWORD *)v20 = v23 + 24;
              *(_QWORD *)(v20 + 8) = v28;
              *v28 = v20;
              *(_QWORD *)(v23 + 32) = v20;
              if ( !v27 && (_QWORD *)*v24 != v24 )
                KiWakeOtherQueueWaiters((__int64)v30, v23);
            }
            _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
            continue;
          }
          v22 = 256LL;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v20, v22, 0LL);
      }
      qword_140365ED8 = (__int64)&qword_140365ED0;
      qword_140365ED0 = (__int64)&qword_140365ED0;
    }
LABEL_9:
    _InterlockedAnd(&dword_140365EC8, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
LABEL_10:
    if ( v2 )
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( PpmEtwRegistered )
    {
      v8 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP) )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        EtwWriteEx(v8, &PPM_ETW_PERF_CHECK_STOP, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    return;
  }
  while ( 1 )
  {
    PpmCheckPipelineIndex = v0 + 1;
    if ( !v1() )
      break;
    v0 = PpmCheckPipelineIndex;
    v1 = *(unsigned __int8 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
    if ( !v1 )
      goto LABEL_4;
  }
}
