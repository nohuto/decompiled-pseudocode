/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180196C84 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x18009127C (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?CanReceiveInput@CInteraction@@QEBA_NK@Z @ 0x180091298 (-CanReceiveInput@CInteraction@@QEBA_NK@Z.c)
 *     ?GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z @ 0x1800BA540 (-GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x1800BE730 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180195ECC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801A1D18 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z @ 0x1801A214C (-IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801A279C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801A3FF8 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     IsPenDigitizerPresent @ 0x1801CE464 (IsPenDigitizerPresent.c)
 */

void __fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        struct CInteraction *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5,
        CArrayBasedCoverageSet **a6,
        bool *a7)
{
  __int64 v7; // rax
  char v8; // bp
  CVisual *v9; // rsi
  struct CVisualTree *v11; // r14
  CInteraction *v12; // rdi
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v14; // r14
  char v15; // cl
  CVisual *i; // rbx
  struct CInteraction *v17; // rax
  CInteraction *v18; // r15
  __int64 v19; // r8
  int InputType; // eax
  _DWORD *v21; // r8
  _DWORD *InputQueueInfo; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  CInteraction *v25; // rsi
  __int64 v26; // rax
  CVisual *v27; // r10
  CVisual *v28; // r10
  CVisual *v29; // r10
  CInteraction *v30; // rax
  bool v31; // r11
  struct CVisual *VisualEffectiveParent; // rbx
  __int64 v33; // rax
  bool *v34; // rdx
  char j; // r14
  struct CInteraction *v36; // rax
  bool *v37; // rdx
  struct CInteraction *v38; // rbp
  CInteraction *v39; // rax
  CInteraction *v40; // rcx
  CInteraction *v41; // rdx
  CInteraction *v42; // rcx
  CInteraction *v43; // rdx

  v7 = *((_QWORD *)a2 + 17);
  v8 = 0;
  v9 = 0LL;
  v11 = a1;
  if ( v7 )
    v9 = *(CVisual **)(v7 + 8);
  v12 = 0LL;
  if ( !v9 )
    goto LABEL_39;
  while ( 1 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v9);
    v14 = InteractionInternal;
    if ( InteractionInternal )
      break;
LABEL_33:
    v9 = (CVisual *)*((_QWORD *)v9 + 10);
    if ( !v9 )
      goto LABEL_38;
  }
  v15 = *((_BYTE *)InteractionInternal + 216);
  *a7 |= v15 & 1;
  v8 |= (v15 & 0x20) != 0;
  if ( !v12 )
  {
    if ( !v8 && CManipulationContext::IsDefaultForBuildingChain(InteractionInternal)
      || !CInteraction::CanReceiveInput(v14, a4) )
    {
      goto LABEL_32;
    }
    v12 = v14;
  }
  if ( a4 == 3
    && (*(unsigned int (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)v12 + 80LL))(v12, 3LL, 0LL)
    && (*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64))(*(_QWORD *)v12 + 88LL))(
         v12,
         3LL,
         0x20000000LL) )
  {
    for ( i = (CVisual *)*((_QWORD *)v9 + 10); i; i = (CVisual *)*((_QWORD *)i + 10) )
    {
      v17 = CVisual::GetInteractionInternal(i);
      v18 = v17;
      if ( v17 && (*(unsigned int (__fastcall **)(struct CInteraction *, __int64))(*(_QWORD *)v17 + 80LL))(v17, 3LL) )
      {
        if ( CInteraction::HasInputSink(v18) )
        {
          v19 = *((_QWORD *)v18 + 16);
          if ( v19
            && (InputType = CInputSinkStruct::GetInputType(3),
                (InputQueueInfo = CInputSinkStruct::GetInputQueueInfo(v21, InputType)) != 0LL) )
          {
            v23 = *((_QWORD *)InputQueueInfo + 1);
          }
          else
          {
            v23 = 0LL;
          }
          v24 = 0LL;
          if ( v19 )
            v24 = *(_QWORD *)(v19 + 96);
          StopAndEndInertia(v24, v23, a3);
        }
        break;
      }
    }
  }
  if ( v12
    && (*((_BYTE *)v12 + 216) & 1) != 0
    && !(*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v12 + 80LL))(v12, a4, 0LL)
    && !(unsigned int)IsPenDigitizerPresent() )
  {
    v12 = 0LL;
    *a7 = 0;
  }
LABEL_32:
  if ( !(*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, a4, 0LL) )
    goto LABEL_33;
  if ( !v8 && CManipulationContext::IsDefaultForBuildingChain(v14) )
    v12 = v14;
LABEL_38:
  v11 = a1;
LABEL_39:
  v25 = v12;
  if ( v12 )
  {
    v26 = *((_QWORD *)v12 + 17);
    v27 = 0LL;
    if ( v26 )
      v27 = *(CVisual **)(v26 + 8);
    while ( v27 )
    {
      *((_BYTE *)v27 + 93) |= 4u;
      if ( CVisual::GetInteractionInternal(v27) )
      {
        CVisual::GetInteractionInternal(v28);
        v30 = CVisual::GetInteractionInternal(v29);
        CInteraction::UpdateDefaultInteractionForCurrentMC(v30, v31);
        if ( !*a7 )
          *a7 = *((_BYTE *)CVisual::GetInteractionInternal(v28) + 216) & 1;
      }
      v27 = (CVisual *)*((_QWORD *)v28 + 10);
    }
    VisualEffectiveParent = 0LL;
    ++*((_DWORD *)v12 + a4 + 67);
    v33 = *((_QWORD *)v12 + 17);
    if ( v33 )
      VisualEffectiveParent = *(struct CVisual **)(v33 + 8);
    if ( VisualEffectiveParent )
    {
      if ( (unsigned int)CInteraction::GetTotalNumContacts(v12) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, v11);
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v34);
    }
    for ( j = 0;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v37) )
    {
      v36 = CVisual::GetInteractionInternal(VisualEffectiveParent);
      v38 = v36;
      if ( v36 )
      {
        if ( !j )
        {
          v39 = (CInteraction *)*((_QWORD *)v36 + 33);
          if ( v39 )
          {
            if ( v39 != v25 )
            {
              *((_QWORD *)v25 + 31) = v39;
              v40 = v39;
              *((_QWORD *)v39 + 32) = v25;
              while ( 1 )
              {
                v41 = (CInteraction *)*((_QWORD *)v40 + 31);
                if ( v41 == v25 )
                  break;
                v40 = (CInteraction *)*((_QWORD *)v40 + 31);
                if ( !v41 )
                  goto LABEL_63;
              }
              *((_QWORD *)v40 + 31) = 0LL;
LABEL_63:
              v42 = v25;
              while ( 1 )
              {
                v43 = (CInteraction *)*((_QWORD *)v42 + 32);
                if ( v43 == v39 )
                  break;
                v42 = (CInteraction *)*((_QWORD *)v42 + 32);
                if ( !v43 )
                  goto LABEL_68;
              }
              *((_QWORD *)v42 + 32) = 0LL;
            }
LABEL_68:
            j = 1;
          }
        }
        *((_QWORD *)v38 + 33) = v25;
        *((_QWORD *)v25 + 30) = v38;
        ++*((_DWORD *)v38 + a4 + 67);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v38) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
        v25 = v38;
      }
    }
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a6, v25);
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a6 + 1, v12);
}
