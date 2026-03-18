/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1C0114980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     DwmAsyncSetTransition @ 0x1C0114BAC (DwmAsyncSetTransition.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7)
{
  __int128 *v10; // r15
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  NTSTATUS v16; // edi
  void *v17; // rax
  BOOL v18; // ebx
  __int128 v20; // [rsp+98h] [rbp-80h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  EnterCrit(0LL, 1LL);
  v15 = ValidateHwnd(a1);
  if ( v15 )
  {
    v16 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v20 = *a4;
        a4 = &v20;
      }
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v10 = (__int128 *)MmUserProbeAddress;
        v21 = *v10;
        v10 = &v21;
      }
      if ( a6 )
      {
        if ( a6 >= MmUserProbeAddress )
          v11 = (__int128 *)MmUserProbeAddress;
        v22 = *v11;
        v11 = &v22;
      }
      if ( a7 )
      {
        if ( a7 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v23 = *v12;
        v12 = &v23;
      }
      if ( (unsigned int)IsTopLevelWindow(v15) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v15) )
        {
          v17 = (void *)ReferenceDwmApiPort(v14);
          v16 = DwmAsyncSetTransition(v17, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
        }
      }
      else
      {
        v16 = -1073741816;
      }
    }
    else
    {
      v16 = -1073741811;
    }
    v18 = v16 >= 0;
    if ( v16 < 0 )
    {
      v18 = 0;
      UserSetLastStatus(v16, 1);
    }
  }
  else
  {
    v18 = 0;
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return v18;
}
