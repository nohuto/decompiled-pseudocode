/*
 * XREFs of _errno @ 0x1800875E0
 * Callers:
 *     wcstoxq @ 0x18009286C (wcstoxq.c)
 *     mbstowcs @ 0x180094860 (mbstowcs.c)
 *     strtoxlX @ 0x180095E0C (strtoxlX.c)
 *     wcstoxlX @ 0x180096AB8 (wcstoxlX.c)
 *     wcstombs @ 0x180096D70 (wcstombs.c)
 *     strtoxq @ 0x180096F34 (strtoxq.c)
 *     write_string @ 0x180097A74 (write_string.c)
 *     write_string_0 @ 0x18009847C (write_string_0.c)
 *     _handle_qnan1 @ 0x180099528 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180099824 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x18009A8C8 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
