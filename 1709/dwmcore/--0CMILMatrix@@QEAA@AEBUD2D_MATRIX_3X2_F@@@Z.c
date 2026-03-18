/*
 * XREFs of ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180059098
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

CMILMatrix *__fastcall CMILMatrix::CMILMatrix(CMILMatrix *this, const struct D2D_MATRIX_3X2_F *a2)
{
  CMILMatrix *result; // rax

  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = *(_QWORD *)&a2->m11;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = *(_QWORD *)&a2->m[1][0];
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_QWORD *)this + 6) = *(_QWORD *)&a2->m[2][0];
  result = this;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  return result;
}
