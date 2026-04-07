/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18001270C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x180005AC8 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180006C48 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x1800124E0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001261C (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180012638 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180012FC0 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  char IsImmersiveIconic; // r12
  bool IsThumbnailCVIStatic; // al
  __int64 v5; // rdx
  __m128i v6; // xmm6
  bool v7; // r9
  char v8; // r15
  int v9; // esi
  int v10; // r14d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  signed int v15; // eax
  __m128i v16; // xmm2
  signed int v17; // eax
  double v18; // xmm2_8
  __m128i v19; // xmm1
  bool v20; // zf
  double v21; // xmm1_8
  int v22; // eax
  __int128 v23; // xmm0
  struct CResource **v24; // rbx
  int v25; // eax
  _DWORD *v27; // r8
  int v28; // ecx
  __int32 v29; // eax
  int v30; // ecx
  int v31; // ecx
  __int32 v32; // eax
  int v33; // ecx
  int v34; // eax
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // rax
  int v38; // eax
  int v39; // ecx
  float v40; // xmm1_4
  __int64 v41; // rax
  int v42; // eax
  float v43; // xmm2_4
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  signed int v52; // edx
  int v53; // ecx
  __m128i v54; // xmm2
  signed int v55; // edx
  int RectangleGeometry; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // edx
  __int128 v60; // [rsp+38h] [rbp-29h] BYREF
  __m128i v61; // [rsp+48h] [rbp-19h] BYREF
  int v62[4]; // [rsp+58h] [rbp-9h] BYREF
  float v63; // [rsp+68h] [rbp+7h] BYREF
  float v64; // [rsp+6Ch] [rbp+Bh]
  float v65; // [rsp+70h] [rbp+Fh]
  float v66; // [rsp+74h] [rbp+13h]

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 46);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v61 = 0LL;
  v8 = *(_BYTE *)(v5 + 34);
  if ( !v8 )
  {
    if ( v5 )
    {
      v27 = *(_DWORD **)(v5 + 16);
      if ( v27 )
      {
        v28 = 0;
        v61.m128i_i32[0] = -*((_DWORD *)this + 28);
        v61.m128i_i32[1] = -*((_DWORD *)this + 29);
        if ( v27[47] - v27[45] >= 0 )
          v28 = v27[47] - v27[45];
        v29 = 0;
        v30 = v28 - v27[62] - v27[61];
        if ( v30 > 0 )
          v29 = v30;
        v31 = 0;
        v61.m128i_i32[2] = v29;
        if ( v27[48] - v27[46] >= 0 )
          v31 = v27[48] - v27[46];
        v32 = 0;
        v33 = v31 - v27[64] - v27[63];
        if ( v33 > 0 )
          v32 = v33;
        v61.m128i_i32[3] = v32;
        v6 = _mm_loadu_si128(&v61);
      }
    }
  }
  if ( v7 )
  {
    *(__m128i *)((char *)this + 532) = v6;
    return v2;
  }
  if ( *((_QWORD *)this + 50) && *((_QWORD *)this + 51) )
  {
    *(_QWORD *)&v60 = 0LL;
    v9 = *((_DWORD *)this + 30);
    v10 = *((_DWORD *)this + 31);
    *((_QWORD *)&v60 + 1) = __PAIR64__(v10, v9);
    if ( !v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 474) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000);
    if ( IsImmersiveIconic )
    {
      v34 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x3F4u);
        return v2;
      }
      v35 = *((_QWORD *)this + 47);
      v36 = 0;
      v37 = *(_QWORD *)(v35 + 512);
      if ( v37 )
        v36 = *(_DWORD *)(v37 + 120);
      v38 = v9 / 2 - v36 / 2;
      v39 = 0;
      v40 = (float)v38;
      v63 = (float)v38;
      v41 = *(_QWORD *)(v35 + 512);
      if ( v41 )
        v39 = *(_DWORD *)(v41 + 124);
      v42 = 0;
      v43 = (float)(v10 / 2 - v39 / 2);
      v64 = v43;
      v44 = *(_QWORD *)(v35 + 512);
      if ( v44 )
        v42 = *(_DWORD *)(v44 + 120);
      v45 = 0;
      v65 = (float)v42 + v40;
      v46 = *(_QWORD *)(v35 + 512);
      if ( v46 )
        v45 = *(_DWORD *)(v46 + 124);
      v47 = *((_QWORD *)this + 50);
      v66 = (float)v45 + v43;
      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(v47 + 16) + 312LL))(
              *(_QWORD *)(v47 + 16),
              *(unsigned int *)(v47 + 24),
              &v63);
      v2 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x3FEu);
        return v2;
      }
    }
    else
    {
      v11 = *((_QWORD *)this + 50);
      v63 = 0.0;
      v64 = 0.0;
      v65 = (float)v9 + 0.0;
      v66 = (float)v10 + 0.0;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(v11 + 16) + 312LL))(
              *(_QWORD *)(v11 + 16),
              *(unsigned int *)(v11 + 24),
              &v63);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x40Bu);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 58);
    if ( v13 && *((_BYTE *)this + 474) )
      goto LABEL_20;
    v14 = 0;
    memset(v62, 0, sizeof(v62));
    if ( IsImmersiveIconic )
    {
      v49 = *((_QWORD *)this + 47);
      v50 = *(_QWORD *)(v49 + 512);
      if ( v50 )
        v14 = *(_DWORD *)(v50 + 120);
      v17 = 0;
      v18 = (double)v14;
      *(double *)v62 = (double)v14;
      v51 = *(_QWORD *)(v49 + 512);
      if ( v51 )
        v17 = *(_DWORD *)(v51 + 124);
    }
    else
    {
      if ( v13 )
      {
        v52 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 41);
        if ( *((_DWORD *)this + 78) - *((_DWORD *)this + 76) >= 0 )
          v14 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
        if ( v14 < v52 )
          v52 = v14;
        v53 = 0;
        if ( *((_DWORD *)this + 79) - *((_DWORD *)this + 77) >= 0 )
          v53 = *((_DWORD *)this + 79) - *((_DWORD *)this + 77);
        v54 = _mm_cvtsi32_si128(v52);
        v55 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 42);
        *(_QWORD *)&v18 = *(_OWORD *)&_mm_cvtepi32_pd(v54);
        if ( v53 < v55 )
          v55 = v53;
        v19 = _mm_cvtsi32_si128(v55);
        *(double *)v62 = v18;
