/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130668
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012C980 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C012C4A0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012F000 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C012F200 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInput(tagObjLock *a1, __int64 a2, __int64 *a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 *v6; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r14
  __int64 *DomainLockRef; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rbx
  tagObjLock *v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = a1;
  v5 = (unsigned int)a4;
  v6 = a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12, v13);
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
  v14 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v14[2];
      v14[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v14);
      RIMLockExclusive((__int64)DomainLockRef);
      v14 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v22);
  if ( a2 )
  {
    v17 = gpKL;
    if ( gpKL )
    {
      if ( *(_DWORD *)(gpKL + 88) )
      {
        v16 = *(unsigned int *)(a2 + 484);
        if ( *(_QWORD *)(gpKL + 104) != *(_QWORD *)(a2 + 484) )
        {
          SearchAndSetKbdTbl((struct DEVICEINFO *)a2, v16, *(_DWORD *)(a2 + 488));
          *(_DWORD *)(gpKL + 104) = *(_DWORD *)(a2 + 484);
          v17 = *(unsigned int *)(a2 + 488);
          *(_DWORD *)(gpKL + 108) = v17;
        }
      }
    }
    if ( (*(_DWORD *)gpsi & 0x2000) == 0 && v6 )
    {
      v20 = (__int64 *)((char *)v6 + v5);
      do
      {
        if ( v6 >= v20 )
          break;
        if ( a5 )
          ProcessKeyboardInjectedInputViaRim((__int64)v6, a2);
        else
          ProcessKeyboardInputWorker(v6, (struct DEVICEINFO *)a2, 1LL, v19);
        v6 = (__int64 *)((char *)v6 + 12);
      }
      while ( v6 );
    }
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return 0LL;
}
