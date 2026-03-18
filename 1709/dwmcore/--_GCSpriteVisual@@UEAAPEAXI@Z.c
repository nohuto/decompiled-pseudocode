/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180022210
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800225BC (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::`scalar deleting destructor'(CSpriteVisual *this, char a2)
{
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
