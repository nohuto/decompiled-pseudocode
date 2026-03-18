/*
 * XREFs of _ultow @ 0x14015E340
 * Callers:
 *     AdtpBuildUlongString @ 0x140777E20 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x14015E360 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
