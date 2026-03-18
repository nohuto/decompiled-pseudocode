/*
 * XREFs of NtUserSetWindowRgn @ 0x1C00FC540
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowRgn @ 0x1C00FC5F0 (xxxSetWindowRgn.c)
 */

__int64 __fastcall NtUserSetWindowRgn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v6;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 82) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v15;
      v15[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      v10 = xxxSetWindowRgn(v6, a2, a3);
      ThreadUnlock1(v13, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v11);
  return v10;
}
