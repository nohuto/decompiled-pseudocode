/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C0116030
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 && (v7 = (*(_WORD *)(v5 + 82) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    v8 = gptiCurrent;
    v9 = gptiCurrent;
    v11[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v11;
    v11[1] = v5;
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    if ( a2 )
      *(_BYTE *)(v5 + 65) |= 0x80u;
    else
      SetOrClrWF(0, (_DWORD *)v5, 0x980u, 0);
    ThreadUnlock1(v8, v9);
  }
  else
  {
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
