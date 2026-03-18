/*
 * XREFs of ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x1801A24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800C3E54 (--1CHwConstantColorSource@@MEAA@XZ.c)
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
