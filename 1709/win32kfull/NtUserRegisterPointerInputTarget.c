/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x1C01EA8B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _RegisterPointerInputTarget @ 0x1C01CEA64 (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, v8);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 400LL), 0LL, 12LL);
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v7 + 16) )
      {
        if ( (!a4 || *(char *)(v7 + 60) >= 0 && *(char *)(v7 + 59) >= 0) && (unsigned int)(a3 - 2) <= 1 )
        {
          v9 = RegisterPointerInputTarget(v7, v8, a3, a4);
          goto LABEL_14;
        }
        v11 = 87LL;
      }
      else
      {
        v11 = 5LL;
      }
      UserSetLastError(v11, v8);
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v10, v8);
  return v9;
}
