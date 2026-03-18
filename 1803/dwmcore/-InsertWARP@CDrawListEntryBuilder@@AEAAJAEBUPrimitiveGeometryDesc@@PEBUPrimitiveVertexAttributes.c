/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF270 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800062D0 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x1800135F4 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180016DFC (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18001793C (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019248 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18008B008 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0WARPDrawListEntryParams@@QEAA@XZ @ 0x18017A63C (--0WARPDrawListEntryParams@@QEAA@XZ.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x18017DE84 (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x18017E104 (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        CDrawListEntryBuilder *this,
        FLOAT *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_RECT_F *a4)
{
  int BuiltHWPrimitiveEntry; // eax
  int v9; // ebx
  struct D2D_RECT_F *v10; // r9
  float *v11; // rdx
  const struct D2D_MATRIX_3X2_F *v12; // r8
  FLOAT v13; // eax
  bool v14; // zf
  FLOAT dy; // eax
  CCpuClip *v16; // rcx
  int v17; // eax
  int v18; // eax
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // xmm1_8
  unsigned int v22; // r12d
  struct CWARPDrawListEntry *v23; // rbx
  _BYTE *v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int8 v27; // bl
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // xmm0_4
  __m128 v32; // xmm3
  __m128 v33; // xmm1
  __int64 v34; // xmm1_8
  _OWORD *v35; // rcx
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  struct CWARPDrawListEntry *v41; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v42; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h]
  struct D2D_RECT_F v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int128 *v50; // [rsp+88h] [rbp-78h]
  struct D2D_MATRIX_3X2_F v51; // [rsp+90h] [rbp-70h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-58h] BYREF
  char v53[68]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v54[100]; // [rsp+FCh] [rbp-4h] BYREF
  __int128 v55; // [rsp+160h] [rbp+60h] BYREF
  __int64 v56; // [rsp+170h] [rbp+70h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+178h] [rbp+78h] BYREF

  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, 0LL, 0LL);
  v9 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x25Du);
    return (unsigned int)v9;
  }
  WARPDrawListEntryParams::WARPDrawListEntryParams((WARPDrawListEntryParams *)&v47);
  memset_0(&v47, 0, 0xF0uLL);
  if ( a4 )
  {
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)a2, a4, &v51, v10);
    LODWORD(v13) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                     (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                     v11,
                     v12);
  }
  else
  {
    v13 = a2[4];
    *(_OWORD *)&v51.m11 = *(_OWORD *)a2;
  }
  v51.dx = v13;
  v14 = *((_DWORD *)this + 3) == 1;
  v47 = *((_DWORD *)this + 6) & 0xFFFFFF9F | 0x40;
  if ( v14 )
  {
    *(_QWORD *)&v51.m[2][0] = 0LL;
  }
  else if ( ((_BYTE)a2[5] & 3) == 3 )
  {
    LODWORD(v51.dy) = 1;
  }
  else if ( ((_BYTE)a2[5] & 1) != 0 )
  {
    LODWORD(v51.dy) = 2;
  }
  else
  {
    dy = v51.dy;
    if ( ((_BYTE)a2[5] & 2) != 0 )
      LODWORD(dy) = 3;
    v51.dy = dy;
  }
  v16 = (CCpuClip *)*((_QWORD *)this + 2);
  v44 = 0LL;
  if ( !*((_BYTE *)v16 + 32) )
    goto LABEL_18;
  v17 = CCpuClip::ResolveClip(v16, &v42);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x298u);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v42 + 24LL))(v42, 0LL, &v44);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v48 = v44;
