/*
 * XREFs of ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x1801C418C
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C4524 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?AdjustSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXIPEAIPEAM1@Z @ 0x1801C3DE0 (-AdjustSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXIPEAIPEAM1@Z.c)
 *     ?CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@MMMMPEAHPEAIPEAM33@Z @ 0x1801C400C (-CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1801C714C (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

void __fastcall CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
        CViewportAlignedIntermediateRealizer *this,
        struct MilRectF *a2,
        struct MilRectF *a3,
        int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct CMILMatrix *a7,
        struct CMilPoint2F *a8)
{
  struct CMILMatrix *v8; // rdi
  struct CMilPoint2F *v9; // rbx
  int *v11; // rsi
  float v14; // xmm3_4
  float v15; // xmm2_4
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  unsigned int *v19; // rbx
  CViewportAlignedIntermediateRealizer *v20; // rcx
  CViewportAlignedIntermediateRealizer *v21; // rcx
  float v22; // [rsp+20h] [rbp-50h]
  float v23; // [rsp+28h] [rbp-48h]
  CViewportAlignedIntermediateRealizer *v24; // [rsp+B0h] [rbp+40h] BYREF
  float v25; // [rsp+B8h] [rbp+48h] BYREF
  float v26; // [rsp+C0h] [rbp+50h] BYREF

  v24 = this;
  v8 = a7;
  v9 = a8;
  v11 = (int *)a5;
  *(_OWORD *)a7 = _xmm;
  *((_OWORD *)v8 + 1) = _xmm;
  *((_WORD *)v8 + 32) = 32085;
  *((_OWORD *)v8 + 2) = _xmm;
  *((_OWORD *)v8 + 3) = _xmm;
  v14 = *((float *)a2 + 2);
  v15 = *(float *)a2;
  v23 = *((float *)a3 + 2);
  v22 = *(float *)a3;
  LODWORD(a7) = 1065353216;
  v26 = 1.0;
  LODWORD(v24) = 1065353216;
  v25 = 1.0;
  CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
    (__int64)this,
    (__int64)a2,
    v15,
    v14,
    v22,
    v23,
    a4,
    v11,
    (float *)&a7,
    (float *)&v24,
    v9);
  CMILMatrix::Set2DScaleAndOffset(v8, *(float *)&a7, 1.0, *(float *)&v24, 1.0);
  if ( !*a4 )
  {
    v18 = (_DWORD *)((char *)v9 + 4);
    v19 = a6;
    CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
      v17,
      v16,
      *((float *)a2 + 1),
      *((float *)a2 + 3),
      *((float *)a3 + 1),
      *((float *)a3 + 3),
      a4,
      (int *)a6,
      &v26,
      &v25,
      v18);
    CMILMatrix::Set2DScaleAndOffset(v8, *(float *)&a7, v26, *(float *)&v24, v25);
    if ( !*a4 )
    {
      CViewportAlignedIntermediateRealizer::AdjustSurfaceSizeAndMapping1D(
        v20,
        *v19,
        (unsigned int *)v11,
        (float *)&a7,
        (float *)&v24);
      CViewportAlignedIntermediateRealizer::AdjustSurfaceSizeAndMapping1D(v21, *v11, v19, &v26, &v25);
      CMILMatrix::Set2DScaleAndOffset(v8, *(float *)&a7, v26, *(float *)&v24, v25);
    }
  }
}
