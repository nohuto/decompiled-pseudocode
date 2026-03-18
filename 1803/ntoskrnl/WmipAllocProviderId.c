/*
 * XREFs of WmipAllocProviderId @ 0x140584350
 * Callers:
 *     WmipAllocRegEntry @ 0x140161F7C (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
