/*
 * XREFs of ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x180080520
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 */

void __fastcall CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
        CTreeEffectLayer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        const struct D2D_POINT_2F *a6,
        struct CMILMatrix *a7,
        struct D2D_SIZE_F *a8)
{
  CMILMatrix *v8; // rcx
  __int64 v9; // r10
  float v10; // xmm5_4
  float *v11; // r10
  struct D2D_SIZE_F *v12; // rax
  float v13; // xmm0_4
  float *v14; // r10

  *((_WORD *)a7 + 32) = 32085;
  *(_OWORD *)a7 = _xmm;
  *((_OWORD *)a7 + 1) = _xmm;
  *((_OWORD *)a7 + 2) = _xmm;
  *((_OWORD *)a7 + 3) = _xmm;
  CMILMatrix::Scale(a7, 1.0 / a4, 1.0 / a5, 1.0);
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 248) + 528LL) )
  {
    CMILMatrix::Translate(v8, *(float *)(v9 + 220) - a6->x, *(float *)(v9 + 224) - a6->y);
    v12 = a8;
    a8->width = v11[68] * v11[57];
    v13 = v11[69] * v11[58];
  }
  else
  {
    CMILMatrix::Translate(v8, a2, v10);
    v12 = a8;
    a8->width = v14[49] - v14[47];
    v13 = v14[50] - v14[48];
  }
  v12->height = v13;
}
