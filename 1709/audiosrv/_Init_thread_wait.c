/*
 * XREFs of _Init_thread_wait @ 0x1800334C0
 * Callers:
 *     _Init_thread_header @ 0x180033408 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18014BA00 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18014B9F0,
             &stru_18014B9C8,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18014B9C8);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18014B9C8);
  return v3 == 0;
}
