/*
 * XREFs of _Init_thread_notify @ 0x1800079D0
 * Callers:
 *     _Init_thread_footer @ 0x180007908 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18001B108 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18001B0F0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
