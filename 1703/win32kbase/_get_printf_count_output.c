/*
 * XREFs of _get_printf_count_output @ 0x1C009F0F4
 * Callers:
 *     _woutput_l @ 0x1C009DCCC (_woutput_l.c)
 *     _output_l @ 0x1C009E6E8 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C0189BC0 == (_security_cookie | 1);
}
