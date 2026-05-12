/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C0060F00
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0017578 (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
