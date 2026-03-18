/*
 * XREFs of IrqArbQueryConflict @ 0x1C00A8670
 * Callers:
 *     <none>
 * Callees:
 *     PcisuppIsPciDevice @ 0x1C0089690 (PcisuppIsPciDevice.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00A8A5C (IrqArbpQueryConflictIsa.c)
 *     ArbQueryConflict @ 0x1C00A94E0 (ArbQueryConflict.c)
 */

__int64 __fastcall IrqArbQueryConflict(__int64 a1, __int64 *a2)
{
  bool v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a2[1] + 4) & 0x20) != 0 )
    return IrqArbpQueryConflictIsa(a1, a2);
  if ( (int)PcisuppIsPciDevice(*a2, &v5) < 0 )
    return ArbQueryConflict(a1, a2);
  if ( !v5 )
    return IrqArbpQueryConflictIsa(a1, a2);
  a2[2] = 0LL;
  return 0LL;
}
