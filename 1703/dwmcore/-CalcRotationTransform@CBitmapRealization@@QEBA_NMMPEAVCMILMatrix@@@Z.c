/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x18013055C
 * Callers:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1801B66D8 (-CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x1801B6E60 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18018639C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801863D0 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        float a2,
        float a3,
        struct CMILMatrix *a4)
{
  float v5; // xmm7_4
  int v6; // eax
  int v7; // eax
  CMILMatrix *v8; // rcx

  *((_WORD *)a4 + 32) = 32085;
  *(_OWORD *)a4 = _xmm;
  *((_OWORD *)a4 + 1) = _xmm;
  *((_OWORD *)a4 + 2) = _xmm;
  *((_OWORD *)a4 + 3) = _xmm;
  v5 = a3;
  if ( *((int *)this + 60) >= 2 )
  {
    v6 = (*(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 96LL))(this) - 2;
    if ( !v6 )
    {
      CMILMatrix::Rotate270(a4);
      a3 = a2;
      a2 = 0.0;
      goto LABEL_8;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      CMILMatrix::Scale(a4, -1.0, -1.0, 1.0);
      goto LABEL_8;
    }
    if ( v7 == 1 )
    {
      CMILMatrix::Rotate90(a4);
      a3 = 0.0;
      a2 = v5;
LABEL_8:
      CMILMatrix::Translate(v8, a2, a3);
      return 1LL;
    }
  }
  return 0LL;
}
