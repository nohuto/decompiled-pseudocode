/*
 * XREFs of NtUserEnableChildWindowDpiMessage @ 0x1C009D9B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableChildWindowDpiMessageX @ 0x1C009DA38 (xxxEnableChildWindowDpiMessageX.c)
 */

__int64 __fastcall NtUserEnableChildWindowDpiMessage(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    v6 = xxxEnableChildWindowDpiMessageX((struct tagWND *)v2);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v7, v5);
  return v6;
}
