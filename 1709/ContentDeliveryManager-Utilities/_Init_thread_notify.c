/*
 * XREFs of _Init_thread_notify @ 0x1800B4100
 * Callers:
 *     _Init_thread_abort @ 0x1800B4008 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x1800B4038 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18015D860 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18015D848);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
