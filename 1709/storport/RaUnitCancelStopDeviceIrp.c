/*
 * XREFs of RaUnitCancelStopDeviceIrp @ 0x1C00683EC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0012F10 (RaidUnitConvertToNormalUnit.c)
 */

__int64 __fastcall RaUnitCancelStopDeviceIrp(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 40) = 1;
  RaidUnitConvertToNormalUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
