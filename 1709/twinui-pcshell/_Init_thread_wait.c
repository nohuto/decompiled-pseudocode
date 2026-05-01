/*
 * XREFs of _Init_thread_wait @ 0x1801E2160
 * Callers:
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_1802B92D0 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_1802B92C0,
             &stru_1802B9298,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_1802B9298);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_1802B9298);
  return v3 == 0;
}
