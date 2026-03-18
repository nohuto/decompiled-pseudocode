/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180005E54 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 * Callees:
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180005F2C (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019094 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800478F0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800641D0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180070640 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x180073B60 (-GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180074BB0 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18008B040 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCShape@@@Z @ 0x18008BCE0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@PEAPEAVCSha.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?FindPrimitiveRect@CBrushDrawListGenerator@@CA_NV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18008C67C (-FindPrimitiveRect@CBrushDrawListGenerator@@CA_NV-$span@PEBVCDrawListBrush@@$0-0@gsl@@PEAUD2D_RE.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18008CA28 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18009520C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF0D0 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x1800B5170 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BDF98 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1E10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOpaque@CAtlasImageSource@@UEBA_NXZ @ 0x1800C5F50 (-IsOpaque@CAtlasImageSource@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18017B440 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18017E764 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180207E5C (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  bool v2; // zf
  CCpuClip *v3; // r13
  bool v6; // r15
  __int64 v7; // r8
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  float v15; // xmm7_4
  float v16; // xmm6_4
  char v17; // r12
  FLOAT v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rcx
  char v23; // al
  bool v24; // cf
  int v25; // ecx
  BOOL v26; // eax
  struct CCommonRenderingEffect *v27; // rcx
  __int64 (__fastcall *v28)(struct CCommonRenderingEffect *, unsigned __int128 *, CRectanglesShape **); // rax
  int RenderingEffect; // eax
  unsigned int v30; // edi
  __int64 v31; // rbx
  int v32; // eax
  CRectanglesShape *v33; // rdi
  __int128 v34; // xmm1
  CRectanglesShape *v35; // rcx
  __int64 (__fastcall *v36)(CBrushRenderingEffect *); // rax
  int UsedSamplersBitmask; // eax
  _QWORD *v38; // rax
  bool v39; // al
  CRectanglesShape *v40; // rcx
  void (*v41)(void); // rax
  __int64 v42; // rcx
  CRectanglesShape *v43; // rdx
  CRectanglesShape *v44; // rbx
  char (__fastcall *v45)(CRectanglesShape *); // rax
  char IsEmpty; // al
  CDrawListEntryBuilder *v47; // rcx
  bool v48; // r12
  int TightBounds; // eax
  __int64 v50; // rcx
  char (__fastcall *v51)(CRectanglesShape *, unsigned int *); // r8
  char IsRectangles; // al
  CRectanglesShape *v53; // rcx
  CRectanglesShape *(__fastcall *v54)(CRectanglesShape *, char); // rax
  unsigned int v55; // ebx
  unsigned int v56; // r15d
  int v57; // xmm6_4
  int v58; // xmm7_4
  FLOAT bottom; // xmm8_4
  FLOAT right; // xmm9_4
  FLOAT top; // xmm10_4
  FLOAT left; // xmm11_4
  __int64 v63; // r14
  __int64 (__fastcall *v64)(__int64, __int64); // rax
  __int64 v65; // rcx
  _DWORD *v67; // rbx
  float *v68; // rcx
  float *v69; // rax
  int v70; // eax
  char v71; // al
  __m128 v72; // xmm2
  __m128 v73; // xmm3
  __m128 v74; // xmm3
  __m128 v75; // xmm3
  __m128 v76; // xmm3
  struct D2D_RECT_F v77; // xmm0
  struct D2D_RECT_F *v78; // r9
  int v79; // eax
  CImageSource *v81; // rcx
  char (__fastcall *v82)(CCompositionSurfaceBitmap *); // rax
  char IsOpaque; // al
  int v84; // eax
  struct D2D_RECT_F *v85; // r9
  __int64 v86; // rcx
  CRectanglesShape *v87; // rdx
  CRectanglesShape *v88; // rdx
  int v89; // eax
  int v90; // eax
  float *v91; // rax
  int inserted; // eax
  char v93; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v94; // [rsp+31h] [rbp-CFh]
  CRectanglesShape *v95; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v96; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v97; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int128 v98; // [rsp+48h] [rbp-B8h] BYREF
  CBrushDrawListGenerator *v99; // [rsp+58h] [rbp-A8h]
  unsigned __int128 v100; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v101; // [rsp+70h] [rbp-90h]
  int v102; // [rsp+78h] [rbp-88h]
  int v103; // [rsp+7Ch] [rbp-84h]
  int v104; // [rsp+80h] [rbp-80h]
  struct D2D_RECT_F v105; // [rsp+90h] [rbp-70h] BYREF
  __int128 v106; // [rsp+A0h] [rbp-60h]
  unsigned __int128 v107; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v108; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v109; // [rsp+D0h] [rbp-30h]
  __int128 v110; // [rsp+E0h] [rbp-20h]
  __int128 v111; // [rsp+F0h] [rbp-10h]
  int v112; // [rsp+100h] [rbp+0h]
  struct D2D_MATRIX_3X2_F v113; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v114[52]; // [rsp+140h] [rbp+40h] BYREF

  v2 = *((_BYTE *)a2 + 40) == 0;
  v3 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 8);
  v99 = this;
  if ( !v2 )
  {
    CShapePtr::Release((CRectanglesShape **)a2 + 3);
    *((_BYTE *)v3 + 32) = 0;
  }
  v6 = 0;
  if ( !*(_QWORD *)(*((_QWORD *)a2 + 13) + 32LL) )
  {
    v7 = *(_QWORD *)this;
    v112 = 0;
    v8 = *(_DWORD *)(v7 + 256);
    v96 = v8 != 0;
    v9 = *(_DWORD *)(v7 + 480);
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      v11 = *(_QWORD *)(v7 + 496);
      v12 = *(_OWORD *)(68 * v10 + v11 + 16);
      v108 = *(_OWORD *)(68 * v10 + v11);
      v13 = *(_OWORD *)(68 * v10 + v11 + 32);
      v109 = v12;
      v14 = *(_OWORD *)(68 * v10 + v11 + 48);
      LODWORD(v11) = *(_DWORD *)(68 * v10 + v11 + 64);
      v110 = v13;
      v111 = v14;
      v112 = v11;
    }
    else
    {
      v108 = _xmm;
      LOWORD(v112) = 32085;
      v109 = _xmm;
      v110 = _xmm;
      v111 = _xmm;
    }
    v15 = sqrtf_0((float)(*(float *)&v108 * *(float *)&v108) + (float)(*((float *)&v108 + 1) * *((float *)&v108 + 1)));
    v16 = sqrtf_0((float)(*(float *)&v109 * *(float *)&v109) + (float)(*((float *)&v109 + 1) * *((float *)&v109 + 1)));
    v17 = 0;
    v93 = 0;
    v94 = 0;
    if ( (*(_QWORD *)v3 || *((_QWORD *)v3 + 2)) && !v8 )
    {
      if ( CCpuClip::IsAxisAlignedRectangle(v3) && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v108) )
      {
        v17 = 0;
        v94 = 1;
      }
      else
      {
        v17 = 1;
        v94 = 0;
      }
      v93 = v17;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14))
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm) < 0.0000011920929 )
    {
      v6 = 1;
    }
    v18 = *((float *)a2 + 25);
    v19 = 0LL;
    if ( v18 != 0.0 )
    {
      do
      {
        v20 = *((_QWORD *)a2 + v19 + 7);
        if ( v20 )
        {
          v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL);
          v22 = *((_QWORD *)a2 + v19 + 7);
          if ( v21 == CSurfaceDrawListBrush::IsOfType )
            v23 = CSurfaceDrawListBrush::IsOfType(v22, 2LL);
          else
            v23 = v21(v22, 2LL);
          if ( v23 )
          {
            v6 = v6
              && (*(_BYTE *)(v20 + 72)
               || ((v81 = *(CImageSource **)(v20 + 56),
                    v82 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v81 + 104LL),
                    v82 != CCompositionSurfaceBitmap::IsOpaque)
                 ? ((char *)v82 != (char *)CAtlasImageSource::IsOpaque
                  ? ((char *)v82 != (char *)CImageSource::IsOpaque
                   ? (IsOpaque = ((__int64 (*)(void))v82)())
                   : (IsOpaque = CImageSource::IsOpaque(v81)))
                  : (IsOpaque = CAtlasImageSource::IsOpaque(v81)))
                 : (IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v81)),
                   IsOpaque));
          }
          else if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL))(v20, 1LL) )
          {
            v20 = 0LL;
          }
        }
        *((_QWORD *)&v113.m11 + v19) = v20;
        v19 = (unsigned int)(v19 + 1);
        v18 = *((float *)a2 + 25);
      }
      while ( (unsigned int)v19 < LODWORD(v18) );
      v17 = v93;
      v3 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 8);
    }
    memset_0(&v105, 0, 0x20uLL);
    LODWORD(v105.bottom) = v96;
    v24 = *((_BYTE *)this + 77) != 0;
    v105.top = v15;
    v105.right = v16;
    v105.left = v18;
    v25 = *((_DWORD *)this + 4) | (v94 << 6) | (v24 ? 0x20 : 0);
    v2 = *((_BYTE *)a2 + 120) == 0;
    *(_QWORD *)&v106 = v3;
    BYTE12(v106) = v17;
    v26 = v2 && v6;
    v95 = 0LL;
    *(_QWORD *)&v100 = LODWORD(v18);
    DWORD2(v106) = v26 | v25;
    v27 = (struct CCommonRenderingEffect *)*((_QWORD *)a2 + 14);
    *((_QWORD *)&v100 + 1) = &v113;
    v28 = *(__int64 (__fastcall **)(struct CCommonRenderingEffect *, unsigned __int128 *, CRectanglesShape **))(*(_QWORD *)v27 + 24LL);
    if ( (char *)v28 == (char *)CCommonRenderingEffectFactory::CreateRenderingEffect )
    {
      RenderingEffect = CCommonRenderingEffectFactory::CreateRenderingEffect(v27, (__int64)&v100, &v95);
    }
    else if ( (char *)v28 == (char *)CBrushRenderingEffectFactory::CreateRenderingEffect )
    {
      RenderingEffect = CBrushRenderingEffectFactory::CreateRenderingEffect(v27, (__int128 *)&v100, (__int64 *)&v95);
    }
    else
    {
      RenderingEffect = v28(v27, &v100, &v95);
    }
    v30 = RenderingEffect;
    if ( RenderingEffect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderingEffect, 0x1D9u);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v95);
      return v30;
    }
    v31 = *((_QWORD *)a2 + 13);
    v32 = 2;
    v33 = v95;
    v34 = v106;
    *(struct D2D_RECT_F *)v31 = v105;
    *(_OWORD *)(v31 + 16) = v34;
    if ( *(_DWORD *)v31 > 2u )
      v32 = 4;
    *(_DWORD *)v31 = v32;
    v35 = *(CRectanglesShape **)(v31 + 32);
    if ( v35 != v33 )
    {
      if ( v33 )
      {
        (**(void (__fastcall ***)(CRectanglesShape *))v33)(v33);
        v35 = *(CRectanglesShape **)(v31 + 32);
      }
      *(_QWORD *)(v31 + 32) = v33;
      if ( v35 )
        (*(void (__fastcall **)(CRectanglesShape *))(*(_QWORD *)v35 + 8LL))(v35);
    }
    v36 = *(__int64 (__fastcall **)(CBrushRenderingEffect *))(*(_QWORD *)v33 + 32LL);
    if ( v36 == CCommonRenderingEffect::GetUsedSamplersBitmask )
    {
      UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(v33);
    }
    else if ( v36 == CBrushRenderingEffect::GetUsedSamplersBitmask )
    {
      UsedSamplersBitmask = CBrushRenderingEffect::GetUsedSamplersBitmask(v33);
    }
    else
    {
      UsedSamplersBitmask = v36(v33);
    }
    *(_DWORD *)(v31 + 2452) = UsedSamplersBitmask;
    v38 = *(_QWORD **)(v31 + 16);
    *(_BYTE *)(v31 + 2465) = 0;
    if ( !*v38 && !v38[2] || *(_DWORD *)(v31 + 12) == 1 )
      *(_BYTE *)(v31 + 28) = 0;
    v39 = ((*(_BYTE *)(v31 + 24) & 0x20) != 0 || !*v38) && CCommonRegistryData::m_fEnableCpuClipping;
    *(_BYTE *)(v31 + 2464) = v39;
    *(_DWORD *)(v31 + 384) = 0;
    *(_DWORD *)(v31 + 1376) = 0;
    *(_DWORD *)(v31 + 2376) = 0;
    *(_DWORD *)(v31 + 2344) = 0;
    *(_DWORD *)(v31 + 2448) = 0;
    v40 = v95;
    if ( v95 )
    {
      v95 = 0LL;
      v41 = *(void (**)(void))(*(_QWORD *)v40 + 8LL);
      if ( (char *)v41 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v40);
      else
        v41();
    }
  }
  *(_QWORD *)&v100 = *((unsigned int *)a2 + 24);
  *((_QWORD *)&v100 + 1) = (char *)a2 + 56;
  *(_QWORD *)&v105.left = &v95;
  v95 = 0LL;
  *(_QWORD *)&v105.right = 0LL;
  LOBYTE(v106) = 1;
  v30 = CBrushDrawListGenerator::ComputeBrushClamp((__int64 *)&v100, (CRectanglesShape **)&v105.right);
  if ( (_BYTE)v106 )
  {
    v42 = *(_QWORD *)&v105.left;
    v43 = **(CRectanglesShape ***)&v105.left;
    **(_QWORD **)&v105.left = *(_QWORD *)&v105.right;
    if ( v43 )
      std::default_delete<CShape>::operator()(v42, v43);
  }
  if ( (v30 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x1E8u);
    v88 = v95;
    if ( v95 )
      goto LABEL_159;
    return v30;
  }
  v44 = v95;
  v45 = *(char (__fastcall **)(CRectanglesShape *))(*(_QWORD *)v95 + 16LL);
  if ( v45 == CRectanglesShape::IsEmpty )
  {
    IsEmpty = CRectanglesShape::IsEmpty(v95);
  }
  else
  {
    IsEmpty = v45(v95);
    v44 = v95;
  }
  if ( IsEmpty )
  {
    if ( v44 )
    {
      v88 = v44;
      goto LABEL_159;
    }
    return v30;
  }
  *(_QWORD *)&v100 = *((unsigned int *)a2 + 24);
  *((_QWORD *)&v100 + 1) = (char *)a2 + 56;
  v48 = 0;
  if ( !CBrushDrawListGenerator::FindPrimitiveRect((__int64 *)&v100, (__int64)&v98, &v97, (__int64)&v105) )
  {
    if ( *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)v95 + 32LL) == CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds((__int64)v95, (__int64)&v107, 0LL);
    else
      TightBounds = (*(__int64 (__fastcall **)(CRectanglesShape *, unsigned __int128 *, _QWORD))(*(_QWORD *)v95 + 32LL))(
                      v95,
                      &v107,
                      0LL);
    v30 = TightBounds;
    if ( TightBounds >= 0 )
    {
      v100 = v107;
      v50 = *(_QWORD *)v95;
      v98 = v107;
      v51 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(v50 + 40);
      if ( v51 == CRectanglesShape::IsRectangles )
        IsRectangles = CRectanglesShape::IsRectangles(v95, &v96);
      else
        IsRectangles = v51(v95, &v96);
      if ( IsRectangles && v96 == 1 )
      {
        v53 = v95;
        v95 = 0LL;
        if ( !v53 )
          goto LABEL_63;
        v54 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v53;
        if ( v54 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v53, 1);
        else
          v54(v53, 1);
      }
      goto LABEL_62;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x229u);
