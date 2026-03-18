/*
 * XREFs of PpmCheckRun @ 0x140045590
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

NTSTATUS __fastcall PpmCheckRun(__int64 a1, __int64 a2)
{
  int v2; // ecx
  NTSTATUS result; // eax
  __int64 (*v4)(void); // r8
  __int64 v5; // rdi
  int v6; // ebx
  char CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  int v9; // eax
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  REGHANDLE v13; // r10
  __int64 v14; // r15
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  __int64 v18; // r13
  _QWORD *v19; // r12
  unsigned __int8 IsThreadRunning; // al
  __int64 v21; // r9
  int v22; // edx
  __int64 *v23; // rcx
  __int64 *v24; // r12
  __int64 v25; // rsi
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // r15
  _QWORD *v29; // r13
  unsigned __int8 v30; // al
  __int64 v31; // r9
  int v32; // edx
  __int64 *v33; // rcx
  struct _KPRCB *v34; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v35; // [rsp+30h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  _KTHREAD *v37; // [rsp+38h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-48h] BYREF

  v2 = PpmCheckPipelineIndex;
  result = PpmCheckPipeline;
  v4 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( !v4 )
  {
LABEL_4:
    v5 = PpmPerfPolicyLock;
    PpmPerfPolicyLock = 0LL;
    if ( (dword_14034B848 & 0x7F) != 0 )
    {
      v6 = 0;
    }
    else
    {
      if ( dword_14034B84C == 1 )
        goto LABEL_10;
      v6 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(&dword_14034B848);
    v9 = dword_14034B84C;
    dword_14034B84C = 1;
    if ( !v9 )
    {
      if ( !v6 )
      {
        v10 = (__int64 *)qword_14034B850;
        if ( (__int64 *)qword_14034B850 != &qword_14034B850 )
        {
          while ( 1 )
          {
            v14 = (__int64)v10;
            v10 = (__int64 *)*v10;
            v15 = *(_QWORD *)v14;
            v16 = *(_QWORD **)(v14 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
              __fastfail(3u);
            *v16 = v15;
            *(_QWORD *)(v15 + 8) = v16;
            v17 = *(_BYTE *)(v14 + 16);
            if ( v17 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
              {
                if ( !--dword_14034B84C )
                  goto LABEL_9;
              }
            }
            else if ( v17 == 2 )
            {
              *(_BYTE *)(v14 + 17) = 5;
              v18 = *(_QWORD *)(v14 + 24);
              *(_QWORD *)v14 = 0LL;
              v19 = (_QWORD *)(v18 + 8);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v34 = KeGetCurrentPrcb();
              CurrentThread = v34->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v34->CurrentThread);
                EtwTraceEnqueueWork(v21, v14, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v18);
              if ( (_QWORD *)*v19 == v19
                || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v34, v18, v14) )
              {
                v22 = *(_DWORD *)(v18 + 4);
                *(_DWORD *)(v18 + 4) = v22 + 1;
                v23 = *(__int64 **)(v18 + 32);
                if ( *v23 != v18 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v14 = v18 + 24;
                *(_QWORD *)(v14 + 8) = v23;
                *v23 = v14;
                *(_QWORD *)(v18 + 32) = v14;
                if ( !v22 && (_QWORD *)*v19 != v19 )
                  KiWakeOtherQueueWaiters((__int64)v34, v18);
              }
              _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
              if ( !--dword_14034B84C )
                goto LABEL_9;
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
            }
            if ( v10 == &qword_14034B850 )
              goto LABEL_9;
          }
        }
        goto LABEL_9;
      }
      v24 = (__int64 *)qword_14034B850;
      while ( v24 != &qword_14034B850 )
      {
        v25 = (__int64)v24;
        v24 = (__int64 *)*v24;
        v26 = *(_BYTE *)(v25 + 16);
        if ( v26 == 1 )
        {
          v27 = *(unsigned __int16 *)(v25 + 18);
        }
        else
        {
          if ( v26 == 2 )
          {
            *(_BYTE *)(v25 + 17) = 5;
            v28 = *(_QWORD *)(v25 + 24);
            *(_QWORD *)v25 = 0LL;
            v29 = (_QWORD *)(v28 + 8);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v35 = KeGetCurrentPrcb();
            v37 = v35->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v30 = KeIsThreadRunning(v35->CurrentThread);
              EtwTraceEnqueueWork(v31, v25, v30);
            }
            KiAcquireKobjectLockSafe(v28);
            if ( (_QWORD *)*v29 == v29
              || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
              || v37->Queue == (_DISPATCHER_HEADER *volatile)v28 && v37->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v35, v28, v25) )
            {
              v32 = *(_DWORD *)(v28 + 4);
              *(_DWORD *)(v28 + 4) = v32 + 1;
              v33 = *(__int64 **)(v28 + 32);
              if ( *v33 != v28 + 24 )
                __fastfail(3u);
              *(_QWORD *)v25 = v28 + 24;
              *(_QWORD *)(v25 + 8) = v33;
              *v33 = v25;
              *(_QWORD *)(v28 + 32) = v25;
              if ( !v32 && (_QWORD *)*v29 != v29 )
                KiWakeOtherQueueWaiters((__int64)v35, v28);
            }
            _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
            continue;
          }
          v27 = 256LL;
        }
        KiTryUnwaitThread(CurrentPrcb, v25, v27, 0LL);
      }
      qword_14034B858 = (__int64)&qword_14034B850;
      qword_14034B850 = (__int64)&qword_14034B850;
    }
LABEL_9:
    _InterlockedAnd(&dword_14034B848, 0xFFFFFF7F);
    result = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
LABEL_10:
    if ( v5 )
      result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    if ( PpmEtwRegistered )
    {
      if ( PpmEtwHandle )
      {
        LOBYTE(a2) = 5;
        result = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, a2, 2LL);
        if ( (_BYTE)result
          || *(_BYTE *)(v13 + 101)
          && (result = EtwpLevelKeywordEnabled(*(_QWORD *)(v13 + 40) + 80LL, v11, v12), (_BYTE)result) )
        {
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = (ULONGLONG)&PpmCheckTime;
          return EtwWrite(v13, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &UserData);
        }
      }
    }
    return result;
  }
  while ( 1 )
  {
    PpmCheckPipelineIndex = v2 + 1;
    result = v4();
    if ( !(_BYTE)result )
      return result;
    v2 = PpmCheckPipelineIndex;
    result = PpmCheckPipeline;
    v4 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
    if ( !v4 )
      goto LABEL_4;
  }
}
