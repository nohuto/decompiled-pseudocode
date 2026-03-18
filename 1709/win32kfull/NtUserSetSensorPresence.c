/*
 * XREFs of NtUserSetSensorPresence @ 0x1C01EBE70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetSensorPresence(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  if ( CurrentProcess == gpepCSRSS )
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 40LL))(P, a1);
  else
    UserSetLastError(5LL, CurrentProcess);
  UserSessionSwitchLeaveCrit(v6, v5);
  return 1LL;
}
