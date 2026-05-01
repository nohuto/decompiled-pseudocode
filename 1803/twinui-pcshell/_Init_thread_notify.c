/*
 * XREFs of _Init_thread_notify @ 0x180098430
 * Callers:
 *     _Init_thread_abort @ 0x180098338 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180437608 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1804375F0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
