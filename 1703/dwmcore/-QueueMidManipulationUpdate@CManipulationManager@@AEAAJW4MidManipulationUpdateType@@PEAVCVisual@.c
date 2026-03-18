/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18018AF70
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180086A4C (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18018A6F4 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18004EB10 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18004EBEC (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18018A1FC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180192E78 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180193A74 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180194F10 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801950A4 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  struct CInteraction *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  bool v9; // r14
  __int64 v10; // rcx
  const EVENT_DESCRIPTOR *v11; // rdx
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
  int v27; // eax
  struct CInteraction *v29; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = 1;
  if ( a2 > 9 || !a3 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x248u);
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
      if ( *((_QWORD *)InteractionInternal + 26) )
      {
        v21 = *((_QWORD *)InteractionInternal + 26);
        if ( v21 )
        {
          *((_QWORD *)InteractionInternal + 26) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        }
      }
    }
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v7, 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      goto LABEL_34;
    Template_xx(v22, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, v5, v7);
    goto LABEL_33;
  }
  if ( a2 == 1 )
  {
    v5 = CVisual::GetInteractionInternal((CVisual *)a3);
    v14 = (CInteraction *)*((_QWORD *)v5 + 31);
    while ( v14 )
    {
      TotalNumContacts = CInteraction::GetTotalNumContacts(v14);
      v14 = *(CInteraction **)(v16 + 232);
      LODWORD(v4) = TotalNumContacts + v4;
    }
    if ( (unsigned int)v4 < (unsigned int)CInteraction::GetTotalNumContacts(v5) )
    {
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor((const struct CVisual *)v7, v17);
      Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)v5 + 26, ClosestInteractionAncestor);
    }
    if ( !(_DWORD)v4 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v7) )
    {
      *(_BYTE *)(v7 + 90) &= ~4u;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, 0);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xx(v18, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, v5, v7);
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
    *(_BYTE *)(a3 + 90) &= ~4u;
    v29 = 0LL;
    v12 = CManipulationContext::TotalContactsCapturedUnderVisual(
            (const struct MCCollections *)(a1 + 120),
            (struct CVisual *)a3,
            &v29);
    v5 = v29;
    CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, v12);
    if ( v5 )
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v5 + 8LL))(v5);
    *(_BYTE *)(v7 + 90) |= 4u;
    v9 = v5 != 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v13, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v7);
LABEL_33:
    if ( !v9 )
      return v6;
    goto LABEL_34;
  }
  CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 80), 1, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    a3 = v7;
    v11 = (const EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
LABEL_10:
    Template_x(v10, v11, a3);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2A6u);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x2BBu);
    goto LABEL_45;
  }
  return v6;
}
