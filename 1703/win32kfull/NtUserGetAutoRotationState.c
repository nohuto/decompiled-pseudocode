/*
 * XREFs of NtUserGetAutoRotationState @ 0x1C0007A20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetAutoRotationState(_DWORD *a1)
{
  int v2; // ebx
  int v3; // r8d
  _DWORD *v4; // rcx

  UserSessionSwitchEnterCrit();
  v2 = 0;
  if ( a1 )
  {
    v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
    v4 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v4 = (_DWORD *)W32UserProbeAddress;
    *v4 = *v4;
    *a1 = v3;
    v2 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  LeaveCrit();
  return v2;
}
