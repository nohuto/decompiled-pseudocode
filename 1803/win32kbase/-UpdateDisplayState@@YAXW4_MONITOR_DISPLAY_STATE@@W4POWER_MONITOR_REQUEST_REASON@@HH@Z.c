/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1C00A48E0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     PowerInputEvent @ 0x1C006CD20 (PowerInputEvent.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A1F30 (xxxSendWinlogonPowerMessage.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00A2A74 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00A2CDC (-SetProximityBlocking@@YAXXZ.c)
 *     EtwTraceDisplayChange @ 0x1C00ABA50 (EtwTraceDisplayChange.c)
 *     CitDisplayPowerChange @ 0x1C0164BB4 (CitDisplayPowerChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  __int64 v6; // rcx
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v26; // rdx
  __int64 *v27; // rdi
  tagObjLock *v28; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+38h] [rbp-28h] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-18h] BYREF
  bool v31; // [rsp+54h] [rbp-Ch]
  char v32; // [rsp+55h] [rbp-Bh]
  char v33; // [rsp+56h] [rbp-Ah]
  char v34; // [rsp+57h] [rbp-9h]

  gPowerDisplayState = gSessionId;
  dword_1C01A034C = dword_1C01A0350;
  dword_1C01A0350 = a1;
  qword_1C01A0318 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C01A0320;
  qword_1C01A0320 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  word_1C01A0354 = gProtocolType == 0;
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C01A308C = 0LL;
  }
  else
  {
    gPowerTransitionsState = 0;
    if ( a2 == MonitorRequestReasonGracePeriod )
    {
      LODWORD(qword_1C01A308C) = 1;
    }
    else
    {
      LODWORD(qword_1C01A308C) = 0;
      if ( a2 == MonitorRequestReasonNearProximity )
        SetProximityBlocking();
    }
  }
  v6 = (unsigned int)gdwInAtomicOperation;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit(v6);
  if ( !gbTtmEnabled
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( a1 != 2 )
    {
      v29 = 0uLL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), &v29);
    }
  }
  v31 = gProtocolType == 0;
  InputBuffer[0] = gSessionId;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v32 = v7;
  v33 = a3;
  if ( gPowerTransitionsState || (_DWORD)qword_1C01A308C || (v34 = 0, HIDWORD(qword_1C01A308C)) )
    v34 = 1;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( gSystemIsAoAc )
  {
    if ( (gPowerTransitionsState || qword_1C01A308C) && !HIDWORD(qword_1C01A308C) )
      v11 = 0LL;
    else
      v11 = 2LL;
    SetInputMode(v11, v8, v10);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v13 = 0LL;
  while ( 1 )
  {
    v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v14 )
      v13 = *v14;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v15);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v18) == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v13 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v18, v17, v19);
  gptiCurrent = v13;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v28);
  while ( 1 )
  {
    v27 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v22 = *v27;
    v27[2] = 0LL;
    if ( !*(_DWORD *)(v22 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
    DomainLockRef = GetDomainLockRef(8LL, v20);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v27);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v26);
  }
  tagObjLock::UnLock(v28);
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
