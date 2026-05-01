/*
 * XREFs of _Init_thread_wait @ 0x180029470
 * Callers:
 *     _Init_thread_header @ 0x1800293B8 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18003B950 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18003B940,
             &stru_18003B918,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18003B918);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18003B918);
  return v3 == 0;
}
