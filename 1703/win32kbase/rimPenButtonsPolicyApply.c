/*
 * XREFs of rimPenButtonsPolicyApply @ 0x1C0113508
 * Callers:
 *     rimFinalizePointerFlags @ 0x1C011318C (rimFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimPenButtonsPolicyApply(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx

  *(_DWORD *)(a2 + 2488) &= 0xFFFFFFF9;
  result = *(unsigned int *)(a2 + 32);
  if ( (result & 0x20) != 0 )
  {
    *(_WORD *)(a2 + 2384) = *(_WORD *)(*(_QWORD *)(a1 + 1592) + 16LL);
    *(_DWORD *)(a2 + 2488) |= 2u;
    result = *(unsigned int *)(a2 + 2404);
    if ( (result & 4) != 0 )
      *(_DWORD *)(a2 + 2488) |= 4u;
  }
  v3 = *(_DWORD *)(a2 + 2404);
  if ( (v3 & 4) != 0 )
  {
    result = *(unsigned int *)(a2 + 32);
    if ( (result & 0x10) != 0 )
      *(_DWORD *)(a2 + 2404) = v3 & 0xFFFFFFCF | 0x20;
  }
  return result;
}
