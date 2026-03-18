/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00A3210 (PowerOffMonitor.c)
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
 *     xxxSendWinlogonPowerMessage @ 0x1C00A37C0 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC88C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00DCA58 (-SetProximityBlocking@@YAXXZ.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  __int64 v5; // r9
  __int64 v7; // r8
  unsigned __int128 v8; // rax
  __int64 v9; // rcx
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rdi
  __int64 v22; // rcx
  __int64 *DomainLockRef; // rbx
  tagObjLock *v24; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v25[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-18h] BYREF
  bool v27; // [rsp+54h] [rbp-Ch]
  char v28; // [rsp+55h] [rbp-Bh]
  char v29; // [rsp+56h] [rbp-Ah]
  char v30; // [rsp+57h] [rbp-9h]

  gPowerDisplayState = gSessionId;
  v5 = 0xFFFFF78000000004uLL;
  dword_1C0190F6C = dword_1C0190F70;
  dword_1C0190F70 = a1;
  v7 = 0xFFFFF78000000320uLL;
  qword_1C0190F38 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C0190F40;
  v8 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  qword_1C0190F40 = *((_QWORD *)&v8 + 1);
  word_1C0190F74 = gProtocolType == 0;
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C0190FCC = 0LL;
  }
  else
  {
    gPowerTransitionsState = 0;
    if ( a2 == MonitorRequestReasonGracePeriod )
    {
      LODWORD(qword_1C0190FCC) = 1;
    }
    else
    {
      LODWORD(qword_1C0190FCC) = 0;
      if ( a2 == MonitorRequestReasonNearProximity )
        SetProximityBlocking();
    }
  }
  v9 = (unsigned int)gdwInAtomicOperation;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit(v9, *((__int64 *)&v8 + 1), v7, v5);
  if ( !gbTtmEnabled
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    if ( a1 != 2 )
    {
      v25[0] = 0LL;
      v25[1] = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), v25);
    }
  }
  v27 = gProtocolType == 0;
  InputBuffer[0] = gSessionId;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v28 = v10;
  v29 = a3;
  if ( gPowerTransitionsState || (_DWORD)qword_1C0190FCC || (v30 = 0, HIDWORD(qword_1C0190FCC)) )
    v30 = 1;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( gSystemIsAoAc )
  {
    if ( (gPowerTransitionsState || qword_1C0190FCC) && !HIDWORD(qword_1C0190FCC) )
      v22 = 0LL;
    else
      v22 = 2LL;
    SetInputMode(v22);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v11, v13, v14);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v18, v17, v19, v20);
  gptiCurrent = v16;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
  v21 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v21[2];
      v21[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v21);
      RIMLockExclusive((__int64)DomainLockRef);
      v21 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v24);
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
