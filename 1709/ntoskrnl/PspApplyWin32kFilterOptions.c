/*
 * XREFs of PspApplyWin32kFilterOptions @ 0x140591770
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PspApplyWin32kFilterOptions(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a2 + 464);
  if ( result )
  {
    if ( (*result & 1) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x4000u);
    if ( (**(_DWORD **)(a2 + 464) & 2) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x8000u);
    result = *(_DWORD **)(a2 + 464);
    *(_DWORD *)(a1 + 1984) = result[1];
  }
  return result;
}
