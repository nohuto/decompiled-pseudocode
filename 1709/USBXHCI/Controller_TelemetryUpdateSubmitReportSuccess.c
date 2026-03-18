/*
 * XREFs of Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0059578
 * Callers:
 *     Controller_TelemetryReport @ 0x1C00126B4 (Controller_TelemetryReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_TelemetryUpdateSubmitReportSuccess(_QWORD *a1, int a2)
{
  __int64 result; // rax
  int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v7; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+78h] [rbp+28h] BYREF

  v9 = 0LL;
  if ( (a2 & 0xFFFFEFC0) != 0 )
    WPP_RECORDER_SF_d(a1[9], 2u, 4u, 0xE3u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, a2);
  result = a1[39] | (1LL << (a2 & 0x3F));
  a1[39] = result;
  v5 = a2 - 4111;
  if ( v5 )
  {
    if ( v5 != 3 )
      goto LABEL_14;
    LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                        WdfDriverGlobals,
                        *a1,
                        1LL,
                        131078LL,
                        0LL,
                        &v9);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
      v10 = 1;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int, int *))(WdfFunctions_01015 + 1928))(
                 WdfDriverGlobals,
                 v9,
                 &DestinationString,
                 4LL,
                 4,
                 &v10);
      if ( (int)result >= 0 )
        goto LABEL_14;
      v6 = 231;
    }
    else
    {
      v6 = 230;
    }
  }
  else
  {
    LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                        WdfDriverGlobals,
                        *a1,
                        1LL,
                        131078LL,
                        0LL,
                        &v9);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int, _QWORD *))(WdfFunctions_01015 + 1928))(
                 WdfDriverGlobals,
                 v9,
                 &DestinationString,
                 3LL,
                 8,
                 a1 + 33);
      if ( (int)result >= 0 )
        goto LABEL_14;
      v6 = 229;
    }
    else
    {
      v6 = 228;
    }
  }
  LODWORD(v7) = result;
  result = WPP_RECORDER_SF_d(a1[9], 3u, 4u, v6, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v7);
LABEL_14:
  if ( v9 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
