/*
 * XREFs of ?GetBounds@CRenderTargetImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015AB40 (-GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 */

__int64 __fastcall CRenderTargetImageSource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  v6 = 0;
  CRenderTargetBitmap::GetTransform(a1 + 112, v5, a4);
  return 0LL;
}
