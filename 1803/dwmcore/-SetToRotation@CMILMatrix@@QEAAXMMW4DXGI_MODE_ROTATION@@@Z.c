/*
 * XREFs of ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1801C73BC
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C50 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x18013D934 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801DED94 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x1801C6F38 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801C6F6C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  int v4; // r9d
  int v5; // r9d
  CMILMatrix *v6; // rcx
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm4_4

  *((_WORD *)this + 32) = 32085;
  *(_OWORD *)this = _xmm;
  *((_OWORD *)this + 1) = _xmm;
  *((_OWORD *)this + 2) = _xmm;
  *((_OWORD *)this + 3) = _xmm;
  v4 = a4 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      CMILMatrix::Rotate90(this);
      v7 = 0.0;
      v9 = v8;
    }
    else
    {
      CMILMatrix::Scale(this, -1.0, -1.0, 1.0);
      v7 = v10;
      v9 = v11;
    }
  }
  else
  {
    CMILMatrix::Rotate270(this);
    v7 = v12;
    v9 = 0.0;
  }
  CMILMatrix::Translate(v6, v9, v7);
}
