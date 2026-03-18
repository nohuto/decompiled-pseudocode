/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x18008C9C0
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x18008C984 (--1CSpriteVisual@@UEAA@XZ.c)
 */

struct CResource **__fastcall CSpriteVisual::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
