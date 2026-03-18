/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0002C10
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1C0001550 (NtCompositionSetDropTarget.c)
 * Callees:
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0002A00 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0003440 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C00034A0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(char *Object, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  PVOID CurrentProcess; // rax
  _QWORD *v8; // rdi
  int v9; // ebx
  __int64 v11; // rax
  __int64 *DomainLockRef; // rbx
  CInputSink *v13; // [rsp+50h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
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
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v13);
  while ( 1 )
  {
    v8 = (_QWORD *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v11 = *v8;
    v8[2] = 0LL;
    if ( !*(_DWORD *)(v11 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DomainLockRef = (__int64 *)GetDomainLockRef(8LL);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v8);
    tagObjLock::LockExclusive((tagObjLock *)DomainLockRef);
  }
  tagObjLock::UnLock(v13);
  v9 = CompositionInputObject::LockForWrite(Object, &v13);
  if ( v9 >= 0 )
  {
    v9 = CInputSink::SetDropTarget(v13, a2);
    CInputSink::UnlockAndRelease(v13);
  }
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v9;
}
