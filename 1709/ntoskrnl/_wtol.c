/*
 * XREFs of _wtol @ 0x14015EE80
 * Callers:
 *     _wtoi @ 0x14015EE60 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140446AC0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1401609D4 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
