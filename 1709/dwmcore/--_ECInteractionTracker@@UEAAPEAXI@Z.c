/*
 * XREFs of ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x18016AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016A868 (--1CInteractionTracker@@UEAA@XZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::`vector deleting destructor'(CInteractionTracker *this, char a2)
{
  CInteractionTracker::~CInteractionTracker(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
