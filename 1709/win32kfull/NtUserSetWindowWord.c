/*
 * XREFs of NtUserSetWindowWord @ 0x1C013E2E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowWord @ 0x1C013E384 (xxxSetWindowWord.c)
 */

__int64 __fastcall NtUserSetWindowWord(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 v9; // bx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0;
  if ( v6 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v13;
    v13[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v9 = xxxSetWindowWord(v6, a2, a3);
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
