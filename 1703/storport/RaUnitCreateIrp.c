/*
 * XREFs of RaUnitCreateIrp @ 0x1C000CB28
 * Callers:
 *     RaDriverCloseIrp @ 0x1C005D760 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C005D810 (RaDriverCreateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 40));
}
