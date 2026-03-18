/*
 * XREFs of ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180091874 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800A85C4 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127B70 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127C68 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18013BCA4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18016BFF4 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016EBD8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z @ 0x180171E28 (-_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801731BC (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801783B0 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180188EE8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??_GCWeakReferenceBase@@QEAAPEAXI@Z @ 0x18011CDDC (--_GCWeakReferenceBase@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CComposition::GetWeakReferenceBase(
        CComposition *this,
        struct CResource *a2,
        struct CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  struct CWeakReferenceBase *v4; // rsi
  struct CWeakReferenceBase **v8; // rax
  __int64 result; // rax
  struct CWeakReferenceBase *v10; // rax
  struct CWeakReferenceBase *v11; // rbx
  PVOID inserted; // rax
  unsigned int v13; // edx
  struct CWeakReferenceBase *Buffer; // [rsp+30h] [rbp-28h] BYREF
  struct CResource *v15; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 NewElement; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
  {
    Buffer = 0LL;
    v15 = a2;
    v8 = (struct CWeakReferenceBase **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1088), &Buffer);
    v4 = *v8;
    ++*((_DWORD *)*v8 + 14);
  }
  else
  {
    v10 = (struct CWeakReferenceBase *)WPF::ProcessHeapImpl::AllocClear(0x40uLL);
    v11 = v10;
    if ( !v10 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)v10 = this;
    *((_QWORD *)v10 + 1) = a2;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_DWORD *)v10 + 8) = 0;
    *((_DWORD *)v10 + 9) = 0;
    *((_DWORD *)v10 + 10) = 0;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 14) = 1;
    Buffer = v10;
    v15 = a2;
    NewElement = 0;
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1088), &Buffer, 0x10u, &NewElement);
    *((_QWORD *)v11 + 6) = inserted;
    if ( inserted )
    {
      v4 = v11;
      v11 = 0LL;
      *((_DWORD *)a2 + 8) |= 8u;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xDE4u);
    }
    if ( v11 )
      CWeakReferenceBase::`scalar deleting destructor'(v11, v13);
  }
  result = v3;
  *a3 = v4;
  return result;
}
