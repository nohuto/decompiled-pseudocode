/*
 * XREFs of ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000A8D8
 * Callers:
 *     ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0007CE0 (-ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicati.c)
 *     ?SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0007DA4 (-SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0009970 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000A090 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0149330 (-ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C01499BC (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014DE50 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4ScrollAxis@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C014E6B4 (-SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChan.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C014EB40 (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C014EBFC (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 * Callees:
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C00079D4 (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseWeakReference(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CWeakReferenceBase *a2)
{
  bool v2; // zf
  __int64 v4; // rbx

  v2 = (*((_DWORD *)a2 + 2))-- == 1;
  v4 = *((_QWORD *)a2 + 2);
  if ( v2 )
  {
    Win32FreePool(a2);
    if ( v4 )
    {
      DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject(
        (PRTL_GENERIC_TABLE)((char *)this + 264),
        v4);
      *(_DWORD *)(v4 + 16) &= ~4u;
    }
  }
}
