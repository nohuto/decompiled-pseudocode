/*
 * XREFs of _Init_thread_notify @ 0x1800CBF10
 * Callers:
 *     _Init_thread_footer @ 0x1800CBE48 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18010ECA0 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18010EC88);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
