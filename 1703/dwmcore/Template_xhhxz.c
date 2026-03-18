/*
 * XREFs of Template_xhhxz @ 0x1801416C0
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800C3638 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xhhxz(__int64 a1, __int64 a2, __int64 a3, __int16 a4, char a5, char a6, const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-31h] BYREF
  __int16 *v12; // [rsp+30h] [rbp-21h]
  __int64 v13; // [rsp+38h] [rbp-19h]
  char *v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+48h] [rbp-9h]
  char *v16; // [rsp+50h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+7h]
  const wchar_t *v18; // [rsp+60h] [rbp+Fh]
  int v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+6Ch] [rbp+1Bh]
  __int64 v21; // [rsp+B0h] [rbp+5Fh] BYREF
  __int16 v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
  v21 = a3;
  v7 = a7;
  UserData.Ptr = (ULONGLONG)&v21;
  *(_QWORD *)&UserData.Size = 8LL;
  v12 = &v22;
  v14 = &a5;
  v16 = &a6;
  v13 = 2LL;
  v15 = 2LL;
  v17 = 8LL;
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
  v19 = v9;
  v20 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v18 = v7;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT, 5u, &UserData);
}
