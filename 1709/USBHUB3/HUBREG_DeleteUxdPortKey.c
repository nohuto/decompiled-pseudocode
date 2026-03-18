/*
 * XREFs of HUBREG_DeleteUxdPortKey @ 0x1C0071D34
 * Callers:
 *     HUBREG_DeleteUxdSettings @ 0x1C0071F4C (HUBREG_DeleteUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010A34 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_DeleteUxdPortKey(__int64 a1, unsigned int a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-41h]
  __int64 v9; // [rsp+50h] [rbp-19h] BYREF
  __int64 v10; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  char v12; // [rsp+70h] [rbp+7h] BYREF

  *(_DWORD *)&DestinationString.Length = 3670016;
  v9 = 0LL;
  v10 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v12;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 105;
LABEL_3:
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2512), 2u, 3u, v6, (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids, v8);
    goto LABEL_12;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v9,
         &g_UxdPortSettingsKey,
         983103LL,
         0LL,
         &v10);
  v5 = v4;
  if ( v4 == -1073741772 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v9,
           &g_UxdPortSettingsKey,
           983103LL,
           0,
           0LL,
           0LL,
           &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 106;
      goto LABEL_3;
    }
  }
  else
  {
    if ( v4 < 0 )
    {
      v6 = 107;
      goto LABEL_3;
    }
    v4 = RtlUnicodeStringPrintf(&DestinationString, L"uxd_port_%3.3d", a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 108;
      goto LABEL_3;
    }
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
           WdfDriverGlobals,
           v10,
           &DestinationString);
  }
LABEL_12:
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v5;
}
