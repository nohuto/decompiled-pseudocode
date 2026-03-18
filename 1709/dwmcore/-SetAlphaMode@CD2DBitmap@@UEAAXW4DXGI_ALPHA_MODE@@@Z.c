/*
 * XREFs of ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1801ABCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18004CA20 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DBitmap::SetAlphaMode(CD2DBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  if ( *((_DWORD *)this + 29) != a2 )
  {
    *((_DWORD *)this + 29) = a2;
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 6);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 7);
    CD2DBitmap::InitializeBitmaps((CD2DBitmap *)((char *)this - 104));
  }
}
