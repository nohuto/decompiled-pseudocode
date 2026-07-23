/*
 * XREFs of PopIssueActionRequest @ 0x1406FD0C4
 * Callers:
 *     PopPolicyWorkerAction @ 0x1406FD480 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406FD630 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopSetSystemState @ 0x14015B574 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x14015B7B4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14015B880 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x140180CE0 (ZwSetSystemPowerState.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PopAcquireAwaymodeLock @ 0x140439790 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x1404397D0 (PopReleaseAwaymodeLock.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     PopReadSystemAwayModePolicy @ 0x1406F549C (PopReadSystemAwayModePolicy.c)
 *     PopSetSleepMarker @ 0x1406F5844 (PopSetSleepMarker.c)
 *     PoBlockConsoleSwitch @ 0x1406FC85C (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 *     PopDispatchSuperfetchNotification @ 0x1406FCC50 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x1406FD724 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406FD79C (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x1406FD890 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x1406FD980 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406FD9D4 (PopSuspendServices.c)
 *     PopScreenOff @ 0x1406FF984 (PopScreenOff.c)
 *     PopSuspendResumePdc @ 0x1406FFA1C (PopSuspendResumePdc.c)
 *     PopDiagTraceHiberStats @ 0x140703B78 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x140704460 (PopDiagTracePerfTrackData.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140704C14 (PopDiagTracePowerTransitionEnd.c)
 *     PopDiagTracePowerTransitionStart @ 0x140704CA8 (PopDiagTracePowerTransitionStart.c)
 *     PopDiagTracePowerTransitionTime @ 0x140704D58 (PopDiagTracePowerTransitionTime.c)
 *     PopEnableSystemSleepCheckpoint @ 0x14070B1EC (PopEnableSystemSleepCheckpoint.c)
 *     EtwShutdown @ 0x140748DA0 (EtwShutdown.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v4; // edi
  char v9; // r14
  unsigned int v10; // ebx
  int v12; // esi
  int v13; // r14d
  int v14; // eax
  char v15; // dl
  __int64 v16; // rcx
  char v17; // bl
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  bool v19; // [rsp+20h] [rbp-38h]
  char v20; // [rsp+21h] [rbp-37h]
  ULONG v21; // [rsp+24h] [rbp-34h]
  ULONG v22; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v23[4]; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+40h] [rbp-18h]
  unsigned int v25; // [rsp+44h] [rbp-14h]

  v4 = 0;
  v21 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v9 = 1;
  if ( (byte_1403661B0 || byte_1403661B1)
    && a2 == PowerActionSleep
    && a3 < PowerSystemHibernate
    && (dword_1403657F4 & 0xFFFFFFFA) == 0
    && dword_1403657F4 != 1 )
  {
    if ( !dword_1403661B8 )
    {
      if ( byte_1403661B1 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_1403661B8 + 4, dword_1403661B8 + 7);
      }
      else
      {
        PopReleasePolicyLock();
        v4 = PopSetSystemAwayMode(1LL);
        PopAcquirePolicyLock();
      }
    }
    PopReleaseAwaymodeLock();
    return v4;
  }
  PopReleaseAwaymodeLock();
  if ( dword_1403657F4 )
  {
    if ( ((dword_1403657F4 - 6) & 0xFFFFFFFA) != 0 || dword_1403657F4 == 10 )
      v10 = 20;
    else
      v10 = 21;
  }
  else
  {
    v10 = 1;
  }
  if ( a2 == PowerActionDisplayOff )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock();
    PopScreenOff(v10);
    goto LABEL_59;
  }
  v19 = (unsigned int)(a2 - 4) <= 2;
  if ( PsWin32CalloutsEstablished && (unsigned int)(a2 - 4) > 2 )
    v9 = 0;
  if ( a4 >= 0 )
    v12 = a4 | 1;
  else
    v12 = a4 & 0xFFFFFFFE;
  if ( v9 )
    PopAction &= ~2u;
  v20 = byte_140365890;
  PopReleasePolicyLock();
  PpmBeginHighPerfRequest();
  PopSleepStats = 0;
  if ( !a1 )
  {
    if ( v19 )
      goto LABEL_36;
    memset(&PopSleepStats, 0, 0x278uLL);
    PopDiagTracePowerTransitionStart((unsigned int)dword_1403657F4, (unsigned int)dword_1403657F8);
    qword_140365BE8 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopEnableSystemSleepCheckpoint();
    PopCheckpointSystemSleep(1);
  }
  if ( !v19 )
    PopSetSleepMarker(1);
LABEL_36:
  if ( v9 )
  {
    v13 = ZwSetSystemPowerState(a2, a3, v12);
  }
  else
  {
    LOBYTE(v23[0]) = a1;
    v23[1] = a2;
    v23[2] = a3;
    v23[3] = v12;
    v25 = v10;
    if ( !a1 )
      v21 = PoBlockConsoleSwitch((__int64)v23);
    v24 = 1;
    v13 = PopDispatchStateCallout(v23, 0LL);
    if ( v13 >= 0 && !a1 )
    {
      v14 = (v12 >> 31) & 2;
      v15 = v14 | 4;
      if ( (v12 & 8) == 0 )
        v15 = v14;
      PfPowerActionNotify(0, v15, a3);
      PopNoMoreInput = 1;
      _InterlockedOr(v18, 0);
      if ( !v20 )
      {
        PopSuspendResumePdc(1LL);
        PopSuspendApps(v23);
        PopSuspendServices(v23);
      }
      if ( (v12 & 8) != 0 )
      {
        LOBYTE(v16) = 1;
        EtwShutdown(v16);
      }
      PopDispatchSuperfetchNotification(v12, a3);
      v13 = ZwSetSystemPowerState(a2, a3, v12);
      PopAcquirePolicyLock();
      v17 = byte_140365890;
      PopReleasePolicyLock();
      PopNoMoreInput = 0;
      _InterlockedOr(v18, 0);
      if ( !v17 )
      {
        PopResumeServices(v23);
        PopSuspendResumePdc(2LL);
        PopResumeApps(v23);
        PopSuspendResumePdc(3LL);
      }
      PfPowerActionNotify(7, 0, a3);
    }
    v24 = 8;
    PopDispatchStateCallout(v23, 0LL);
    if ( a1 )
      goto LABEL_58;
    v22 = v21;
    v24 = 7;
    PopDispatchStateCallout(v23, (int *)&v22);
  }
  if ( !a1 && !v19 )
  {
    if ( v13 >= 0 )
    {
      qword_140365C10 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceHiberStats();
      PopDiagTracePowerTransitionTime();
      PopDiagTracePerfTrackData((unsigned int)v12);
      PopShutdownButtonPressTime = 0LL;
      SystemAction = a2;
      MinSystemState = a3;
      PopSleepStats = 1;
    }
    PopDiagTracePowerTransitionEnd((unsigned int)v13);
    PopCheckpointSystemSleep(41);
  }
LABEL_58:
  PpmEndHighPerfRequest(2);
  v4 = v13;
LABEL_59:
  PopAcquirePolicyLock();
  return v4;
}
