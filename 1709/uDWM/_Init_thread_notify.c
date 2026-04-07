/*
 * XREFs of _Init_thread_notify @ 0x1800456F0
 * Callers:
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1800BECC0 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1800BECA8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
