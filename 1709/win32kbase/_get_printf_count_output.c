/*
 * XREFs of _get_printf_count_output @ 0x1C00A8D80
 * Callers:
 *     _woutput_l @ 0x1C00A79DC (_woutput_l.c)
 *     _output_l @ 0x1C00A83F4 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C018E740 == (_security_cookie | 1);
}
