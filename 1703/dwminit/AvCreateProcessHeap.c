/*
 * XREFs of AvCreateProcessHeap @ 0x180003E2C
 * Callers:
 *     _DllMainStartup @ 0x1800042F0 (_DllMainStartup.c)
 * Callees:
 *     ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003E4C (-Startup@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvCreateProcessHeap()
{
  WPF::ProcessHeapImpl::Startup();
  return 0LL;
}
