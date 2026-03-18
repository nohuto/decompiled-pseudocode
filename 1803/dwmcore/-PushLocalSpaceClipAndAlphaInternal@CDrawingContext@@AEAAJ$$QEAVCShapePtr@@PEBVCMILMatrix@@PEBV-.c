/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B500
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180161E8C (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180062FD8 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180063420 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180063DA0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18006B474 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006BDCC (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE36C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18013F454 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180140364 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        CRegionShape **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  int v6; // ebx
  char *v9; // r15
  char v10; // r14
  bool v11; // zf
  int v12; // eax
  unsigned int *v13; // r14
  __int64 v14; // rcx
  void *v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // eax
  bool v18; // r9
  int v19; // r8d
  int v20; // eax
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  int v25; // eax
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v29; // xmm3_4
  LPVOID v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  int v39; // eax
  int v40; // eax
  float v41; // xmm0_4
  const struct CVisual *v42; // rax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  int v46; // xmm6_4
  char v47; // r15
  LPVOID v48; // rcx
  char v49; // dl
  char v50; // r13
  const struct CMILMatrix *v51; // rdx
  __int64 (__fastcall *v52)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  __int64 *v54; // rcx
  float v55; // xmm2_4
  __m128 v56; // xmm4
  __m128 v57; // xmm4
  __m128 v58; // xmm4
  int v59; // eax
  LPVOID v60; // rcx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  SIZE_T v63; // r8
  unsigned int v64; // ecx
  unsigned __int64 v65; // rax
  LPVOID v66; // r8
  unsigned int v67; // eax
  int v68; // eax
  bool v69; // [rsp+48h] [rbp-69h] BYREF
  char v70; // [rsp+49h] [rbp-68h] BYREF
  char v71; // [rsp+4Ah] [rbp-67h]
  float v72; // [rsp+50h] [rbp-61h] BYREF
  CRegionShape *v73; // [rsp+58h] [rbp-59h]
  __int64 v74; // [rsp+60h] [rbp-51h]
  LPVOID lpMem[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v76[2]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v77; // [rsp+88h] [rbp-29h]

  v6 = 0;
  v74 = a4;
  v73 = 0LL;
  if ( !*(_BYTE *)(a5 + 164) )
    goto LABEL_23;
  v9 = (char *)this + 1008;
  v73 = *a2;
  v10 = 0;
  v11 = *((_DWORD *)this + 64) == 0;
  lpMem[0] = *(LPVOID *)a5;
  v71 = 0;
  v12 = CScopedClipStack::PushCpuOrGpuClipToScope((__int64 *)this + 126, (__int64)a2, !v11, a3, (char *)&v69, &v70);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x12E7u);
    goto LABEL_10;
  }
  v13 = (unsigned int *)((char *)this + 448);
  v76[1] = (__int64)lpMem[0];
  if ( v70 )
  {
    v14 = *((unsigned int *)this + 113);
    v15 = 0LL;
    v16 = *v13;
    v6 = 0;
    v70 = 1;
    LODWORD(v76[0]) = 1;
    lpMem[0] = 0LL;
    if ( v16 != (_DWORD)v14 )
    {
LABEL_5:
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v16) = *(_OWORD *)v76;
      v17 = *((_DWORD *)this + 118);
      if ( v17 <= ++*v13 )
        v17 = *v13;
      *((_DWORD *)this + 118) = v17;
      goto LABEL_8;
    }
    v61 = 2 * v14;
    if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_8:
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x12F0u);
        v10 = v70;
      }
      else
      {
        v10 = v70;
        *((_BYTE *)this + 6825) = 1;
      }
      goto LABEL_10;
    }
    v62 = 2 * v14;
    if ( v61 <= 0x40 )
      v62 = 64;
    v72 = *(float *)&v62;
    v6 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v62 <= 0x10 )
    {
      v6 = -2147024809;
    }
    else
    {
      v63 = 16LL * v62;
      if ( !v63 )
        v63 = 1LL;
      lpMem[0] = HeapAlloc(WPF::g_processHeap, 0, v63);
      v15 = lpMem[0];
      if ( !lpMem[0] )
        v6 = -2147024882;
    }
    if ( v6 < 0 )
    {
      v67 = 84;
    }
    else
    {
      v64 = -1;
      v65 = 16LL * *v13;
      if ( v65 <= 0xFFFFFFFF )
        v64 = 16 * *v13;
      v6 = 0;
      if ( v65 <= 0xFFFFFFFF )
      {
        memcpy_0(v15, *((const void **)this + 58), v64);
        operator delete(*((void **)this + 58));
        v66 = lpMem[0];
        *((float *)this + 113) = v72;
        v16 = *v13;
        *((_QWORD *)this + 58) = v66;
        goto LABEL_5;
      }
      v6 = -2147024362;
      v67 = 86;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v67);
    if ( lpMem[0] )
      HeapFree(WPF::g_processHeap, 0, lpMem[0]);
    goto LABEL_8;
  }
  v71 = 1;
  LODWORD(v76[0]) = 2;
  v33 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v76);
  v6 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x12FBu);
    v10 = 0;
