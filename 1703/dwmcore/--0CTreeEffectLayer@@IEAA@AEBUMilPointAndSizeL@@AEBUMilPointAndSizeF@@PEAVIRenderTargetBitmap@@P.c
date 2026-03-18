/*
 * XREFs of ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@4MM@Z @ 0x1800150E4
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18001AA50 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrus.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180015244 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::CTreeEffectLayer(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        __int128 *a3,
        struct IRenderTargetBitmap *a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int128 *a8,
        int a9,
        int a10)
{
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 result; // rax

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a2, a4);
  *(_QWORD *)a1 = &CTreeEffectLayer::`vftable';
  *(_OWORD *)(a1 + 116) = *(_OWORD *)a7;
  *(_OWORD *)(a1 + 132) = *(_OWORD *)(a7 + 16);
  *(_OWORD *)(a1 + 148) = *(_OWORD *)(a7 + 32);
  *(_OWORD *)(a1 + 164) = *(_OWORD *)(a7 + 48);
  v12 = *a3;
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(a7 + 64);
  v13 = *a8;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 232) = a5;
  *(_OWORD *)(a1 + 184) = v13;
  *(_OWORD *)(a1 + 216) = v12;
  result = a1;
  *(_OWORD *)(a1 + 248) = *a6;
  *(_DWORD *)(a1 + 268) = a10;
  *(_DWORD *)(a1 + 264) = a9;
  return result;
}
