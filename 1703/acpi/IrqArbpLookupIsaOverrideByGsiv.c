/*
 * XREFs of IrqArbpLookupIsaOverrideByGsiv @ 0x1C0088600
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00898E8 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbIrqFromGsiv @ 0x1C00A5BA0 (IrqArbIrqFromGsiv.c)
 * Callees:
 *     <none>
 */

char __fastcall IrqArbpLookupIsaOverrideByGsiv(int a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *i; // r8

  v2 = 0;
  for ( i = &IsaVectorOverrides; *i != a1; i += 2 )
  {
    if ( (unsigned int)++v2 >= 0x10 )
      return 0;
  }
  *a2 = v2;
  return 1;
}
