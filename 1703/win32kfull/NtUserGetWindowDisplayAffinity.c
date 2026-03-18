/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1C01DB110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     GetDisplayAffinity @ 0x1C0211734 (GetDisplayAffinity.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (unsigned int)IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v10, &v12);
      v4 = 1;
      v6 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v6 = (_DWORD *)W32UserProbeAddress;
      *v6 = *v6;
      *a2 = v12;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
