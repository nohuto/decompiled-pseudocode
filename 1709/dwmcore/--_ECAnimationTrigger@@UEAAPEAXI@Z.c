/*
 * XREFs of ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x180146A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CAnimationTrigger@@UEAA@XZ @ 0x180158324 (--1CAnimationTrigger@@UEAA@XZ.c)
 */

CAnimationTrigger *__fastcall CAnimationTrigger::`vector deleting destructor'(CAnimationTrigger *this, char a2)
{
  CAnimationTrigger::~CAnimationTrigger(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
