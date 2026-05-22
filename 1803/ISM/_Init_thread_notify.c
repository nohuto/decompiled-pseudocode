/*
 * XREFs of _Init_thread_notify @ 0x1800E2DE0
 * Callers:
 *     _Init_thread_footer @ 0x1800E2D18 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180135F30 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180135F18);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
