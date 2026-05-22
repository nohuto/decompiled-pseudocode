/*
 * XREFs of _Init_thread_wait @ 0x1800E2E30
 * Callers:
 *     _Init_thread_header @ 0x1800E2D78 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_180135EF0);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180135EF0);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_180135F28 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_180135F18,
      &stru_180135EF0,
      dwMilliseconds);
  }
}
