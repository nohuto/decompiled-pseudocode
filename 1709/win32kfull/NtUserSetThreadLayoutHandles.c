/*
 * XREFs of NtUserSetThreadLayoutHandles @ 0x1C01EBFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetThreadLayoutHandles(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( !v7 || *(_QWORD *)(v7 + 40) == a2 )
  {
    v4 = HKLtoPKL(gptiCurrent, a1);
    if ( v4 )
    {
      LOBYTE(v6) = (WORD1(a2) & 0xF000) == 0xE000;
      if ( (_DWORD)v6 != ((WORD1(a1) & 0xF000) == 0xE000) )
        *(_QWORD *)(gptiCurrent + 768LL) = a2;
      v9[0] = gptiCurrent + 416LL;
      v9[1] = v4;
      HMAssignmentLock(v9);
      v6 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
