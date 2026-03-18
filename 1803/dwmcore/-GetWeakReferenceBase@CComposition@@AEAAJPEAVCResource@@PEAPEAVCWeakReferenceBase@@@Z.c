/*
 * XREFs of ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x180028078 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECO.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180028438 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x18003D410 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x180055008 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D9ED8 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180149DCC (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180149EBC (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016B810 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016BC14 (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019484C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180196D74 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AC98 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AE14 (-_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18019C424 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801A9534 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BE32C (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801C9E80 (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801C9EC0 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ??_GCWeakReferenceBase@@QEAAPEAXI@Z @ 0x180034AA0 (--_GCWeakReferenceBase@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComposition::GetWeakReferenceBase(
        CComposition *this,
        struct CResource *a2,
        struct CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  struct CWeakReferenceBase *v4; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  PVOID inserted; // rax
  unsigned int v11; // edx
  __int64 result; // rax
  struct CWeakReferenceBase **v13; // rax
  _QWORD *Buffer; // [rsp+30h] [rbp-28h] BYREF
  struct CResource *v15; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 NewElement; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
  {
    Buffer = 0LL;
    v15 = a2;
    v13 = (struct CWeakReferenceBase **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1112), &Buffer);
    v4 = *v13;
    ++*((_DWORD *)*v13 + 14);
  }
  else
  {
    v8 = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
    v9 = v8;
    if ( !v8 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    memset_0(v8, 0, 0x40uLL);
    *v9 = this;
    v9[1] = a2;
    v9[2] = 0LL;
    v9[3] = 0LL;
    *((_DWORD *)v9 + 8) = 0;
    *((_DWORD *)v9 + 9) = 0;
    *((_DWORD *)v9 + 10) = 0;
    v9[6] = 0LL;
    *((_DWORD *)v9 + 14) = 1;
    Buffer = v9;
    v15 = a2;
    NewElement = 0;
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1112), &Buffer, 0x10u, &NewElement);
    v9[6] = inserted;
    if ( inserted )
    {
      v4 = (struct CWeakReferenceBase *)v9;
      v9 = 0LL;
      *((_DWORD *)a2 + 8) |= 8u;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE14u);
    }
    if ( v9 )
      CWeakReferenceBase::`scalar deleting destructor'((CWeakReferenceBase *)v9, v11);
  }
  result = v3;
  *a3 = v4;
  return result;
}
