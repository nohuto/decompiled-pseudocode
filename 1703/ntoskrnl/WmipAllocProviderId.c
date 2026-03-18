/*
 * XREFs of WmipAllocProviderId @ 0x14045CDA0
 * Callers:
 *     WmipAllocRegEntry @ 0x140154290 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
