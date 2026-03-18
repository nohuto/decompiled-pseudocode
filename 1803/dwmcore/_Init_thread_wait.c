/*
 * XREFs of _Init_thread_wait @ 0x1800DB360
 * Callers:
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_1802D5D30);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1802D5D30);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_1802D5D68 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_1802D5D58,
      &stru_1802D5D30,
      dwMilliseconds);
  }
}
