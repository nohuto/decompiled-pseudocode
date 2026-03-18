/*
 * XREFs of _get_printf_count_output @ 0x140162E24
 * Callers:
 *     _woutput_l @ 0x140161524 (_woutput_l.c)
 *     _output_l @ 0x140161F3C (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140359CC0 == (_security_cookie | 1);
}
