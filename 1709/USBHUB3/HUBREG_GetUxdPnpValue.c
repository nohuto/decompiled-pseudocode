/*
 * XREFs of HUBREG_GetUxdPnpValue @ 0x1C0071C14
 * Callers:
 *     HUBID_BuildUxdPnpId @ 0x1C0017BE8 (HUBID_BuildUxdPnpId.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_GetUxdPnpValue(__int64 a1, const GUID *a2, __int64 a3)
{
  NTSTATUS v6; // eax
  unsigned __int16 v7; // r9
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = RtlStringFromGUID(a2, &DestinationString);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           0LL,
           &g_UxdGuidSettingsKey,
           131097LL,
           0LL,
           &v10);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64))(WdfFunctions_01015 + 1912))(
             WdfDriverGlobals,
             v10,
             &DestinationString,
             a3);
      if ( v6 >= 0 )
        goto LABEL_8;
      v7 = 104;
    }
    else
    {
      v7 = 103;
    }
  }
  else
  {
    v7 = 102;
  }
  LODWORD(v9) = v6;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    v7,
    (__int64)&WPP_78b0949afb12367861659e8bf410c603_Traceguids,
    v9);
LABEL_8:
  RtlFreeUnicodeString(&DestinationString);
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return 0LL;
}
