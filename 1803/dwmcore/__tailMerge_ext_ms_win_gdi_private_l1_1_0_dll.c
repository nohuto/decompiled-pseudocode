/*
 * XREFs of __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800DBE07
 * Callers:
 *     __imp_load_DwmQueryCompositionId @ 0x1800DBDFB (__imp_load_DwmQueryCompositionId.c)
 *     __imp_load_DwmHLsurfSetUpdatedId @ 0x1800DBE80 (__imp_load_DwmHLsurfSetUpdatedId.c)
 *     __imp_load_DwmGenerateMoveData @ 0x1800DBE8C (__imp_load_DwmGenerateMoveData.c)
 *     __imp_load_DwmHLSurfCloseCompositorRef @ 0x1800DCB02 (__imp_load_DwmHLSurfCloseCompositorRef.c)
 *     __imp_load_DwmHLSurfOpenCompositorRef @ 0x1800DCB0E (__imp_load_DwmHLSurfOpenCompositorRef.c)
 *     __imp_load_DwmGetSurfaceData @ 0x1800DCB1A (__imp_load_DwmGetSurfaceData.c)
 *     __imp_load_DwmHLSurfGetDirtyRgn @ 0x1800DCB26 (__imp_load_DwmHLSurfGetDirtyRgn.c)
 *     __imp_load_DwmGetRedirectionStyle @ 0x1800DCB32 (__imp_load_DwmGetRedirectionStyle.c)
 *     __imp_load_DwmHLSurfSetSignalOnDirty @ 0x1800DCB3E (__imp_load_DwmHLSurfSetSignalOnDirty.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800C9150 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_gdi_private_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_gdi_private_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
