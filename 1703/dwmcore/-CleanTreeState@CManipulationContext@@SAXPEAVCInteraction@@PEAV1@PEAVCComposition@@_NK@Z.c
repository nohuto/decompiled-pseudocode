/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180192C48
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18004DC0C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x1800D5114 (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18004D330 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18018A1FC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x180192FF8 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x180193B0C (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180195068 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801950A4 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
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
    AcquireSRWLockShared(a3 + 73);
  v12 = a5;
  while ( v6 )
  {
    v13 = (CArrayBasedCoverageSet *)*((_QWORD *)v6 + 28);
    --*((_DWORD *)v6 + v12 + 63);
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
    v15 = *((_QWORD *)a1 + 15);
    VisualEffectiveParent = 0LL;
    if ( v15 )
      VisualEffectiveParent = *(struct CVisual **)(v15 + 8);
    for ( ;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v10) )
    {
      if ( v11 )
      {
        v17 = *((_BYTE *)VisualEffectiveParent + 90);
        if ( (v17 & 4) == 0
          || CManipulationContext::VisualHasActiveInteraction(VisualEffectiveParent, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(VisualEffectiveParent) )
        {
          v11 = 0;
        }
        else
        {
          *((_BYTE *)VisualEffectiveParent + 90) = v17 & 0xFB;
        }
      }
    }
  }
  if ( !a4 )
    ReleaseSRWLockShared(a3 + 73);
}
