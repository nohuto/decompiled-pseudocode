/*
 * XREFs of ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180186254
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x18018465C (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018E454 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18009AD10 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 */

void __fastcall CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
        CMILMatrix *this,
        struct CMILMatrix *a2,
        struct CMILMatrix *a3,
        bool *a4)
{
  float v8; // xmm2_4
  __int64 v9; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  bool v11; // al
  CMILMatrix *v12; // rcx
  float v13; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF

  CMILMatrix::Get2DScaleDimensions(this, &v14, &v13);
  *((_WORD *)a2 + 32) = 32085;
  v8 = v13;
  *(_OWORD *)a2 = _xmm;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  CMILMatrix::Scale(a2, v14, v8, 1.0);
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
  v11 = CMILMatrix::Invert(a3, v9, v10);
  *a4 = v11;
  if ( v11 )
    CMILMatrix::Multiply(v12, this);
}
