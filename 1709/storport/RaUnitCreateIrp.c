/*
 * XREFs of RaUnitCreateIrp @ 0x1C000E20C
 * Callers:
 *     RaDriverCloseIrp @ 0x1C005F710 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C005F7C0 (RaDriverCreateIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C000E224 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 40));
}