LABEL_17:
        v20 = *((_BYTE *)this + 474) == 0;
        *(_QWORD *)&v21 = *(_OWORD *)&_mm_cvtepi32_pd(v19);
        *(double *)&v62[2] = v21;
        if ( v20
          || (*((double *)this + 60) != v18 || *((double *)this + 61) != v21)
          && (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x100000) == 0 )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(*((_QWORD *)this + 51) + 16LL) + 320LL))(
                  *(_QWORD *)(*((_QWORD *)this + 51) + 16LL),
                  *(unsigned int *)(*((_QWORD *)this + 51) + 24LL),
                  v62);
          v2 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x42Du);
            return v2;
          }
          v23 = *(_OWORD *)v62;
          *((_BYTE *)this + 474) = 1;
          *((_OWORD *)this + 30) = v23;
        }
LABEL_20:
        if ( v8 )
          *(_OWORD *)v62 = v60;
        else
          IntersectRectT<MilPointAndSizeL>(v62, (int *)&v60, v61.m128i_i32);
        if ( CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 53) )
        {
          RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                (unsigned int)v62[0],
                                (unsigned int)v62[1],
                                (unsigned int)v62[2],
                                (unsigned int)v62[3],
                                (struct CResource **)this + 53);
          v2 = RectangleGeometry;
          if ( RectangleGeometry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x443u);
            return v2;
          }
          v57 = *((_DWORD *)this + 30);
          v58 = *((_DWORD *)this + 31);
          LODWORD(v60) = *((_DWORD *)this + 124);
          DWORD1(v60) = v60;
          v59 = v58 - 2 * v60;
          DWORD2(v60) = v57 - 2 * v60;
          HIDWORD(v60) = v59;
          if ( SDWORD2(v60) > 0 && v59 > 0 )
          {
            if ( v8 )
              *(_OWORD *)v62 = v60;
            else
              IntersectRectT<MilPointAndSizeL>(v62, (int *)&v60, v61.m128i_i32);
          }
        }
        *(_OWORD *)((char *)this + 500) = v60;
        *(__m128i *)((char *)this + 532) = v6;
        v24 = (struct CResource **)((char *)this + 416);
        if ( *v24 )
        {
          v25 = ResourceHelper::CreateRectangleGeometry(
                  (unsigned int)v62[0],
                  (unsigned int)v62[1],
                  (unsigned int)v62[2],
                  (unsigned int)v62[3],
                  v24);
          v2 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x45Cu);
        }
        return v2;
      }
      v15 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 41);
      if ( v9 < v15 )
        v15 = v9;
      v16 = _mm_cvtsi32_si128(v15);
      v17 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 42);
      *(_QWORD *)&v18 = *(_OWORD *)&_mm_cvtepi32_pd(v16);
      if ( v10 < v17 )
        v17 = v10;
      *(double *)v62 = v18;
    }
    v19 = _mm_cvtsi32_si128(v17);
    goto LABEL_17;
  }
  return v2;
}
