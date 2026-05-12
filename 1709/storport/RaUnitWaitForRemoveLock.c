/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x1C0012990
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C00131A4 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C003B980 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003BEB4 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003BFE8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0068D2C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorWaitForSingleObject @ 0x1C003B6CC (StorWaitForSingleObject.c)
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
