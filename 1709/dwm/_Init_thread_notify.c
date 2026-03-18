/*
 * XREFs of _Init_thread_notify @ 0x140003C60
 * Callers:
 *     _Init_thread_footer @ 0x140003B98 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_14000F2F8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_14000F2E0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
