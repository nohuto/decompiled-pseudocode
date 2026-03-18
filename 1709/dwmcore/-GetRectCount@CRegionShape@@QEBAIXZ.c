/*
 * XREFs of ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18003524C
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180034FE0 (-GetRectangles@CRegionShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x1800C5B24 (-GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z.c)
 *     ?GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1801CBCB4 (-GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRegionShape::GetRectCount(CRegionShape *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 136LL))(v1);
  else
    return 0LL;
}
