/*
 * XREFs of NtUserSetChildWindowNoActivate @ 0x1C011F460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserSetChildWindowNoActivate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v9;
    v9[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    if ( (*(_BYTE *)(v2 + 71) & 0x40) != 0 )
    {
      SetOrClrWF(1, (_DWORD *)v2, 0xF910u, 1);
      v4 = 1LL;
    }
    else
    {
      UserSetLastError(87LL, v2);
    }
    ThreadUnlock1(v7, v6);
  }
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
