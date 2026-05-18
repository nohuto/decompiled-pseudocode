/*
 * XREFs of ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x180007034
 * Callers:
 *     ??3@YAXPEAX@Z @ 0x180007078 (--3@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WPF::ProcessHeapImpl::Free(void *lpMem)
{
  if ( lpMem )
    HeapFree(WPF::g_processHeap, 0, lpMem);
}
