/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C010BE50
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 && (v7 = (*(_WORD *)(v5 + 82) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    v10 = gptiCurrent;
    v11 = gptiCurrent;
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    if ( a2 )
      *(_BYTE *)(v5 + 65) |= 0x80u;
    else
      SetOrClrWF(0, (_DWORD *)v5, 0x980u, 0);
    ThreadUnlock1(v10, v11);
  }
  else
  {
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
