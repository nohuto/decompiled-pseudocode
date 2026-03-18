/*
 * XREFs of Template_xxxxxqhqqx @ 0x180141B50
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800C3638 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180133ECC (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxxxxqhqqx(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-A9h] BYREF
  va_list v4; // [rsp+30h] [rbp-99h]
  __int64 v5; // [rsp+38h] [rbp-91h]
  va_list v6; // [rsp+40h] [rbp-89h]
  __int64 v7; // [rsp+48h] [rbp-81h]
  va_list v8; // [rsp+50h] [rbp-79h]
  __int64 v9; // [rsp+58h] [rbp-71h]
  va_list v10; // [rsp+60h] [rbp-69h]
  __int64 v11; // [rsp+68h] [rbp-61h]
  va_list v12; // [rsp+70h] [rbp-59h]
  __int64 v13; // [rsp+78h] [rbp-51h]
  va_list v14; // [rsp+80h] [rbp-49h]
  __int64 v15; // [rsp+88h] [rbp-41h]
  va_list v16; // [rsp+90h] [rbp-39h]
  __int64 v17; // [rsp+98h] [rbp-31h]
  va_list v18; // [rsp+A0h] [rbp-29h]
  __int64 v19; // [rsp+A8h] [rbp-21h]
  va_list v20; // [rsp+B0h] [rbp-19h]
  __int64 v21; // [rsp+B8h] [rbp-11h]
  __int64 v22; // [rsp+100h] [rbp+37h] BYREF
  va_list va; // [rsp+100h] [rbp+37h]
  __int64 v24; // [rsp+108h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+108h] [rbp+3Fh]
  __int64 v26; // [rsp+110h] [rbp+47h] BYREF
  va_list va2; // [rsp+110h] [rbp+47h]
  __int64 v28; // [rsp+118h] [rbp+4Fh] BYREF
  va_list va3; // [rsp+118h] [rbp+4Fh]
  __int64 v30; // [rsp+120h] [rbp+57h] BYREF
  va_list va4; // [rsp+120h] [rbp+57h]
  __int64 v32; // [rsp+128h] [rbp+5Fh] BYREF
  va_list va5; // [rsp+128h] [rbp+5Fh]
  __int64 v34; // [rsp+130h] [rbp+67h] BYREF
  va_list va6; // [rsp+130h] [rbp+67h]
  __int64 v36; // [rsp+138h] [rbp+6Fh] BYREF
  va_list va7; // [rsp+138h] [rbp+6Fh]
  __int64 v38; // [rsp+140h] [rbp+77h] BYREF
  va_list va8; // [rsp+140h] [rbp+77h]
  va_list va9; // [rsp+148h] [rbp+7Fh] BYREF

  va_start(va9, a2);
  va_start(va8, a2);
  va_start(va7, a2);
  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v32 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v34 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v36 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v38 = va_arg(va9, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  va_copy(v8, va3);
  va_copy(v10, va4);
  va_copy(v12, va5);
  va_copy(v14, va6);
  va_copy(v16, va7);
  va_copy(v18, va8);
  va_copy(v20, va9);
  v7 = 8LL;
  v9 = 8LL;
  v11 = 8LL;
  v13 = 4LL;
  v15 = 2LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 0xAu, &UserData);
}
