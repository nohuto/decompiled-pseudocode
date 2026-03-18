/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180063054 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ??8?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z @ 0x180036B40 (--8-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B3494 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x1800B707C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0WARPDrawListEntryParams@@QEAA@XZ @ 0x1801515D4 (--0WARPDrawListEntryParams@@QEAA@XZ.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x180154960 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x18015497C (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x180154C1C (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        CCpuClip **this,
        FLOAT *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_RECT_F *a4)
{
  signed int BuiltHWPrimitiveEntry; // eax
  DWORD v9; // ebx
  struct D2D_RECT_F *v10; // r9
  float *v11; // rdx
  const struct D2D_MATRIX_3X2_F *v12; // r8
  FLOAT v13; // eax
  bool v14; // zf
  FLOAT dy; // eax
  CCpuClip *v16; // rcx
  signed int v17; // eax
  signed int v18; // eax
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // xmm1_8
  unsigned int v22; // r12d
  __int64 v23; // rbx
  _BYTE *v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  char v27; // bl
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // xmm0_4
  __m128 v35; // xmm3
  __m128 v36; // xmm1
  __m128 v37; // xmm6
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  __m128 v41; // xmm5
  float v42; // xmm0_4
  bool v43; // al
  _OWORD *v44; // rcx
  signed int v45; // eax
  __int64 v46; // rcx
  unsigned int v47; // edx
  unsigned int v48; // eax
  signed int v49; // eax
  struct CWARPDrawListEntry *v51; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C8h] BYREF
  struct CShape *v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B8h]
  __int128 v55; // [rsp+58h] [rbp-B0h] BYREF
  CCpuClip *v56; // [rsp+68h] [rbp-A0h]
  _QWORD v57[4]; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_MATRIX_3X2_F v58; // [rsp+98h] [rbp-70h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-58h] BYREF
  char v60[28]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v61[140]; // [rsp+DCh] [rbp-2Ch] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+168h] [rbp+60h] BYREF
  __int128 v63; // [rsp+180h] [rbp+78h]

  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListEntryBuilder *)this,
                            0,
                            0LL,
                            0LL);
  v9 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BuiltHWPrimitiveEntry, 0x25Du);
    return v9;
  }
  WARPDrawListEntryParams::WARPDrawListEntryParams((WARPDrawListEntryParams *)v57);
  memset_0(v57, 0, 0xF0uLL);
  if ( a4 )
  {
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)a2, a4, &v58, v10);
    LODWORD(v13) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                     (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                     v11,
                     v12);
  }
  else
  {
    v13 = a2[4];
    *(_OWORD *)&v58.m11 = *(_OWORD *)a2;
  }
  v58.dx = v13;
  v14 = *((_DWORD *)this + 3) == 1;
  LODWORD(v57[0]) = (_DWORD)this[3] & 0xFFFFFF9F | 0x40;
  if ( v14 )
  {
    *(_QWORD *)&v58.m[2][0] = 0LL;
  }
  else if ( ((_BYTE)a2[5] & 3) == 3 )
  {
    LODWORD(v58.dy) = 1;
  }
  else if ( ((_BYTE)a2[5] & 1) != 0 )
  {
    LODWORD(v58.dy) = 2;
  }
  else
  {
    dy = v58.dy;
    if ( ((_BYTE)a2[5] & 2) != 0 )
      LODWORD(dy) = 3;
    v58.dy = dy;
  }
  v16 = this[2];
  v52 = 0LL;
  if ( !*((_BYTE *)v16 + 32) )
    goto LABEL_18;
  v17 = CCpuClip::ResolveClip(v16, &v53);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x298u);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v53 + 24LL))(v53, 0LL, &v52);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v57[1] = v52;
