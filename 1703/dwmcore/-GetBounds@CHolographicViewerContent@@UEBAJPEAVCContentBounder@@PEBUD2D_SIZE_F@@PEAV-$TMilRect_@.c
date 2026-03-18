/*
 * XREFs of ?GetBounds@CHolographicViewerContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A55A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicViewerContent::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 result; // rax

  if ( !a4 )
    return 2147500035LL;
  result = 0LL;
  *a4 = *(_OWORD *)(a1 + 104);
  return result;
}
