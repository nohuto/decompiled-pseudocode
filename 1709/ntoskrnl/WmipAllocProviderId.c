/*
 * XREFs of WmipAllocProviderId @ 0x14057F554
 * Callers:
 *     WmipAllocRegEntry @ 0x140123F48 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
