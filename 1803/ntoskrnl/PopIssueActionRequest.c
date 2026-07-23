/*
 * XREFs of PopIssueActionRequest @ 0x1405EBF50
 * Callers:
 *     PopPolicyWorkerAction @ 0x1405EBDD0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1405EF2E0 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopSetSystemState @ 0x14016DB24 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x14016DFB4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14016E780 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x1401AA920 (ZwSetSystemPowerState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopAcquireAwaymodeLock @ 0x140470BD4 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140470C14 (PopReleaseAwaymodeLock.c)
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1404874A4 (PopCheckpointSystemSleepUnsafe.c)
 *     PoBlockConsoleSwitch @ 0x140583BAC (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 *     PopReadSystemAwayModePolicy @ 0x1405EA8F4 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTracePowerTransitionStart @ 0x1405EA9C8 (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x1405EAA78 (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     PopDiagTracePowerTransitionTime @ 0x1405EAD44 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x1405EAE58 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x1405EAF78 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1405EB3FC (PopDiagTracePowerTransitionEnd.c)
 *     PopSuspendResumePdc @ 0x1405EC3C4 (PopSuspendResumePdc.c)
 *     PopSuspendApps @ 0x1405EC3E4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1405EC44C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1405EC4BC (PopResumeApps.c)
 *     PopResumeServices @ 0x1405EC548 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1405EC5D4 (PopDispatchSuperfetchNotification.c)
 *     PopSetSystemAwayMode @ 0x140762D10 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x14076527C (PopScreenOff.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x14076A2EC (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407C4220 (NtQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // si
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v17; // r14d
  __int32 v18; // eax
  __int64 v19; // rcx
  __int32 v20; // eax
  int v21; // eax
  NTSTATUS v22; // eax
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // bl
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  bool v34; // [rsp+20h] [rbp-58h]
  char v35; // [rsp+21h] [rbp-57h]
  ULONG v36; // [rsp+24h] [rbp-54h]
  ULONG v37; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v39[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v40[8]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v41[4]; // [rsp+48h] [rbp-30h] BYREF
  int v42; // [rsp+58h] [rbp-20h]
  unsigned int v43; // [rsp+5Ch] [rbp-1Ch]

  v4 = 0;
  v36 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v13 = 1;
  if ( (byte_1403AAA30 || byte_1403AAA31)
    && a2 == PowerActionSleep
    && a3 < PowerSystemHibernate
    && (dword_1403AA074 & 0xFFFFFFFA) == 0
    && dword_1403AA074 != 1 )
  {
    if ( !dword_1403AAA38 )
    {
      if ( byte_1403AAA31 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_1403AAA38 + 4, dword_1403AAA38 + 7);
      }
      else
      {
        PopReleasePolicyLock();
        v4 = PopSetSystemAwayMode(1LL);
        PopAcquirePolicyLock();
      }
    }
    PopReleaseAwaymodeLock(v10, v9, v11, v12);
    return v4;
  }
  PopReleaseAwaymodeLock(v10, v9, v11, v12);
  if ( dword_1403AA074 )
  {
    if ( ((dword_1403AA074 - 6) & 0xFFFFFFFA) != 0 || dword_1403AA074 == 10 )
      v14 = 20;
    else
      v14 = 21;
  }
  else
  {
    v14 = 1;
  }
  if ( a2 == PowerActionDisplayOff )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock();
    PopScreenOff(v14, v15);
    goto LABEL_75;
  }
  v34 = (unsigned int)(a2 - 4) <= 2;
  if ( PsWin32CalloutsEstablished && (unsigned int)(a2 - 4) > 2 )
    v13 = 0;
  if ( a4 >= 0 )
    v17 = a4 | 1;
  else
    v17 = a4 & 0xFFFFFFFE;
  if ( v13 )
    PopAction &= ~2u;
  v35 = byte_1403AA110;
  PopReleasePolicyLock();
  PpmBeginHighPerfRequest();
  PopSleepStats = 0;
  if ( a1 )
    goto LABEL_50;
  if ( v34 )
    goto LABEL_52;
  memset(&PopSleepStats, 0, 0x278uLL);
  PopDiagTracePowerTransitionStart(dword_1403AA074, dword_1403AA078);
  qword_1403AA488 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopCheckpointSystemSleepEnabled = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  if ( PopCheckpointSystemSleepEnabledReg )
  {
    v18 = 4;
  }
  else
  {
    if ( !byte_1403AAB74 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
      goto LABEL_49;
    v18 = 1;
  }
  _InterlockedExchange(&PopSleepCheckpointStatus, v18);
  if ( dword_1403A1C50 != 2 )
  {
    v19 = 3221225474LL;
    v20 = 8;
LABEL_40:
    _InterlockedExchange(&PopSleepCheckpointStatus, v20);
LABEL_48:
    PopTraceSleepCheckpointInitFailure(v19);
    goto LABEL_49;
  }
  v21 = NtQueryEnvironmentVariableInfoEx(1LL, v40, &v38, v39);
  v19 = (unsigned int)v21;
  if ( v21 < 0 )
    goto LABEL_42;
  if ( v38 <= 0x2000 )
  {
    v19 = 3221226580LL;
    v20 = 9;
    goto LABEL_40;
  }
  v22 = PopCheckpointSystemSleepUnsafe(0);
  v19 = (unsigned int)v22;
  if ( v22 < 0 )
  {
LABEL_42:
    _InterlockedExchange(&PopSleepCheckpointStatus, 15);
  }
  else
  {
    PopCheckpointSystemSleepEnabled = 1;
    v19 = 0LL;
  }
  if ( (int)v19 < 0 )
    goto LABEL_48;
LABEL_49:
  PopCheckpointSystemSleep(1);
LABEL_50:
  if ( !v34 )
    PopSetSleepMarker(1);
LABEL_52:
  if ( v13 )
  {
    v23 = ZwSetSystemPowerState(a2, a3, v17);
  }
  else
  {
    LOBYTE(v41[0]) = a1;
    v41[1] = a2;
    v41[2] = a3;
    v41[3] = v17;
    v43 = v14;
    if ( !a1 )
      v36 = PoBlockConsoleSwitch((__int64)v41);
    v42 = 1;
    v23 = PopDispatchStateCallout(v41, 0LL);
    if ( v23 >= 0 && !a1 )
    {
      v24 = (v17 >> 31) & 2 | 4u;
      if ( (v17 & 8) == 0 )
        v24 = (v17 >> 31) & 2;
      PfPowerActionNotify(0, v24, a3);
      PopNoMoreInput = 1;
      _InterlockedOr(v33, 0);
      if ( !v35 )
      {
        PopSuspendResumePdc(1LL, v25);
        LOBYTE(v26) = 1;
        PopSuspendApps(v41, v26);
        LOBYTE(v27) = 1;
        PopSuspendServices(v41, v27);
      }
      if ( (v17 & 8) != 0 )
        EtwShutdown(1);
      PopDispatchSuperfetchNotification((unsigned int)v17, (unsigned int)a3);
      v23 = ZwSetSystemPowerState(a2, a3, v17);
      PopAcquirePolicyLock();
      v28 = byte_1403AA110;
      PopReleasePolicyLock();
      PopNoMoreInput = 0;
      _InterlockedOr(v33, 0);
      if ( !v28 )
      {
        LOBYTE(v29) = 1;
        PopResumeServices(v41, v29);
        PopSuspendResumePdc(2LL, v30);
        LOBYTE(v31) = 1;
        PopResumeApps(v41, v31);
        PopSuspendResumePdc(3LL, v32);
      }
      PfPowerActionNotify(7, 0LL, a3);
    }
    v42 = 8;
    PopDispatchStateCallout(v41, 0LL);
    if ( a1 )
      goto LABEL_74;
    v37 = v36;
    v42 = 7;
    PopDispatchStateCallout(v41, (__int64)&v37);
  }
  if ( !a1 && !v34 )
  {
    if ( v23 >= 0 )
    {
      qword_1403AA4B0 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceHiberStats();
      PopDiagTracePowerTransitionTime();
      PopDiagTracePerfTrackData(v17);
      PopShutdownButtonPressTime = 0LL;
      SystemAction = a2;
      MinSystemState = a3;
      PopSleepStats = 1;
    }
    PopDiagTracePowerTransitionEnd(v23);
    PopCheckpointSystemSleep(41);
  }
LABEL_74:
  PpmEndHighPerfRequest(2);
  v4 = v23;
LABEL_75:
  PopAcquirePolicyLock();
  return v4;
}
