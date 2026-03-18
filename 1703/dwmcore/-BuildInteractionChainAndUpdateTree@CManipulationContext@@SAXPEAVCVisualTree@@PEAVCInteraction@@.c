/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180192764
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18018AA0C (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18018A1FC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x180192FF8 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z @ 0x18019341C (-IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180193894 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180195038 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     IsPenDigitizerPresent @ 0x1801B2590 (IsPenDigitizerPresent.c)
 */

void __fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        struct CInteraction *a2,
        unsigned int a3,
        __int64 a4,
        CArrayBasedCoverageSet **a5,
        bool *a6)
{
  __int64 v6; // rax
  char v7; // bp
  CVisual *v8; // rbx
  CInteraction *v11; // rdi
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v13; // rsi
  char v14; // cl
  CInteraction *v15; // rsi
  __int64 v16; // rax
  CVisual *v17; // r10
  CVisual *v18; // r10
  CVisual *v19; // r10
  CInteraction *v20; // rax
  bool v21; // r11
  struct CVisual *VisualEffectiveParent; // rbx
  __int64 v23; // r15
  __int64 v24; // rax
  bool *v25; // rdx
  char i; // r14
  struct CInteraction *v27; // rax
  bool *v28; // rdx
  struct CInteraction *v29; // rbp
  CInteraction *v30; // rax

  v6 = *((_QWORD *)a2 + 15);
  v7 = 0;
  v8 = 0LL;
  if ( v6 )
    v8 = *(CVisual **)(v6 + 8);
  v11 = 0LL;
  while ( v8 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v8);
    v13 = InteractionInternal;
    if ( !InteractionInternal )
      goto LABEL_14;
    v14 = *((_BYTE *)InteractionInternal + 200);
    *a6 |= v14 & 1;
    v7 |= (v14 & 0x20) != 0;
    if ( !v11 )
    {
      if ( !v7 && CManipulationContext::IsDefaultForBuildingChain(InteractionInternal) )
        goto LABEL_13;
      v11 = v13;
    }
    if ( (*((_BYTE *)v11 + 200) & 1) != 0
      && !(*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 80LL))(
            v11,
            a3,
            0LL,
            0LL)
      && !(unsigned int)IsPenDigitizerPresent() )
    {
      v11 = 0LL;
      *a6 = 0;
    }
LABEL_13:
    if ( (*(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 80LL))(
           v13,
           a3,
           0LL,
           0LL) )
    {
      if ( !v7 && CManipulationContext::IsDefaultForBuildingChain(v13) )
        v11 = v13;
      break;
    }
LABEL_14:
    v8 = (CVisual *)*((_QWORD *)v8 + 10);
  }
  v15 = v11;
  if ( v11 )
  {
    v16 = *((_QWORD *)v11 + 15);
    v17 = 0LL;
    if ( v16 )
      v17 = *(CVisual **)(v16 + 8);
    while ( v17 )
    {
      *((_BYTE *)v17 + 90) |= 4u;
      if ( CVisual::GetInteractionInternal(v17) )
      {
        CVisual::GetInteractionInternal(v18);
        v20 = CVisual::GetInteractionInternal(v19);
        CInteraction::UpdateDefaultInteractionForCurrentMC(v20, v21);
        if ( !*a6 )
          *a6 = *((_BYTE *)CVisual::GetInteractionInternal(v18) + 200) & 1;
      }
      v17 = (CVisual *)*((_QWORD *)v18 + 10);
    }
    VisualEffectiveParent = 0LL;
    ++*((_DWORD *)v11 + a3 + 63);
    v23 = a3 - 1;
    v24 = *((_QWORD *)v11 + 15);
    if ( v24 )
      VisualEffectiveParent = *(struct CVisual **)(v24 + 8);
    if ( VisualEffectiveParent )
    {
      if ( (unsigned int)CInteraction::GetTotalNumContacts(v11) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v25);
    }
    for ( i = 0;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v28) )
    {
      v27 = CVisual::GetInteractionInternal(VisualEffectiveParent);
      v29 = v27;
      if ( v27 )
      {
        if ( !i )
        {
          v30 = (CInteraction *)*((_QWORD *)v27 + 31);
          if ( v30 )
          {
            if ( v30 != v15 )
            {
              *((_QWORD *)v15 + 29) = v30;
              *((_QWORD *)v30 + 30) = v15;
            }
            i = 1;
          }
        }
        *((_QWORD *)v29 + 31) = v15;
        *((_QWORD *)v15 + 28) = v29;
        ++*((_DWORD *)v29 + v23 + 64);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v29) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
        v15 = v29;
      }
    }
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a5, v15);
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a5 + 1, v11);
}
