/*
 * XREFs of ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016C7BC
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016BD60 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016E9A8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801823DC (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CInteractionTracker::DestroyInteractionAnimations(CInteractionTracker *this)
{
  __int64 *v1; // rdi
  CScrollAnimation *v3; // rcx
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  v1 = (__int64 *)((char *)this + 368);
  v3 = (CScrollAnimation *)*((_QWORD *)this + 46);
  if ( v3 )
  {
    CScrollAnimation::Stop(v3);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(v1);
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    CScrollAnimation::Stop(v4);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 47);
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 48);
  if ( v5 )
  {
    CScrollAnimation::Stop(v5);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 48);
  }
  CInteractionTracker::ClearActiveManipulation(this);
}
