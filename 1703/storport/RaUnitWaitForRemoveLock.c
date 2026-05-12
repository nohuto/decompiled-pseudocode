/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x1C0013028
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0013988 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C0039C30 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A298 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006566C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorWaitForSingleObject @ 0x1C0039BBC (StorWaitForSingleObject.c)
 */

__int64 __fastcall RaUnitWaitForRemoveLock(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF);
  v3 = 0;
  if ( v2 > 1 )
    v3 = StorWaitForSingleObject(a1 + 168);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  return v3;
}
