/*
 * XREFs of NtUserGetWindowBand @ 0x1C00F5330
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rdx
  ULONG64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = 0;
  if ( v6 )
  {
    if ( a2 )
    {
      v5 = MmUserProbeAddress;
      v4 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = *v4;
      *a2 = *(_DWORD *)(v6 + 320);
      v7 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v4);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
