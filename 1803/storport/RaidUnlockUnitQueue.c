/*
 * XREFs of RaidUnlockUnitQueue @ 0x1C0003668
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 0;
}
