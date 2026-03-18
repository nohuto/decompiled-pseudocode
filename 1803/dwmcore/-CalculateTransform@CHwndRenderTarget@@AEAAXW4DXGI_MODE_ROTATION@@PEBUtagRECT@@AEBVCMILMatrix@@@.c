/*
 * XREFs of ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x18005FB64
 * Callers:
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18005FC6C (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x1801C6F38 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801C6F6C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::CalculateTransform(
        CHwndRenderTarget *this,
        enum DXGI_MODE_ROTATION a2,
        const struct tagRECT *a3,
        const struct CMILMatrix *a4)
{
  CMILMatrix *v4; // rbx
  int v6; // edx
  int v7; // edx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  float v12; // xmm2_4
  float v13; // xmm1_4
  int v14; // ecx

  v4 = (CHwndRenderTarget *)((char *)this + 220);
  *((_WORD *)this + 142) = 32085;
  *(_OWORD *)((char *)this + 220) = _xmm;
  *(_OWORD *)((char *)this + 236) = _xmm;
  *(_OWORD *)((char *)this + 252) = _xmm;
  *(_OWORD *)((char *)this + 268) = _xmm;
  *((_WORD *)this + 176) = 32085;
  *((_OWORD *)this + 18) = _xmm;
  *((_OWORD *)this + 19) = _xmm;
  *((_OWORD *)this + 20) = _xmm;
  *((_OWORD *)this + 21) = _xmm;
  *((_DWORD *)this + 52) = a2;
  *((_DWORD *)this + 53) = a3->right - a3->left;
  *((_DWORD *)this + 54) = a3->bottom - a3->top;
  if ( *(_QWORD *)&a3->left )
  {
    CMILMatrix::Translate(v4, (float)-a3->left, (float)-a3->top);
    v8 = *((_DWORD *)v4 + 16);
    v9 = *((_OWORD *)v4 + 1);
    *((_OWORD *)this + 18) = *(_OWORD *)v4;
    v10 = *((_OWORD *)v4 + 2);
    *((_OWORD *)this + 19) = v9;
    v11 = *((_OWORD *)v4 + 3);
    *((_OWORD *)this + 20) = v10;
    *((_OWORD *)this + 21) = v11;
    *((_DWORD *)this + 88) = v8;
  }
  v6 = a2 - 2;
  if ( !v6 )
  {
    CMILMatrix::Rotate270(v4);
    v14 = *((_DWORD *)this + 53);
    v13 = 0.0;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    CMILMatrix::Scale(v4, -1.0, -1.0, 1.0);
    v14 = *((_DWORD *)this + 54);
    v13 = (float)*((int *)this + 53);
LABEL_11:
    v12 = (float)v14;
    goto LABEL_12;
  }
  if ( v7 == 1 )
  {
    CMILMatrix::Rotate90(v4);
    v12 = 0.0;
    v13 = (float)*((int *)this + 54);
LABEL_12:
    CMILMatrix::Translate(v4, v13, v12);
    goto LABEL_7;
  }
  *((_DWORD *)this + 52) = 1;
LABEL_7:
  CMILMatrix::Multiply(v4, a4);
  CMILMatrix::SetToInverse((CHwndRenderTarget *)((char *)this + 356), v4);
}
