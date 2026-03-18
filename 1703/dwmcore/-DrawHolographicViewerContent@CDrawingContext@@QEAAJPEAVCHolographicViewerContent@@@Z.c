/*
 * XREFs of ?DrawHolographicViewerContent@CDrawingContext@@QEAAJPEAVCHolographicViewerContent@@@Z @ 0x18014B6E8
 * Callers:
 *     ?Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5190 (-Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D99C (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A79A4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawHolographicViewerContent(
        CDrawingContext *this,
        struct CHolographicViewerContent *a2)
{
  float *v2; // rdi
  float *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = (float *)((char *)a2 + 104);
  v4 = (float *)((char *)a2 + 120);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)a2 + 12) + 184LL))(*((_QWORD *)a2 + 12), &v9);
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x141u);
  v6 = 0;
  if ( !IsRectEmptyOrInvalid(v4) && !IsRectEmptyOrInvalid(v2) )
  {
    v7 = CDrawingContext::DrawBitmapSource(this, v9, (__int64)v4, v2, *((_DWORD *)this + 1674), 0, 0, 0LL);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBCAu);
  }
  ReleaseInterface<ID2D1Geometry>(&v9);
  return v6;
}
