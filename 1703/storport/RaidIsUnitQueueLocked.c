/*
 * XREFs of RaidIsUnitQueueLocked @ 0x1C000E308
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidIsUnitQueueLocked(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 437);
}
