/*
 * XREFs of NtUserGetCIMSSM @ 0x1C00036D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00FB2EC (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall NtUserGetCIMSSM(_QWORD *a1)
{
  int CurrentInputMessageSource; // ebx
  int v4; // edx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h]

  v7 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 && (unsigned int)_GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v7) && !v7 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(1, (struct tagINPUT_MESSAGE_SOURCE *)&v7);
    if ( CurrentInputMessageSource )
    {
      v4 = v7;
      if ( (((_DWORD)v7 - 18) & 0xFFFFFFEF) == 0 )
        v4 = 2;
      LODWORD(v7) = v4;
      v5 = -PsGetCurrentProcessWow64Process();
      v8 = (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v5 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = a1;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        v6 = (_BYTE *)W32UserProbeAddress;
      *v6 = *v6;
      v6[7] = v6[7];
      *a1 = v7;
    }
  }
  else
  {
    UserSetLastError(87LL);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit();
  return CurrentInputMessageSource;
}
