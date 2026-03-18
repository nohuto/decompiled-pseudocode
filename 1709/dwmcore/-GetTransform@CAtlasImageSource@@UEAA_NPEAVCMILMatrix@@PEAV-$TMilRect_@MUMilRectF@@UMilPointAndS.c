/*
 * XREFs of ?GetTransform@CAtlasImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801CF4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CAtlasImageSource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasImageSource::DoGetTransform(a1 - 16, a2, a3);
}
