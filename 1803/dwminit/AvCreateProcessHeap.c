/*
 * XREFs of AvCreateProcessHeap @ 0x180006FDC
 * Callers:
 *     _DllMainStartup @ 0x180004020 (_DllMainStartup.c)
 * Callees:
 *     ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180006FFC (-Startup@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvCreateProcessHeap()
{
  WPF::ProcessHeapImpl::Startup();
  return 0LL;
}