LABEL_18:
      if ( a3 )
      {
        v19 = *(_OWORD *)a3;
        v45 = *((_QWORD *)this + 4);
        v20 = *((_QWORD *)a3 + 3);
        v54[93] = 1;
        v52 = v19;
        if ( v20 )
        {
          v49 = v20;
          v50 = &v52;
        }
        if ( *((_DWORD *)this + 613) )
        {
          if ( a4 )
          {
            v21 = *(_QWORD *)&a4[1].left;
            *(struct D2D_RECT_F *)&matrix.m11 = *a4;
            *(_QWORD *)&matrix.m[2][0] = v21;
            D2D1InvertMatrix(&matrix);
          }
          v22 = 0;
          if ( *((__int64 *)a3 + 4) > 0 )
          {
            v23 = 0LL;
            v42 = 0LL;
            v41 = 0LL;
            v24 = v54;
            do
            {
              v25 = *((_DWORD *)this + 613);
              if ( _bittest(&v25, v22) )
              {
                *(_QWORD *)&v46.left = (char *)v23 + *((_QWORD *)a3 + 5);
                if ( memcmp_0(*(const void **)&v46.left, &unk_1802D5560, 0x24uLL) )
                {
                  v26 = v45 + 2LL * v22;
                  v27 = *(_BYTE *)(v22 + v26 + 66);
                  v43 = *(_WORD *)(v22 + v26 + 64);
                  v42 = (struct CShape *)(80LL * (_QWORD)v42);
                  CDrawListBitmap::operator=(
                    (__int64 *)&v53[(_QWORD)v42],
                    (__int64 *)(v45 + 8 * (v22 + 2 * (v22 + 1LL))));
                  *((_DWORD *)v24 - 1) = ExtendMode::ToD2D1ExtendMode(HIBYTE(v43));
                  v28 = ExtendMode::ToD2D1ExtendMode(v27);
                  LOBYTE(v29) = v43;
                  *(_DWORD *)v24 = v28;
                  *((_DWORD *)v24 + 1) = InterpolationMode::ToD2D1InterpolationMode(v29);
                  v30 = *(_QWORD *)&v46.left;
                  v31 = **(_DWORD **)&v46.left;
                  v32 = (__m128)*(unsigned int *)(*(_QWORD *)&v46.left + 28LL);
                  DWORD1(v55) = *(_DWORD *)(*(_QWORD *)&v46.left + 4LL);
                  HIDWORD(v55) = *(_DWORD *)(*(_QWORD *)&v46.left + 16LL);
                  v33 = (__m128)*(unsigned int *)(*(_QWORD *)&v46.left + 24LL);
                  LODWORD(v55) = v31;
                  DWORD2(v55) = *(_DWORD *)(*(_QWORD *)&v46.left + 12LL);
                  *(_OWORD *)(v24 - 44) = v55;
                  *(_QWORD *)(v24 - 28) = _mm_unpacklo_ps(v33, v32).m128_u64[0];
                  if ( a4 )
                  {
                    D2D1::Matrix3x2F::SetProduct(
                      (D2D1::Matrix3x2F *)&v55,
                      (const struct D2D1::Matrix3x2F *)&matrix,
                      (const struct D2D1::Matrix3x2F *)&v53[(_QWORD)v42 + 24]);
                    v34 = v56;
                    *(_OWORD *)(v24 - 44) = v55;
                    *(_QWORD *)(v24 - 28) = v34;
                  }
                  v46 = (struct D2D_RECT_F)_xmm;
                  v23 = v41;
                  if ( !AreEqual((const struct D2D_RECT_F *)(v30 + 36), &v46) )
                  {
                    v24[8] = 1;
                    *(_OWORD *)(v24 - 20) = *v35;
                  }
                }
              }
              ++v22;
              v23 = (struct CWARPDrawListEntry *)((char *)v23 + 52);
              v24 += 80;
              v41 = v23;
              v42 = (struct CShape *)(int)v22;
            }
            while ( (int)v22 < *((_QWORD *)a3 + 4) );
          }
        }
      }
      else
      {
        v52 = _xmm;
      }
      v41 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v41);
      v36 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)&v47, &v41);
      v9 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x2E3u);
      }
      else
      {
        v42 = v41;
        v37 = *((_DWORD *)this + 16);
        v38 = v37 + 1;
        v9 = v37 + 1 < v37 ? 0x80070216 : 0;
        if ( v37 + 1 < v37 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
        }
        else if ( v38 > *((_DWORD *)this + 15) )
        {
          v39 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v42);
          v9 = v39;
          if ( v39 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v37) = v42;
          *((_DWORD *)this + 16) = v38;
        }
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2E5u);
        else
          v41 = 0LL;
      }
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v41);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x29Au);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
LABEL_23:
  `vector destructor iterator'(v53, 80LL, 2LL, WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc);
  return (unsigned int)v9;
}
