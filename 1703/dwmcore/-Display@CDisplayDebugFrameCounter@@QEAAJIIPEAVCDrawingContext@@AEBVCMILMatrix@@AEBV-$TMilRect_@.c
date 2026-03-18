/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180143680
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180146300 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18000CC78 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180143974 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801863D0 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        __int64 a5,
        __int128 *a6,
        int a7,
        _OWORD *a8)
{
  _OWORD *v11; // r14
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _OWORD v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+90h] [rbp-70h]
  _OWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+E0h] [rbp-20h]
  int v29; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v30[9]; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v31[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v32[2]; // [rsp+128h] [rbp+28h] BYREF

  v26 = 0;
  v11 = 0LL;
  v12 = *(_OWORD *)(a5 + 16);
  v27[0] = *(_OWORD *)a5;
  v13 = *(_OWORD *)(a5 + 32);
  v27[1] = v12;
  v14 = *(_OWORD *)(a5 + 48);
  v15 = *(_DWORD *)(a5 + 64);
  v27[2] = v13;
  v16 = *a6;
  v28 = v15;
  v27[3] = v14;
  *(_OWORD *)v32 = v16;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v27) )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v27, v17, (float *)v32);
  if ( a7 == 1 )
  {
    v25[0] = _xmm;
    LOWORD(v26) = 32085;
    v25[1] = _xmm;
    v25[2] = _xmm;
    v25[3] = _xmm;
    CMILMatrix::Rotate90((CMILMatrix *)v25);
    CMILMatrix::Translate((CMILMatrix *)v25, *(float *)&v32[1], 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v27, (const struct CMILMatrix *)v25);
    v11 = v25;
  }
  v31[1] = 0LL;
  v31[0] = 0LL;
  memset_0(v30, 0, sizeof(v30));
  v30[0] = 0;
  v29 = 2;
  v18 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)&v29, 1);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x40u);
  }
  else
  {
    v20 = CDrawingContext::PushTransformInternal(a4, 0LL, (const struct CMILMatrix *)v27, 0, 1);
    v19 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x43u);
    }
    else
    {
      v21 = CDrawingContext::ApplyRenderStateInternal(a4, 0);
      v19 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x47u);
      }
      else
      {
        v22 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, a4, (__int64)v32, a7, (__int64)v31);
        v19 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x49u);
        }
        else if ( v11 )
        {
          *(_OWORD *)v32 = *(_OWORD *)v31;
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, (__int64)v32, (float *)v31);
        }
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v31;
  return v19;
}
