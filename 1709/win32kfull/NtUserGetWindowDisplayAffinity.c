/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1C01E7360
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     GetDisplayAffinity @ 0x1C0212C48 (GetDisplayAffinity.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  _DWORD *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (unsigned int)IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v9, &v11);
      v4 = 1;
      v7 = MmUserProbeAddress;
      v6 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      *v6 = *v6;
      *a2 = v11;
    }
    else
    {
      UserSetLastError(87LL, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
