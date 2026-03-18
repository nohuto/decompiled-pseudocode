/*
 * XREFs of NtUserGetCIMSSM @ 0x1C01E4DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00FD220 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall NtUserGetCIMSSM(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE *v7; // rdx
  ULONG64 v8; // rcx
  int CurrentInputMessageSource; // ebx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+10h]

  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 && (unsigned int)_GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v14, v3, v4) && !v14 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(1, (struct tagINPUT_MESSAGE_SOURCE *)&v14, v5, v6);
    if ( CurrentInputMessageSource )
    {
      v10 = v14;
      v11 = (unsigned int)(v14 - 18);
      if ( (v11 & 0xFFFFFFEF) == 0 )
        v10 = 2;
      LODWORD(v14) = v10;
      v12 = -PsGetCurrentProcessWow64Process(v11);
      v15 = (-(__int64)(v12 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v12 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = MmUserProbeAddress;
      v7 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v7 = (_BYTE *)MmUserProbeAddress;
      *v7 = *v7;
      v7[7] = v7[7];
      *a1 = v14;
    }
  }
  else
  {
    UserSetLastError(87LL, v2);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return CurrentInputMessageSource;
}
