/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C0135280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetMenuInfo @ 0x1C0043870 (xxxSetMenuInfo.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  if ( a2 >= W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  v14[0] = *(_OWORD *)a2;
  v14[1] = *(_OWORD *)(a2 + 16);
  v15 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v8 = v4;
  v9 = 0;
  if ( v4 && (*(_DWORD *)(v4 + 56) & 0x40) == 0 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    v9 = xxxSetMenuInfo(v4, (__int64)v14);
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v7);
  return v9;
}
