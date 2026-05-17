/*
 * XREFs of _flsbuf @ 0x18009F85C
 * Callers:
 *     _snprintf @ 0x180091B10 (_snprintf.c)
 *     _snwprintf @ 0x180091BC0 (_snwprintf.c)
 *     _vsprintf_l @ 0x180092208 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18009232C (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x1800923E8 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800924B8 (_vsnwprintf_l.c)
 *     sprintf @ 0x1800951B0 (sprintf.c)
 *     swprintf @ 0x1800960C0 (swprintf.c)
 *     write_char @ 0x1800979D8 (write_char.c)
 *     _soutput_s @ 0x18009D10C (_soutput_s.c)
 *     write_char_1 @ 0x18009D1E4 (write_char_1.c)
 *     _swoutput_s @ 0x18009DF6C (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
