/*
 * XREFs of ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800C9750
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800C978C (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 */

CHwLinearGradientBrushPoolManager *__fastcall CHwLinearGradientBrushPoolManager::`vector deleting destructor'(
        CHwLinearGradientBrushPoolManager *this,
        char a2)
{
  *(_QWORD *)this = &CHwBrushPoolManager::`vftable';
  CHwBrushPoolManager::ReleaseUnusedBrushes(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
