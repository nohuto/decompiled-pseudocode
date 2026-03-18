/*
 * XREFs of vsprintf @ 0x14016BAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vsprintf(char *Dest, const char *Format, va_list Args)
{
  return vsprintf_l(Dest, Format, 0LL, Args);
}
