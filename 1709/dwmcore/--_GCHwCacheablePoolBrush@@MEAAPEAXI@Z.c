/*
 * XREFs of ??_GCHwCacheablePoolBrush@@MEAAPEAXI@Z @ 0x1801BC268
 * Callers:
 *     ??_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z @ 0x1800C6E80 (--_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x1801BC218 (--1CHwCacheablePoolBrush@@MEAA@XZ.c)
 */

CHwCacheablePoolBrush *__fastcall CHwCacheablePoolBrush::`scalar deleting destructor'(
        CHwCacheablePoolBrush *this,
        char a2)
{
  CHwCacheablePoolBrush::~CHwCacheablePoolBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
