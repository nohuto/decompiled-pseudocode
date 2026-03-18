/*
 * XREFs of wctomb_s @ 0x140160B40
 * Callers:
 *     _output_l @ 0x140161F3C (_output_l.c)
 * Callees:
 *     _wctomb_s_l @ 0x140160A44 (_wctomb_s_l.c)
 */

errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, 0LL);
}
