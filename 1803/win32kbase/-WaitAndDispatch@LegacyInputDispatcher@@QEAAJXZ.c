/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0030B40
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C0030A68 (-Dispatch@LegacyInputDispatcher@@QEBAJJ@Z.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E9B0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  CBaseInput *v18; // rcx
  NTSTATUS v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rdi
  __int64 v29; // rdx

  while ( 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v6 )
        v5 = *v6;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v5 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v9, v8, v10);
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    DomainLockRef = GetDomainLockRef(8LL, v11);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    if ( (struct _KTHREAD *)DomainLockRef[1] == KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(DomainLockRef, 0LL);
    DomainLockRef[1] = (__int64)KeGetCurrentThread();
    while ( 1 )
    {
      v17 = (_QWORD *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v25 = *v17;
      v17[2] = 0LL;
      if ( !*(_DWORD *)(v25 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
      v28 = GetDomainLockRef(8LL, v15);
      if ( v28 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
      tagObjLock::UnLock((tagObjLock *)v28);
      HMUnlockObject(*v17);
      tagObjLock::LockExclusive((struct _KTHREAD **)v28, v29);
    }
    if ( (struct _KTHREAD *)DomainLockRef[1] == KeGetCurrentThread() )
    {
      DomainLockRef[1] = 0LL;
      ExReleasePushLockExclusiveEx(DomainLockRef, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)DomainLockRef + 4);
      ExReleasePushLockSharedEx(DomainLockRef, 0LL);
    }
    KeLeaveCriticalRegion();
    v18 = gpKeyboardSensor;
    if ( gpKeyboardSensor && (gdwUpdateKeyboard & 7) != 0 )
      CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
    UserSessionSwitchLeaveCrit((__int64)v18);
    v19 = KeWaitForMultipleObjects(
            *((_DWORD *)this + 13),
            *((PVOID **)this + 1),
            WaitAny,
            WrUserRequest,
            *((_BYTE *)this + 56),
            *((_BYTE *)this + 57),
            0LL,
            *((PKWAIT_BLOCK *)this + 3));
    v20 = v19;
    if ( v19 < 0 )
      break;
    v21 = *((unsigned int *)this + 13);
    if ( v19 >= (unsigned int)v21 )
      break;
    v22 = *((unsigned int *)this + 10);
    v23 = v22;
    if ( (unsigned int)v22 >= (unsigned int)v21 && (_DWORD)v22 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
      v23 = *((_DWORD *)this + 10);
    }
    if ( v20 < v23 || v23 == 64 )
      break;
    LegacyInputDispatcher::Dispatch(this, v20);
  }
  return v20;
}
