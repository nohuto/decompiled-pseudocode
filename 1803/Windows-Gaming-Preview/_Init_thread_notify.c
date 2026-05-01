/*
 * XREFs of _Init_thread_notify @ 0x180042850
 * Callers:
 *     _Init_thread_footer @ 0x180042788 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hObject )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18005DA60 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18005DA48);
  SetEvent(hObject);
  return ResetEvent(hObject);
}
