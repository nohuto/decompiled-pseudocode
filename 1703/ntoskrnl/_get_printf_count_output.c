/*
 * XREFs of _get_printf_count_output @ 0x14016E614
 * Callers:
 *     _woutput_l @ 0x14016CCC4 (_woutput_l.c)
 *     _output_l @ 0x14016D6E0 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140341640 == (_security_cookie | 1);
}
