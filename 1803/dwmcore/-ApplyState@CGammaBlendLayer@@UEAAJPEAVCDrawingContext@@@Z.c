/*
 * XREFs of ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176560
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024AB0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18006605C (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180176660 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 */

__int64 __fastcall CGammaBlendLayer::ApplyState(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0;
  v10[1] = 0;
  v10[2] = *((_DWORD *)this + 6);
  v10[3] = *((_DWORD *)this + 7);
  v4 = CDrawingContext::FlushD2D(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x48u);
  }
  else
  {
    v6 = *((_QWORD *)a2 + 45);
    v7 = CExternalLayer::ApplyState(this, a2);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4Du);
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(CGammaBlendLayer *, struct CDrawingContext *, __int64, char *, _DWORD *, int))CGammaBlendLayer::CopyAndTransform)(
             this,
             a2,
             v6,
             (char *)this + 16,
             v10,
             3);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4Fu);
    }
  }
  return v5;
}
