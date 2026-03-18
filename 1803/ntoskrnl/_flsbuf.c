/*
 * XREFs of _flsbuf @ 0x14018B2E8
 * Callers:
 *     _vsnwprintf_l @ 0x140187B8C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x140187C8C (_vsnprintf_l.c)
 *     _snprintf @ 0x140188140 (_snprintf.c)
 *     _snwprintf @ 0x1401881F0 (_snwprintf.c)
 *     swprintf @ 0x1401886E0 (swprintf.c)
 *     _vswprintf_l @ 0x1401887BC (_vswprintf_l.c)
 *     sprintf @ 0x1401899B0 (sprintf.c)
 *     _vsprintf_l @ 0x14018A4B4 (_vsprintf_l.c)
 *     write_char_0 @ 0x14018C5B0 (write_char_0.c)
 *     _soutput_s @ 0x14018F978 (_soutput_s.c)
 *     _swoutput_s @ 0x14018FAC4 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
