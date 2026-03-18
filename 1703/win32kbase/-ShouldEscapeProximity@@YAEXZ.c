/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C00D6710
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

char ShouldEscapeProximity(void)
{
  char v0; // r10
  unsigned __int64 v1; // r11
  unsigned int v2; // ebx
  const GUID *v3; // r9
  char v5; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-61h] BYREF
  int v8; // [rsp+3Ch] [rbp-5Dh] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  char *v12; // [rsp+70h] [rbp-29h]
  int v13; // [rsp+78h] [rbp-21h]
  int v14; // [rsp+7Ch] [rbp-1Dh]
  unsigned __int64 *v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+8Ch] [rbp-Dh]
  unsigned int *v18; // [rsp+90h] [rbp-9h]
  int v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+9Ch] [rbp+3h]
  unsigned int *v21; // [rsp+A0h] [rbp+7h]
  int v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+ACh] [rbp+13h]
  int *v24; // [rsp+B0h] [rbp+17h]
  int v25; // [rsp+B8h] [rbp+1Fh]
  int v26; // [rsp+BCh] [rbp+23h]
  unsigned __int64 *v27; // [rsp+C0h] [rbp+27h]
  int v28; // [rsp+C8h] [rbp+2Fh]
  int v29; // [rsp+CCh] [rbp+33h]

  v0 = 0;
  v1 = MEMORY[0xFFFFF78000000008];
  v9 = -1LL;
  v2 = gProximityPowerPressCount + 1;
  v10 = MEMORY[0xFFFFF78000000008];
  v5 = 0;
  ++gProximityPowerPressCount;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    v9 = MEMORY[0xFFFFF78000000008] - gProximityLastPowerPressTime;
    if ( MEMORY[0xFFFFF78000000008] - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      v0 = 1;
      v5 = 1;
      ++gProximityEscapeCount;
    }
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v12 = &v5;
    v15 = &v9;
    v18 = &v6;
    v7 = gProximityScenarioCount;
    v21 = &v7;
    v24 = &v8;
    v27 = &v10;
    v13 = 1;
    v16 = 8;
    v6 = v2;
    v19 = 4;
    v22 = 4;
    v8 = (int)v3;
    v25 = 4;
    v28 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0169D98, 0LL, v3, 8u, &pData);
    v1 = v10;
    v0 = v5;
  }
  gProximityLastPowerPressTime = v1;
  return v0;
}
