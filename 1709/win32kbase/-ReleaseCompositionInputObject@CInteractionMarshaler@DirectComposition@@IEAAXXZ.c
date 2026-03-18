/*
 * XREFs of ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C002207C
 * Callers:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0021C20 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0022274 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C00218F0 (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(
        DirectComposition::CInteractionMarshaler *this)
{
  CompositionInputObject *v2; // rcx

  v2 = (CompositionInputObject *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    CompositionInputObject::AssociateWithVisual(v2, 0LL);
    ObfDereferenceObject(*((PVOID *)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
}
