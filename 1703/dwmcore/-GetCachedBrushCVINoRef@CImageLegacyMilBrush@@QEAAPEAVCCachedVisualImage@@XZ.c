/*
 * XREFs of ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18007B360
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18009BB30 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009BC50 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180047630 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007CD50 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

struct CCachedVisualImage *__fastcall CImageLegacyMilBrush::GetCachedBrushCVINoRef(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  bool (__fastcall *v4)(__int64, int); // rax
  char v5; // al

  v1 = *((_QWORD *)this + 66);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = v1 + 16;
    v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)(v1 + 16) + 48LL);
    if ( v4 == CCachedVisualImage::IsOfType )
    {
      v5 = CCachedVisualImage::IsOfType(v3, 61);
    }
    else if ( (char *)v4 == (char *)CBitmapResource::IsOfType )
    {
      v5 = CBitmapResource::IsOfType(v3, 61LL);
    }
    else
    {
      v5 = v4(v3, 61);
    }
    if ( v5 )
      return (struct CCachedVisualImage *)v1;
  }
  return (struct CCachedVisualImage *)v2;
}
