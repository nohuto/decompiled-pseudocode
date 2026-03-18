/*
 * XREFs of ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18007CE50
 * Callers:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180163D90 (-GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetBitmapSource(
        CBitmapResource *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  __int64 v3; // rcx

  *a2 = (struct IBitmapSource *)*((_QWORD *)this + 9);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    (*(void (__fastcall **)(__int64, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)v3 + 8LL))(
      v3,
      a2,
      a3);
  return 0LL;
}
