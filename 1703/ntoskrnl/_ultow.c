/*
 * XREFs of _ultow @ 0x1401699F0
 * Callers:
 *     AdtpBuildUlongString @ 0x140733CB0 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x140169A10 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
