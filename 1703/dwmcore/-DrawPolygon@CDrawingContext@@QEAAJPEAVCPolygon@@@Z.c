/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18014BEDC
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18000CC78 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18000D414 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E1D8 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x180012E4C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x180020640 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800BF864 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x180177884 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x180177944 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v2; // ebx
  char v3; // r12
  char v4; // r13
  int v7; // eax
  unsigned int *v8; // rcx
  __int64 v9; // r15
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v11; // rcx
  struct CGeometry *v12; // r8
  int v13; // xmm0_4
  __int64 *v14; // rax
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  char v17; // r14
  int v18; // eax
  unsigned int v20; // [rsp+20h] [rbp-59h]
  bool v21; // [rsp+41h] [rbp-38h] BYREF
  char v22; // [rsp+42h] [rbp-37h]
  struct ID2D1Geometry *v23; // [rsp+48h] [rbp-31h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-19h]
  _OWORD v26[2]; // [rsp+68h] [rbp-11h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v22 = 0;
  if ( !*((_QWORD *)a2 + 31) )
  {
    v17 = 0;
    goto LABEL_24;
  }
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v26);
  if ( LODWORD(v26[0]) )
  {
    v7 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v26, 1);
    v2 = v7;
    if ( v7 < 0 )
    {
      v20 = 2921;
      goto LABEL_12;
    }
    v22 = 1;
  }
  *(float *)&v23 = *((float *)a2 + 56)
                 * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 3008);
  v7 = CWatermarkStack<float,64,2,10>::Push(v8, &v23);
  v2 = v7;
  if ( v7 < 0 )
  {
    v20 = 2927;
    goto LABEL_12;
  }
  v4 = 1;
  v7 = CDrawingContext::PushTransformInternal(this, 0LL, (struct CPolygon *)((char *)a2 + 144), 1, 1);
  v2 = v7;
  if ( v7 < 0 )
  {
    v20 = 2931;
    goto LABEL_12;
  }
  v9 = *((_QWORD *)a2 + 27);
  v3 = 1;
  if ( *(_QWORD *)(v9 + 232) )
  {
    v23 = 0LL;
    v21 = 1;
    v24[0] = 0LL;
    v24[1] = 0LL;
    v25 = 0LL;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
    v7 = CDrawingContext::D2DGeometryFromGeometry(
           v11,
           (struct D2D_SIZE_F *)(v9 + 128),
           v12,
           (unsigned __int64)TopByReference,
           &v23,
           &v21);
    v2 = v7;
    if ( v7 < 0 )
    {
      v20 = 2947;
    }
    else
    {
      if ( v21 )
      {
        v14 = 0LL;
      }
      else
      {
        v13 = *((_DWORD *)a2 + 36);
        v14 = v24;
        v15 = (__m128)*((unsigned int *)a2 + 49);
        DWORD1(v26[0]) = *((_DWORD *)a2 + 37);
        HIDWORD(v26[0]) = *((_DWORD *)a2 + 41);
        v16 = (__m128)*((unsigned int *)a2 + 48);
        LODWORD(v26[0]) = v13;
        DWORD2(v26[0]) = *((_DWORD *)a2 + 40);
        *(_OWORD *)v24 = v26[0];
        v25 = _mm_unpacklo_ps(v16, v15).m128_u64[0];
      }
      v7 = CDrawingContext::PushD2DLayer(this, (struct CVisual *)v9, 0LL, (__int64)v23, (__int64)v14, 1.0, 0, 0);
      v2 = v7;
      if ( v7 >= 0 )
      {
        v17 = 1;
        goto LABEL_19;
      }
      v20 = 2958;
    }
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v20);
    v17 = 0;
    goto LABEL_25;
  }
  v17 = 0;
LABEL_19:
  *((_QWORD *)this + 405) = a2;
  v18 = CPolygon::Draw(a2, this);
  v2 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xB95u);
    goto LABEL_25;
  }
LABEL_24:
  v4 = v3;
LABEL_25:
  *((_QWORD *)this + 405) = 0LL;
  if ( v17 )
    CDrawingContext::PopLayer(this);
  if ( v3 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v4 )
    CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 752);
  if ( v22 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v2;
}
