/*
 * XREFs of RaidLockUnitQueue @ 0x1C002C59C
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C006684C (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 1;
}
