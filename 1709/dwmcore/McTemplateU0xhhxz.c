/*
 * XREFs of McTemplateU0xhhxz @ 0x18012D384
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_KPEAPEAUTouchUpdateInfo@1@@Z @ 0x18012CE38 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0xhhxz(__int64 a1, __int64 a2, __int64 a3, __int16 a4, char a5, char a6, const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+20h] [rbp-31h] BYREF
  __int64 *v12; // [rsp+30h] [rbp-21h]
  __int64 v13; // [rsp+38h] [rbp-19h]
  __int16 *v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+48h] [rbp-9h]
  char *v16; // [rsp+50h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+7h]
  char *v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h]
  const wchar_t *v20; // [rsp+70h] [rbp+1Fh]
  int v21; // [rsp+78h] [rbp+27h]
  int v22; // [rsp+7Ch] [rbp+2Bh]
  __int64 v23; // [rsp+B0h] [rbp+5Fh] BYREF
  __int16 v24; // [rsp+B8h] [rbp+67h] BYREF

  v24 = a4;
  v23 = a3;
  v7 = a7;
  v12 = &v23;
  v13 = 8LL;
  v14 = &v24;
  v16 = &a5;
  v18 = &a6;
  v15 = 2LL;
  v17 = 2LL;
  v19 = 8LL;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v21 = v9;
  v22 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v20 = v7;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT,
           6u,
           &v11);
}
