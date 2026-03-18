/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801DA378
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801CF5DC (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1801DAD20 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x180026454 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180026488 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1801CE944 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801DA868 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1801DB55C (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1801DCAF4 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801DCB2C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::CleanTreeState(
        Dwm3DRECompositorThunk *a1,
        __int64 a2,
        RTL_SRWLOCK *a3,
        char a4,
        int a5)
{
  Dwm3DRECompositorThunk *v6; // rbx
  bool *v10; // rdx
  char v11; // r14
  __int64 v12; // rbp
  Dwm3DRECompositorThunk *v13; // r12
  __int64 v14; // rax
  Dwm3DRECompositorThunk *v15; // rcx
  char v16; // r13
  __int64 v17; // rax
  struct CVisual *VisualEffectiveParent; // rbx
  char v19; // di
  Dwm3DRECompositorThunk *v20; // [rsp+60h] [rbp+8h] BYREF
  char v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v20 = a1;
  v6 = a1;
  Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v20);
  v11 = 1;
  if ( !a4 )
    AcquireSRWLockShared(a3 + 72);
  v12 = a5;
  while ( v6 )
  {
    v13 = (Dwm3DRECompositorThunk *)*((_QWORD *)v6 + 26);
    v14 = v12 - 1;
    if ( (unsigned int)(v12 - 1) >= 6 )
      v14 = 0LL;
    --*((_DWORD *)v6 + v14 + 60);
    if ( !(unsigned int)CInteraction::GetTotalNumContacts(v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree(v6);
      if ( a2 )
      {
        v15 = *(Dwm3DRECompositorThunk **)(a2 + 56);
        if ( v6 == v15 )
        {
          if ( v15 )
          {
            *(_QWORD *)(a2 + 56) = 0LL;
            (*(void (__fastcall **)(Dwm3DRECompositorThunk *))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v20, v13);
    v6 = v20;
  }
  v16 = v21;
  if ( a1 )
  {
    v17 = *((_QWORD *)a1 + 13);
    VisualEffectiveParent = 0LL;
    if ( v17 )
      VisualEffectiveParent = *(struct CVisual **)(v17 + 8);
    for ( ;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v10) )
    {
      if ( v11 )
      {
        v19 = *((_BYTE *)VisualEffectiveParent + 93);
        if ( (v19 & 0x40) == 0
          || CManipulationContext::VisualHasActiveInteraction(VisualEffectiveParent, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(VisualEffectiveParent) )
        {
          v11 = 0;
        }
        else
        {
          *((_BYTE *)VisualEffectiveParent + 93) = v19 & 0xBF;
        }
      }
    }
  }
  if ( !v16 )
    ReleaseSRWLockShared(a3 + 72);
}
