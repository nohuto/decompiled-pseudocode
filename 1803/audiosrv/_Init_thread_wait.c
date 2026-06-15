/*
 * XREFs of _Init_thread_wait @ 0x1800612E0
 * Callers:
 *     _Init_thread_header @ 0x180061228 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_180189BA0);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180189BA0);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_180189BD8 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_180189BC8,
      &stru_180189BA0,
      dwMilliseconds);
  }
}
