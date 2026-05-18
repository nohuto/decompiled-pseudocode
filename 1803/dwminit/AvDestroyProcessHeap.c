/*
 * XREFs of AvDestroyProcessHeap @ 0x180006FEC
 * Callers:
 *     _DllMainStartup @ 0x180004020 (_DllMainStartup.c)
 * Callees:
 *     ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180007014 (-Shutdown@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvDestroyProcessHeap()
{
  WPF::ProcessHeapImpl::Shutdown();
  return 0LL;
}
