/*
 * XREFs of ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180006FFC
 * Callers:
 *     AvCreateProcessHeap @ 0x180006FDC (AvCreateProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Startup(void)
{
  WPF::g_processHeap = GetProcessHeap();
}
