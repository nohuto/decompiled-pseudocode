/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC
 * Callers:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004F664 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180050310 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801968BC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18000A33C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800B9D7C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x180145834 (McTemplateU0p.c)
 *     McTemplateU0pp @ 0x18016A584 (McTemplateU0pp.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180195ECC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A1A94 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x1801A2994 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801A3ED0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801A4060 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  struct CInteraction *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  bool v9; // r14
  __int64 v10; // rcx
  EVENT_DESCRIPTOR *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  CInteraction *v14; // r8
  int TotalNumContacts; // eax
  __int64 v16; // r8
  bool *v17; // rdx
  __int64 v18; // rcx
  CArrayBasedCoverageSet *ClosestInteractionAncestor; // rax
  struct CInteraction *InteractionInternal; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  signed int v27; // eax
  struct CInteraction *v29; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = 1;
  if ( a2 > 9 || !a3 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x244u);
LABEL_45:
    if ( v4 )
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v4);
    return v6;
  }
  if ( !a2 )
  {
    InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
    v5 = InteractionInternal;
    if ( InteractionInternal )
    {
      if ( *((_QWORD *)InteractionInternal + 28) )
      {
        v21 = *((_QWORD *)InteractionInternal + 28);
        if ( v21 )
        {
          *((_QWORD *)InteractionInternal + 28) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        }
      }
    }
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v7, 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      goto LABEL_34;
    McTemplateU0pp(v22, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, v5, v7);
    goto LABEL_33;
  }
  if ( a2 == 1 )
  {
    v5 = CVisual::GetInteractionInternal((CVisual *)a3);
    v14 = (CInteraction *)*((_QWORD *)v5 + 33);
    while ( v14 )
    {
      TotalNumContacts = CInteraction::GetTotalNumContacts(v14);
      v14 = *(CInteraction **)(v16 + 248);
      LODWORD(v4) = TotalNumContacts + v4;
    }
    if ( (unsigned int)v4 < (unsigned int)CInteraction::GetTotalNumContacts(v5) )
    {
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor((const struct CVisual *)v7, v17);
      Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)v5 + 28, ClosestInteractionAncestor);
    }
    if ( !(_DWORD)v4 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v7) )
    {
      *(_BYTE *)(v7 + 93) &= ~4u;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, 0);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0pp(v18, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, v5, v7);
    goto LABEL_34;
  }
  if ( a2 != 2 )
  {
    v10 = a2 - 3;
    if ( a2 != 3 )
    {
      if ( a2 != 4 || (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_34;
      v11 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
      goto LABEL_10;
    }
    *(_BYTE *)(a3 + 93) &= ~4u;
    v29 = 0LL;
    v12 = CManipulationContext::TotalContactsCapturedUnderVisual(
            (const struct MCCollections *)(a1 + 120),
            (struct CVisual *)a3,
            &v29);
    v5 = v29;
    CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, v12);
    if ( v5 )
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v5 + 8LL))(v5);
    *(_BYTE *)(v7 + 93) |= 4u;
    v9 = v5 != 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0p(v13, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v7);
LABEL_33:
    if ( !v9 )
      return v6;
    goto LABEL_34;
  }
  CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 80), 1, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    a3 = v7;
    v11 = (EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
LABEL_10:
    McTemplateU0p(v10, v11, a3);
  }
LABEL_34:
  v23 = operator new(0x48uLL);
  v4 = (__int64)v23;
  if ( v23 )
  {
    memset_0(v23, 0, 0x48uLL);
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2A2u);
    return v6;
  }
  *(_DWORD *)v4 = a2;
  if ( *(_QWORD *)(v4 + 8) != v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v24 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = v7;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)(v4 + 16), v5);
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  v27 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v26, v25, v4);
  v6 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x2B7u);
    goto LABEL_45;
  }
  return v6;
}
