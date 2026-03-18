/*
 * XREFs of NtUserSetWindowLong @ 0x1C00EF520
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowLong @ 0x1C00EF5D8 (xxxSetWindowLong.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwndEx(a1, 1LL, 1LL);
  v5 = 0;
  if ( v2 )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v9;
    v9[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v5 = xxxSetWindowLong((struct tagWND *)v2, 1);
    ThreadUnlock1(v7, v6);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
