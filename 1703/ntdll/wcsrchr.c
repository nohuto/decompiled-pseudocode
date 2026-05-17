/*
 * XREFs of wcsrchr @ 0x18009BC50
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18004F9DC @ 0x18004F9DC (sub_18004F9DC.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180075FD4 @ 0x180075FD4 (sub_180075FD4.c)
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 *     sub_18008C2B0 @ 0x18008C2B0 (sub_18008C2B0.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != Ch );
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return v3;
}
