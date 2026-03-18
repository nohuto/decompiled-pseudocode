/*
 * XREFs of NtUserGetWindowPlacement @ 0x1C001CEE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int WindowPlacement; // ebx
  _OWORD v10[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v10, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    if ( a2 >= W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    *(_OWORD *)a2 = *(_OWORD *)a2;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 40);
    LODWORD(v10[0]) = *(_DWORD *)a2;
    WindowPlacement = GetWindowPlacement(v7, v10, 1LL);
    if ( WindowPlacement )
    {
      *(_OWORD *)a2 = v10[0];
      *(_OWORD *)(a2 + 16) = v10[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v10[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v10[2]);
    }
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return WindowPlacement;
}
