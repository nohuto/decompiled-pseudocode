/*
 * XREFs of NtUserSetThreadLayoutHandles @ 0x1C01DFE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetThreadLayoutHandles(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( !v9 || *(_QWORD *)(v9 + 40) == a2 )
  {
    v4 = HKLtoPKL(gptiCurrent, a1);
    if ( v4 )
    {
      LOBYTE(v8) = (WORD1(a2) & 0xF000) == 0xE000;
      if ( (_DWORD)v8 != ((WORD1(a1) & 0xF000) == 0xE000) )
        *(_QWORD *)(gptiCurrent + 712LL) = a2;
      v11[0] = gptiCurrent + 392LL;
      v11[1] = v4;
      HMAssignmentLock(v11);
      v8 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
