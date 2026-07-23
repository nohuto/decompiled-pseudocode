/*
 * XREFs of PopDiagNextCsSleepStudySession @ 0x1407658EC
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140614150 (PopConnectedStandbySettingCallback.c)
 *     PopDiagStopCsSleepStudySession @ 0x140765B10 (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x14076910C (PopDiagTraceSleepStudyStart.c)
 */

char __fastcall PopDiagNextCsSleepStudySession(GUID *a1)
{
  char v1; // bl
  GUID *v3; // rsi
  char v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 Buffer; // [rsp+40h] [rbp-108h] BYREF
  char v20; // [rsp+50h] [rbp-F8h]
  _OWORD v21[13]; // [rsp+60h] [rbp-E8h] BYREF

  v1 = 0;
  if ( !PopSleepStudyDisabled )
  {
    KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
    v3 = (GUID *)PopWdiCurrentScenario;
    if ( (GUID *)PopWdiCurrentScenario == &NullGuid && a1 == &NullGuid )
    {
      v1 = 1;
      KeReleaseMutex(&PopWdiTimerMutex, 0);
    }
    else
    {
      ++PopWdiCurrentScenarioInstanceId;
      PopWdiCurrentScenario = (__int64)a1;
      memset(v21, 0, sizeof(v21));
      PopCaptureSleepStudyStatistics(v5, v4, (__int64)v21);
      if ( qword_1403D1468 )
      {
        LOBYTE(v6) = PopWdiCurrentScenarioInstanceId;
        qword_1403D1468(PopWdiCurrentScenario, v6);
      }
      if ( v3 == &NullGuid )
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
        PopWdiScenarioStopEventData = v21[0];
        v7 = v21[2];
        *((_OWORD *)&PopWdiScenarioStopEventData + 1) = v21[1];
        v8 = v21[3];
        *((_OWORD *)&PopWdiScenarioStopEventData + 2) = v7;
        v9 = v21[4];
        *((_OWORD *)&PopWdiScenarioStopEventData + 3) = v8;
        v10 = v21[5];
        *((_OWORD *)&PopWdiScenarioStopEventData + 4) = v9;
        v11 = v21[6];
        *((_OWORD *)&PopWdiScenarioStopEventData + 5) = v10;
        *((_OWORD *)&PopWdiScenarioStopEventData + 6) = v11;
        v12 = PopWdiTimerTimeoutValue;
        *((_OWORD *)&PopWdiScenarioStopEventData + 7) = v21[7];
        v13 = v21[9];
        *((_OWORD *)&PopWdiScenarioStopEventData + 8) = v21[8];
        v14 = v21[10];
        *((_OWORD *)&PopWdiScenarioStopEventData + 9) = v13;
        v15 = v21[11];
        *((_OWORD *)&PopWdiScenarioStopEventData + 10) = v14;
        v16 = v21[12];
        *((_OWORD *)&PopWdiScenarioStopEventData + 11) = v15;
        *((_OWORD *)&PopWdiScenarioStopEventData + 12) = v16;
        KiSetTimerEx((__int64)&PopWdiTimer, v12, 0, 0, (__int64)&PopWdiTimerDpc);
        PopWdiTimerQueued = 1;
      }
      KeReleaseMutex(&PopWdiTimerMutex, 0);
      v17 = *(_OWORD *)PopWdiCurrentScenario;
      v20 = PopWdiCurrentScenarioInstanceId;
      Buffer = v17;
      ZwUpdateWnfStateData(&WNF_PO_SCENARIO_CHANGE, &Buffer, 0x14u, 0LL, 0LL, 0, 0);
    }
  }
  return v1;
}
