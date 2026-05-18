/*
 * XREFs of ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003E64
 * Callers:
 *     AvDestroyProcessHeap @ 0x180003E3C (AvDestroyProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Shutdown(void)
{
  WPF::g_processHeap = 0LL;
}