LABEL_140:
    v88 = v95;
    if ( v95 )
      goto LABEL_159;
    return v30;
  }
  v48 = !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v105);
  if ( CShape::IsAxisAlignedRectangle(v95) )
  {
    if ( *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)v95 + 32LL) == CRectanglesShape::GetTightBounds )
      v84 = CRectanglesShape::GetTightBounds((__int64)v95, (__int64)&v107, 0LL);
    else
      v84 = (*(__int64 (__fastcall **)(CRectanglesShape *, unsigned __int128 *, _QWORD))(*(_QWORD *)v95 + 32LL))(
              v95,
              &v107,
              0LL);
    v30 = v84;
    if ( v84 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0x208u);
      goto LABEL_140;
    }
    if ( v48 )
    {
      D2DMatrixHelper::TransformRectConservative((D2DMatrixHelper *)&v98, &v105, &v113, v85);
      v100 = *(_OWORD *)&v113.m11;
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(
              (__int64)&v107,
              (const struct D2D_RECT_F *)&v100) )
        goto LABEL_62;
    }
    else
    {
      v100 = v107;
      ClipRectAndEdgeFlags((float *)&v98, v97, (float *)&v100, 0, &v98, (int *)&v97);
    }
    v87 = v95;
    v95 = 0LL;
    if ( !v87 )
      goto LABEL_63;
    std::default_delete<CShape>::operator()(v86, v87);
  }
