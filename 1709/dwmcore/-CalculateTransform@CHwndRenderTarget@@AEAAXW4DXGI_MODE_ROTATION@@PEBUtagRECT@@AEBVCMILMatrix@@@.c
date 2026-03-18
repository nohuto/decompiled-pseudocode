/*
 * XREFs of ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x180017620
 * Callers:
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800176C8 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18018FA0C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18018FA40 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::CalculateTransform(
        CHwndRenderTarget *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct CMILMatrix *a4)
{
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  _DWORD *v10; // r8
  const struct CMILMatrix *v11; // r9
  __int64 v12; // r10
  _DWORD *v13; // r11
  int v14; // edx
  int v15; // edx
  __int64 v16; // r11
  const struct CMILMatrix *v17; // r10
  int v18; // eax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  CMILMatrix *v22; // r10
  __int64 v23; // r11
  float v24; // xmm2_4
  float v25; // xmm1_4
  __int64 v26; // r11
  int v27; // ecx
  __int64 v28; // r11

  CMILMatrix::operator=((char *)this + 164, a2, a3, a4);
  v5 = v4 + 232;
  CMILMatrix::operator=(v4 + 232, v6, v7, v8);
  v13[38] = v9;
  v13[39] = v10[2] - *v10;
  v13[40] = v10[3] - v10[1];
  if ( *(_QWORD *)v10 )
  {
    CMILMatrix::Translate((CMILMatrix *)v12, (float)-*v10, (float)-v10[1]);
    v18 = *(_DWORD *)(v12 + 64);
    v19 = *(_OWORD *)(v12 + 16);
    *(_OWORD *)v5 = *(_OWORD *)v12;
    v20 = *(_OWORD *)(v12 + 32);
    *(_OWORD *)(v5 + 16) = v19;
    v21 = *(_OWORD *)(v12 + 48);
    *(_OWORD *)(v5 + 32) = v20;
    *(_OWORD *)(v5 + 48) = v21;
    *(_DWORD *)(v5 + 64) = v18;
  }
  v14 = v9 - 2;
  if ( !v14 )
  {
    CMILMatrix::Rotate270((CMILMatrix *)v12);
    v27 = *(_DWORD *)(v28 + 156);
    v25 = 0.0;
    goto LABEL_11;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    CMILMatrix::Scale((CMILMatrix *)v12, -1.0, -1.0, 1.0);
    v27 = *(_DWORD *)(v26 + 160);
    v25 = (float)*(int *)(v26 + 156);
LABEL_11:
    v24 = (float)v27;
    goto LABEL_12;
  }
  if ( v15 == 1 )
  {
    CMILMatrix::Rotate90((CMILMatrix *)v12);
    v24 = 0.0;
    v25 = (float)*(int *)(v23 + 160);
LABEL_12:
    CMILMatrix::Translate(v22, v25, v24);
    goto LABEL_7;
  }
  v13[38] = 1;
LABEL_7:
  CMILMatrix::Multiply((CMILMatrix *)v12, v11);
  CMILMatrix::SetToInverse((CMILMatrix *)(v16 + 300), v17);
}
