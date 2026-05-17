/*
 * XREFs of wcsrchr @ 0x180090EA0
 * Callers:
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18003FF10 @ 0x18003FF10 (sub_18003FF10.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     sub_18006E510 @ 0x18006E510 (sub_18006E510.c)
 *     sub_180087F60 @ 0x180087F60 (sub_180087F60.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}
