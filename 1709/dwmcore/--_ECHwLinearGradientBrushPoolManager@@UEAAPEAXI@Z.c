/*
 * XREFs of ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800861D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x180085BF4 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
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
