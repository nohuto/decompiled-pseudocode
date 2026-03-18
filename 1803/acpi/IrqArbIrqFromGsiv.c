/*
 * XREFs of IrqArbIrqFromGsiv @ 0x1C0090A40
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0090750 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C009CBF4 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C00917A4 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

__int64 __fastcall IrqArbIrqFromGsiv(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = IrqArbpLookupIsaOverrideByGsiv(a1, &v8, a3, a4);
  v6 = v8;
  if ( !v4 )
    return v5;
  return v6;
}
