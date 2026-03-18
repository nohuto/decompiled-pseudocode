/*
 * XREFs of ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800112AC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18001528C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180015610 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CClippedBitmapLayer::ApplyState(CClippedBitmapLayer *this, struct CDrawingContext *a2)
{
  char v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  float v7; // xmm2_4
  float v8; // xmm1_4
  int v9; // eax
  unsigned int v11; // [rsp+28h] [rbp-39h]
  _DWORD v12[12]; // [rsp+38h] [rbp-29h] BYREF
  _OWORD v13[4]; // [rsp+68h] [rbp+7h] BYREF
  __int16 v14; // [rsp+A8h] [rbp+47h]

  memset_0(v12, 0, 0x28uLL);
  v4 = 0;
  v13[0] = _xmm;
  v14 = 32085;
  v13[1] = _xmm;
  v13[2] = _xmm;
  v13[3] = _xmm;
  v5 = CExternalLayer::ApplyRenderTarget(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 89;
  }
  else
  {
    *((_BYTE *)this + 36) = *((_BYTE *)a2 + 6771);
    *((_BYTE *)a2 + 6771) = 0;
    LODWORD(v7) = *((_DWORD *)this + 29) ^ _xmm;
    LODWORD(v8) = *((_DWORD *)this + 28) ^ _xmm;
    *((_BYTE *)this + 35) = 1;
    CMILMatrix::SetTranslation((CMILMatrix *)v13, v8, v7, 0.0);
    v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v13, 0, 0);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Au);
      goto LABEL_8;
    }
    v12[5] = 0;
    v12[0] = 16;
    v4 = 1;
    v5 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v12, 0);
    v6 = v5;
    if ( v5 >= 0 )
      return v6;
    v11 = 117;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v11);
LABEL_8:
  CExternalLayer::RestoreState(this, a2);
  if ( v4 )
    CDrawingContext::PopTransformInternal(a2, 0);
  return v6;
}
