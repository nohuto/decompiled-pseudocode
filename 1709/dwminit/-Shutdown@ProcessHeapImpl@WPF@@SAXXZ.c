/*
 * XREFs of ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180003F34
 * Callers:
 *     AvDestroyProcessHeap @ 0x180003F0C (AvDestroyProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Shutdown(void)
{
  WPF::g_processHeap = 0LL;
}
