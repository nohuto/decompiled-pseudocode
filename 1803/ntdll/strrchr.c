/*
 * XREFs of strrchr @ 0x180090220
 * Callers:
 *     sub_1800103FC @ 0x1800103FC (sub_1800103FC.c)
 *     sub_180076DAC @ 0x180076DAC (sub_180076DAC.c)
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r10
  char *v3; // r8
  char v5; // al
  char v6; // r9

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  v5 = Ch;
  do
  {
    v6 = *--Str;
    if ( Str == v2 )
      break;
    v5 = Ch;
  }
  while ( v6 != (_BYTE)Ch );
  if ( v6 == v5 )
    return (char *)Str;
  return v3;
}
