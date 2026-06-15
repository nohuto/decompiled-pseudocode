/*
 * XREFs of __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x180034448
 * Callers:
 *     __imp_load_RoOriginateError @ 0x18003443C (__imp_load_RoOriginateError.c)
 *     __imp_load_SetRestrictedErrorInfo @ 0x180034673 (__imp_load_SetRestrictedErrorInfo.c)
 *     __imp_load_RoTransformError @ 0x180035205 (__imp_load_RoTransformError.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800DDF20 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_winrt_error_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
