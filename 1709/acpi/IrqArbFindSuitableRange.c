/*
 * XREFs of IrqArbFindSuitableRange @ 0x1C008B850
 * Callers:
 *     <none>
 * Callees:
 *     PcisuppIsPciDevice @ 0x1C0089690 (PcisuppIsPciDevice.c)
 *     ArbFindSuitableRange @ 0x1C008B970 (ArbFindSuitableRange.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C008BB10 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00950DC (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009522C (IrqArbpFindSuitableRangeIsa.c)
 */

char __fastcall IrqArbFindSuitableRange(__int64 a1, _QWORD *a2)
{
  __int64 v5; // rcx
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned __int8)ArbFindSuitableRange() )
    return 0;
  if ( (unsigned __int64)(*a2 - 4293918720LL) <= 0xFFFFE )
    return IrqArbpFindSuitableRangeMsi(a1, a2);
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40LL) + 4LL) & 0x20) != 0 )
    return IrqArbpFindSuitableRangeIsa(a1, a2);
  if ( (int)PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32LL), &v6) < 0 )
    return 0;
  if ( !v6 )
    return IrqArbpFindSuitableRangeIsa(a1, a2);
  return IrqArbpFindSuitableRangePci(v5, a2);
}
