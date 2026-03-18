/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C01D6920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v2) != gpepCSRSS
    || ((*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) == 0
      ? (v4 = 0)
      : (v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL) + 24LL) & 0x10),
        v4) )
  {
    v3 = -1;
    UserSetLastError(5LL);
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 56LL))(P, a1);
  }
  LeaveCrit();
  return v3;
}
