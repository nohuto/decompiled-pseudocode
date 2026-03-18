/*
 * XREFs of ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180076E90 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x18000A658 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180021278 (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002A3E0 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180036CD0 (-GetAlphaMode@CBitmapRealization@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapRealization@@UEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180036CE0 (-GetColorSpace@CBitmapRealization@@UEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180037840 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800765A0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18007A120 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18009A190 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceInfo::UpdateRenderingRealization(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(CBitmapRealization *__hidden this, const struct _GUID *, void **),
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  char v6; // r14
  char v7; // r12
  char v8; // r15
  char v9; // r13
  __int64 v13; // rcx
  CDxHandleBitmapRealization *v14; // rcx
  __int64 (__fastcall *v15)(CDxHandleBitmapRealization *, CMILMatrix *); // rax
  CBitmapRealization *v16; // rcx
  __int64 (*v17)(void); // rax
  int AlphaMode; // eax
  __int64 v19; // rax
  __m128 v20; // xmm6
  CBitmapRealization *v21; // rcx
  float v22; // xmm10_4
  float v23; // xmm9_4
  float v24; // xmm8_4
  __int64 (*v25)(void); // rax
  int ColorSpace; // eax
  char *v27; // rsi
  __int64 (__fastcall *v28)(CDxHandleBitmapRealization *, CMILMatrix *); // rax
  CDxHandleBitmapRealization *v29; // rcx
  __int64 (__fastcall *v30)(CBitmapRealization *); // rax
  CBitmapRealization *v31; // rcx
  int v32; // eax
  __m128 v33; // xmm7
  float v34; // xmm11_4
  float v35; // xmm12_4
  float v36; // xmm13_4
  __int64 (__fastcall *v37)(CBitmapRealization *); // rax
  CBitmapRealization *v38; // rcx
  int v39; // r8d
  char v40; // si
  __int64 (__fastcall ***v41)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rdx
  __int64 v42; // rax
  const struct ScrollOptimization *v43; // rdx
  int v44; // edi
  char v45; // r13
  CCompositionSurfaceBitmap *v46; // rcx
  void (__fastcall *v47)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *); // rax
  void (__fastcall *v48)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *); // r8
  __int64 (__fastcall **v50)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  void (__fastcall *v53)(CDxHandleBitmapRealization *__hidden, const struct CSM_BUFFER_ATTRIBUTES *); // r8
  struct CRegion *v54; // [rsp+28h] [rbp-E0h]
  struct ScrollOptimization *v55; // [rsp+30h] [rbp-D8h]
  char v56; // [rsp+48h] [rbp-C0h]
  char v57; // [rsp+49h] [rbp-BFh]
  int v58; // [rsp+4Ch] [rbp-BCh]
  __int64 v59; // [rsp+50h] [rbp-B8h]
  int v60; // [rsp+60h] [rbp-A8h]
  int v61; // [rsp+64h] [rbp-A4h]
  HRGN v62; // [rsp+90h] [rbp-78h]
  _OWORD v63[4]; // [rsp+98h] [rbp-70h] BYREF
  __int16 v64; // [rsp+D8h] [rbp-30h]
  _OWORD v65[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v66; // [rsp+128h] [rbp+20h]
  __int128 v67; // [rsp+138h] [rbp+30h] BYREF
  __int128 v68; // [rsp+148h] [rbp+40h] BYREF
  void *lpMem; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v70[18]; // [rsp+160h] [rbp+58h] BYREF

  v6 = 0;
  v7 = 0;
  v62 = a4;
  v8 = 0;
  v9 = 0;
  v57 = 0;
  if ( !a3 || (v56 = 1, (*((_DWORD *)a3 + 29) & 0x800) == 0) )
    v56 = 0;
  v70[0] = 0;
  lpMem = v70;
  if ( a6 || *((_BYTE *)this + 384) )
  {
    v6 = 1;
    v7 = 1;
    v8 = 1;
    if ( a2 && a3 )
    {
      v50 = *a2;
      v53 = (void (__fastcall *)(CDxHandleBitmapRealization *__hidden, const struct CSM_BUFFER_ATTRIBUTES *))v50[5];
      if ( v53 == CDxHandleBitmapRealization::UpdateAttributes )
        CDxHandleBitmapRealization::UpdateAttributes((CDxHandleBitmapRealization *)a2, a3);
      else
        v53((CDxHandleBitmapRealization *)a2, a3);
    }
    v40 = v56;
  }
  else
  {
    v58 = 0;
    v59 = 0LL;
    v60 = 0;
    v61 = 0;
    v13 = *((_QWORD *)this + 15);
    v68 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v67 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v66 = 32085;
    v64 = 32085;
    v65[1] = _xmm;
    v65[0] = _xmm;
    v65[2] = _xmm;
    v63[2] = _xmm;
    v65[3] = _xmm;
    v63[0] = _xmm;
    v63[1] = _xmm;
    v63[3] = _xmm;
    if ( v13 )
    {
      v14 = (CDxHandleBitmapRealization *)(v13 + 104);
      v15 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, CMILMatrix *))(*(_QWORD *)v14 + 32LL);
      if ( v15 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform(v14, (CMILMatrix *)v65);
      else
        ((void (__fastcall *)(CDxHandleBitmapRealization *, _OWORD *, __int128 *))v15)(v14, v65, &v68);
      v16 = (CBitmapRealization *)(*((_QWORD *)this + 15) + 104LL);
      v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 48LL);
      if ( (char *)v17 == (char *)CBitmapRealization::GetAlphaMode )
        AlphaMode = CBitmapRealization::GetAlphaMode(v16);
      else
        AlphaMode = v17();
      v58 = AlphaMode;
      v19 = *((_QWORD *)this + 15);
      v20 = (__m128)_mm_loadu_si128((const __m128i *)(v19 + 140));
      v60 = *(_DWORD *)(v19 + 136);
      v21 = (CBitmapRealization *)(v19 + 104);
      LODWORD(v22) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
      LODWORD(v23) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
      LODWORD(v24) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
      v25 = *(__int64 (**)(void))(*(_QWORD *)(v19 + 104) + 56LL);
      if ( (char *)v25 == (char *)CBitmapRealization::GetColorSpace )
        ColorSpace = CBitmapRealization::GetColorSpace(v21);
      else
        ColorSpace = v25();
      HIDWORD(v59) = ColorSpace;
    }
    else
    {
      v24 = 0.0;
      v23 = 0.0;
      v22 = 0.0;
      v20.m128_i32[0] = 0;
    }
    if ( a2 )
    {
      if ( a3 )
      {
        if ( (char *)(*a2)[5] == (char *)CDxHandleBitmapRealization::UpdateAttributes )
          CDxHandleBitmapRealization::UpdateAttributes((CDxHandleBitmapRealization *)a2, a3);
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), const struct CSM_BUFFER_ATTRIBUTES *))(*a2)[5])(
            a2,
            a3);
      }
      v27 = (char *)(a2 + 13);
      v28 = (__int64 (__fastcall *)(CDxHandleBitmapRealization *, CMILMatrix *))a2[13][4];
      v29 = (CDxHandleBitmapRealization *)(a2 + 13);
      if ( v28 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform(v29, (CMILMatrix *)v63);
      else
        ((void (__fastcall *)(CDxHandleBitmapRealization *, _OWORD *, __int128 *))v28)(v29, v63, &v67);
      v30 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v27 + 48LL);
      v31 = (CBitmapRealization *)(a2 + 13);
      if ( v30 == CBitmapRealization::GetAlphaMode )
        v32 = CBitmapRealization::GetAlphaMode(v31);
      else
        v32 = v30(v31);
      v33 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 140));
      LODWORD(v59) = v32;
      v61 = *((_DWORD *)a2 + 34);
      LODWORD(v34) = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
      LODWORD(v35) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
      LODWORD(v36) = _mm_shuffle_ps(v33, v33, 255).m128_u32[0];
      v37 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v27 + 56LL);
      v38 = (CBitmapRealization *)(a2 + 13);
      if ( v37 == CBitmapRealization::GetColorSpace )
        CBitmapRealization::GetColorSpace(v38);
      else
        v37(v38);
    }
    else
    {
      v36 = 0.0;
      v35 = 0.0;
      v34 = 0.0;
      v33.m128_i32[0] = 0;
    }
    if ( operator!=((float *)&v68, (float *)&v67) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>(v65, v63) )
      v7 = 1;
    v40 = v56;
    if ( v56
      || v58 != (_DWORD)v59
      || v60 != v61
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20.m128_f32[0] - v33.m128_f32[0])) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v34)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23 - v35)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - v36)) & _xmm) > 0.0000011920929
      || HIDWORD(v59) != v39 )
    {
      v8 = 1;
    }
  }
  v41 = (__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **))*((_QWORD *)this + 15);
  if ( v41 != a2 )
  {
    if ( v41 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(this, v41);
    v42 = *((_QWORD *)this + 25);
    if ( v42 )
      *(_BYTE *)(v42 + 229) = 0;
    *((_QWORD *)this + 15) = a2;
    v6 = 1;
  }
  if ( v40 )
    CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CCompositionSurfaceInfo *)((char *)this + 48));
  if ( *((_QWORD *)this + 15) )
    v9 = CCompositionSurfaceInfo::DirtyRenderingRealization(this, v6, v62, (struct CRegion *)&lpMem);
  if ( !*((_BYTE *)this + 384) )
  {
    v43 = a5;
    *((_BYTE *)this + 384) = 1;
    if ( v6 || v7 || v8 || v9 || a5 && *(_DWORD *)a5 )
    {
      v44 = *((_DWORD *)this + 92);
      v57 = 1;
      if ( v44 > 0 )
      {
        v45 = -v9;
        do
        {
          v48 = CCompositionSurfaceBitmap::NotifyUpdate;
          v55 = v43;
          LOBYTE(a4) = v8;
          v54 = (struct CRegion *)((unsigned __int64)&lpMem & -(__int64)(v45 != 0));
          LOBYTE(v43) = v6;
          v46 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 43) + 8LL * (unsigned int)(v44 - 1));
          v47 = *(void (__fastcall **)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *))(*(_QWORD *)v46 + 8LL);
          LOBYTE(v48) = v7;
          if ( v47 == CCompositionSurfaceBitmap::NotifyUpdate )
            CCompositionSurfaceBitmap::NotifyUpdate(v46, v6, v7, v8, v54, v55);
          else
            v47(v46, (char)v43, (char)v48, (char)a4, v54, v55);
          v43 = a5;
          --v44;
        }
        while ( v44 > 0 );
      }
    }
    *((_BYTE *)this + 384) = 0;
  }
  if ( v70 != lpMem )
    WPF::ProcessHeapImpl::Free(lpMem);
  return v57;
}
