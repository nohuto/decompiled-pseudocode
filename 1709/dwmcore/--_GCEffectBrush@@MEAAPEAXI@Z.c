/*
 * XREFs of ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180082580
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180082E38 (--1CEffectBrush@@MEAA@XZ.c)
 */

CEffectBrush *__fastcall CEffectBrush::`scalar deleting destructor'(CEffectBrush *this, char a2)
{
  CEffectBrush::~CEffectBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
