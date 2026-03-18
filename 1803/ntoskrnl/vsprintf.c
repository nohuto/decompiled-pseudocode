/*
 * XREFs of vsprintf @ 0x14018A530
 * Callers:
 *     <none>
 * Callees:
 *     _vsprintf_l @ 0x14018A4B4 (_vsprintf_l.c)
 */

int __cdecl vsprintf(char *Dest, const char *Format, va_list Args)
{
  return vsprintf_l(Dest, Format, 0LL, Args);
}
