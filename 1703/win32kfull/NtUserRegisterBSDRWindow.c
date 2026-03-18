/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C01153A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     IsPrivileged @ 0x1C00C6ED0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

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
      v11[1] = v7;
      v11[0] = &gspwndBSDR;
      HMAssignmentLock(v11);
    }
    if ( (_DWORD)v2 )
    {
      v6 = gptiShutdownWaiter;
      if ( gptiShutdownWaiter )
        PostEventMessageEx(
          gptiShutdownWaiter,
          *(_QWORD *)(gptiShutdownWaiter + 384LL),
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
    UserSetLastError(5LL);
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