LABEL_10:
    v18 = v69;
    goto LABEL_11;
  }
  v18 = v69;
  v10 = 0;
  if ( v69 )
    *((_BYTE *)this + 6826) = 1;
LABEL_11:
  if ( v6 >= 0 )
  {
    v19 = *((_DWORD *)v9 + 6);
    if ( v19 && *(_DWORD *)(*(_QWORD *)v9 + 80LL * (unsigned int)(v19 - 1) + 4) && (v20 = *((_DWORD *)v9 + 516)) != 0 )
    {
      *(_OWORD *)lpMem = *(_OWORD *)(*((_QWORD *)v9 + 260) + 16LL * (unsigned int)(v20 - 1));
      v21 = *(float *)&lpMem[1];
      v22 = *((float *)lpMem + 1);
      LODWORD(v23) = _mm_shuffle_ps(*(__m128 *)lpMem, *(__m128 *)lpMem, 255).m128_u32[0];
      v24 = *(float *)lpMem;
    }
    else
    {
      v23 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      v21 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v22 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v24 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v19 && *(_DWORD *)(*(_QWORD *)v9 + 80LL * (unsigned int)(v19 - 1) + 8) )
    {
      v34 = 120LL * (unsigned int)(*((_DWORD *)v9 + 214) - 1);
      v35 = *((_QWORD *)v9 + 104);
      if ( *(float *)(v34 + v35 + 96) > v24 )
        v24 = *(float *)(v34 + v35 + 96);
      v36 = v22;
      if ( *(float *)(v34 + v35 + 100) > v22 )
      {
        v22 = *(float *)(v34 + v35 + 100);
        v36 = v22;
      }
      v37 = v21;
      if ( v21 > *(float *)(v34 + v35 + 104) )
      {
        v21 = *(float *)(v34 + v35 + 104);
        v37 = v21;
      }
      v38 = v23;
      if ( v23 > *(float *)(v34 + v35 + 108) )
      {
        v23 = *(float *)(v34 + v35 + 108);
        v38 = v23;
      }
      if ( v37 <= v24 || v38 <= v36 )
        goto LABEL_28;
    }
    if ( v21 <= v24 || v23 <= v22 )
    {
LABEL_28:
      *a6 = 1;
      return (unsigned int)v6;
    }
    if ( v18 )
      *(_BYTE *)(a5 + 164) = 0;
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
    {
      if ( CShapePtr::IsAxisAlignedRectangle((CShapePtr *)a2) )
        *(_DWORD *)(a5 + 160) |= 1u;
      if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a5 + 92) )
        *(_DWORD *)(a5 + 160) |= 4u;
    }
