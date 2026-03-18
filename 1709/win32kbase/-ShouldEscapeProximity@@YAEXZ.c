/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C00DCA80
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

unsigned __int8 ShouldEscapeProximity(void)
{
  const GUID *v0; // r9
  unsigned __int64 v1; // r10
  int v2; // r11d
  char v4; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v6; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v7; // [rsp+3Ch] [rbp-4Dh] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  char *v11; // [rsp+70h] [rbp-19h]
  int v12; // [rsp+78h] [rbp-11h]
  int v13; // [rsp+7Ch] [rbp-Dh]
  unsigned __int64 *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+8Ch] [rbp+3h]
  int *v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  unsigned int *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  unsigned int *v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B8h] [rbp+2Fh]
  int v25; // [rsp+BCh] [rbp+33h]
  unsigned __int64 *v26; // [rsp+C0h] [rbp+37h]
  int v27; // [rsp+C8h] [rbp+3Fh]
  int v28; // [rsp+CCh] [rbp+43h]

  LOBYTE(v0) = 0;
  v1 = MEMORY[0xFFFFF78000000008];
  v8 = -1LL;
  v9 = MEMORY[0xFFFFF78000000008];
  v4 = 0;
  ++gProximityPowerPressCount;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    v8 = MEMORY[0xFFFFF78000000008] - gProximityLastPowerPressTime;
    if ( MEMORY[0xFFFFF78000000008] - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      ++gProximityEscapeCount;
      LOBYTE(v0) = 1;
      v4 = 1;
    }
  }
  if ( dword_1C01880D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x400000000000uLL) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v11 = &v4;
    v14 = &v8;
    v17 = &v5;
    v6 = gProximityScenarioCount;
    v20 = &v6;
    v7 = gProximityEscapeCount;
    v23 = &v7;
    v26 = &v9;
    v12 = 1;
    v15 = 8;
    v5 = v2;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    v27 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A168, 0LL, v0, 8u, &pData);
    v1 = v9;
    LOBYTE(v0) = v4;
  }
  gProximityLastPowerPressTime = v1;
  return (unsigned __int8)v0;
}
