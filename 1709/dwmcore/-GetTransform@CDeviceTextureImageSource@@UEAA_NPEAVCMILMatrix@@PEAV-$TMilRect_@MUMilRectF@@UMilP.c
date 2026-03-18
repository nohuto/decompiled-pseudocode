/*
 * XREFs of ?GetTransform@CDeviceTextureImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDeviceTextureImageSource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  return CDeviceTextureImageSource::DoGetTransform(a1 - 16, a2, a3);
}
