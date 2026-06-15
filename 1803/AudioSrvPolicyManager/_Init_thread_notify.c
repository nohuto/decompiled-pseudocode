/*
 * XREFs of _Init_thread_notify @ 0x180036060
 * Callers:
 *     _Init_thread_footer @ 0x180035F98 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18004EDA8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18004ED90);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
