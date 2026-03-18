/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C003BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C000A890 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C003BBA8 (-Dispatch@LegacyInputDispatcher@@QEBAJJ@Z.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 */

NTSTATUS __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  tagObjLock *DomainLockRef; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v8; // rdi
  __int64 *v9; // rdi
  PVOID CurrentIrp; // rcx
  NTSTATUS result; // eax
  unsigned int v12; // ecx

  DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
  while ( 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v5, v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(DomainLockRef, 0LL);
    *((_QWORD *)DomainLockRef + 1) = KeGetCurrentThread();
    while ( 1 )
    {
      v9 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v9[2] = 0LL;
      tagObjLock::UnLock(DomainLockRef);
      HMUnlockObject(*v9);
      RIMLockExclusive((__int64)DomainLockRef);
    }
    tagObjLock::UnLock(DomainLockRef);
    if ( (gdwMitConfig & 2) != 0 )
    {
      CurrentIrp = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
      if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
      {
        if ( (gdwUpdateKeyboard & 7) != 0 )
          CKeyboardSensor::UpdateKeyboardLEDs((CKeyboardSensor *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
      }
    }
    UserSessionSwitchLeaveCrit(CurrentIrp);
    result = KeWaitForMultipleObjects(
               *((_DWORD *)this + 13),
               *((PVOID **)this + 1),
               WaitAny,
               WrUserRequest,
               *((_BYTE *)this + 56),
               *((_BYTE *)this + 57),
               0LL,
               *((PKWAIT_BLOCK *)this + 3));
    if ( result < 0 )
      break;
    if ( (unsigned int)result >= *((_DWORD *)this + 13) )
      break;
    v12 = *((_DWORD *)this + 10);
    if ( result < v12 || v12 == 64 )
      break;
    LegacyInputDispatcher::Dispatch(this, result);
  }
  return result;
}
