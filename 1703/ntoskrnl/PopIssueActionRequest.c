/*
 * XREFs of PopIssueActionRequest @ 0x140576C20
 * Callers:
 *     PopPolicyWorkerAction @ 0x1405767C0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14057A2B0 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopSetSystemState @ 0x14014ABF4 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x14014AF90 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14014B768 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x140181300 (ZwSetSystemPowerState.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     PopReleaseAwaymodeLock @ 0x14040A7FC (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x14040A840 (PopAcquireAwaymodeLock.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x14041A768 (PopCheckpointSystemSleepUnsafe.c)
 *     PoBlockConsoleSwitch @ 0x140420964 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 *     PopDispatchSuperfetchNotification @ 0x140576408 (PopDispatchSuperfetchNotification.c)
 *     PopResumeServices @ 0x1405765C8 (PopResumeServices.c)
 *     PopResumeApps @ 0x140576640 (PopResumeApps.c)
 *     PopSuspendServices @ 0x1405766B8 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x140576714 (PopSuspendApps.c)
 *     PoUserShutdownCancelled @ 0x140576A00 (PoUserShutdownCancelled.c)
 *     PopSetSleepMarker @ 0x140576A30 (PopSetSleepMarker.c)
 *     PopSuspendResumePdc @ 0x140576F64 (PopSuspendResumePdc.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140577C58 (PopDiagTracePowerTransitionEnd.c)
 *     PopDiagTracePowerTransitionTime @ 0x140577CEC (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x140577E00 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140577F20 (PopDiagTraceHiberStats.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     PopDiagTracePowerTransitionStart @ 0x140578494 (PopDiagTracePowerTransitionStart.c)
 *     PopReadSystemAwayModePolicy @ 0x140578544 (PopReadSystemAwayModePolicy.c)
 *     PopSetSystemAwayMode @ 0x1406CA0E0 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x1406CB998 (PopScreenOff.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x1406CED44 (PopTraceSleepCheckpointInitFailure.c)
 *     PopNotifyConsoleDisplayBurst @ 0x1406D48F0 (PopNotifyConsoleDisplayBurst.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x14071D8F0 (NtQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v4; // ebx
  char v9; // r15
  unsigned int v10; // edi
  int v11; // esi
  bool v12; // al
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v22; // rdx
  NTSTATUS v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-78h] BYREF
  char v25; // [rsp+20h] [rbp-58h]
  bool v26; // [rsp+21h] [rbp-57h]
  ULONG v27; // [rsp+24h] [rbp-54h]
  ULONG v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v30[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v31[8]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v32[4]; // [rsp+48h] [rbp-30h] BYREF
  int v33; // [rsp+58h] [rbp-20h]
  unsigned int v34; // [rsp+5Ch] [rbp-1Ch]

  v4 = 0;
  v27 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v9 = 1;
  if ( (byte_14034BB30 || byte_14034BB31)
    && a2 == PowerActionSleep
    && a3 < PowerSystemHibernate
    && (dword_14034B194 & 0xFFFFFFFA) == 0
    && dword_14034B194 != 1 )
  {
    if ( !dword_14034BB38 )
    {
      if ( byte_14034BB31 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_14034BB38 + 4, dword_14034BB38 + 7);
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
  if ( dword_14034B194 )
  {
    if ( dword_14034B194 > 5 && (dword_14034B194 <= 7 || dword_14034B194 == 11) )
      v10 = 21;
    else
      v10 = 20;
  }
  else
  {
    v10 = 1;
  }
  if ( a2 != PowerActionDisplayOff )
  {
    v26 = (unsigned int)(a2 - 4) <= 2;
    if ( PsWin32CalloutsEstablished && (unsigned int)(a2 - 4) > 2 )
      v9 = 0;
    if ( a4 >= 0 )
      v11 = a4 | 1;
    else
      v11 = a4 & 0xFFFFFFFE;
    if ( v9 )
      PopAction &= ~2u;
    v25 = byte_14034B230;
    PopReleasePolicyLock();
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !a1 )
    {
      if ( v26 )
      {
LABEL_23:
        if ( v9 )
        {
          v13 = ZwSetSystemPowerState(a2, a3, v11);
        }
        else
        {
          LOBYTE(v32[0]) = a1;
          v32[1] = a2;
          v32[2] = a3;
          v32[3] = v11;
          v34 = v10;
          if ( !a1 )
            v27 = PoBlockConsoleSwitch((__int64)v32);
          v33 = 1;
          v13 = PopDispatchStateCallout(v32, 0LL);
          if ( v13 < 0 || a1 )
          {
            v17 = v25;
          }
          else
          {
            v14 = (v11 >> 31) & 2 | 4u;
            if ( (v11 & 8) == 0 )
              v14 = (v11 >> 31) & 2;
            PfPowerActionNotify(0, v14, a3);
            PopNoMoreInput = 1;
            _InterlockedOr(v24, 0);
            if ( !v25 )
            {
              PopSuspendResumePdc(1LL, v15);
              PopSuspendApps(v32);
              PopSuspendServices(v32);
            }
            if ( (v11 & 8) != 0 )
            {
              LOBYTE(v16) = 1;
              EtwShutdown(v16);
            }
            PopDispatchSuperfetchNotification(v11, a3);
            v13 = ZwSetSystemPowerState(a2, a3, v11);
            PopAcquirePolicyLock();
            v25 = byte_14034B230;
            PopReleasePolicyLock();
            if ( (v11 & 8) != 0 )
              PoUserShutdownCancelled();
            PopNoMoreInput = 0;
            _InterlockedOr(v24, 0);
            v17 = v25;
            if ( !v25 )
            {
              PopResumeServices(v32);
              PopSuspendResumePdc(2LL, v18);
              PopResumeApps(v32);
              PopSuspendResumePdc(3LL, v19);
            }
            PfPowerActionNotify(7, 0LL, a3);
          }
          v33 = 8;
          PopDispatchStateCallout(v32, 0LL);
          if ( !a1 )
          {
            v28 = v27;
            v33 = 7;
            PopDispatchStateCallout(v32, (__int64)&v28);
          }
          if ( !v17 && byte_14034BC94 && a2 == PowerActionSleep && a3 == PowerSystemHibernate )
            PopNotifyConsoleDisplayBurst();
        }
        if ( !a1 && !v26 )
        {
          if ( v13 >= 0 )
          {
            qword_14034B590 = KeQueryPerformanceCounter(0LL).QuadPart;
            PopDiagTraceHiberStats();
            PopDiagTracePowerTransitionTime();
            PopDiagTracePerfTrackData((unsigned int)v11);
            PopShutdownButtonPressTime = 0LL;
            SystemAction = a2;
            MinSystemState = a3;
            PopSleepStats = 1;
          }
          PopDiagTracePowerTransitionEnd((unsigned int)v13);
          PopCheckpointSystemSleep(41);
        }
        PpmEndHighPerfRequest(2, v20);
        v4 = v13;
        goto LABEL_49;
      }
      memset(&PopSleepStats, 0, 0x278uLL);
    }
    v12 = v26;
    if ( !v26 )
    {
      PopSetSleepMarker(1);
      v12 = 0;
    }
    if ( a1 || v12 )
      goto LABEL_23;
    PopDiagTracePowerTransitionStart((unsigned int)dword_14034B194, (unsigned int)dword_14034B198);
    qword_14034B568 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopCheckpointSystemSleepEnabled = 0;
    if ( dword_140344B30 == 2
      && (PopCheckpointSystemSleepEnabledReg || byte_14034BC94 && (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) != 0) )
    {
      v23 = NtQueryEnvironmentVariableInfoEx(1LL, v31, &v29, v30);
      if ( v23 >= 0 )
      {
        if ( v29 > 0x2000 )
        {
          v23 = PopCheckpointSystemSleepUnsafe(0);
          if ( v23 >= 0 )
          {
            PopCheckpointSystemSleepEnabled = 1;
            goto LABEL_22;
          }
        }
        else
        {
          v23 = -1073741670;
        }
      }
      PopTraceSleepCheckpointInitFailure((unsigned int)v23);
    }
LABEL_22:
    PopCheckpointSystemSleep(1);
    goto LABEL_23;
  }
  if ( PopConsoleDisplayState )
  {
    PopReleasePolicyLock();
    PopScreenOff(v10, v22);
LABEL_49:
    PopAcquirePolicyLock();
    return v4;
  }
  return 3221266435LL;
}
