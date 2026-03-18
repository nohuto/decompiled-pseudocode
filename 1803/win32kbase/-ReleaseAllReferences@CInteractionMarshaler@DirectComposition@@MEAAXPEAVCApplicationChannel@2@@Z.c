/*
 * XREFs of ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00044C0
 * Callers:
 *     ?ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00054E0 (-ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 * Callees:
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C0003F44 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0005150 (-ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C0005420 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0005454 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  if ( *((_DWORD *)this + 68) )
    CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((char *)this + 264);
  if ( *((_DWORD *)this + 72) )
    CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Reset((char *)this + 280);
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 37);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 37) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 38);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 38) = 0LL;
  }
  DirectComposition::CInteractionConfigurationGroup::ReleaseAllReferences((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
  DirectComposition::CInteractionConfigurationGroup::ReleaseAllReferences((DirectComposition::CInteractionMarshaler *)((char *)this + 144));
  DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(this);
}
