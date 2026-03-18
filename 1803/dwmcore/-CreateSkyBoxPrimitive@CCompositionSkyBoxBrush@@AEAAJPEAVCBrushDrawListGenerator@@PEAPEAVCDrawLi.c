/*
 * XREFs of ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180185A70
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x180016994 (-AddMultipleAndSet@-$DynArray@G$0A@@@QEAAJPEFBGI@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180029954 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3958 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18017E534 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x1801C76B8 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(
        CCompositionSkyBoxBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawListPrimitive **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int i; // ebx
  int v9; // eax
  CTransform3D *v10; // rcx
  const struct CMILMatrix *Matrix; // rax
  const struct MilPoint4F *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r11
  int v15; // xmm0_4
  _DWORD *v16; // rdx
  int v17; // eax
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // eax
  int v21; // eax
  _DWORD *v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  _DWORD *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  unsigned int v29; // [rsp+88h] [rbp-78h]
  _OWORD v30[4]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v31; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v32; // [rsp+E0h] [rbp-20h] BYREF
  int v33; // [rsp+E8h] [rbp-18h]
  _DWORD v34[64]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v35[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  v30[0] = _xmm;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v31 = 32085;
  v30[1] = _xmm;
  v28 = 0LL;
  v30[2] = _xmm;
  v29 = 0;
  v30[3] = _xmm;
  v27 = 0LL;
  v6 = DynArrayImpl<0>::Grow((__int64)&v27, 2u, 36, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x178u);
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      v9 = *((_DWORD *)this + 26);
      if ( _bittest(&v9, i) )
        DynArray<unsigned short,0>::AddMultipleAndSet((__int64)&v27, (char *)&unk_1802AD690 + 12 * i, 6LL);
    }
    CMILMatrix::Scale((CMILMatrix *)v30, *((float *)this + 25), *((float *)this + 25), *((float *)this + 25));
    CMILMatrix::Translate((CMILMatrix *)v30, *((float *)this + 22), *((float *)this + 23), *((float *)this + 24));
    v10 = (CTransform3D *)*((_QWORD *)this + 10);
    if ( v10 )
    {
      Matrix = CTransform3D::GetMatrix(v10, a2 + 1);
      CMILMatrix::Multiply((CMILMatrix *)v30, Matrix);
    }
    CMILMatrix::Translate((CMILMatrix *)v30, a2[1].width * 0.5, a2[1].height * 0.5, 0.0);
    v12 = (const struct MilPoint4F *)&unk_1802AD610;
    v13 = 8LL;
    do
    {
      CMILMatrix::Transform((CMILMatrix *)v30, v12, (struct MilPoint4F *)&v32, 1u);
      *(_DWORD *)((char *)&v34[3] + v14) = -1;
      v15 = HIDWORD(v32);
      v17 = *v16;
      v18 = v32;
      *(_DWORD *)((char *)&v34[1] + v14) = HIDWORD(v32);
      *(_DWORD *)((char *)&v35[1] + v14) = v15;
      *(_DWORD *)((char *)&v34[2] + v14) = v33;
      v19 = v16[1] ^ _xmm;
      *(_DWORD *)((char *)v34 + v14) = v18;
      *(_DWORD *)((char *)&v34[4] + v14) = v17;
      v20 = v16[2];
      v12 = (const struct MilPoint4F *)(v16 + 4);
      *(_DWORD *)((char *)&v34[5] + v14) = v19;
      *(_DWORD *)((char *)&v34[6] + v14) = v20;
      *(_DWORD *)((char *)&v34[7] + v14) = 0;
      *(_DWORD *)((char *)v35 + v14) = v18;
      *(_DWORD *)((char *)&v35[2] + v14) = 0;
      *(_DWORD *)((char *)&v35[3] + v14) = 1065353216;
      *(_OWORD *)((char *)&v34[68] + v14) = *(_OWORD *)((char *)&v34[4] + v14);
      --v13;
    }
    while ( v13 );
    v25 = v34;
    v23 = v35;
    v26 = 0x800000020LL;
    v24 = 0x800000020LL;
    v32 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
    v21 = CDrawListPrimitive::Create(0, (__int64)&v25, (__int64)&v23, 2u, (void *)v27, v29, (__int64)&v32, 0, a3);
    v7 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1B9u);
    else
      v7 = 0;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v27);
  return v7;
}
