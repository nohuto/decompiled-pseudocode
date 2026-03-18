/*
 * XREFs of ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x180150020
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18008A81C (--1CD2DBitmapCache@@MEAA@XZ.c)
 */

CD2DBitmapCache *__fastcall CD2DBitmapCache::`vector deleting destructor'(CD2DBitmapCache *this, char a2)
{
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
