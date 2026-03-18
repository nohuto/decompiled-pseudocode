/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C00FD160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00FD220 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(_QWORD *a1)
{
  __int64 v2; // rdx
  _BYTE *v3; // rdx
  ULONG64 v4; // rcx
  int CurrentInputMessageSource; // ebx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+10h]

  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v10);
    if ( CurrentInputMessageSource )
    {
      v6 = v10;
      v7 = (unsigned int)(v10 - 18);
      if ( (v7 & 0xFFFFFFEF) == 0 )
        v6 = 2;
      LODWORD(v10) = v6;
      v8 = -PsGetCurrentProcessWow64Process(v7);
      v11 = (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v8 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = MmUserProbeAddress;
      v3 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v3 = (_BYTE *)MmUserProbeAddress;
      *v3 = *v3;
      v3[7] = v3[7];
      *a1 = v10;
    }
  }
  else
  {
    UserSetLastError(87LL, v2);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return CurrentInputMessageSource;
}
