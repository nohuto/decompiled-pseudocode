/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0012EFC
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006110C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0007180 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1)
{
  RaidRestartIoQueue(a1);
}
