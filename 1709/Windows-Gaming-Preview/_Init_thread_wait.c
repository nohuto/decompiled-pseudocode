/*
 * XREFs of _Init_thread_wait @ 0x1800418F0
 * Callers:
 *     _Init_thread_header @ 0x180041838 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hObject )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18005BA90 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18005BA80,
             &stru_18005BA58,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18005BA58);
  v3 = WaitForSingleObjectEx(hObject, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18005BA58);
  return v3 == 0;
}
