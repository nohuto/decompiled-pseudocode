/*
 * XREFs of ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180183500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180181314 (--1CScrollAnimation@@UEAA@XZ.c)
 */

CInteractionTrackerScaleAnimation *__fastcall CInteractionTrackerScaleAnimation::`vector deleting destructor'(
        CInteractionTrackerScaleAnimation *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 65);
  *((_QWORD *)this + 53) = &CMILRefCountBase::`vftable';
  CScrollAnimation::~CScrollAnimation((void **)this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
