/*
 * XREFs of _Init_thread_wait @ 0x180045740
 * Callers:
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_1800BECB8 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_1800BECA8,
             &CriticalSection,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&CriticalSection);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&CriticalSection);
  return v3 == 0;
}
