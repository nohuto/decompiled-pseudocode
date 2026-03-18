/*
 * XREFs of _ultow @ 0x140188060
 * Callers:
 *     AdtpBuildUlongString @ 0x1407E0BA0 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x140188080 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
