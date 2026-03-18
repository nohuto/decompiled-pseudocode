/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C01D87E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rdx
  int v7; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(0LL, 1LL);
  v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 376);
  v7 = *(_DWORD *)(v2 + 864);
  v5 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v5 = (_DWORD *)W32UserProbeAddress;
  *v5 = *v5;
  *a1 = v7;
  UserSessionSwitchLeaveCrit(v2, v5, v3, v4);
  return 1LL;
}
