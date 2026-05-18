/*
 * XREFs of _Init_thread_wait @ 0x180009350
 * Callers:
 *     _Init_thread_header @ 0x180009298 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800097F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18000F6F0 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18000F6E0,
             &stru_18000F6B8,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18000F6B8);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18000F6B8);
  return v3 == 0;
}
