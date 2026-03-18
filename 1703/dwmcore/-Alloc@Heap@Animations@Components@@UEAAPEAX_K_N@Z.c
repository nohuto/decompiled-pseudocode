/*
 * XREFs of ?Alloc@Heap@Animations@Components@@UEAAPEAX_K_N@Z @ 0x1801BA0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID __fastcall Components::Animations::Heap::Alloc(Components::Animations::Heap *this, size_t a2, char a3)
{
  SIZE_T v4; // r8

  if ( a3 )
    return WPF::ProcessHeapImpl::AllocClear(a2);
  v4 = 1LL;
  if ( a2 )
    v4 = a2;
  return HeapAlloc(WPF::g_processHeap, 0, v4);
}
