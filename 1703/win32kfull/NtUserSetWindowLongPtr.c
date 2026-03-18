/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C004E580
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowLongPtr @ 0x1C004E638 (xxxSetWindowLongPtr.c)
 */

__int64 __fastcall NtUserSetWindowLongPtr(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = 0LL;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    v7 = xxxSetWindowLongPtr((struct tagWND *)v2, 1);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
