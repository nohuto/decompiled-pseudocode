/*
 * XREFs of _wtol @ 0x140188BD0
 * Callers:
 *     _wtoi @ 0x140188BB0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x14055D518 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x14018AB80 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
