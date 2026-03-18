/*
 * XREFs of ?GetBounds@CDeviceTextureImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180216740
 * Callers:
 *     <none>
 * Callees:
 *     ?DoGetTransform@CDeviceTextureImageSource@@AEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802166D0 (-DoGetTransform@CDeviceTextureImageSource@@AEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 */

__int64 __fastcall CDeviceTextureImageSource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  v6 = 0;
  CDeviceTextureImageSource::DoGetTransform(a1 - 16, (__int64)v5, a4);
  return 0LL;
}
