/*
 * XREFs of RaidHandleCreateCloseIrp @ 0x1C0002C24
 * Callers:
 *     RaUnitCreateIrp @ 0x1C0002C0C (RaUnitCreateIrp.c)
 *     RaDriverCreateIrp @ 0x1C005E120 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C005E1D0 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidHandleCreateCloseIrp(int a1, IRP *a2)
{
  if ( (unsigned int)(a1 - 6) <= 1 )
    a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2);
}
