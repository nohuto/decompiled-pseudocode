/*
 * XREFs of ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18002F284 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800326B8 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18004B67C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800856C0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800CF1F4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18012C7B4 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18013F2FC (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18013F3F4 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x180163270 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016E9A8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180181B78 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?InsertDependenciesInOrder@CInteractionTrackerPositionAnimation@@MEAAX_K@Z @ 0x1801831A0 (-InsertDependenciesInOrder@CInteractionTrackerPositionAnimation@@MEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x180183780 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ??_GCWeakReferenceBase@@QEAAPEAXI@Z @ 0x180133A4C (--_GCWeakReferenceBase@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CComposition::GetWeakReferenceBase(
        struct _RTL_GENERIC_TABLE *this,
        struct CResource *a2,
        struct CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  struct CWeakReferenceBase *v4; // rsi
  struct CWeakReferenceBase **v8; // rax
  __int64 result; // rax
  struct _RTL_GENERIC_TABLE **v10; // rax
  struct CWeakReferenceBase *v11; // rbx
  PVOID inserted; // rax
  unsigned int v13; // edx
  struct _RTL_GENERIC_TABLE **Buffer; // [rsp+30h] [rbp-28h] BYREF
  struct CResource *v15; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 NewElement; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
  {
    Buffer = 0LL;
    v15 = a2;
    v8 = (struct CWeakReferenceBase **)RtlLookupElementGenericTable(this + 16, &Buffer);
    v4 = *v8;
    ++*((_DWORD *)*v8 + 14);
  }
  else
  {
    v10 = (struct _RTL_GENERIC_TABLE **)WPF::ProcessHeapImpl::AllocClear(0x40uLL);
    v11 = (struct CWeakReferenceBase *)v10;
    if ( !v10 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      JUMPOUT(0x1800F1E3ALL);
    }
    *v10 = this;
    v10[1] = (struct _RTL_GENERIC_TABLE *)a2;
    v10[2] = 0LL;
    v10[3] = 0LL;
    *((_DWORD *)v10 + 8) = 0;
    *((_DWORD *)v10 + 9) = 0;
    *((_DWORD *)v10 + 10) = 0;
    v10[6] = 0LL;
    *((_DWORD *)v10 + 14) = 1;
    Buffer = v10;
    v15 = a2;
    NewElement = 0;
    inserted = RtlInsertElementGenericTable(this + 16, &Buffer, 0x10u, &NewElement);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF74u);
    }
    if ( v11 )
      CWeakReferenceBase::`scalar deleting destructor'(v11, v13);
  }
  result = v3;
  *a3 = v4;
  return result;
}
