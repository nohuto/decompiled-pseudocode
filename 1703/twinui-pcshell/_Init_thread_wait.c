/*
 * XREFs of _Init_thread_wait @ 0x180194100
 * Callers:
 *     _Init_thread_header @ 0x180194048 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_180243AD0 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_180243AC0,
             &stru_180243A98,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_180243A98);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_180243A98);
  return v3 == 0;
}
