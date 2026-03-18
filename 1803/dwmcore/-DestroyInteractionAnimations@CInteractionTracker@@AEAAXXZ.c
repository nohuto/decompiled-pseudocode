/*
 * XREFs of ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x180193FB0
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180193288 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180196D74 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180196E48 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801BE8C0 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CInteractionTracker::DestroyInteractionAnimations(CInteractionTracker *this)
{
  __int64 *v1; // rdi
  CScrollAnimation *v3; // rcx
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  v1 = (__int64 *)((char *)this + 480);
  v3 = (CScrollAnimation *)*((_QWORD *)this + 60);
  if ( v3 )
  {
    CScrollAnimation::Stop(v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 61);
  if ( v4 )
  {
    CScrollAnimation::Stop(v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 61);
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 62);
  if ( v5 )
  {
    CScrollAnimation::Stop(v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 62);
  }
}
