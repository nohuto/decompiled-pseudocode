/*
 * XREFs of __tailMerge_ext_ms_win_core_resourcemanager_l1_2_0_dll @ 0x180195E46
 * Callers:
 *     __imp_load_RmActivityImportanceInitialize @ 0x180195E3A (__imp_load_RmActivityImportanceInitialize.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_core_resourcemanager_l1_2_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_core_resourcemanager_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
