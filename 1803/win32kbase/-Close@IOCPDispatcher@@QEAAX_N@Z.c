/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0121DA0
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C0121A7C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01310F0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ProtectHandle @ 0x1C005F844 (ProtectHandle.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C0121CE8 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C0121D38 (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  int v4; // edx
  __int64 v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v25; // rdx
  __int64 *v26; // rsi
  HANDLE v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-30h]
  _BYTE v29[40]; // [rsp+30h] [rbp-28h] BYREF
  char v30; // [rsp+60h] [rbp+8h] BYREF
  tagObjLock *v31; // [rsp+70h] [rbp+18h] BYREF

  if ( this[343] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5);
      while ( 1 )
      {
        v6 = this[343];
        LOBYTE(v28) = 0;
        v31 = (tagObjLock *)-200000LL;
        v7 = ZwRemoveIoCompletionEx(v6, v29, 1LL, &v30, &v31, v28);
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_8;
      }
      LODWORD(v28) = v7;
      WPP_RECORDER_SF_d(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
        2u,
        2u,
        0x15u,
        (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
        v28);
LABEL_8:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v13 )
          v12 = *v13;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v14);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v12 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v17, v16, v18);
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v31);
      while ( 1 )
      {
        v26 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v21 = *v26;
        v26[2] = 0LL;
        if ( !*(_DWORD *)(v21 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
        DomainLockRef = GetDomainLockRef(8LL, v19);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v26);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v25);
      }
      tagObjLock::UnLock(v31);
    }
    v27 = this[344];
    if ( v27 )
    {
      ProtectHandle(v27, v4, 0LL, 0);
      ObCloseHandle(this[344], 1);
      this[344] = 0LL;
    }
    ZwClose(this[343]);
    this[343] = 0LL;
  }
}
