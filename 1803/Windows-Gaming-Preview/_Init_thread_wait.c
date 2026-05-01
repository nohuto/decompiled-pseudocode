/*
 * XREFs of _Init_thread_wait @ 0x1800428A0
 * Callers:
 *     _Init_thread_header @ 0x1800427E8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hObject )
  {
    LeaveCriticalSection(&stru_18005DA20);
    WaitForSingleObjectEx(hObject, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18005DA20);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18005DA58 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18005DA48,
      &stru_18005DA20,
      dwMilliseconds);
  }
}
