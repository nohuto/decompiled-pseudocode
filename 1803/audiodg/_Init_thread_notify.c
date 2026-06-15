/*
 * XREFs of _Init_thread_notify @ 0x14001D350
 * Callers:
 *     _Init_thread_footer @ 0x14001D288 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hEvent )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_140087E08 ^ _security_cookie, _security_cookie & 0x3F))(&unk_140087DF0);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
