/*
 * XREFs of __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x18004AEAA
 * Callers:
 *     __imp_load_IsVirtualSurroundAllowedForProcess @ 0x18004AE9E (__imp_load_IsVirtualSurroundAllowedForProcess.c)
 *     __imp_load_IsVirtualSurroundAllowedOnCurrentPlatform @ 0x18004AF23 (__imp_load_IsVirtualSurroundAllowedOnCurrentPlatform.c)
 *     __imp_load_GetDefaultSpatialRenderingMode @ 0x18004AF2F (__imp_load_GetDefaultSpatialRenderingMode.c)
 *     __imp_load_IsVirtualSurroundAllowedFor8ChannelEndpoint @ 0x18004AF3B (__imp_load_IsVirtualSurroundAllowedFor8ChannelEndpoint.c)
 *     __imp_load_IsDolbyLicenseCheckSkippedOnCurrentPlatform @ 0x18004B53B (__imp_load_IsDolbyLicenseCheckSkippedOnCurrentPlatform.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002EDC0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_audiocore_spatial_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
