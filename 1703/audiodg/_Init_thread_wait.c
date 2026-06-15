/*
 * XREFs of _Init_thread_wait @ 0x14001E4F0
 * Callers:
 *     _Init_thread_header @ 0x14001E438 (_Init_thread_header.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  DWORD v3; // ebx

  if ( !hHandle )
    return ((unsigned int (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                                           qword_140085DF8 ^ _security_cookie,
                                                                                           _security_cookie & 0x3F))(
             &unk_140085DE8,
             &stru_140085DC0,
             dwMilliseconds) != 0;
  LeaveCriticalSection(&stru_140085DC0);
  v3 = WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
  EnterCriticalSection(&stru_140085DC0);
  return v3 == 0;
}
