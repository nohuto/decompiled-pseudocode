/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0015E8C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1)
{
  RaidRestartIoQueue(a1);
}
