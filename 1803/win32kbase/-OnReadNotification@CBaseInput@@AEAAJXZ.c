/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01235D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C01232CC (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C0123400 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C01241A0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  CBaseInput *v1; // rdx
  char *v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rdx
  CBaseInput *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
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
  __int64 *v26; // rdi
  __int64 v27; // rcx
  tagObjLock *v29; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CBaseInput *)*((_QWORD *)this + 8);
  v2 = (char *)this + 72;
  v3 = 0LL;
  if ( v1 != (CBaseInput *)((char *)this + 72) )
    v3 = *((_QWORD *)this + 8);
  if ( *((int *)this + 8) >= 0 )
  {
    (*(void (__fastcall **)(CBaseInput *, CBaseInput *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(
      this,
      v1,
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
    if ( CBaseInput::IsInputSuppressRequested(v6, v5) )
      CBaseInput::OnInputSuppressed((void **)this);
    else
      (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 56LL))(
        this,
        *((_QWORD *)this + 8),
        *((unsigned int *)this + 6),
        *((unsigned int *)this + 10),
        *((_QWORD *)this + 6));
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
      this,
      *((_QWORD *)this + 8),
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
    if ( v3 )
      *((_QWORD *)this + 8) = v2;
  }
  v9 = CBaseInput::Read(this);
  if ( v3 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v10);
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
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
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
    tagObjLock::UnLock(v29);
    Win32FreePool(v3);
    UserSessionSwitchLeaveCrit(v27);
  }
  return v9;
}
