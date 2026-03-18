/*
 * XREFs of _Init_thread_notify @ 0x1800C2FF0
 * Callers:
 *     _Init_thread_footer @ 0x1800C2F28 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18026E9C0 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18026E9A8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