LABEL_62:
  if ( v95 )
  {
    v89 = CCpuClip::AddPrimitiveClip(v3, v95, 0LL);
    v30 = v89;
    if ( v89 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0x23Cu);
      goto LABEL_148;
    }
  }
LABEL_63:
  memset_0(v114, 0, sizeof(v114));
  v55 = *((_DWORD *)a2 + 25);
  v56 = 0;
  if ( !v55 )
  {
LABEL_77:
    memset_0(&v108, 0, 0x20uLL);
    *(_QWORD *)&v100 = v55;
    *((_QWORD *)&v100 + 1) = v114;
    v71 = *((_BYTE *)v99 + 76);
    v110 = v100;
    if ( v71 )
    {
      v100 = *(_OWORD *)((char *)v99 + 20);
    }
    else
    {
      v72 = (__m128)*((unsigned int *)v99 + 8);
      v73 = v72;
      v73.m128_f32[0] = v72.m128_f32[0] * *((float *)v99 + 5);
      v74 = _mm_shuffle_ps(v73, v73, 225);
      v74.m128_f32[0] = *((float *)v99 + 8) * *((float *)v99 + 6);
      v75 = _mm_shuffle_ps(v74, v74, 198);
      v75.m128_f32[0] = *((float *)v99 + 8) * *((float *)v99 + 7);
      v76 = _mm_shuffle_ps(v75, v75, 39);
      v76.m128_f32[0] = v72.m128_f32[0];
      v100 = (unsigned __int128)_mm_shuffle_ps(v76, v76, 57);
    }
    LOBYTE(v109) = v71;
    v77 = (struct D2D_RECT_F)v100;
    v100 = 0uLL;
    v101 = v97 | 0x300000000LL;
    v108 = (__int128)v77;
    if ( v48 )
      v78 = &v105;
    else
      v78 = 0LL;
    v30 = 0;
    v47 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 13);
    *(_OWORD *)&v113.m11 = v98;
    *(_QWORD *)&v113.m[2][0] = v101;
    if ( *((float *)&v98 + 2) > *(float *)&v98 && *((float *)&v98 + 3) > *((float *)&v98 + 1) )
    {
      if ( *((_BYTE *)a2 + 120) )
      {
        inserted = CDrawListEntryBuilder::InsertWARP(
                     v47,
                     (const struct PrimitiveGeometryDesc *)&v113,
                     (const struct PrimitiveVertexAttributesDesc *)&v108,
                     (const struct D2D_MATRIX_3X2_F *)v78);
        v30 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1E4u);
      }
      else
      {
        v100 = v98;
        v79 = CDrawListEntryBuilder::InsertHW(v47, &v100, &v108, v78);
        v30 = v79;
        if ( v79 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x1E8u);
      }
    }
    if ( (v30 & 0x80000000) == 0 )
    {
      if ( v95 )
      {
        v88 = v95;
        goto LABEL_159;
      }
      return v30;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x26Du);
    goto LABEL_140;
  }
  v57 = DWORD1(v106);
  v58 = v106;
  bottom = v105.bottom;
  right = v105.right;
  top = v105.top;
  left = v105.left;
  while ( 1 )
  {
    v63 = *((_QWORD *)a2 + v56 + 7);
    if ( v63 )
    {
      v64 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 8LL);
      v65 = *((_QWORD *)a2 + v56 + 7);
      if ( v64 == CSurfaceDrawListBrush::IsOfType
         ? CSurfaceDrawListBrush::IsOfType(v65, 2LL)
         : (unsigned __int8)v64(v65, 2LL) )
      {
        break;
      }
    }
