/*
 * XREFs of GetNtProcessorNumber @ 0x1C00205E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     SaveDevExt @ 0x1C00024D4 (SaveDevExt.c)
 *     LookupNtProcessorNumber @ 0x1C0002514 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNtProcessorNumber(_DWORD *a1)
{
  int v2; // edi
  int v4; // [rsp+28h] [rbp-10h]

  a1[14] = -1;
  v2 = LookupNtProcessorNumber(a1);
  if ( v2 < 0 )
  {
    v4 = a1[12];
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      1u,
      0x31u,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
      v4);
  }
  else if ( a1[14] != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A5D8,
      0LL);
    SaveDevExt((__int64)a1, a1[14]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001A5D8);
  }
  return (unsigned int)v2;
}
