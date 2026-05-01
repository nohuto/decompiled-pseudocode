/*
 * XREFs of __tailMerge_api_ms_win_core_winrt_propertysetprivate_l1_1_1_dll @ 0x1801E34FC
 * Callers:
 *     __imp_load_RoCreatePropertySetSerializer @ 0x1801E34F0 (__imp_load_RoCreatePropertySetSerializer.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801DFA40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_winrt_propertysetprivate_l1_1_1_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_winrt_propertysetprivate_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
