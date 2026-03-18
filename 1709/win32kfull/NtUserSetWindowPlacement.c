/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C004A790
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int128 v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+78h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v11;
      v11[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v12 = *(_OWORD *)a2;
      v13 = *(_OWORD *)(a2 + 16);
      v14 = *(_QWORD *)(a2 + 32);
      v15 = *(_DWORD *)(a2 + 40);
      if ( (_DWORD)v12 == 44 || *(_WORD *)(gptiCurrent + 608LL) < 0x400u )
        v7 = xxxSetWindowPlacement((struct tagWND *)v4);
      else
        UserSetLastError(87LL);
      ThreadUnlock1(v9, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
