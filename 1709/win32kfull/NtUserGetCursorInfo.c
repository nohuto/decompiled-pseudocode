/*
 * XREFs of NtUserGetCursorInfo @ 0x1C0053130
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     _GetCursorInfo @ 0x1C00532C0 (_GetCursorInfo.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  ULONG64 v5; // rcx
  _BYTE *v6; // rdx
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v8 = 0uLL;
  v9 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v4 = *(_QWORD *)(v2 + 432)) == 0 || v4 == grpdeskRitInput) )
  {
    GetCursorInfo(&v8);
    if ( ((PsGetCurrentProcessWow64Process() != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = MmUserProbeAddress;
    v6 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[23] = v6[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v8;
      *(_QWORD *)(a1 + 16) = v9;
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
  UserSessionSwitchLeaveCrit(v5, v6);
  return v3;
}
