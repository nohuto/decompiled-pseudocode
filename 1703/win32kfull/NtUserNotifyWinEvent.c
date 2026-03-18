/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C005C4F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(unsigned int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v12 = 0LL;
  v13 = v8;
  if ( v8 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    xxxWindowEvent(a1, (__int64 *)v8, a3, a4, 1);
    ThreadUnlock1(v15, v14);
    v12 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v9, v13, v10, v11);
  return v12;
}
