/*
 * XREFs of _Init_thread_wait @ 0x1800B4150
 * Callers:
 *     _Init_thread_header @ 0x1800B4098 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_18015D858 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_18015D848,
             &stru_18015D820,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_18015D820);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_18015D820);
  return v3 == 0;
}
