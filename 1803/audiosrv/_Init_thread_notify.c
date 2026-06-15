/*
 * XREFs of _Init_thread_notify @ 0x180061290
 * Callers:
 *     _Init_thread_footer @ 0x1800611C8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180189BE0 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180189BC8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
