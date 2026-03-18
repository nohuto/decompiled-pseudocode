/*
 * XREFs of ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x18008EA1C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18009520C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

const struct D2D_MATRIX_3X2_F *__fastcall CBrushRenderingGraph::GetSurfaceTransform(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  D2D1::Matrix3x2F *v7; // rax
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 2);
  v3 = 0LL;
  v4 = 3LL * a2;
  v5 = *(_QWORD *)(v2 + 8 * v4 + 8);
  if ( v5 )
  {
    v7 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(
                               v5,
                               *(unsigned int *)(v2 + 8 * v4 + 16));
    if ( D2D1::Matrix3x2F::IsIdentity(v7) )
      return 0LL;
    return (const struct D2D_MATRIX_3X2_F *)v8;
  }
  return (const struct D2D_MATRIX_3X2_F *)v3;
}
