/*
 * XREFs of NtUserSetKeyboardState @ 0x1C00F3A30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _SetKeyboardState @ 0x1C00F3AE0 (_SetKeyboardState.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  v3 = *(_QWORD *)(v2 + 380);
  v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
  v5 = 0;
  if ( !gbEnforceUIPI
    || (unsigned int)v4 > (unsigned int)v3
    || (_DWORD)v4 == (_DWORD)v3
    && ((v11 = HIDWORD(v4), v12 = HIDWORD(v3), (_DWORD)v11 == (_DWORD)v12) || (_DWORD)v12 == -1 || (_DWORD)v11 == -1)
    || (*(_DWORD *)(v2 + 340) & 0x2000000) != 0 )
  {
    v5 = SetKeyboardState(a1);
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, 0LL, v2, *(_QWORD *)(v2 + 380), 3);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
