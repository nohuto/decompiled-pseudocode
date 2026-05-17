/*
 * XREFs of _get_printf_count_output @ 0x18009A8B0
 * Callers:
 *     _output_l @ 0x180097180 (_output_l.c)
 *     _woutput_l @ 0x180097B00 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_18015D3D0 == (_security_cookie | 1);
}
