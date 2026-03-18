/*
 * XREFs of NtUserYieldTask @ 0x1C01ED890
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C0085DB8 (UpdateProcessPriorityForSpinning.c)
 *     xxxUserYield @ 0x1C01C69F4 (xxxUserYield.c)
 */

__int64 NtUserYieldTask()
{
  __int64 v0; // rcx
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL);
  v0 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 28LL) |= 0x400u;
    *(_DWORD *)(gptiCurrent + 464LL) |= 0x400u;
    UpdateProcessPriorityForSpinning(gptiCurrent);
  }
  v1 = xxxUserYield(gptiCurrent);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v1;
}
