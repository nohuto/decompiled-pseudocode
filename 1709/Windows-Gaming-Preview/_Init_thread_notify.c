/*
 * XREFs of _Init_thread_notify @ 0x1800418A0
 * Callers:
 *     _Init_thread_footer @ 0x1800417D8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hObject )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18005BA98 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18005BA80);
  SetEvent(hObject);
  return ResetEvent(hObject);
}
