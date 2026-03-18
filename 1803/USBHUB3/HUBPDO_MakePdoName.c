/*
 * XREFs of HUBPDO_MakePdoName @ 0x1C006B330
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C006B604 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C00109C4 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_MakePdoName(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS v8; // [rsp+28h] [rbp-100h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-F8h] BYREF
  char v10; // [rsp+40h] [rbp-E8h] BYREF

  *(_DWORD *)&DestinationString.Length = 12582912;
  DestinationString.Buffer = (wchar_t *)&v10;
  v4 = RtlUnicodeStringPrintf(&DestinationString, L"\\Device\\USBPDO-%d");
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 95;
LABEL_5:
    v8 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v6,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v8);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
         WdfDriverGlobals,
         a2,
         &DestinationString);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 96;
    goto LABEL_5;
  }
  return v5;
}
