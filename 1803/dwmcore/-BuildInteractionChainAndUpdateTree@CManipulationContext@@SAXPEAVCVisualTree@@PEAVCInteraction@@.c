/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801D9D68
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180026488 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z @ 0x180028814 (-CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1801CE944 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801DA868 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z @ 0x1801DACAC (-IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801DB318 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801DCAC4 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     IsPenDigitizerPresent @ 0x18020EDFC (IsPenDigitizerPresent.c)
 */

Dwm3DRECompositorThunk **__fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        Dwm3DRECompositorThunk **a6,
        _BYTE *a7)
{
  __int64 v7; // rax
  char v8; // r15
  CVisual *v9; // rsi
  __int64 v10; // r13
  struct CVisualTree *v11; // rbp
  CInteraction *v12; // rdi
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v14; // rbx
  CVisual *i; // rbp
  struct CInteraction *v16; // rax
  struct CInteraction *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  CInteraction *v20; // rsi
  __int64 v21; // rax
  CVisual *v22; // r10
  CVisual *v23; // r10
  CVisual *v24; // r10
  CInteraction *v25; // rax
  bool v26; // r11
  unsigned int v27; // r14d
  int v28; // eax
  struct CVisual *VisualEffectiveParent; // rbx
  __int64 v30; // rax
  bool *v31; // rdx
  char j; // r15
  struct CInteraction *v33; // rax
  bool *v34; // rdx
  struct CInteraction *v35; // rbp
  CInteraction *v36; // rax
  CInteraction *v37; // rcx
  _QWORD *v38; // rdx
  CInteraction *v39; // rcx
  _QWORD *v40; // rdx
  __int64 v41; // rax

  v7 = *(_QWORD *)(a2 + 104);
  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  v11 = a1;
  if ( v7 )
    v9 = *(CVisual **)(v7 + 8);
  v12 = 0LL;
  if ( !v9 )
    goto LABEL_34;
  while ( 1 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v9);
    v14 = InteractionInternal;
    if ( InteractionInternal )
      break;
LABEL_28:
    v9 = (CVisual *)*((_QWORD *)v9 + 10);
    if ( !v9 )
      goto LABEL_33;
  }
  *a7 |= *((_BYTE *)InteractionInternal + 184) & 1;
  v8 |= *((_DWORD *)InteractionInternal + 47) == 2;
  if ( !v12 )
  {
    if ( !v8 && CManipulationContext::IsDefaultForBuildingChain(InteractionInternal)
      || !CInteraction::CanReceiveInput(v14, (unsigned int)v10) )
    {
      goto LABEL_27;
    }
    v12 = v14;
  }
  if ( (_DWORD)v10 == 4
    && (*(unsigned int (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)v12 + 80LL))(v12, 4LL, 0LL)
    && (*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64))(*(_QWORD *)v12 + 88LL))(
         v12,
         4LL,
         0x20000000LL) )
  {
    for ( i = (CVisual *)*((_QWORD *)v9 + 10); i; i = (CVisual *)*((_QWORD *)i + 10) )
    {
      v16 = CVisual::GetInteractionInternal(i);
      v17 = v16;
      if ( v16 && (*(unsigned int (__fastcall **)(struct CInteraction *, __int64))(*(_QWORD *)v16 + 80LL))(v16, 4LL) )
      {
        v18 = *((_QWORD *)v17 + 12);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 64);
          if ( v19 )
            StopAndEndInertia(v19, a3);
        }
        break;
      }
    }
  }
  if ( v12
    && (*((_BYTE *)v12 + 184) & 1) != 0
    && !(*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v12 + 80LL))(
          v12,
          (unsigned int)v10,
          0LL)
    && !(unsigned int)IsPenDigitizerPresent() )
  {
    v12 = 0LL;
    *a7 = 0;
  }
LABEL_27:
  if ( !(*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v14 + 80LL))(
          v14,
          (unsigned int)v10,
          0LL) )
    goto LABEL_28;
  if ( !v8 && CManipulationContext::IsDefaultForBuildingChain(v14) )
    v12 = v14;
LABEL_33:
  v11 = a1;
LABEL_34:
  v20 = v12;
  if ( v12 )
  {
    v21 = *((_QWORD *)v12 + 13);
    v22 = 0LL;
    if ( v21 )
      v22 = *(CVisual **)(v21 + 8);
    while ( v22 )
    {
      *((_BYTE *)v22 + 93) |= 0x40u;
      if ( CVisual::GetInteractionInternal(v22) )
      {
        CVisual::GetInteractionInternal(v23);
        v25 = CVisual::GetInteractionInternal(v24);
        CInteraction::UpdateDefaultInteractionForCurrentMC(v25, v26);
        if ( !*a7 )
          *a7 = *((_BYTE *)CVisual::GetInteractionInternal(v23) + 184) & 1;
      }
      v22 = (CVisual *)*((_QWORD *)v23 + 10);
    }
    v27 = v10 - 1;
    v28 = v10 - 1;
    if ( (int)v10 - 1 < 0 || v27 >= 6 )
      v28 = 0;
    VisualEffectiveParent = 0LL;
    ++*((_DWORD *)v12 + v28 + 60);
    v30 = *((_QWORD *)v12 + 13);
    if ( v30 )
      VisualEffectiveParent = *(struct CVisual **)(v30 + 8);
    if ( VisualEffectiveParent )
    {
      if ( (unsigned int)CInteraction::GetTotalNumContacts(v12) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, v11);
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v31);
    }
    for ( j = 0;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v34) )
    {
      v33 = CVisual::GetInteractionInternal(VisualEffectiveParent);
      v35 = v33;
      if ( v33 )
      {
        if ( !j )
        {
          v36 = (CInteraction *)*((_QWORD *)v33 + 29);
          if ( v36 )
          {
            if ( v36 != v20 )
            {
              *((_QWORD *)v20 + 27) = v36;
              v37 = v36;
              *((_QWORD *)v36 + 28) = v20;
              while ( 1 )
              {
                v38 = (_QWORD *)((char *)v37 + 216);
                v37 = (CInteraction *)*((_QWORD *)v37 + 27);
                if ( v37 == v20 )
                  break;
                if ( !v37 )
                  goto LABEL_61;
              }
              *v38 = 0LL;
LABEL_61:
              v39 = v20;
              while ( 1 )
              {
                v40 = (_QWORD *)((char *)v39 + 224);
                v39 = (CInteraction *)*((_QWORD *)v39 + 28);
                if ( v39 == v36 )
                  break;
                if ( !v39 )
                  goto LABEL_66;
              }
              *v40 = 0LL;
            }
LABEL_66:
            j = 1;
          }
        }
        *((_QWORD *)v35 + 29) = v20;
        v41 = v10 - 1;
        *((_QWORD *)v20 + 26) = v35;
        if ( v27 >= 6 )
          v41 = 0LL;
        ++*((_DWORD *)v35 + v41 + 60);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v35) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
        v20 = v35;
      }
    }
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a6, v20);
  return Microsoft::WRL::ComPtr<CInteraction>::operator=(a6 + 1, v12);
}
