/*
 * XREFs of _Init_thread_wait @ 0x140003CB0
 * Callers:
 *     _Init_thread_header @ 0x140003BF8 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140006950 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_14000F2F0 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_14000F2E0,
             &CriticalSection,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&CriticalSection);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&CriticalSection);
  return v3 == 0;
}
