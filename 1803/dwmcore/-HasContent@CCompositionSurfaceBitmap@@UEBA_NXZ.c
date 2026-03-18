/*
 * XREFs of ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180186ED0
 * Callers:
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x18008FF00 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800925D0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::HasContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v1 + 144) + 32LL))(v1 + 144, &v4, &v5);
    if ( v4 )
      return v5 != 0;
  }
  return v2;
}
