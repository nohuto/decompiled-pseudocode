/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C00A2D04
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1, __int64 a2)
{
  const GUID *v2; // r9
  char v4; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v6; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v7; // [rsp+3Ch] [rbp-4Dh] BYREF
  const GUID *v8; // [rsp+40h] [rbp-49h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  char *v11; // [rsp+70h] [rbp-19h]
  int v12; // [rsp+78h] [rbp-11h]
  int v13; // [rsp+7Ch] [rbp-Dh]
  __int64 *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+8Ch] [rbp+3h]
  unsigned int *v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  unsigned int *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  unsigned int *v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B8h] [rbp+2Fh]
  int v25; // [rsp+BCh] [rbp+33h]
  const GUID **v26; // [rsp+C0h] [rbp+37h]
  int v27; // [rsp+C8h] [rbp+3Fh]
  int v28; // [rsp+CCh] [rbp+43h]

  v2 = (const GUID *)MEMORY[0xFFFFF78000000008];
  v9 = -1LL;
  ++gProximityPowerPressCount;
  v8 = (const GUID *)MEMORY[0xFFFFF78000000008];
  v4 = 0;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    if ( MEMORY[0xFFFFF78000000008] <= gProximityLastPowerPressTime )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      v2 = v8;
    }
    v9 = (__int64)v2 - gProximityLastPowerPressTime;
    if ( (unsigned __int64)v2 - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      ++gProximityEscapeCount;
      v4 = 1;
    }
  }
  if ( dword_1C019A200 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x400000000000uLL) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v11 = &v4;
    v14 = &v9;
    v5 = gProximityPowerPressCount;
    v17 = &v5;
    v6 = gProximityScenarioCount;
    v20 = &v6;
    v7 = gProximityEscapeCount;
    v23 = &v7;
    v26 = &v8;
    v12 = 1;
    v15 = 8;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    v27 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0177BF8, 0LL, v2, 8u, &pData);
    v2 = v8;
  }
  gProximityLastPowerPressTime = (unsigned __int64)v2;
  return v4;
}
