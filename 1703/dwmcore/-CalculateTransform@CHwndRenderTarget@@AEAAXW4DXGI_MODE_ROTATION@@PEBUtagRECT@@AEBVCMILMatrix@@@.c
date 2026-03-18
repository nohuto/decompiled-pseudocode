/*
 * XREFs of ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x18006C030
 * Callers:
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18006C0D4 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18018639C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801863D0 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::CalculateTransform(
        CHwndRenderTarget *this,
        enum DXGI_MODE_ROTATION a2,
        const struct tagRECT *a3,
        const struct CMILMatrix *a4)
{
  int v5; // edx
  _DWORD *v6; // r8
  const struct CMILMatrix *v7; // r9
  __int64 v8; // r11
  int v9; // edx
  int v10; // edx
  const struct CMILMatrix *v11; // r11
  int v12; // eax
  __int128 v13; // xmm1
  __int64 v14; // r10
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  CMILMatrix *v17; // r11
  float v18; // xmm2_4
  float v19; // xmm1_4
  int v20; // ecx

  CMILMatrix::operator=((char *)this + 164);
  CMILMatrix::operator=((char *)this + 232);
  *((_DWORD *)this + 38) = v5;
  *((_DWORD *)this + 39) = v6[2] - *v6;
  *((_DWORD *)this + 40) = v6[3] - v6[1];
  if ( *(_QWORD *)v6 )
  {
    CMILMatrix::Translate((CMILMatrix *)v8, (float)-*v6, (float)-v6[1]);
    v12 = *(_DWORD *)(v8 + 64);
    v13 = *(_OWORD *)(v8 + 16);
    *(_OWORD *)v14 = *(_OWORD *)v8;
    v15 = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(v14 + 16) = v13;
    v16 = *(_OWORD *)(v8 + 48);
    *(_OWORD *)(v14 + 32) = v15;
    *(_OWORD *)(v14 + 48) = v16;
    *(_DWORD *)(v14 + 64) = v12;
  }
  v9 = v5 - 2;
  if ( !v9 )
  {
    CMILMatrix::Rotate270((CMILMatrix *)v8);
    v20 = *((_DWORD *)this + 39);
    v19 = 0.0;
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CMILMatrix::Scale((CMILMatrix *)v8, -1.0, -1.0, 1.0);
    v20 = *((_DWORD *)this + 40);
    v19 = (float)*((int *)this + 39);
LABEL_11:
    v18 = (float)v20;
    goto LABEL_12;
  }
  if ( v10 == 1 )
  {
    CMILMatrix::Rotate90((CMILMatrix *)v8);
    v18 = 0.0;
    v19 = (float)*((int *)this + 40);
LABEL_12:
    CMILMatrix::Translate(v17, v19, v18);
    goto LABEL_7;
  }
  *((_DWORD *)this + 38) = 1;
LABEL_7:
  CMILMatrix::Multiply((CMILMatrix *)v8, v7);
  CMILMatrix::SetToInverse((CHwndRenderTarget *)((char *)this + 300), v11);
}
