/*
 * XREFs of ?GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1801B08C4
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006F1C0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18006F270 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::GetPixelAlignedRectangles(CRegionShape *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = CRegionShape::GetRectCount(a1);
  if ( (_DWORD)result )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 144LL))(
             *((_QWORD **)a1 + 1),
             a2,
             a3);
  return result;
}
