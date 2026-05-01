/*
 * XREFs of __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x18009A655
 * Callers:
 *     __imp_load_EdpGetIsManaged @ 0x18009A649 (__imp_load_EdpGetIsManaged.c)
 *     __imp_load_EdpFreeContext @ 0x18009A6CE (__imp_load_EdpFreeContext.c)
 *     __imp_load_EdpGetContextForBinaryPath @ 0x18009A6DA (__imp_load_EdpGetContextForBinaryPath.c)
 *     __imp_load_EdpGetContextForWindow @ 0x18009A6E6 (__imp_load_EdpGetContextForWindow.c)
 *     __imp_load_EdpShouldShowEnterpriseIndicator @ 0x18009A6F2 (__imp_load_EdpShouldShowEnterpriseIndicator.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180095E90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_edputil_policy_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
