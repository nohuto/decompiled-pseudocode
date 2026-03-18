/*
 * XREFs of ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180010630
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180010F08 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CEffectBrush *__fastcall CEffectBrush::`scalar deleting destructor'(CEffectBrush *this, char a2)
{
  CEffectBrush::~CEffectBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
