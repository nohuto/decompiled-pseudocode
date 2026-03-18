/*
 * XREFs of _flsbuf @ 0x140161514
 * Callers:
 *     _vsnwprintf_l @ 0x14015DE8C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x14015DF8C (_vsnprintf_l.c)
 *     _snprintf @ 0x14015E420 (_snprintf.c)
 *     _snwprintf @ 0x14015E4D0 (_snwprintf.c)
 *     swprintf @ 0x14015E9B0 (swprintf.c)
 *     _vswprintf_l @ 0x14015EA8C (_vswprintf_l.c)
 *     sprintf @ 0x14015F830 (sprintf.c)
 *     _vsprintf_l @ 0x140160314 (_vsprintf_l.c)
 *     _soutput_s @ 0x14016598C (_soutput_s.c)
 *     write_char_0 @ 0x140165A68 (write_char_0.c)
 *     _swoutput_s @ 0x140165B80 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
