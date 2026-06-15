/*
 * XREFs of _Init_thread_notify @ 0x180033470
 * Callers:
 *     _Init_thread_footer @ 0x1800333A8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18014BA08 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18014B9F0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
