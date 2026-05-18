/*
 * XREFs of _Init_thread_notify @ 0x180009300
 * Callers:
 *     _Init_thread_footer @ 0x180009238 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18000F6F8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18000F6E0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
