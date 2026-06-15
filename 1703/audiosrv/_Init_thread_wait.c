/*
 * XREFs of _Init_thread_wait @ 0x1800495E0
 * Callers:
 *     _Init_thread_header @ 0x180049528 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18012B650 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18012B640,
             &stru_18012B618,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18012B618);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18012B618);
  return v3 == 0;
}
