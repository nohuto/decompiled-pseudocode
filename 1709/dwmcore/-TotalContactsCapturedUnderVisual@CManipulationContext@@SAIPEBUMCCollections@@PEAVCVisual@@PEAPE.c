/*
 * XREFs of ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801A3ED0
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180195ECC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A1A94 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801A2174 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationContext::TotalContactsCapturedUnderVisual(
        const struct MCCollections *a1,
        struct CVisual *a2,
        struct CInteraction **a3)
{
  unsigned int v4; // esi
  bool *v7; // rdx
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v9; // rax
  unsigned int TotalNumContacts; // eax
  struct CInteraction *v11; // rbx
  CArrayBasedCoverageSet *ClosestInteractionAncestor; // rax
  CInteraction *i; // rdi
  __int64 v14; // rdi
  __int64 v15; // r14
  CInteraction *v16; // r15
  CInteraction **v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v18 = 0LL;
  if ( CVisual::GetInteractionInternal(a2) )
  {
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    Microsoft::WRL::ComPtr<CInteraction>::operator=(
      (CArrayBasedCoverageSet **)&v18,
      *((CArrayBasedCoverageSet **)InteractionInternal + 30));
    v9 = CVisual::GetInteractionInternal(a2);
    TotalNumContacts = CInteraction::GetTotalNumContacts(v9);
    v11 = (struct CInteraction *)v18;
    v4 = TotalNumContacts;
  }
  else
  {
    ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(a2, v7);
    Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)&v18, ClosestInteractionAncestor);
    v11 = (struct CInteraction *)v18;
    if ( v18 )
    {
      for ( i = v18[33]; i; i = (CInteraction *)*((_QWORD *)i + 31) )
      {
        if ( CManipulationContext::IsInteractionDescendantOfVisual(i, a2) )
          v4 += CInteraction::GetTotalNumContacts(i);
      }
    }
    else
    {
      v14 = *((int *)a1 + 8);
      if ( v14 > 0 )
      {
        v15 = *((_QWORD *)a1 + 3);
        do
        {
          v16 = *(CInteraction **)(*(_QWORD *)v15 + 56LL);
          if ( CManipulationContext::IsInteractionDescendantOfVisual(v16, a2) )
            v4 += CInteraction::GetTotalNumContacts(v16);
          v15 += 8LL;
          --v14;
        }
        while ( v14 );
      }
    }
  }
  Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef((CArrayBasedCoverageSet **)&v18);
  *a3 = v11;
  if ( v11 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v11 + 8LL))(v11);
  return v4;
}
