/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x1402859D0
 * Callers:
 *     CmpIsRegistryLockContended @ 0x1401E3C0C (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
