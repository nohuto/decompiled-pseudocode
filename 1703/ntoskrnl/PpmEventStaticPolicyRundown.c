/*
 * XREFs of PpmEventStaticPolicyRundown @ 0x1406D34C8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PpmEventStaticPolicyRundown()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-49h] BYREF
  char *v3; // [rsp+50h] [rbp-39h]
  int v4; // [rsp+58h] [rbp-31h]
  int v5; // [rsp+5Ch] [rbp-2Dh]
  int *v6; // [rsp+60h] [rbp-29h]
  int v7; // [rsp+68h] [rbp-21h]
  int v8; // [rsp+6Ch] [rbp-1Dh]
  int *v9; // [rsp+70h] [rbp-19h]
  int v10; // [rsp+78h] [rbp-11h]
  int v11; // [rsp+7Ch] [rbp-Dh]
  int *v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+8Ch] [rbp+3h]
  int *v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  int *v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]
  int *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_STATIC_POLICY_RUNDOWN) )
    {
      v1 = 0;
      UserData.Reserved = 0;
      v5 = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&PpmPerfBoostAtGuaranteed;
      v3 = &PpmPerfIdealAggressiveIncreaseThreshold;
      v6 = &PpmPerfSingleStepSize;
      v9 = &PpmPerfCalculateActualUtilization;
      v12 = &PpmPerfArtificialDomainEnabled;
      v15 = &v1;
      v18 = &PpmParkUseCoreGranularity;
      v21 = &PpmParkMultiparkGranularity;
      UserData.Size = 4;
      v4 = 4;
      v7 = 4;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      EtwWrite(v0, &PPM_ETW_STATIC_POLICY_RUNDOWN, 0LL, 8u, &UserData);
    }
  }
}
