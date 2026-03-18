/*
 * XREFs of _get_printf_count_output @ 0x14018CCE4
 * Callers:
 *     _woutput_l @ 0x14018B2F8 (_woutput_l.c)
 *     _output_l @ 0x14018BD64 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_14039D300 == (_security_cookie | 1);
}
