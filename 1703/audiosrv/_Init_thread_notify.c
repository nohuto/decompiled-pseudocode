/*
 * XREFs of _Init_thread_notify @ 0x180049590
 * Callers:
 *     _Init_thread_footer @ 0x1800494C8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18012B658 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18012B640);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