LABEL_76:
    v55 = *((_DWORD *)a2 + 25);
    if ( ++v56 >= v55 )
      goto LABEL_77;
  }
  v67 = &v114[13 * v56];
  if ( !*((_BYTE *)a2 + 120) )
  {
    *v67 = *(_DWORD *)(v63 + 8);
    v67[1] = *(_DWORD *)(v63 + 12);
    v67[2] = 0;
    v67[3] = *(_DWORD *)(v63 + 16);
    v67[4] = *(_DWORD *)(v63 + 20);
    v67[5] = 0;
    v67[6] = *(_DWORD *)(v63 + 24);
    v67[7] = *(_DWORD *)(v63 + 28);
    v67[8] = 1065353216;
    if ( Matrix3x3::TryInvert((const struct Matrix3x3 *)v67, (struct Matrix3x3 *)v67) )
    {
      v69 = Matrix3x3::operator*(v68, (float *)&v100, (float *)(v63 + 100));
      *(_OWORD *)v67 = *(_OWORD *)v69;
      *((_OWORD *)v67 + 1) = *((_OWORD *)v69 + 1);
      v70 = *((_DWORD *)v69 + 8);
    }
    else
    {
      v104 = 1065353216;
      v70 = 1065353216;
      *(_OWORD *)v67 = _xmm;
      *((_OWORD *)v67 + 1) = _xmm;
    }
    v67[8] = v70;
    goto LABEL_73;
  }
  v90 = CSurfaceDrawListBrush::ComputeLocalToSourceTransform((CSurfaceDrawListBrush *)v63, (struct Matrix3x3 *)v67);
  v30 = v90;
  if ( v90 >= 0 )
  {
LABEL_73:
    if ( v48 )
    {
      *(FLOAT *)&v100 = left;
      *(_QWORD *)((char *)&v100 + 4) = LODWORD(top);
      *((FLOAT *)&v100 + 3) = right;
      v101 = LODWORD(bottom);
      v102 = v58;
      v103 = v57;
      v104 = 1065353216;
      v91 = Matrix3x3::operator*((float *)&v100, &v113.m11, (float *)v67);
      *(_OWORD *)v67 = *(_OWORD *)v91;
      *((_OWORD *)v67 + 1) = *((_OWORD *)v91 + 1);
      v67[8] = *((_DWORD *)v91 + 8);
    }
    *(_OWORD *)(v67 + 9) = *(_OWORD *)(v63 + 136);
    goto LABEL_76;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v90, 0x24Fu);
LABEL_148:
  v88 = v95;
  if ( v95 )
LABEL_159:
    std::default_delete<CShape>::operator()((__int64)v47, v88);
  return v30;
}
