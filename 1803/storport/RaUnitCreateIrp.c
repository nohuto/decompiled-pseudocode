/*
 * XREFs of RaUnitCreateIrp @ 0x1C0002C0C
 * Callers:
 *     RaDriverCreateIrp @ 0x1C005E120 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C005E1D0 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C0002C24 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 40));
}
