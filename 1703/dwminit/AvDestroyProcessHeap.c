/*
 * XREFs of AvDestroyProcessHeap @ 0x180003E3C
 * Callers:
 *     _DllMainStartup @ 0x1800042F0 (_DllMainStartup.c)
 * Callees:
 *     ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003E64 (-Shutdown@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvDestroyProcessHeap()
{
  WPF::ProcessHeapImpl::Shutdown();
  return 0LL;
}
