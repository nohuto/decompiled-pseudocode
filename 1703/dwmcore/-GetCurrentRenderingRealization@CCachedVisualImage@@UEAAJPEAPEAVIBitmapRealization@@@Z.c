/*
 * XREFs of ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047710
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetCurrentRenderingRealization(
        CCachedVisualImage *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v2; // r8

  v2 = (struct IBitmapRealization *)(((unsigned __int64)this + 72) & -(__int64)(this != (CCachedVisualImage *)8));
  *a2 = v2;
  (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
