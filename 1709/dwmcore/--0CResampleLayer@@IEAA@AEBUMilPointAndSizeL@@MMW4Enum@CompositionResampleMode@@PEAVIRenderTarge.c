/*
 * XREFs of ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@@Z @ 0x18014D258
 * Callers:
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18014D4D0 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180081418 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CResampleLayer::CResampleLayer(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4,
        int a5,
        struct IRenderTargetBitmap *a6)
{
  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a2, a6);
  *(_QWORD *)a1 = &CResampleLayer::`vftable';
  *(float *)(a1 + 116) = fmaxf(a3, 1.0);
  *(float *)(a1 + 120) = fmaxf(a4, 1.0);
  *(_DWORD *)(a1 + 112) = a5;
  return a1;
}
