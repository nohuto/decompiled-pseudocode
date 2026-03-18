/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0122D60
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003AEAC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C012451C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v22; // rdx
  __int64 *v23; // rdi
  tagObjLock *v24; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)a2 < 4 )
  {
    v3 = 3LL * (unsigned int)a2;
    if ( *((_DWORD *)&unk_1C0172F90 + 6 * (unsigned int)a2) != (_DWORD)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    if ( *((_DWORD *)&unk_1C0172F90 + 2 * v3 + 4) >= 0xEu || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C0172F90 + v3 + 1))(a1);
    }
    else
    {
      UserSessionSwitchLeaveCrit(v4);
      CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C0172F90 + 2 * v3 + 4));
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v9 = 0LL;
      while ( 1 )
      {
        v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v10 )
          v9 = *v10;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v11);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v9 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v14, v13, v15);
      gptiCurrent = v9;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
      while ( 1 )
      {
        v23 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v18 = *v23;
        v23[2] = 0LL;
        if ( !*(_DWORD *)(v18 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
        DomainLockRef = GetDomainLockRef(8LL, v16);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v23);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v22);
      }
      tagObjLock::UnLock(v24);
    }
  }
}
