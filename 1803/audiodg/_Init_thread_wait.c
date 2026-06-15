/*
 * XREFs of _Init_thread_wait @ 0x14001D3A0
 * Callers:
 *     _Init_thread_header @ 0x14001D2E8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hEvent )
  {
    LeaveCriticalSection(&stru_140087DC8);
    WaitForSingleObjectEx(hEvent, dwMilliseconds, 0);
    EnterCriticalSection(&stru_140087DC8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_140087E00 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_140087DF0,
      &stru_140087DC8,
      dwMilliseconds);
  }
}
