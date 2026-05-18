/*
 * XREFs of AvCreateProcessHeap @ 0x180003EFC
 * Callers:
 *     _DllMainStartup @ 0x1800043D0 (_DllMainStartup.c)
 * Callees:
 *     ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003F1C (-Startup@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvCreateProcessHeap()
{
  WPF::ProcessHeapImpl::Startup();
  return 0LL;
}
