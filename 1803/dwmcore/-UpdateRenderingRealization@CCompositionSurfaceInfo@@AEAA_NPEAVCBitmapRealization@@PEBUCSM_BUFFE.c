/*
 * XREFs of ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800807D8
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180080F84 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x180008EC4 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18001AAC0 (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800456C0 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180045A60 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C50 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800477B0 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800805FC (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18008112C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800A6200 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceInfo::UpdateRenderingRealization(
        CCompositionSurfaceInfo *this,
        struct CBitmapRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  char v6; // r12
  char v7; // r15
  char v8; // r14
  const struct CSM_BUFFER_ATTRIBUTES *v10; // rsi
  CCompositionSurfaceInfo *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool (__fastcall *v14)(__int64, __int64, __int128 *); // rax
  __int64 v15; // rax
  __m128 v16; // xmm6
  __int64 v17; // rcx
  float v18; // xmm10_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  _DWORD *(__fastcall *v21)(__int64, __int64 *); // rax
  _DWORD *PixelFormatInfo; // rax
  bool (__fastcall *v23)(__int64, __int64, __int128 *); // rax
  char *v24; // rcx
  __m128 v25; // xmm7
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm13_4
  _DWORD *(__fastcall *v29)(__int64, __int64 *); // rax
  char *v30; // rcx
  _DWORD *v31; // rax
  char v32; // si
  struct CBitmapRealization *v33; // rax
  __int64 v34; // rax
  char v35; // di
  int v36; // esi
  const struct CRegion *v37; // r14
  CCompositionSurfaceBitmap *v38; // rcx
  void (__fastcall *v39)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *); // rax
  void (__fastcall *v40)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *); // rdx
  char v42; // [rsp+48h] [rbp-C0h]
  __int16 v43; // [rsp+49h] [rbp-BFh]
  int v44; // [rsp+4Ch] [rbp-BCh]
  int v45; // [rsp+50h] [rbp-B8h]
  int v46; // [rsp+54h] [rbp-B4h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  HRGN v48; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+88h] [rbp-80h]
  _OWORD v50[4]; // [rsp+98h] [rbp-70h] BYREF
  __int16 v51; // [rsp+D8h] [rbp-30h]
  _OWORD v52[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+138h] [rbp+30h] BYREF
  __int64 v55; // [rsp+140h] [rbp+38h]
  __int128 v56; // [rsp+148h] [rbp+40h] BYREF
  __int128 v57; // [rsp+158h] [rbp+50h] BYREF
  void *lpMem; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v59[18]; // [rsp+170h] [rbp+68h] BYREF

  v6 = 0;
  v7 = 0;
  v48 = a4;
  v8 = 0;
  v43 = 0;
  v10 = a3;
  v11 = this;
  if ( !a3 || (v42 = 1, (*((_DWORD *)a3 + 29) & 0x800) == 0) )
    v42 = 0;
  v59[0] = 0;
  lpMem = v59;
  if ( a6 || *((_BYTE *)this + 400) )
  {
    LOBYTE(v43) = 1;
    v6 = 1;
    v7 = 1;
    if ( a2 && a3 )
    {
      if ( *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 40LL) == CDxHandleBitmapRealization::UpdateAttributes )
        CDxHandleBitmapRealization::UpdateAttributes(a2, a3);
      else
        (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 40LL))(
          a2,
          a3);
    }
    v32 = v42;
  }
  else
  {
    HIDWORD(v47) = 0;
    v44 = 0;
    v45 = 0;
    v12 = *((_QWORD *)this + 15);
    v57 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v56 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v53 = 32085;
    v51 = 32085;
    v54 = 0LL;
    v55 = 0LL;
    v46 = 0;
    v52[1] = _xmm;
    v50[0] = _xmm;
    HIDWORD(v49) = 0;
    v52[0] = _xmm;
    v52[2] = _xmm;
    v52[3] = _xmm;
    v50[1] = _xmm;
    v50[2] = _xmm;
    v50[3] = _xmm;
    if ( v12 )
    {
      v13 = v12 + 144;
      v14 = *(bool (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v13 + 40LL);
      if ( v14 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform(v13, (__int64)v52, &v57);
      else
        v14(v13, (__int64)v52, &v57);
      v15 = *((_QWORD *)v11 + 15);
      v16 = (__m128)_mm_loadu_si128((const __m128i *)(v15 + 172));
      v44 = *(_DWORD *)(v15 + 168);
      v17 = v15 + 144;
      LODWORD(v18) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
      LODWORD(v19) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      LODWORD(v20) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
      v21 = *(_DWORD *(__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v15 + 144) + 24LL);
      if ( (char *)v21 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
        PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo(v17, &v54);
      else
        PixelFormatInfo = v21(v17, &v54);
      v47 = *(_QWORD *)PixelFormatInfo;
      v46 = PixelFormatInfo[2];
    }
    else
    {
      v20 = *((float *)&v55 + 1);
      v19 = *(float *)&v55;
      v18 = *((float *)&v54 + 1);
      v16.m128_i32[0] = v54;
    }
    if ( a2 )
    {
      if ( v10 )
      {
        if ( *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 40LL) == CDxHandleBitmapRealization::UpdateAttributes )
          CDxHandleBitmapRealization::UpdateAttributes(a2, v10);
        else
          (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 40LL))(
            a2,
            v10);
      }
      v23 = *(bool (__fastcall **)(__int64, __int64, __int128 *))(*((_QWORD *)a2 + 18) + 40LL);
      v24 = (char *)a2 + 144;
      if ( v23 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform((__int64)v24, (__int64)v50, &v56);
      else
        v23((__int64)v24, (__int64)v50, &v56);
      v25 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 172));
      v45 = *((_DWORD *)a2 + 42);
      LODWORD(v26) = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
      LODWORD(v27) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
      LODWORD(v28) = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
      v29 = *(_DWORD *(__fastcall **)(__int64, __int64 *))(*((_QWORD *)a2 + 18) + 24LL);
      v30 = (char *)a2 + 144;
      if ( (char *)v29 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
        v31 = CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)v30, &v54);
      else
        v31 = v29((__int64)v30, &v54);
      v49 = *(_QWORD *)v31;
    }
    else
    {
      v28 = 0.0;
      v27 = 0.0;
      v26 = 0.0;
      v25.m128_i32[0] = 0;
    }
    if ( (unsigned __int8)operator!=(&v57, &v56) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>(v52, v50) )
      v6 = 1;
    v32 = v42;
    if ( v42
      || HIDWORD(v47) != HIDWORD(v49)
      || v44 != v45
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16.m128_f32[0] - v25.m128_f32[0])) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - v26)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v27)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v28)) & _xmm) > 0.0000011920929
      || v46 != (_DWORD)a3 )
    {
      v7 = 1;
    }
  }
  v33 = (struct CBitmapRealization *)*((_QWORD *)v11 + 15);
  LOBYTE(this) = 0;
  if ( v33 != a2 )
  {
    if ( v33 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(
        this,
        *((__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))v11 + 15));
    v34 = *((_QWORD *)v11 + 25);
    if ( v34 )
      *(_BYTE *)(v34 + 205) = 0;
    *((_QWORD *)v11 + 15) = a2;
    LOBYTE(this) = 1;
    v33 = a2;
  }
  v35 = v43;
  if ( (_BYTE)this )
    v35 = 1;
  if ( v32 )
  {
    CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CCompositionSurfaceInfo *)((char *)v11 + 48));
    v33 = (struct CBitmapRealization *)*((_QWORD *)v11 + 15);
  }
  if ( v33 )
    v8 = CCompositionSurfaceInfo::DirtyRenderingRealization(v11, v35, v48, (struct CRegion *)&lpMem);
  if ( !*((_BYTE *)v11 + 400) )
  {
    *((_BYTE *)v11 + 400) = 1;
    if ( v35 || v6 || v7 || v8 || a5 && *(_DWORD *)a5 )
    {
      v36 = *((_DWORD *)v11 + 96);
      HIBYTE(v43) = 1;
      if ( v36 > 0 )
      {
        v37 = (const struct CRegion *)((unsigned __int64)&lpMem & -(__int64)(v8 != 0));
        do
        {
          v40 = CCompositionSurfaceBitmap::NotifyUpdate;
          LOBYTE(a4) = v7;
          LOBYTE(a3) = v6;
          v38 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)v11 + 45) + 8LL * (unsigned int)(v36 - 1));
          v39 = *(void (__fastcall **)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *))(*(_QWORD *)v38 + 8LL);
          LOBYTE(v40) = v35;
          if ( v39 == CCompositionSurfaceBitmap::NotifyUpdate )
            CCompositionSurfaceBitmap::NotifyUpdate(v38, v35, v6, v7, v37, a5);
          else
            v39(v38, (char)v40, (char)a3, (char)a4, v37, a5);
          --v36;
        }
        while ( v36 > 0 );
      }
    }
    *((_BYTE *)v11 + 400) = 0;
  }
  if ( v59 != lpMem )
    operator delete(lpMem);
  return HIBYTE(v43);
}
