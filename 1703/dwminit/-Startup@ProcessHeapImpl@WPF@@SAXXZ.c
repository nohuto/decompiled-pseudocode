/*
 * XREFs of ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003E4C
 * Callers:
 *     AvCreateProcessHeap @ 0x180003E2C (AvCreateProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Startup(void)
{
  WPF::g_processHeap = GetProcessHeap();
}
