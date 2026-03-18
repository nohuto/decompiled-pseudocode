/*
 * XREFs of IsPciBusExtension @ 0x1C0085C04
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(_QWORD *)(a1 + 712));
}
