/*
 * XREFs of ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800457D0
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C50 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetRotation(CDxHandleBitmapRealization *this)
{
  switch ( *((_DWORD *)this + 54) )
  {
    case 1:
      return 1LL;
    case 2:
      return 2LL;
    case 3:
      return 3LL;
  }
  if ( *((_DWORD *)this + 54) != 4 )
    return 1LL;
  return 4LL;
}
