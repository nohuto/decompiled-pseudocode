/*
 * XREFs of ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C004E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 */

__int64 __fastcall ACPIDispatchIrpDepFilterRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  return ACPIFilterIrpRemoveDevice(a1, a2);
}
