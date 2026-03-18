/*
 * XREFs of NtUserGetCursorInfo @ 0x1C00BD430
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 *     _GetCursorInfo @ 0x1C00BD5C0 (_GetCursorInfo.c)
 */

__int64 __fastcall NtUserGetCursorInfo(unsigned __int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // rdx
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v14 = 0uLL;
  v15 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v4 = *(_QWORD *)(v2 + 408)) == 0 || v4 == grpdeskRitInput) )
  {
    GetCursorInfo(&v14);
    v9 = PsGetCurrentProcessWow64Process(v6, v5, v7, v8) != 0 ? 0 : 3;
    if ( (v9 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a1;
    if ( a1 >= W32UserProbeAddress )
      v12 = (_BYTE *)W32UserProbeAddress;
    *v12 = *v12;
    v12[23] = v12[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v14;
      *(_QWORD *)(a1 + 16) = v15;
      v3 = 1;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v9, v12, v10, v11);
  return v3;
}
