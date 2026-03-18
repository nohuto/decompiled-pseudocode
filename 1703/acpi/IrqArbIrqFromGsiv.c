/*
 * XREFs of IrqArbIrqFromGsiv @ 0x1C00A5BA0
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0088F00 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0089D58 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A5DE8 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00AB6C0 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C0088600 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

__int64 __fastcall IrqArbIrqFromGsiv(int a1)
{
  char v1; // al
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = IrqArbpLookupIsaOverrideByGsiv(a1, &v5);
  v3 = v5;
  if ( !v1 )
    return v2;
  return v3;
}
