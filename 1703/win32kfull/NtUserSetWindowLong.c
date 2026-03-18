/*
 * XREFs of NtUserSetWindowLong @ 0x1C00DCFD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowLong @ 0x1C00DD088 (xxxSetWindowLong.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = 0;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    v7 = xxxSetWindowLong((struct tagWND *)v2, 1);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
