/*
 * XREFs of ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0021C20
 * Callers:
 *     ?ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008AEF0 (-ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C001EAB0 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C001EAE4 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C002207C (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0022C68 (-ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  if ( *((_DWORD *)this + 60) )
    CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
      (__int64 *)this + 29,
      (__int64)a2,
      a3);
  if ( *((_DWORD *)this + 64) )
    CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Reset(
      (__int64)this + 248,
      (__int64)a2,
      a3);
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 33);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 33) = 0LL;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 34);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 34) = 0LL;
  }
  DirectComposition::CInteractionConfigurationGroup::ReleaseAllReferences((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
  DirectComposition::CInteractionConfigurationGroup::ReleaseAllReferences((DirectComposition::CInteractionMarshaler *)((char *)this + 128));
  DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(this);
}
