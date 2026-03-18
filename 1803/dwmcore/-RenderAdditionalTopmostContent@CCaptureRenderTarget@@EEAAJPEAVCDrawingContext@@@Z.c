/*
 * XREFs of ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z @ 0x180156750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180029954 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_3e91fc0059ef0e11538ef3fb06109632___ @ 0x18015545C (CComposition--ForEachCursorVisual__lambda_3e91fc0059ef0e11538ef3fb06109632___.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderAdditionalTopmostContent(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2)
{
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+70h] [rbp-10h]

  v17 = 0;
  v3 = (CTransform3D *)*((_QWORD *)this + 23);
  if ( v3 )
  {
    Matrix = CTransform3D::GetMatrix(v3, 0LL);
    v6 = *((_OWORD *)Matrix + 1);
    v13 = *(_OWORD *)Matrix;
    v7 = *((_OWORD *)Matrix + 2);
    v14 = v6;
    v8 = *((_OWORD *)Matrix + 3);
    LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
    v15 = v7;
    v16 = v8;
    v17 = (int)Matrix;
  }
  else
  {
    v13 = _xmm;
    LOWORD(v17) = 32085;
    v14 = _xmm;
    v15 = _xmm;
    v16 = _xmm;
  }
  CMILMatrix::Translate(
    (CMILMatrix *)&v13,
    COERCE_FLOAT(*((_DWORD *)this + 146) ^ _xmm),
    COERCE_FLOAT(*((_DWORD *)this + 147) ^ _xmm));
  v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v13, 1, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xEFu);
  }
  else
  {
    v11 = CComposition::ForEachCursorVisual__lambda_3e91fc0059ef0e11538ef3fb06109632___(
            *((_QWORD *)this + 2),
            (struct CComposition **)a2);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xF7u);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v10;
}
