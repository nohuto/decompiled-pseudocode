/*
 * XREFs of ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1800B804C
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800A9910 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HF@@@@Z @ 0x1800A9A20 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

struct CCachedVisualImage *__fastcall CImageLegacyMilBrush::GetCachedBrushCVINoRef(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *((_QWORD *)this + 66);
  v2 = 0LL;
  if ( v1 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 16) + 48LL))(v1 + 16, 15LL) )
    return (struct CCachedVisualImage *)v1;
  return (struct CCachedVisualImage *)v2;
}
