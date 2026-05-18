/*
 * XREFs of AvDestroyProcessHeap @ 0x180003F0C
 * Callers:
 *     _DllMainStartup @ 0x1800043D0 (_DllMainStartup.c)
 * Callees:
 *     ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003F34 (-Shutdown@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvDestroyProcessHeap()
{
  WPF::ProcessHeapImpl::Shutdown();
  return 0LL;
}
