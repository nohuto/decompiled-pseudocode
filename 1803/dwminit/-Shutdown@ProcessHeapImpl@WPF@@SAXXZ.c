/*
 * XREFs of ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180007014
 * Callers:
 *     AvDestroyProcessHeap @ 0x180006FEC (AvDestroyProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Shutdown(void)
{
  WPF::g_processHeap = 0LL;
}
