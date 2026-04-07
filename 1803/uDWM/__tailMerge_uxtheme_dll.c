/*
 * XREFs of __tailMerge_uxtheme_dll @ 0x180049647
 * Callers:
 *     __imp_load_GetThemeStream @ 0x18004963B (__imp_load_GetThemeStream.c)
 *     __imp_load_GetCurrentThemeName @ 0x1800496C0 (__imp_load_GetCurrentThemeName.c)
 *     __imp_load_GetThemeRect @ 0x1800496CC (__imp_load_GetThemeRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800489D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_uxtheme_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_UxTheme_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
