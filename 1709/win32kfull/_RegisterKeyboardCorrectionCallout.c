/*
 * XREFs of _RegisterKeyboardCorrectionCallout @ 0x1C01EF570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall RegisterKeyboardCorrectionCallout(__int64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( a2 != (a2 != 0) )
    goto LABEL_2;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x88) != 0 )
    goto LABEL_14;
  v8 = *(_QWORD *)(gptiCurrent + 432LL) + 248LL;
  if ( a2 == (*(_QWORD *)v8 != 0LL)
    || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) != CurrentProcessWin32Process
    || !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process)
    || *(int *)(v6 + 12) >= 0 )
  {
    goto LABEL_14;
  }
  if ( a2 )
  {
    v10[0] = v8;
    v10[1] = a1;
    HMAssignmentLock(v10);
    return 1LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 400LL) != v6 )
  {
LABEL_14:
    v7 = 5LL;
    goto LABEL_15;
  }
  if ( *(_QWORD *)v8 == a1 )
  {
    HMAssignmentUnlock(v8);
    return 1LL;
  }
LABEL_2:
  v7 = 87LL;
LABEL_15:
  UserSetLastError(v7, v5);
  return 0LL;
}
