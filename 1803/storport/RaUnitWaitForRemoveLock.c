/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x1C001551C
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0012CC0 (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001784C (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C003A220 (RaUnitAdapterRemove.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A754 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorWaitForSingleObject @ 0x1C0039F6C (StorWaitForSingleObject.c)
 */

__int64 __fastcall RaUnitWaitForRemoveLock(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 680), 0xFFFFFFFF);
  v3 = 0;
  if ( v2 > 1 )
    v3 = StorWaitForSingleObject(a1 + 168);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
  return v3;
}
