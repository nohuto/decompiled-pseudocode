/*
 * XREFs of NtUserSetFocus @ 0x1C00B4FE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v5 = 0LL;
  }
  v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v11;
  v11[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v7 = (__int64 *)xxxSetFocus((struct tagWND *)v5);
  if ( v7 )
    v2 = *v7;
  ThreadUnlock1(v9, v8);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
