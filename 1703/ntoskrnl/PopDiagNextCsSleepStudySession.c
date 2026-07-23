/*
 * XREFs of PopDiagNextCsSleepStudySession @ 0x1406CC0BC
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140586350 (PopConnectedStandbySettingCallback.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x1406CDD80 (PopDiagTraceSleepStudyStart.c)
 */

char __fastcall PopDiagNextCsSleepStudySession(GUID *a1)
{
  char v1; // bl
  char v3; // dl
  __int64 v4; // rcx
  GUID *v5; // rsi
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  _OWORD v18[10]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-38h]
  __int128 Buffer; // [rsp+F0h] [rbp-28h] BYREF
  char v21; // [rsp+100h] [rbp-18h]

  v1 = 0;
  if ( !PopSleepStudyDisabled )
  {
    KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
    v5 = (GUID *)PopWdiCurrentScenario;
    if ( (GUID *)PopWdiCurrentScenario == &NullGuid && a1 == &NullGuid )
    {
      v1 = 1;
      KeReleaseMutex(&PopWdiTimerMutex, 0);
    }
    else
    {
      ++PopWdiCurrentScenarioInstanceId;
      PopWdiCurrentScenario = (__int64)a1;
      PopCaptureSleepStudyStatistics(v4, v3, (__int64)v18);
      if ( *(&xmmword_14036E720 + 1) )
      {
        LOBYTE(v6) = PopWdiCurrentScenarioInstanceId;
        ((void (__fastcall *)(__int64, __int64))*(&xmmword_14036E720 + 1))(PopWdiCurrentScenario, v6);
      }
      if ( v5 == &NullGuid )
      {
        if ( PopWdiTimerQueued )
          PopWdiNewScenarioWaiting = 1;
        else
          PopDiagTraceSleepStudyStart();
      }
      else if ( PopWdiTimerQueued )
      {
        PopWdiNewScenarioWaiting = 0;
      }
      else
      {
        PopWdiScenarioStopEventData = v18[0];
        v7 = v18[2];
        *((_OWORD *)&PopWdiScenarioStopEventData + 1) = v18[1];
        v8 = v18[3];
        *((_OWORD *)&PopWdiScenarioStopEventData + 2) = v7;
        v9 = v18[4];
        *((_OWORD *)&PopWdiScenarioStopEventData + 3) = v8;
        v10 = v18[5];
        *((_OWORD *)&PopWdiScenarioStopEventData + 4) = v9;
        v11 = v18[6];
        *((_OWORD *)&PopWdiScenarioStopEventData + 5) = v10;
        v12 = v18[8];
        *((_OWORD *)&PopWdiScenarioStopEventData + 6) = v11;
        *((_OWORD *)&PopWdiScenarioStopEventData + 7) = v18[7];
        v13 = v18[9];
        v14 = v19;
        v15 = PopWdiTimerTimeoutValue;
        *((_OWORD *)&PopWdiScenarioStopEventData + 8) = v12;
        *((_OWORD *)&PopWdiScenarioStopEventData + 9) = v13;
        *((_QWORD *)&PopWdiScenarioStopEventData + 20) = v14;
        KiSetTimerEx((__int64)&PopWdiTimer, v15, 0, 0, (__int64)&PopWdiTimerDpc);
        PopWdiTimerQueued = 1;
      }
      KeReleaseMutex(&PopWdiTimerMutex, 0);
      v16 = *(_OWORD *)PopWdiCurrentScenario;
      v21 = PopWdiCurrentScenarioInstanceId;
      Buffer = v16;
      ZwUpdateWnfStateData(&WNF_PO_SCENARIO_CHANGE, &Buffer, 0x14u, 0LL, 0LL, 0, 0);
    }
  }
  return v1;
}
