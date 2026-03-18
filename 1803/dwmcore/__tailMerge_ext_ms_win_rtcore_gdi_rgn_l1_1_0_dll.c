/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800DBEA4
 * Callers:
 *     __imp_load_CreateRectRgn @ 0x1800DBE98 (__imp_load_CreateRectRgn.c)
 *     __imp_load_CombineRgn @ 0x1800DBF1D (__imp_load_CombineRgn.c)
 *     __imp_load_GetRgnBox @ 0x1800DBF29 (__imp_load_GetRgnBox.c)
 *     __imp_load_OffsetRgn @ 0x1800DBF35 (__imp_load_OffsetRgn.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x1800DCB4A (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_RectInRegion @ 0x1800DCB56 (__imp_load_RectInRegion.c)
 *     __imp_load_GetRegionData @ 0x1800DCB62 (__imp_load_GetRegionData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800C9150 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
