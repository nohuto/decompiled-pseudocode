/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x1C00A8110
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C0085DB8 (UpdateProcessPriorityForSpinning.c)
 */

__int64 HandleProcessSpinning(void)
{
  __int64 v0; // rax
  BOOL v1; // r8d
  int v2; // r9d
  int v4; // eax

  v0 = *(_QWORD *)(gptiCurrent + 456LL);
  v1 = *(_QWORD *)(v0 + 8) >= 0x64uLL;
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 464LL);
    if ( (v2 & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 28LL) = v2 | 0x400;
  }
  if ( v1 )
  {
    v4 = *(_DWORD *)(gptiCurrent + 464LL);
    if ( (v4 & 0x400) == 0 )
    {
      *(_DWORD *)(gptiCurrent + 464LL) = v4 | 0x400;
      UpdateProcessPriorityForSpinning(gptiCurrent);
    }
  }
  return 1LL;
}
