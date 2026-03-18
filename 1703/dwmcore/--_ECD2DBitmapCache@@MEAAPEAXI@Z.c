/*
 * XREFs of ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x18015A880
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18007A650 (--1CD2DBitmapCache@@MEAA@XZ.c)
 */

CD2DBitmapCache *__fastcall CD2DBitmapCache::`vector deleting destructor'(CD2DBitmapCache *this, char a2)
{
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
