/*
 * XREFs of __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x180062BF2
 * Callers:
 *     __imp_load_IsVirtualSurroundAllowedForProcess @ 0x180062BE6 (__imp_load_IsVirtualSurroundAllowedForProcess.c)
 *     __imp_load_IsVirtualSurroundAllowedOnCurrentPlatform @ 0x180062C6B (__imp_load_IsVirtualSurroundAllowedOnCurrentPlatform.c)
 *     __imp_load_IsSpatialSpeakerProtectionCheckRequired @ 0x180062C77 (__imp_load_IsSpatialSpeakerProtectionCheckRequired.c)
 *     __imp_load_IsSpatialAllowedOnPlatform @ 0x180062C83 (__imp_load_IsSpatialAllowedOnPlatform.c)
 *     __imp_load_IsDolbyMatSupportedByAudioDriver @ 0x180062C8F (__imp_load_IsDolbyMatSupportedByAudioDriver.c)
 *     __imp_load_GetDefaultSpatialRenderingMode @ 0x180062C9B (__imp_load_GetDefaultSpatialRenderingMode.c)
 *     __imp_load_IsVirtualSurroundSoundAllowedToZeroFill @ 0x180062CA7 (__imp_load_IsVirtualSurroundSoundAllowedToZeroFill.c)
 *     __imp_load_TryGetHrtfProcessingLimits @ 0x180062CB3 (__imp_load_TryGetHrtfProcessingLimits.c)
 *     __imp_load_IsDolbyLicenseCheckSkippedOnCurrentPlatform @ 0x1800632CF (__imp_load_IsDolbyLicenseCheckSkippedOnCurrentPlatform.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180049AA0 (__delayLoadHelper2.c)
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
