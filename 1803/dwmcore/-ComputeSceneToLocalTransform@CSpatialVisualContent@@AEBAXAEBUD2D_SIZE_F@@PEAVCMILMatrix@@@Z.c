/*
 * XREFs of ?ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801C1E10
 * Callers:
 *     ?Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C1F40 (-Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2030 (-Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMil3DRect@MV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800A3834 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3958 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialVisualContent::ComputeSceneToLocalTransform(
        CSpatialVisualContent *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm5_4
  float v8[4]; // [rsp+40h] [rbp-48h] BYREF
  float v9[4]; // [rsp+50h] [rbp-38h] BYREF

  (*(void (__fastcall **)(_QWORD, float *, float *))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8), v8, v9);
  v5 = fminf(a2->width, a2->height) * 0.5;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9[0]) & _xmm);
  v7 = fmaxf(
         fmaxf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8[0]) & _xmm), v6),
         fmaxf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8[1]) & _xmm), COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9[1]) & _xmm)));
  if ( v7 > 0.0 )
    v5 = v5 / v7;
  CMILMatrix::SetScale(a3, v5, COERCE_FLOAT(LODWORD(v5) ^ _xmm), v5, 0.0, 0.0, 0.0);
  CMILMatrix::Translate(a3, a2->width * 0.5, a2->height * 0.5, 0.0);
}
