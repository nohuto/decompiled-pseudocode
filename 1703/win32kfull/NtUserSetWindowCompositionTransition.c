/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1C010A520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     DwmAsyncSetTransition @ 0x1C010A73C (DwmAsyncSetTransition.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int128 *v10; // r15
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  NTSTATUS v19; // edi
  void *v20; // rax
  BOOL v21; // ebx
  __int128 v23; // [rsp+98h] [rbp-80h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v25; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v26; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  EnterCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  v18 = v13;
  if ( v13 )
  {
    v19 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (__int128 *)W32UserProbeAddress;
        v23 = *a4;
        a4 = &v23;
      }
      if ( a5 )
      {
        if ( a5 >= W32UserProbeAddress )
          v10 = (__int128 *)W32UserProbeAddress;
        v24 = *v10;
        v10 = &v24;
      }
      if ( a6 )
      {
        if ( a6 >= W32UserProbeAddress )
          v11 = (__int128 *)W32UserProbeAddress;
        v25 = *v11;
        v11 = &v25;
      }
      if ( a7 )
      {
        if ( a7 >= W32UserProbeAddress )
          v12 = (__int128 *)W32UserProbeAddress;
        v26 = *v12;
        v12 = &v26;
      }
      if ( (unsigned int)IsTopLevelWindow(v13) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v18) )
        {
          v20 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
          v19 = DwmAsyncSetTransition(v20, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
        }
      }
      else
      {
        v19 = -1073741816;
      }
    }
    else
    {
      v19 = -1073741811;
    }
    v21 = v19 >= 0;
    if ( v19 < 0 )
    {
      v21 = 0;
      UserSetLastStatus(v19, 1);
    }
  }
  else
  {
    v21 = 0;
  }
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v21;
}
