/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x18001E0D4
 * Callers:
 *     ?HasDirtyBackdrop@CDirtyRegion@@QEBA_NAEBUMilRectF@@PEBVCVisualTree@@H@Z @ 0x18001DECC (-HasDirtyBackdrop@CDirtyRegion@@QEBA_NAEBUMilRectF@@PEBVCVisualTree@@H@Z.c)
 *     ?GetOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@IPEAV2@@Z @ 0x180131CB8 (-GetOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18001382C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CDirtyRegionAnnotation::GetZ(CVisual **this, const struct CVisualTree *a2, char a3)
{
  struct COcclusionInfo *OcclusionInfo; // rax

  OcclusionInfo = CVisual::GetOcclusionInfo(this[2], a2);
  if ( !OcclusionInfo )
    return a3 == 0 ? 0x7FFFFFFF : 0;
  if ( *((_BYTE *)this + 24) && a3 )
    return *((_DWORD *)OcclusionInfo + 3);
  return (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
}
