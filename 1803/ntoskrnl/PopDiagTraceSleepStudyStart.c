/*
 * XREFs of PopDiagTraceSleepStudyStart @ 0x14076910C
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x14027E770 (PopWdiTimerWorkerThread.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407658EC (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStart()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-9h] BYREF
  char *v2; // [rsp+40h] [rbp+7h]
  int v3; // [rsp+48h] [rbp+Fh]
  int v4; // [rsp+4Ch] [rbp+13h]
  int *v5; // [rsp+50h] [rbp+17h]
  int v6; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+5Ch] [rbp+23h]
  int *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  int *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_START) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = PopWdiCurrentScenario;
      v6 = 4;
      v2 = &PopWdiCurrentScenarioInstanceId;
      v5 = &PopPdcLastCsEnterReason;
      v8 = &PopCsConsumption;
      v11 = &dword_1403CDA7C;
      v9 = 4;
      v12 = 4;
      UserData.Size = 16;
      v3 = 1;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_START, &PopDiagActivityId, 5u, &UserData);
    }
  }
}
