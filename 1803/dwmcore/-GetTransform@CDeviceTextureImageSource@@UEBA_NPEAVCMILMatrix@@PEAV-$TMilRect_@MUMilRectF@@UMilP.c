/*
 * XREFs of ?GetTransform@CDeviceTextureImageSource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802168B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDeviceTextureImageSource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  return CDeviceTextureImageSource::DoGetTransform(a1 - 24, a2, a3);
}
