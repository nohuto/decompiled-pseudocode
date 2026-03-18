/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18015EF00 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800192A4 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006BDCC (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18006C62C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800BE2F8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE36C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800DAA1C (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18013D0F8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18013D230 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18013D41C (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801AF910 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1801AFA40 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r15
  char v6; // r14
  char v7; // r13
  char v8; // r12
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r14
  struct CGeometry *v15; // rdx
  int v16; // eax
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v18; // rcx
  const struct CShape *v19; // r10
  int v20; // eax
  int v21; // xmm0_4
  __int64 *v22; // rax
  int v23; // xmm1_4
  int v24; // xmm0_4
  __int64 v25; // xmm1_8
  int v26; // eax
  unsigned int v28; // [rsp+20h] [rbp-69h]
  unsigned int v29; // [rsp+20h] [rbp-69h]
  bool v30; // [rsp+41h] [rbp-48h] BYREF
  char v31; // [rsp+42h] [rbp-47h]
  char v32; // [rsp+43h] [rbp-46h]
  struct ID2D1Geometry *v33; // [rsp+48h] [rbp-41h] BYREF
  CRectanglesShape *v34; // [rsp+50h] [rbp-39h] BYREF
  char v35; // [rsp+58h] [rbp-31h]
  __int64 v36[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v37; // [rsp+70h] [rbp-19h]
  _OWORD v38[2]; // [rsp+78h] [rbp-11h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v31 = 0;
  v8 = 0;
  v32 = 0;
  if ( !*((_QWORD *)a2 + 31) )
    goto LABEL_33;
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v38);
  if ( LODWORD(v38[0]) != v9 )
  {
    v10 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v38, 1);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xA17u);
      goto LABEL_34;
    }
    v32 = 1;
  }
  *(float *)&v33 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
  v11 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 776, &v33);
  v4 = v11;
  if ( v11 >= 0 )
  {
    if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
    {
      v12 = CDrawingContext::PushTransformInternal(this, 0LL, (struct CPolygon *)((char *)a2 + 144), 1, 1);
      v4 = v12;
      if ( v12 < 0 )
      {
        v28 = 2594;
        goto LABEL_17;
      }
      v7 = 1;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1)) && v7 )
    {
      CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v34);
      v13 = CDrawingContext::PushClippingScope(this, 0LL, 0, 0LL, 0);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA34u);
        goto LABEL_18;
      }
      v5 = 1;
      v12 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (float *)&v34, 1, 1, 0);
      v4 = v12;
      if ( v12 < 0 )
      {
        v28 = 2615;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v28);
LABEL_18:
        v8 = 1;
        goto LABEL_34;
      }
    }
    v14 = *((_QWORD *)a2 + 27);
    v15 = *(struct CGeometry **)(v14 + 240);
    if ( !v15 )
      goto LABEL_30;
    v34 = 0LL;
    v35 = 0;
    v16 = CDrawingContext::ShapeDataFromGeometry((const struct D2D_SIZE_F *)(v14 + 132), v15, (struct CShapePtr *)&v34);
    v4 = v16;
    if ( v16 < 0 )
    {
      v29 = 2624;
    }
    else
    {
      if ( !v34 )
      {
LABEL_29:
        CShapePtr::Release(&v34);
LABEL_30:
        *((_QWORD *)this + 417) = a2;
        v26 = CPolygon::Draw(a2, this);
        v4 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xA5Fu);
        goto LABEL_32;
      }
      v33 = 0LL;
      v30 = 1;
      v36[0] = 0LL;
      v36[1] = 0LL;
      v37 = 0LL;
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      v20 = CDrawingContext::D2DGeometryFromShape(v18, v19, TopByReference, &v33, &v30);
      v4 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xA4Cu);
        goto LABEL_49;
      }
      if ( v30 )
      {
        v22 = 0LL;
      }
      else
      {
        v21 = *((_DWORD *)a2 + 36);
        v22 = v36;
        DWORD1(v38[0]) = *((_DWORD *)a2 + 37);
        v23 = *((_DWORD *)a2 + 41);
        LODWORD(v38[0]) = v21;
        v24 = *((_DWORD *)a2 + 40);
        HIDWORD(v38[0]) = v23;
        v25 = *((_QWORD *)a2 + 24);
        DWORD2(v38[0]) = v24;
        v37 = v25;
        *(_OWORD *)v36 = v38[0];
      }
      v16 = CDrawingContext::PushD2DLayer(this, (struct CVisual *)v14, 0LL, (__int64)v33, (__int64)v22, 1.0, 0, 0);
      v4 = v16;
      if ( v16 >= 0 )
      {
        v31 = 1;
        goto LABEL_29;
      }
      v29 = 2647;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v29);
LABEL_49:
    CShapePtr::Release(&v34);
LABEL_32:
    v8 = 1;
LABEL_33:
    v6 = v5;
    goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA1Cu);
LABEL_34:
  *((_QWORD *)this + 417) = 0LL;
  if ( v31 )
    CDrawingContext::PopLayer(this);
  if ( v6 )
    CDrawingContext::PopGpuClipRectInternal(this, 0);
  if ( v5 )
    CDrawingContext::PopClippingScope(this, 0);
  if ( v7 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v8 )
    CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 776);
  if ( v32 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
