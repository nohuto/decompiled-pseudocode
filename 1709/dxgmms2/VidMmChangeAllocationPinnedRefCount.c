/*
 * XREFs of VidMmChangeAllocationPinnedRefCount @ 0x1C00141A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmChangeAllocationPinnedRefCount(__int64 a1, unsigned int a2)
{
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), a2);
}
