/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C00607E8
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0011FC8 (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
