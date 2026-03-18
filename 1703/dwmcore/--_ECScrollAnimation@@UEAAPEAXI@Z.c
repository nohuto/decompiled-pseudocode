/*
 * XREFs of ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x180181360
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180181314 (--1CScrollAnimation@@UEAA@XZ.c)
 */

void **__fastcall CScrollAnimation::`vector deleting destructor'(void **this, char a2)
{
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
