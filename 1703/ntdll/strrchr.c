/*
 * XREFs of strrchr @ 0x18009AEA0
 * Callers:
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_180079A1C @ 0x180079A1C (sub_180079A1C.c)
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r9
  char *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != (_BYTE)Ch );
  if ( *Str == (_BYTE)Ch )
    return (char *)Str;
  return v3;
}
