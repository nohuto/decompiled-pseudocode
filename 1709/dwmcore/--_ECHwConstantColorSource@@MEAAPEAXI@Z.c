/*
 * XREFs of ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x1801BBC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x180086700 (--1CHwConstantColorSource@@MEAA@XZ.c)
 */

CHwConstantColorSource *__fastcall CHwConstantColorSource::`vector deleting destructor'(
        CHwConstantColorSource *this,
        char a2)
{
  CHwConstantColorSource::~CHwConstantColorSource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
