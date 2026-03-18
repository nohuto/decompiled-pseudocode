/*
 * XREFs of PspApplyWin32kFilterOptions @ 0x140454534
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
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
      _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x8000u);
    if ( (**(_DWORD **)(a2 + 464) & 2) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x10000u);
    result = *(_DWORD **)(a2 + 464);
    *(_DWORD *)(a1 + 1960) = result[1];
  }
  return result;
}
