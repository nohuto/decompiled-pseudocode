/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C00FB230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00FB2EC (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(unsigned __int64 a1)
{
  _BYTE *v2; // rdx
  __int64 v3; // rcx
  int CurrentInputMessageSource; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+10h]

  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v11);
    if ( CurrentInputMessageSource )
    {
      v7 = (unsigned int)v11;
      v8 = (unsigned int)(v11 - 18);
      if ( (v8 & 0xFFFFFFEF) == 0 )
        v7 = 2LL;
      LODWORD(v11) = v7;
      v9 = -PsGetCurrentProcessWow64Process(v8, v7, v5, v6);
      v12 = (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      v3 = v9 != 0 ? 0 : 3;
      if ( (v3 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v2 = (_BYTE *)a1;
      if ( a1 >= W32UserProbeAddress )
        v2 = (_BYTE *)W32UserProbeAddress;
      *v2 = *v2;
      v2[7] = v2[7];
      *(_QWORD *)a1 = v11;
    }
  }
  else
  {
    UserSetLastError(87LL);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v3, v2, v5, v6);
  return CurrentInputMessageSource;
}
