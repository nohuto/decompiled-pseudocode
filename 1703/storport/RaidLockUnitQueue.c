/*
 * XREFs of RaidLockUnitQueue @ 0x1C0030794
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C0065090 (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 1;
}
