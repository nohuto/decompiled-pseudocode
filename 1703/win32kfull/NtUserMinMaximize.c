/*
 * XREFs of NtUserMinMaximize @ 0x1C01DDCA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 82) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      v16[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      v12 = (__int64 *)xxxMinMaximizeEx(
                         (struct tagWND *)v6,
                         a2,
                         gdwPUDFlags & 0x10000 | (unsigned int)(a3 != 0),
                         0LL,
                         0LL);
      if ( v12 )
        v11 = *v12;
      ThreadUnlock1(v14, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
