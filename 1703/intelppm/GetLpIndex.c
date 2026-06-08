/*
 * XREFs of GetLpIndex @ 0x1C0027480
 * Callers:
 *     <none>
 * Callees:
 *     SaveDevExt @ 0x1C0003530 (SaveDevExt.c)
 *     LookupNtProcessorNumber @ 0x1C0003570 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     GetDevExtFromIndex @ 0x1C000786C (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall GetLpIndex(_DWORD *a1)
{
  unsigned int v2; // esi
  unsigned int LpIndexFromApicId; // edi
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+30h] [rbp-18h]

  a1[18] = -1;
  a1[14] = -1;
  v2 = 0;
  LpIndexFromApicId = HvlGetLpIndexFromApicId((unsigned int)a1[12]);
  if ( LpIndexFromApicId != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0015D98,
      0LL);
    if ( GetDevExtFromIndex(LpIndexFromApicId) )
    {
      v8 = a1[12];
      v6 = a1[13];
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xFu,
        (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
        v6,
        v8);
    }
    else
    {
      a1[18] = LpIndexFromApicId;
      SaveDevExt((__int64)a1, LpIndexFromApicId);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0015D98);
  }
  if ( a1[18] == -1 )
  {
    LODWORD(v7) = a1[12];
    LODWORD(v5) = a1[13];
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      1u,
      0x10u,
      (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
      v5,
      v7);
    return (unsigned int)-1073741823;
  }
  else
  {
    LookupNtProcessorNumber(a1);
  }
  return v2;
}
