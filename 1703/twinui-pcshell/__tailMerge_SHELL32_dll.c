/*
 * XREFs of __tailMerge_SHELL32_dll @ 0x180195CD4
 * Callers:
 *     __imp_load_ShellExecuteW @ 0x180195CC8 (__imp_load_ShellExecuteW.c)
 *     __imp_load_SHCreateSessionKey @ 0x18019718A (__imp_load_SHCreateSessionKey.c)
 *     __imp_load_SHCreateItemInKnownFolder @ 0x180197196 (__imp_load_SHCreateItemInKnownFolder.c)
 *     __imp_load_SHCreateItemFromParsingName @ 0x1801971A2 (__imp_load_SHCreateItemFromParsingName.c)
 *     __imp_load_GetThreadFlags @ 0x1801971AE (__imp_load_GetThreadFlags.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_SHELL32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_SHELL32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
