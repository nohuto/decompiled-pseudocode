/*
 * XREFs of _Init_thread_wait @ 0x1800C3040
 * Callers:
 *     _Init_thread_header @ 0x1800C2F88 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18026E9B8 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18026E9A8,
             &stru_18026E980,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18026E980);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18026E980);
  return v3 == 0;
}
