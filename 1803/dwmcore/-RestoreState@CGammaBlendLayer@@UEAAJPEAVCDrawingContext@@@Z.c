/*
 * XREFs of ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176B50
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024A00 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180176660 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 */

__int64 __fastcall CGammaBlendLayer::RestoreState(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8[6]; // [rsp+30h] [rbp-18h] BYREF

  v8[0] = 0;
  v8[1] = 0;
  v8[2] = *((_DWORD *)this + 6);
  v8[3] = *((_DWORD *)this + 7);
  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Fu);
  }
  else
  {
    v6 = CGammaBlendLayer::CopyAndTransform(
           (__int64)this,
           (__int64)a2,
           *((__int64 **)this + 1),
           v8,
           (__int64)this + 16,
           4u);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x61u);
  }
  return v5;
}
