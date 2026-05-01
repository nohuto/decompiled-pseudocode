/*
 * XREFs of _Init_thread_wait @ 0x180007A20
 * Callers:
 *     _Init_thread_header @ 0x180007968 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18001B100 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18001B0F0,
             &CriticalSection,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&CriticalSection);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&CriticalSection);
  return v3 == 0;
}
