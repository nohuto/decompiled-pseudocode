/*
 * XREFs of _Init_thread_notify @ 0x1801940B0
 * Callers:
 *     _Init_thread_footer @ 0x180193FE8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180243AD8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180243AC0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
