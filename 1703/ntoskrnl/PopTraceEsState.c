/*
 * XREFs of PopTraceEsState @ 0x14013D740
 * Callers:
 *     PopEsSnapTelemetry @ 0x140579AC8 (PopEsSnapTelemetry.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopTraceEsState()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-91h] BYREF
  int v3; // [rsp+34h] [rbp-8Dh] BYREF
  int v4; // [rsp+38h] [rbp-89h] BYREF
  int v5; // [rsp+3Ch] [rbp-85h] BYREF
  int v6; // [rsp+40h] [rbp-81h] BYREF
  int v7; // [rsp+44h] [rbp-7Dh] BYREF
  __int64 v8; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-71h] BYREF
  int *v10; // [rsp+70h] [rbp-51h]
  __int64 v11; // [rsp+78h] [rbp-49h]
  __int64 *v12; // [rsp+80h] [rbp-41h]
  __int64 v13; // [rsp+88h] [rbp-39h]
  int *v14; // [rsp+90h] [rbp-31h]
  __int64 v15; // [rsp+98h] [rbp-29h]
  int *v16; // [rsp+A0h] [rbp-21h]
  __int64 v17; // [rsp+A8h] [rbp-19h]
  int *v18; // [rsp+B0h] [rbp-11h]
  __int64 v19; // [rsp+B8h] [rbp-9h]
  int *v20; // [rsp+C0h] [rbp-1h]
  __int64 v21; // [rsp+C8h] [rbp+7h]
  int *v22; // [rsp+D0h] [rbp+Fh]
  __int64 v23; // [rsp+D8h] [rbp+17h]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v2 = PopEsReason;
      v4 = (unsigned __int8)PopEsAcOnline;
      v5 = PopEsMode;
      v6 = PopEsLastBatteryThreshold;
      v7 = (unsigned __int8)PopEsLastUserAwaySetting;
      v10 = &v2;
      v12 = &v8;
      v14 = &v3;
      v16 = &v4;
      v18 = &v5;
      v20 = &v6;
      v22 = &v7;
      v8 = v1;
      v3 = v0;
      v11 = 4LL;
      v13 = 8LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      TlgWrite(&hProvider, &unk_1402AD888, 0LL, 0LL, 9u, &pData);
    }
  }
}
