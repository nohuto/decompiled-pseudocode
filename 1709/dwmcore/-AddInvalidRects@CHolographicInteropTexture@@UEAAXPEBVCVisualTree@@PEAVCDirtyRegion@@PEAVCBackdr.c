/*
 * XREFs of ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1801BE340
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180034434 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18011BBE0 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 */

void __fastcall CHolographicInteropTexture::AddInvalidRects(
        CHolographicInteropTexture *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rcx
  __int64 OptimizedDirtyRects; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rbp
  __m128 v12; // [rsp+20h] [rbp-38h] BYREF

  v4 = (__int64 *)((char *)this + 40);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 2722) )
    {
      CDirtyRegion::SetFullDirty(a3);
    }
    else
    {
      OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(v6);
      v9 = *(_DWORD *)(v8 + 1116);
      if ( v9 )
      {
        v10 = OptimizedDirtyRects + 8;
        v11 = v9;
        do
        {
          v12 = *(__m128 *)(v10 - 8);
          CDirtyRegion::Add(a3, 0LL, 0, &v12);
          v10 += 16LL;
          --v11;
        }
        while ( v11 );
      }
    }
    ReleaseInterface<CDisplay>(v4);
  }
}
