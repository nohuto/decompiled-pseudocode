/*
 * XREFs of IsPciBusExtension @ 0x1C00A081C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C004E610 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(volatile signed __int32 **)(a1 + 712));
}
