/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18003CC3C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18003D90C (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180040F90 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041C44 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800437C8 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180043A30 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058F90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800B53C8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B540C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800C2820 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18011ACB4 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017EA50 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x18017EB14 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  char v2; // r12
  unsigned int v5; // ebx
  char v6; // r15
  char v7; // r14
  char v8; // r13
  signed int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  signed int v12; // eax
  __int64 v13; // r14
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v15; // rcx
  struct CGeometry *v16; // r8
  signed int v17; // eax
  int v18; // xmm0_4
  __int64 *v19; // rax
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  signed int v22; // eax
  signed int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-59h]
  bool v26; // [rsp+41h] [rbp-38h] BYREF
  char v27; // [rsp+42h] [rbp-37h]
  char v28; // [rsp+43h] [rbp-36h]
  struct ID2D1Geometry *v29[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v30[2]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-11h]
  _OWORD v32[2]; // [rsp+70h] [rbp-9h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v28 = 0;
  v27 = 0;
  if ( !*((_QWORD *)a2 + 31) )
  {
    v2 = 0;
    goto LABEL_35;
  }
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v32);
  if ( !LODWORD(v32[0]) )
  {
LABEL_5:
    *(float *)v29 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 776, v29);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xA09u);
      goto LABEL_36;
    }
    v27 = 1;
    if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
    {
      v11 = CDrawingContext::PushTransformInternal(this, 0LL, (struct CPolygon *)((char *)a2 + 144), 1, 1);
      v5 = v11;
      if ( v11 < 0 )
      {
        v25 = 2575;
        goto LABEL_17;
      }
      v8 = 1;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1)) && v8 )
    {
      CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
      v12 = CDrawingContext::PushClippingScope(this, 0LL, 0, 0LL, 0);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xA21u);
        goto LABEL_18;
      }
      v6 = 1;
      v11 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (float *)v29, 1, 1, 0);
      v5 = v11;
      if ( v11 < 0 )
      {
        v25 = 2596;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v25);
LABEL_18:
        v2 = 0;
        goto LABEL_36;
      }
    }
    v13 = *((_QWORD *)a2 + 27);
    if ( !*(_QWORD *)(v13 + 232) )
    {
      v2 = 0;
LABEL_31:
      *((_QWORD *)this + 417) = a2;
      v23 = CPolygon::Draw(a2, this);
      v5 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xA47u);
      goto LABEL_35;
    }
    v29[0] = 0LL;
    v26 = 1;
    v30[0] = 0LL;
    v30[1] = 0LL;
    v31 = 0LL;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    v17 = CDrawingContext::D2DGeometryFromGeometry(
            v15,
            (const struct D2D_SIZE_F *)(v13 + 132),
            v16,
            (unsigned __int64)TopByReference,
            v29,
            &v26);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xA35u);
    }
    else
    {
      if ( v26 )
      {
        v19 = 0LL;
      }
      else
      {
        v18 = *((_DWORD *)a2 + 36);
        v19 = v30;
        v20 = (__m128)*((unsigned int *)a2 + 49);
        DWORD1(v32[0]) = *((_DWORD *)a2 + 37);
        HIDWORD(v32[0]) = *((_DWORD *)a2 + 41);
        v21 = (__m128)*((unsigned int *)a2 + 48);
        LODWORD(v32[0]) = v18;
        DWORD2(v32[0]) = *((_DWORD *)a2 + 40);
        *(_OWORD *)v30 = v32[0];
        v31 = _mm_unpacklo_ps(v21, v20).m128_u64[0];
      }
      v22 = CDrawingContext::PushD2DLayer(this, (struct CVisual *)v13, 0LL, (__int64)v29[0], (__int64)v19, 1.0, 0, 0);
      v5 = v22;
      if ( v22 >= 0 )
      {
        v2 = 1;
        goto LABEL_31;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0xA40u);
    }
    v2 = 0;
LABEL_35:
    v7 = v6;
    goto LABEL_36;
  }
  v9 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v32, 1);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v28 = 1;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xA04u);
LABEL_36:
  *((_QWORD *)this + 417) = 0LL;
  if ( v2 )
    CDrawingContext::PopLayer(this);
  if ( v7 )
    CDrawingContext::PopGpuClipRectInternal(this, 0);
  if ( v6 )
    CDrawingContext::PopClippingScope(this, 0);
  if ( v8 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v27 )
    CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 776);
  if ( v28 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v5;
}
