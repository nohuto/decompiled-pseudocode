/*
 * XREFs of ?ReleaseAllReferences@CSharedHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C015F530
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CPlaneCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014C3F0 (-ReleaseAllReferences@CPlaneCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicatio.c)
 */

void __fastcall DirectComposition::CSharedHolographicInteropTextureMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 10) = 0LL;
  }
  DirectComposition::CPlaneCaptureRenderTargetMarshaler::ReleaseAllReferences(this, a2);
}