LABEL_23:
    if ( !*(_BYTE *)(a5 + 164) )
    {
      v25 = *(_DWORD *)(a5 + 12);
      if ( v25 != 2 )
      {
        v26 = *(float *)(a5 + 20);
        if ( v25 == 1 )
        {
          v29 = v26 * *(float *)(a5 + 8);
          v30 = *(LPVOID *)a5;
          LODWORD(v76[0]) = 7;
          v76[1] = (__int64)v30;
          v72 = v29;
          v31 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v76);
          v6 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1965u);
          }
          else
          {
            v32 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 3104, &v72);
            v6 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x1969u);
              CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                (int *)this + 112,
                0LL);
            }
          }
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1941u);
        }
        else
        {
          v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 1.0)) & _xmm);
          if ( v27 >= 0.0000011920929 )
          {
            v76[1] = *(_QWORD *)a5;
            v72 = v26;
            LODWORD(v76[0]) = 7;
            v39 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v76);
            v6 = v39;
            if ( v39 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x1965u);
            }
            else
            {
              v40 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 3104, &v72);
              v6 = v40;
              if ( v40 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x1969u);
                CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                  (int *)this + 112,
                  0LL);
              }
            }
            if ( v6 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1949u);
          }
        }
        return (unsigned int)v6;
      }
    }
    v11 = *(_DWORD *)(a5 + 12) == 1;
    v41 = *(float *)(a5 + 20);
    v42 = *(const struct CVisual **)a5;
    lpMem[0] = 0LL;
    if ( v11 )
    {
      v68 = CDrawingContext::PushEffectiveAlphaForNode(this, v42, v41 * *(float *)(a5 + 8), 1);
      v6 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x1901u);
        goto LABEL_122;
      }
      v46 = LODWORD(FLOAT_1_0);
    }
    else
    {
      v72 = v41;
      LODWORD(v76[0]) = 7;
      v76[1] = (__int64)v42;
      v43 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v76);
      v6 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x1965u);
      }
      else
      {
        v44 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 3104, &v72);
        v6 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x1969u);
          CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
            (int *)this + 112,
            0LL);
        }
      }
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x190Au);
        goto LABEL_122;
      }
      v46 = *(_DWORD *)(a5 + 8);
    }
    v47 = 1;
    if ( !*(_BYTE *)(a5 + 164) )
      goto LABEL_75;
    v48 = lpMem[0];
    if ( lpMem[0] )
    {
      lpMem[0] = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v48 + 16LL))(v48);
    }
    LOBYTE(v45) = 1;
    lpMem[0] = 0LL;
    if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a5 + 92, v45) )
    {
      v50 = 0;
      v51 = 0LL;
    }
    else
    {
      v50 = v49;
      v51 = (const struct CMILMatrix *)(a5 + 92);
    }
    v52 = *(__int64 (__fastcall **)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v73 + 24LL);
    if ( v52 == CRegionShape::GetD2DGeometry )
      D2DGeometry = CRegionShape::GetD2DGeometry(v73, v51, (struct ID2D1Geometry **)lpMem);
    else
      D2DGeometry = v52(v73, v51, (struct ID2D1Geometry **)lpMem);
    v6 = D2DGeometry;
    if ( D2DGeometry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0xDABu);
    else
      v47 = v50;
    if ( v6 == -2003238895 )
    {
      *a6 = 1;
      v6 = 0;
      goto LABEL_122;
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1920u);
      goto LABEL_122;
    }
    if ( v47 )
    {
LABEL_75:
      v54 = 0LL;
    }
    else
    {
      v54 = v76;
      v55 = *(float *)(a5 + 112);
      v56 = _mm_shuffle_ps((__m128)*(unsigned int *)(a5 + 92), (__m128)*(unsigned int *)(a5 + 92), 225);
      v56.m128_f32[0] = *(float *)(a5 + 96);
      v57 = _mm_shuffle_ps(v56, v56, 198);
      v57.m128_f32[0] = *(float *)(a5 + 108);
      v77 = *(_QWORD *)(a5 + 140);
      v58 = _mm_shuffle_ps(v57, v57, 39);
      v58.m128_f32[0] = v55;
      *(__m128 *)v76 = _mm_shuffle_ps(v58, v58, 57);
    }
    v59 = CDrawingContext::PushD2DLayer(this, (__int64)v54, v46, 1, *(_DWORD *)(a5 + 160));
    v6 = v59;
    if ( v59 >= 0 )
    {
      v60 = lpMem[0];
      if ( lpMem[0] )
      {
        lpMem[0] = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v60 + 16LL))(v60);
      }
      return (unsigned int)v6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x1932u);
LABEL_122:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)lpMem);
    return (unsigned int)v6;
  }
  if ( v71 )
    CScopedClipStack::PopCpuClipFromScope((CScopedClipStack *)v9, &v69);
  if ( v10 )
    CScopedClipStack::PopGpuClipFromScope((CScopedClipStack *)v9);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x18CFu);
  return (unsigned int)v6;
}
