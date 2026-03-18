/*
 * XREFs of ??$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z @ 0x18007B300
 * Callers:
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18007A9E8 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x18007B190 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ??0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z @ 0x1800C832C (--0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z.c)
 *     ?Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z @ 0x18019EAC8 (-Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0F30 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetInterface<ID2D1Bitmap1,ID2D1Bitmap1>(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *a1 = a2;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
