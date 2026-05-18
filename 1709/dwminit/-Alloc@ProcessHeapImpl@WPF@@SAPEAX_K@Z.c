/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x180003F40
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180003F8C (--2@YAPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc(SIZE_T dwBytes)
{
  SIZE_T v1; // r8

  v1 = 1LL;
  if ( dwBytes )
    v1 = dwBytes;
  return HeapAlloc(WPF::g_processHeap, 0, v1);
}
