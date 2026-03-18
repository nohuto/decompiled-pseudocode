/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C0120B70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     IsPrivileged @ 0x1C010BDF0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0LL;
  }
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogonUI || !gpidLogonUI && (unsigned int)IsPrivileged(psTcb) )
  {
    if ( v7 )
    {
      v9[1] = v7;
      v9[0] = &gspwndBSDR;
      HMAssignmentLock(v9);
    }
    if ( (_DWORD)v2 )
    {
      v6 = gptiShutdownWaiter;
      if ( gptiShutdownWaiter )
        PostEventMessageEx(
          gptiShutdownWaiter,
          *(_QWORD *)(gptiShutdownWaiter + 408LL),
          0x13u,
          0LL,
          0x329u,
          v2,
          0xFFFFFFFFLL,
          0LL);
    }
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v5);
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
