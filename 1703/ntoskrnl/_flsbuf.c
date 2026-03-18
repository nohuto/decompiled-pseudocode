/*
 * XREFs of _flsbuf @ 0x14016CCB4
 * Callers:
 *     _vsnwprintf_l @ 0x14016954C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x14016964C (_vsnprintf_l.c)
 *     _snprintf @ 0x140169AD0 (_snprintf.c)
 *     _snwprintf @ 0x140169B80 (_snwprintf.c)
 *     _vswprintf_l @ 0x14016A044 (_vswprintf_l.c)
 *     sprintf @ 0x14016AE90 (sprintf.c)
 *     swprintf @ 0x14016B880 (swprintf.c)
 *     _vsprintf_l @ 0x14016BA2C (_vsprintf_l.c)
 *     _soutput_s @ 0x140171130 (_soutput_s.c)
 *     write_char_0 @ 0x14017120C (write_char_0.c)
 *     _swoutput_s @ 0x1401712CC (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
