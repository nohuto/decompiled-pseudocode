/*
 * XREFs of ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x1800929E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CEffectGroup@@MEAA@XZ @ 0x180092AA4 (--1CEffectGroup@@MEAA@XZ.c)
 */

CEffectGroup *__fastcall CEffectGroup::`vector deleting destructor'(CEffectGroup *this, char a2)
{
  CEffectGroup::~CEffectGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
