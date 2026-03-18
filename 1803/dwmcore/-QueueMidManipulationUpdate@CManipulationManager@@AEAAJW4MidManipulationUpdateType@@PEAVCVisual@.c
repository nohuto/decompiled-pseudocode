/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801CFE6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004D638 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004F9E8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801CEEA0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180025878 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180026488 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x180140408 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     McTemplateU0pp @ 0x18014AD40 (McTemplateU0pp.c)
 *     McTemplateU0p @ 0x18016CFBC (McTemplateU0p.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1801CE944 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801DA5E4 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x1801DB4C4 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801DC99C (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801DCB2C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
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
  Dwm3DRECompositorThunk *ClosestInteractionAncestor; // rax
  struct CInteraction *InteractionInternal; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  struct CInteraction *v29; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = 1;
  if ( a2 > 9 || !a3 )
  {
    v6 = -2147024809;
    v27 = 584;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v27);
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
      v21 = *((_QWORD *)InteractionInternal + 24);
      if ( v21 )
      {
        *((_QWORD *)InteractionInternal + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v7, 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      goto LABEL_33;
    McTemplateU0pp(v22, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, v5, v7);
    goto LABEL_32;
  }
  if ( a2 == 1 )
  {
    v5 = CVisual::GetInteractionInternal((CVisual *)a3);
    v14 = (CInteraction *)*((_QWORD *)v5 + 29);
    while ( v14 )
    {
      TotalNumContacts = CInteraction::GetTotalNumContacts(v14);
      v14 = *(CInteraction **)(v16 + 216);
      LODWORD(v4) = TotalNumContacts + v4;
    }
    if ( (unsigned int)v4 < (unsigned int)CInteraction::GetTotalNumContacts(v5) )
    {
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor((const struct CVisual *)v7, v17);
      Microsoft::WRL::ComPtr<CInteraction>::operator=((Dwm3DRECompositorThunk **)v5 + 24, ClosestInteractionAncestor);
    }
    if ( !(_DWORD)v4 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v7) )
    {
      *(_BYTE *)(v7 + 93) &= ~0x40u;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, 0);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0pp(v18, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, v5, v7);
    goto LABEL_33;
  }
  if ( a2 != 2 )
  {
    v10 = a2 - 3;
    if ( a2 != 3 )
    {
      if ( a2 != 4 || (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_33;
      v11 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
      goto LABEL_10;
    }
    *(_BYTE *)(a3 + 93) &= ~0x40u;
    v29 = 0LL;
    v12 = CManipulationContext::TotalContactsCapturedUnderVisual(
            (const struct MCCollections *)(a1 + 120),
            (struct CVisual *)a3,
            &v29);
    v5 = v29;
    CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, v12);
    if ( v5 )
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v5 + 8LL))(v5);
    *(_BYTE *)(v7 + 93) |= 0x40u;
    v9 = v5 != 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0p(v13, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v7);
LABEL_32:
    if ( !v9 )
      return v6;
    goto LABEL_33;
  }
  CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 80), 1, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    a3 = v7;
    v11 = (const EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
LABEL_10:
    McTemplateU0p(v10, v11, a3);
  }
LABEL_33:
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2A6u);
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
  Microsoft::WRL::ComPtr<CInteraction>::operator=((Dwm3DRECompositorThunk **)(v4 + 16), v5);
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  v6 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v26, v25, v4);
  if ( (v6 & 0x80000000) != 0 )
  {
    v27 = 699;
    goto LABEL_44;
  }
  return v6;
}
