/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C015F7C8
 * Callers:
 *     NtCompositionInputThread @ 0x1C015FEB0 (NtCompositionInputThread.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C015F66C (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C015FD3C (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(
        CInputManager *this,
        void *a2,
        void *a3,
        int (*a4)(struct tagDITCALLBACKSTRUCT *),
        int a5)
{
  CInputManager *v5; // r14
  int v8; // edi
  struct _KTHREAD *v9; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rcx
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v29; // rdx
  __int64 *v30; // rsi
  __int64 v31; // rcx
  HANDLE v33; // [rsp+30h] [rbp-10h] BYREF
  tagObjLock *v34; // [rsp+38h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF

  v5 = g_pInputManager;
  Handle = 0LL;
  v33 = 0LL;
  v8 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v8 >= 0 )
  {
    v8 = CInputManager::ValidateUserEvent(a3, &v33);
    if ( v8 >= 0 )
    {
      v9 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v5 + 1,
                                (signed __int64)KeGetCurrentThread(),
                                0LL);
      if ( !v9 || v9 == KeGetCurrentThread() )
      {
        v10 = Handle;
        Handle = 0LL;
        *((_QWORD *)v5 + 2) = v10;
        v11 = v33;
        v33 = 0LL;
        *((_QWORD *)v5 + 3) = v11;
        *((_QWORD *)v5 + 4) = *(_QWORD *)v5;
        *((_DWORD *)v5 + 17) = a5;
        *((_QWORD *)v5 + 5) = a4;
        v8 = UserActivateDwmInputProcessing((char *)v5 + 16);
        if ( v8 >= 0 )
          v8 = UserProcessDwmInput((char *)v5 + 16);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v12, v14);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v16 = 0LL;
        while ( 1 )
        {
          v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v17 )
            v16 = *v17;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v18);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v16 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v21, v20, v22);
        gptiCurrent = v16;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v34);
        while ( 1 )
        {
          v30 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
          v25 = *v30;
          v30[2] = 0LL;
          if ( !*(_DWORD *)(v25 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
          DomainLockRef = GetDomainLockRef(8LL, v23);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v30);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v29);
        }
        tagObjLock::UnLock(v34);
        CInputManager::CleanupDwmInputThread(v5);
        UserSessionSwitchLeaveCrit(v31);
      }
      else
      {
        v8 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v33 )
        ZwClose(v33);
    }
  }
  return (unsigned int)v8;
}
