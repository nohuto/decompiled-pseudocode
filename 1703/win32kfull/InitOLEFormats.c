/*
 * XREFs of InitOLEFormats @ 0x1C0389790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitOLEFormats()
{
  wchar_t **v0; // rdi
  unsigned int v1; // ebx

  v0 = off_1C02DCCC0;
  v1 = 0;
  while ( (unsigned __int16)UserAddAtomEx(*v0, 1LL, 2LL) )
  {
    ++v1;
    ++v0;
    if ( v1 >= 0x15 )
      return 1LL;
  }
  return 0LL;
}
