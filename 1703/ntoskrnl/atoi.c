/*
 * XREFs of atoi @ 0x140169850
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 * Callees:
 *     strtolX @ 0x14016C4CC (strtolX.c)
 */

int __cdecl atoi(const char *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  return result;
}
