/*
 * XREFs of _RegisterKeyboardCorrectionCallout @ 0x1C01E3560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall RegisterKeyboardCorrectionCallout(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = CurrentProcessWin32Process;
  if ( v2 != (v2 != 0) )
    goto LABEL_2;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x88) != 0 )
    goto LABEL_14;
  v7 = *(_QWORD *)(gptiCurrent + 408LL) + 248LL;
  if ( v2 == (*(_QWORD *)v7 != 0LL)
    || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != CurrentProcessWin32Process
    || !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process)
    || *(int *)(v5 + 12) >= 0 )
  {
    goto LABEL_14;
  }
  if ( v2 )
  {
    v9[0] = v7;
    v9[1] = a1;
    HMAssignmentLock(v9);
    return 1LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 376LL) != v5 )
  {
LABEL_14:
    v6 = 5LL;
    goto LABEL_15;
  }
  if ( *(_QWORD *)v7 == a1 )
  {
    HMAssignmentUnlock(v7);
    return 1LL;
  }
LABEL_2:
  v6 = 87LL;
LABEL_15:
  UserSetLastError(v6);
  return 0LL;
}
