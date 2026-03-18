/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DCBF4
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DC710 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00DC7C0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     PowerInputEvent @ 0x1C0077A60 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C00A3738 (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C00A3790 (EtwTraceDisplayChange.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall UpdateSessionPowerState(int a1, enum POWER_MONITOR_REQUEST_REASON a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int128 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdi
  __int64 *DomainLockRef; // rbx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  tagObjLock *v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-38h]
  char v26; // [rsp+44h] [rbp-34h]
  bool v27; // [rsp+45h] [rbp-33h]
  enum POWER_MONITOR_REQUEST_REASON v28; // [rsp+48h] [rbp-30h]

  gPowerDisplayState = gSessionId;
  dword_1C0190F6C = dword_1C0190F70;
  v4 = 0xFFFFF78000000004uLL;
  dword_1C0190F70 = a1 != 0;
  v5 = 0xFFFFF78000000320uLL;
  qword_1C0190F38 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C0190F40;
  v6 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  qword_1C0190F40 = *((_QWORD *)&v6 + 1);
  word_1C0190F74 = gProtocolType == 0;
  v7 = (unsigned int)gdwInAtomicOperation;
  gPowerTransitionsState = a1;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit(v7, *((__int64 *)&v6 + 1), v5, v4);
  v27 = gProtocolType == 0;
  InputBuffer = 19LL;
  v25 = gSessionId;
  v26 = a1;
  v28 = a2;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v15, v14, v16, v17);
  gptiCurrent = v13;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
  v18 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v18[2];
      v18[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v18);
      RIMLockExclusive((__int64)DomainLockRef);
      v18 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v23);
  EtwTraceDisplayChange(v21, v20, v22);
  CitDisplayPowerChange((__int64)&gPowerDisplayState);
}
