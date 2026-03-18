/*
 * XREFs of ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x1801B44B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x180085390 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 */

CHwBitmapColorSource *__fastcall CHwBitmapColorSource::`scalar deleting destructor'(
        CHwBitmapColorSource *this,
        char a2)
{
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
