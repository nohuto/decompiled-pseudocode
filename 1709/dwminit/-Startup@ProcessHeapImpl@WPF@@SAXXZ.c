/*
 * XREFs of ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003F1C
 * Callers:
 *     AvCreateProcessHeap @ 0x180003EFC (AvCreateProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Startup(void)
{
  WPF::g_processHeap = GetProcessHeap();
}
