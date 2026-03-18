/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x1801A1830
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x180196FE8 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x1801A21BC (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180195ECC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801A1D18 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1801A2A2C (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1801A4028 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801A4060 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::CleanTreeState(
        struct CInteraction *a1,
        struct CManipulationContext *a2,
        RTL_SRWLOCK *a3,
        char a4,
        unsigned int a5)
{
  struct CInteraction *v6; // rbx
  bool *v10; // rdx
  char v11; // bp
  unsigned int v12; // r13d
  CArrayBasedCoverageSet *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  struct CVisual *VisualEffectiveParent; // rbx
  char v17; // di
  CArrayBasedCoverageSet *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = a1;
  v6 = a1;
  Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v18);
  v11 = 1;
  if ( !a4 )
    AcquireSRWLockShared(a3 + 69);
  v12 = a5;
  while ( v6 )
  {
    v13 = (CArrayBasedCoverageSet *)*((_QWORD *)v6 + 30);
    --*((_DWORD *)v6 + v12 + 67);
    if ( !(unsigned int)CInteraction::GetTotalNumContacts(v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree(v6);
      if ( a2 )
      {
        if ( v6 == *((struct CInteraction **)a2 + 7) )
        {
          v14 = *((_QWORD *)a2 + 7);
          if ( v14 )
          {
            *((_QWORD *)a2 + 7) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v18, v13);
    v6 = v18;
  }
  if ( a1 )
  {
    v15 = *((_QWORD *)a1 + 17);
    VisualEffectiveParent = 0LL;
    if ( v15 )
      VisualEffectiveParent = *(struct CVisual **)(v15 + 8);
    for ( ;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v10) )
    {
      if ( v11 )
      {
        v17 = *((_BYTE *)VisualEffectiveParent + 93);
        if ( (v17 & 4) == 0
          || CManipulationContext::VisualHasActiveInteraction(VisualEffectiveParent, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(VisualEffectiveParent) )
        {
          v11 = 0;
        }
        else
        {
          *((_BYTE *)VisualEffectiveParent + 93) = v17 & 0xFB;
        }
      }
    }
  }
  if ( !a4 )
    ReleaseSRWLockShared(a3 + 69);
}
