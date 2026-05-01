/*
 * XREFs of __tailMerge_api_ms_win_core_shlwapi_obsolete_l1_2_0_dll @ 0x1801951C7
 * Callers:
 *     __imp_load_QISearch @ 0x1801951BB (__imp_load_QISearch.c)
 *     __imp_load_StrCmpIW @ 0x1801971C6 (__imp_load_StrCmpIW.c)
 *     __imp_load_StrCmpNIW @ 0x1801971D2 (__imp_load_StrCmpNIW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_shlwapi_obsolete_l1_2_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_shlwapi_obsolete_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
