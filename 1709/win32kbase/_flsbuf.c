/*
 * XREFs of _flsbuf @ 0x1C00A79CC
 * Callers:
 *     _vsnwprintf_l @ 0x1C00A7228 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1C00A73C4 (_vsnprintf_l.c)
 *     write_char_0 @ 0x1C00A8C50 (write_char_0.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
