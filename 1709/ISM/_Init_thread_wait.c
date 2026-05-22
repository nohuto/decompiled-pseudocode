/*
 * XREFs of _Init_thread_wait @ 0x1800CBF60
 * Callers:
 *     _Init_thread_header @ 0x1800CBEA8 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18010EC98 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18010EC88,
             &stru_18010EC60,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18010EC60);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18010EC60);
  return v3 == 0;
}
