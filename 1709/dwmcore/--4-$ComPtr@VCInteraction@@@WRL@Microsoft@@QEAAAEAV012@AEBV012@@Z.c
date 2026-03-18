/*
 * XREFs of ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016AA60
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801A239C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CArrayBasedCoverageSet **__fastcall Microsoft::WRL::ComPtr<CInteraction>::operator=(
        CArrayBasedCoverageSet **a1,
        CArrayBasedCoverageSet **a2)
{
  CArrayBasedCoverageSet *v2; // rdi
  CArrayBasedCoverageSet *v4; // rcx
  CArrayBasedCoverageSet *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v6 = *a2;
    Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v6);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return a1;
}
