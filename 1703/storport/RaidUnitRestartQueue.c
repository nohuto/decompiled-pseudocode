/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0013644
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RaidUnitRestartQueue(__int64 a1)
{
  RaidRestartIoQueue(a1);
}
