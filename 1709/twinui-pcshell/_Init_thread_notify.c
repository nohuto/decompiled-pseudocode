/*
 * XREFs of _Init_thread_notify @ 0x1801E2110
 * Callers:
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1802B92D8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1802B92C0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