LABEL_18:
      if ( a3 )
      {
        v19 = *(_OWORD *)a3;
        v56 = this[4];
        v20 = *((_QWORD *)a3 + 3);
        v61[133] = 1;
        v59 = v19;
        if ( v20 )
        {
          v57[2] = v20;
          v57[3] = &v59;
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
          if ( *((__int64 *)a3 + 5) > 0 )
          {
            v23 = 0LL;
            v53 = 0LL;
            v54 = 0LL;
            v24 = v61;
            do
            {
              v25 = *((_DWORD *)this + 613);
              if ( _bittest(&v25, v22) )
              {
                *(_QWORD *)&v55 = v23 + *((_QWORD *)a3 + 4);
                if ( memcmp_0((const void *)v55, &unk_18026E320, 0x24uLL) )
                {
                  v26 = (__int64)v56 + 2 * v22;
                  v27 = *(_BYTE *)(v22 + v26 + 66);
                  LOWORD(v51) = *(_WORD *)(v22 + v26 + 64);
                  CDrawListBitmap::operator=(
                    (CArrayBasedCoverageSet **)&v60[80 * (_QWORD)v53],
                    (__int64)v56 + 16 * v22 + 8 * v22 + 16);
                  LOBYTE(v28) = BYTE1(v51);
                  v29 = ExtendMode::ToD2D1ExtendMode(v28);
                  LOBYTE(v30) = v27;
                  *((_DWORD *)v24 + 9) = v29;
                  v31 = ExtendMode::ToD2D1ExtendMode(v30);
                  LOBYTE(v32) = (_BYTE)v51;
                  *((_DWORD *)v24 + 10) = v31;
                  *((_DWORD *)v24 + 11) = InterpolationMode::ToD2D1InterpolationMode(v32);
                  v33 = v55;
                  v34 = *(_DWORD *)v55;
                  v35 = (__m128)*(unsigned int *)(v55 + 28);
                  DWORD1(v63) = *(_DWORD *)(v55 + 4);
                  HIDWORD(v63) = *(_DWORD *)(v55 + 16);
                  v36 = (__m128)*(unsigned int *)(v55 + 24);
                  LODWORD(v63) = v34;
                  DWORD2(v63) = *(_DWORD *)(v55 + 12);
                  *(_OWORD *)(v24 - 4) = v63;
                  *(_QWORD *)(v24 + 12) = _mm_unpacklo_ps(v36, v35).m128_u64[0];
                  if ( a4 )
                  {
                    v37 = (__m128)*((unsigned int *)v24 - 1);
                    v38 = *((float *)v24 + 1);
                    v39 = *((float *)v24 - 1);
                    v40 = *(float *)v24;
                    v41 = (__m128)*((unsigned int *)v24 + 2);
                    v42 = *(float *)v24 * matrix.m11;
                    *(float *)&v63 = (float)(v38 * matrix.m12) + (float)(v39 * matrix.m11);
                    *((float *)&v63 + 1) = (float)(v41.m128_f32[0] * matrix.m12) + v42;
                    v37.m128_f32[0] = (float)((float)(v37.m128_f32[0] * matrix.dx) + (float)(v38 * matrix.dy))
                                    + *((float *)v24 + 3);
                    *((float *)&v63 + 2) = (float)(v39 * matrix.m21) + (float)(v38 * matrix.m22);
                    *((float *)&v63 + 3) = (float)(v41.m128_f32[0] * matrix.m22) + (float)(v40 * matrix.m21);
                    v41.m128_f32[0] = (float)((float)(v41.m128_f32[0] * matrix.dy) + (float)(v40 * matrix.dx))
                                    + *((float *)v24 + 4);
                    *(_OWORD *)(v24 - 4) = v63;
                    *(_QWORD *)(v24 + 12) = _mm_unpacklo_ps(v37, v41).m128_u64[0];
                  }
                  v55 = _xmm;
                  v43 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::operator==(
                          (float *)(v33 + 36),
                          (float *)&v55);
                  v23 = v54;
                  if ( !v43 )
                  {
                    v24[48] = 1;
                    *(_OWORD *)(v24 + 20) = *v44;
                  }
                }
              }
              ++v22;
              v23 += 52LL;
              v24 += 80;
              v54 = v23;
              v53 = (struct CShape *)(int)v22;
            }
            while ( (int)v22 < *((_QWORD *)a3 + 5) );
          }
        }
      }
      else
      {
        v59 = _xmm;
      }
      v51 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v51);
      v45 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)v57, &v51);
      v9 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v45, 0x2E3u);
      }
      else
      {
        v46 = *((unsigned int *)this + 16);
        v47 = (unsigned int)v51;
        v53 = v51;
        v48 = v46 + 1;
        if ( (int)v46 + 1 >= (unsigned int)v46 )
          v47 = v46 + 1;
        v9 = v48 < (unsigned int)v46 ? 0x80070216 : 0;
        if ( v48 < (unsigned int)v46 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xB5u);
        }
        else if ( v47 > *((_DWORD *)this + 15) )
        {
          v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 5), 8u, 1, &v53);
          v9 = v49;
          if ( v49 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v49, 0xC0u);
        }
        else
        {
          *((_QWORD *)this[5] + v46) = v53;
          *((_DWORD *)this + 16) = v47;
        }
        if ( (v9 & 0x80000000) != 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x2E5u);
        else
          v51 = 0LL;
      }
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v51);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x29Au);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
LABEL_23:
  `vector destructor iterator'(v60, 80LL, 2LL, WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc);
  return v9;
}
