/*
 * XREFs of ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x18018A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801886C0 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x180189BB0 (--1CMotion@@QEAA@XZ.c)
 */

void **__fastcall CInteractionTrackerScaleAnimation::`vector deleting destructor'(void **this, char a2)
{
  CMotion::~CMotion((CMotion *)(this + 49));
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
