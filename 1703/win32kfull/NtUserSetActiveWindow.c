/*
 * XREFs of NtUserSetActiveWindow @ 0x1C00B2CE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetActiveWindow @ 0x1C00B2D78 (xxxSetActiveWindow.c)
 */

__int64 __fastcall NtUserSetActiveWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *active; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_8;
  }
  else
  {
    v3 = 0LL;
  }
  v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v11;
  v11[1] = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  active = (__int64 *)xxxSetActiveWindow(v3);
  if ( active )
    v2 = *active;
  ThreadUnlock1(v9, v8);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
