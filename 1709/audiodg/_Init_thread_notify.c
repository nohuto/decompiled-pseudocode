/*
 * XREFs of _Init_thread_notify @ 0x14001E290
 * Callers:
 *     _Init_thread_footer @ 0x14001E1C8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_140089E08 ^ _security_cookie, _security_cookie & 0x3F))(&unk_140089DF0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
