/*
 * XREFs of ?ReleaseAllReferences@CPlaneCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014C3F0
 * Callers:
 *     ?ReleaseAllReferences@CSharedHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C015F530 (-ReleaseAllReferences@CSharedHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CPlaneCaptureRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CPlaneCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 9) = 0LL;
  }
}
