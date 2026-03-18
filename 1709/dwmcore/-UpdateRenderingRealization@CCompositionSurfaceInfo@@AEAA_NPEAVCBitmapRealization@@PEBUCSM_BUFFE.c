/*
 * XREFs of ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BC64 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800289A0 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x18002AFD0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18002B020 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FCCC (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x18004AE88 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x18004D0E0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x18004D200 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18004D4E0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D8A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180076114 (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180088FA4 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800897D8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180089AD4 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180089B2C (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18011BDAC (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::UpdateRenderingRealization(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(CBitmapRealization *this, const struct _GUID *a2, void **a3),
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  CCompositionSurfaceInfo *v7; // rsi
  HRGN v9; // r12
  char v10; // r14
  bool v11; // r15
  unsigned int v12; // r13d
  int v13; // r12d
  char *v14; // rcx
  void (__fastcall *v15)(char *, struct FastRegion::Internal::CRgnData **, struct tagRECT *); // rax
  __int64 v16; // rax
  __m128 v17; // xmm0
  __int64 v18; // rcx
  float v19; // xmm10_4
  float v20; // xmm9_4
  float v21; // xmm6_4
  float v22; // xmm8_4
  __int64 (__fastcall *v23)(__int64, __int64 *); // rax
  __int64 PixelFormatInfo; // rax
  __int64 v25; // xmm0_8
  DWORD v26; // eax
  __int64 (__fastcall *v27)(CBitmapRealization *, const struct _GUID *, void **); // rax
  CBitmapRealization *v28; // rcx
  __m128 v29; // xmm0
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm7_4
  float v33; // xmm13_4
  __int64 (__fastcall *v34)(CBitmapRealization *, const struct _GUID *, void **); // rax
  char *v35; // rcx
  __int64 v36; // rax
  unsigned __int8 v37; // r10
  __int64 (__fastcall ***v38)(CBitmapRealization *, const struct _GUID *, void **); // rdx
  __int64 v39; // rax
  CDxHandleBitmapRealization *v40; // rcx
  void (__fastcall *v41)(CDxHandleBitmapRealization *__hidden, unsigned int *, unsigned int *); // rax
  struct _RGNDATA *v42; // r14
  DWORD RegionData; // ebx
  unsigned int v44; // r15d
  struct FastRegion::Internal::CRgnData **v45; // rbx
  char *Buffer; // r10
  unsigned int v47; // edi
  char *v48; // rcx
  int v49; // r8d
  int v50; // r9d
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  _DWORD *v53; // rdi
  int v54; // eax
  int v55; // r12d
  int v56; // r10d
  int v57; // ecx
  __int64 v58; // r11
  _DWORD *v59; // r8
  _DWORD *v60; // r9
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r11
  signed int v65; // ebx
  int v66; // edx
  int v67; // r11d
  int v68; // ebx
  int v69; // edi
  int v70; // eax
  int v71; // r9d
  int v72; // r10d
  int v73; // r11d
  int v74; // edi
  char *v75; // rdx
  CBitmapRealization *v76; // rcx
  __int64 (__fastcall *v77)(CBitmapRealization *, const struct CRegion *); // rax
  __int64 v78; // r8
  unsigned __int8 v79; // dl
  struct ScrollOptimization *v80; // r9
  int v81; // ebx
  unsigned __int8 v82; // r15
  struct FastRegion::Internal::CRgnData **v83; // rdi
  CCompositionSurfaceBitmap *v84; // rcx
  void (__fastcall *v85)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *); // rax
  __int64 v87; // rax
  CBitmapRealization *v88; // rcx
  void (*v89)(void); // rax
  __int64 (__fastcall **v90)(CBitmapRealization *, const struct _GUID *, void **); // rax
  bool (*v93)(CDxHandleBitmapRealization *__hidden, const struct CSM_BUFFER_ATTRIBUTES *); // r8
  __int64 v94; // r12
  int v95; // eax
  SIZE_T v96; // r8
  signed int v97; // eax
  signed int LastError; // eax
  struct FastRegion::Internal::CRgnData *v99; // rdx
  unsigned int v100; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v101; // [rsp+48h] [rbp-C0h]
  __int16 v102; // [rsp+49h] [rbp-BFh]
  DWORD nCount; // [rsp+4Ch] [rbp-BCh]
  unsigned int v104[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct ScrollOptimization *v105; // [rsp+58h] [rbp-B0h]
  HRGN hrgn; // [rsp+60h] [rbp-A8h]
  __int64 v107; // [rsp+68h] [rbp-A0h]
  __int64 v108; // [rsp+78h] [rbp-90h]
  unsigned __int64 v109; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v110; // [rsp+90h] [rbp-78h]
  struct tagRECT v111; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v112; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v114; // [rsp+C0h] [rbp-48h]
  struct FastRegion::Internal::CRgnData *v115[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v116; // [rsp+D8h] [rbp-30h]
  __int128 v117; // [rsp+E8h] [rbp-20h]
  __int128 v118; // [rsp+F8h] [rbp-10h]
  __int16 v119; // [rsp+108h] [rbp+0h]
  struct FastRegion::Internal::CRgnData *v120; // [rsp+118h] [rbp+10h] BYREF
  _DWORD v121[18]; // [rsp+120h] [rbp+18h] BYREF
  void *v122[2]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v123; // [rsp+178h] [rbp+70h]
  __int128 v124; // [rsp+188h] [rbp+80h]
  __int128 v125; // [rsp+198h] [rbp+90h]
  __int16 v126; // [rsp+1A8h] [rbp+A0h]
  _BYTE v127[80]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v128; // [rsp+208h] [rbp+100h] BYREF
  void *lpMem; // [rsp+210h] [rbp+108h]
  _BYTE v130[256]; // [rsp+218h] [rbp+110h] BYREF

  v7 = this;
  v9 = a4;
  v10 = 0;
  v105 = a5;
  hrgn = a4;
  v102 = 0;
  v11 = a3 && (*((_DWORD *)a3 + 29) & 0x800) != 0;
  v12 = 0;
  v120 = (struct FastRegion::Internal::CRgnData *)v121;
  v121[0] = 0;
  if ( a6 || *((_BYTE *)this + 384) )
  {
    v37 = 1;
    v102 = 257;
    if ( a2 && a3 )
    {
      v90 = *a2;
      v93 = (bool (*)(CDxHandleBitmapRealization *__hidden, const struct CSM_BUFFER_ATTRIBUTES *))v90[5];
      if ( v93 == CDxHandleBitmapRealization::UpdateAttributes )
        CDxHandleBitmapRealization::UpdateAttributes((CDxHandleBitmapRealization *)a2, a3);
      else
        ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *, const struct _GUID *, void **), const struct CSM_BUFFER_ATTRIBUTES *))v93)(
          a2,
          a3);
      v37 = 1;
    }
  }
  else
  {
    v13 = 0;
    this = (CCompositionSurfaceInfo *)*((_QWORD *)this + 15);
    v112 = (struct tagRECT)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v111 = (struct tagRECT)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v107 = 0LL;
    v119 = 32085;
    v126 = 32085;
    v104[1] = 0;
    v104[0] = 0;
    v113 = 0LL;
    v114 = 0LL;
    v109 = 0LL;
    v110 = 0LL;
    nCount = 0;
    v116 = _xmm;
    *(_OWORD *)v122 = _xmm;
    v108 = 0LL;
    *(_OWORD *)v115 = _xmm;
    v117 = _xmm;
    v118 = _xmm;
    v123 = _xmm;
    v124 = _xmm;
    v125 = _xmm;
    if ( this )
    {
      v14 = (char *)this + 144;
      v15 = *(void (__fastcall **)(char *, struct FastRegion::Internal::CRgnData **, struct tagRECT *))(*(_QWORD *)v14 + 40LL);
      if ( (char *)v15 == (char *)CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform(v14, v115, &v112);
      else
        v15(v14, v115, &v112);
      v16 = *((_QWORD *)v7 + 15);
      v17 = *(__m128 *)(v16 + 172);
      v104[1] = *(_DWORD *)(v16 + 168);
      v18 = v16 + 144;
      LODWORD(v19) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
      LODWORD(v20) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
      v21 = v17.m128_f32[0];
      LODWORD(v22) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
      v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v16 + 144) + 24LL);
      if ( (char *)v23 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
        PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo(v18, &v113);
      else
        PixelFormatInfo = v23(v18, &v113);
      v25 = *(_QWORD *)PixelFormatInfo;
      v26 = *(_DWORD *)(PixelFormatInfo + 8);
      v107 = v25;
      v13 = HIDWORD(v25);
      nCount = v26;
    }
    else
    {
      v22 = *((float *)&v114 + 1);
      v20 = *(float *)&v114;
      v19 = *((float *)&v113 + 1);
      v21 = *(float *)&v113;
    }
    if ( a2 )
    {
      if ( a3 )
      {
        if ( (char *)(*a2)[5] == (char *)CDxHandleBitmapRealization::UpdateAttributes )
          CDxHandleBitmapRealization::UpdateAttributes((CDxHandleBitmapRealization *)a2, a3);
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *, const struct _GUID *, void **), const struct CSM_BUFFER_ATTRIBUTES *))(*a2)[5])(
            a2,
            a3);
      }
      v27 = a2[18][5];
      v28 = (CBitmapRealization *)(a2 + 18);
      if ( (char *)v27 == (char *)CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform(v28, v122, &v111);
      else
        v27(v28, (const struct _GUID *)v122, (void **)&v111);
      v29 = *(__m128 *)((char *)a2 + 172);
      v104[0] = *((_DWORD *)a2 + 42);
      LODWORD(v30) = _mm_shuffle_ps(v29, v29, 85).m128_u32[0];
      LODWORD(v31) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
      v32 = v29.m128_f32[0];
      LODWORD(v33) = _mm_shuffle_ps(v29, v29, 255).m128_u32[0];
      v34 = a2[18][3];
      v35 = (char *)(a2 + 18);
      if ( (char *)v34 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
        v36 = CDxHandleBitmapRealization::GetPixelFormatInfo(v35, &v113);
      else
        v36 = ((__int64 (__fastcall *)(char *, __int64 *))v34)(v35, &v113);
      v12 = *(_DWORD *)(v36 + 8);
      v108 = *(_QWORD *)v36;
    }
    else
    {
      v33 = *((float *)&v110 + 1);
      v31 = *(float *)&v110;
      v30 = *((float *)&v109 + 1);
      v32 = *(float *)&v109;
    }
    if ( *(float *)&v112.left != *(float *)&v111.left
      || *(float *)&v112.top != *(float *)&v111.top
      || *(float *)&v112.right != *(float *)&v111.right
      || *(float *)&v112.bottom != *(float *)&v111.bottom
      || !(unsigned __int8)CMILMatrix::IsEqualTo<0>(v115, v122) )
    {
      HIBYTE(v102) = 1;
    }
    if ( v11
      || v13 != HIDWORD(v108)
      || v104[1] != v104[0]
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - v32)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v30)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v31)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v33)) & _xmm) > 0.0000011920929
      || nCount != v12 )
    {
      LOBYTE(v102) = 1;
    }
    v9 = hrgn;
    v37 = 0;
    v12 = 0;
  }
  v38 = (__int64 (__fastcall ***)(CBitmapRealization *, const struct _GUID *, void **))*((_QWORD *)v7 + 15);
  if ( v38 != a2 )
  {
    if ( v38 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(this, v38);
    v87 = *((_QWORD *)v7 + 25);
    if ( v87 )
      *(_BYTE *)(v87 + 205) = 0;
    *((_QWORD *)v7 + 15) = a2;
    v37 = 1;
  }
  v101 = v37;
  if ( v11 )
  {
    CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CCompositionSurfaceInfo *)((char *)v7 + 48));
    v37 = v101;
  }
  v39 = *((_QWORD *)v7 + 15);
  if ( !v39 )
    goto LABEL_104;
  v10 = 0;
  if ( v9 )
  {
    v40 = (CDxHandleBitmapRealization *)(v39 + 144);
    v41 = *(void (__fastcall **)(CDxHandleBitmapRealization *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)(v39 + 144) + 32LL);
    if ( v41 == CDxHandleBitmapRealization::GetSize )
      CDxHandleBitmapRealization::GetSize(v40, v104, &v104[1]);
    else
      v41(v40, v104, &v104[1]);
    if ( v9 == (HRGN)1 )
    {
      v110 = *(_QWORD *)v104;
      v109 = 0LL;
      CRegion::SetRectangle((CRegion *)&v120, (const struct MilRectU *)&v109);
LABEL_97:
      v37 = v101;
      v10 = 1;
      goto LABEL_98;
    }
    LODWORD(v122[1]) = 0;
    v122[0] = &v122[1];
    v42 = 0LL;
    SetLastError(0);
    RegionData = GetRegionData(v9, 0, 0LL);
    if ( RegionData )
    {
      v42 = (struct _RGNDATA *)HeapAlloc(WPF::g_processHeap, 0, RegionData);
      if ( !v42 )
      {
        v65 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du);
LABEL_167:
        if ( v42 )
        {
          WPF::ProcessHeapImpl::Free(v42);
          v42 = 0LL;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x1Au);
        goto LABEL_175;
      }
      SetLastError(0);
      if ( GetRegionData(v9, RegionData, v42) )
      {
        v45 = &v115[1];
        Buffer = v42->Buffer;
        nCount = v42->rdh.nCount;
        v44 = nCount;
        v115[0] = (struct FastRegion::Internal::CRgnData *)&v115[1];
        LODWORD(v115[1]) = 0;
        *(_DWORD *)v120 = 0;
        if ( nCount )
        {
          while ( 1 )
          {
            v47 = v12 + 5;
            if ( v44 < v12 + 5 )
              v47 = v44;
            v48 = &Buffer[16 * v12];
            v49 = *(_DWORD *)v48;
            v50 = *((_DWORD *)v48 + 2);
            HIDWORD(v109) = *((_DWORD *)v48 + 1);
            HIDWORD(v110) = *((_DWORD *)v48 + 3);
            LODWORD(v109) = v49;
            LODWORD(v110) = v50;
            v51 = HIDWORD(v110);
            v52 = HIDWORD(v109);
            if ( v49 >= v50 || SHIDWORD(v109) >= SHIDWORD(v110) )
            {
              *(_DWORD *)v45 = 0;
            }
            else
            {
              *(_DWORD *)v45 = 2;
              *((_DWORD *)v45 + 1) = v49;
              *((_DWORD *)v45 + 2) = v50;
              *((_DWORD *)v45 + 3) = v52;
              *((_DWORD *)v45 + 4) = 16;
              *((_DWORD *)v45 + 7) = v49;
              *((_DWORD *)v45 + 8) = v50;
              *((_DWORD *)v45 + 5) = v51;
              *((_DWORD *)v45 + 6) = 16;
            }
            if ( ++v12 < v47 )
            {
              v94 = (__int64)&Buffer[16 * v12 + 8];
              while ( 1 )
              {
                v111 = *(struct tagRECT *)(v94 - 8);
                v112 = v111;
                FastRegion::CRegion::CRegion((FastRegion::CRegion *)v127, &v112);
                v65 = FastRegion::CRegion::Union((FastRegion::CRegion *)v115, (const struct CRegion *)v127);
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v127);
                if ( v65 < 0 )
                  break;
                ++v12;
                v94 += 16LL;
                if ( v12 >= v47 )
                  goto LABEL_53;
              }
LABEL_173:
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v115);
              v9 = hrgn;
              goto LABEL_73;
            }
LABEL_53:
            v45 = (struct FastRegion::Internal::CRgnData **)v115[0];
            if ( *(_DWORD *)v115[0] )
              break;
LABEL_68:
            if ( v12 >= v44 )
            {
              if ( &v115[1] != v45 )
              {
                WPF::ProcessHeapImpl::Free(v45);
                LODWORD(v115[1]) = 0;
                v115[0] = (struct FastRegion::Internal::CRgnData *)&v115[1];
              }
              v9 = hrgn;
              goto LABEL_72;
            }
            Buffer = v42->Buffer;
          }
          v53 = v120;
          if ( *(_DWORD *)v120 )
          {
            v95 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v120, v115[0]);
            v128 = 0;
            lpMem = v130;
            v65 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v128, v95);
            if ( v65 < 0 )
            {
              FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v128);
            }
            else
            {
              FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, v120, v115[0]);
              v65 = FastRegion::CRegion::SaveResult(
                      (FastRegion::CRegion *)&v120,
                      (struct FastRegion::Internal::CWorkBuffer *)&v128);
              if ( v130 != lpMem )
                WPF::ProcessHeapImpl::Free(lpMem);
            }
            goto LABEL_66;
          }
          v54 = v121[0];
          v55 = *((_DWORD *)v115[0] + 2 * *(_DWORD *)v115[0] + 2)
              + 8 * *(_DWORD *)v115[0]
              - *((_DWORD *)v115[0] + 4)
              + 8 * (*(_DWORD *)v115[0] - 1)
              + 12;
          if ( v121 == (_DWORD *)v120 )
            v54 = 60;
          if ( v54 < v55 )
          {
            v96 = v55;
            if ( !v55 )
              v96 = 1LL;
            v53 = HeapAlloc(WPF::g_processHeap, 0, v96);
            if ( !v53 )
            {
              v65 = -2147024882;
LABEL_66:
              if ( v65 < 0 )
                goto LABEL_173;
              v45 = (struct FastRegion::Internal::CRgnData **)v115[0];
              goto LABEL_68;
            }
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v120);
            v120 = (struct FastRegion::Internal::CRgnData *)v53;
            v121[0] = v55;
          }
          v56 = 0;
          *v53 = *(_DWORD *)v45;
          v57 = *v53;
          v53[1] = *((_DWORD *)v45 + 1);
          v53[2] = *((_DWORD *)v45 + 2);
          v58 = (__int64)v45 + *((int *)v45 + 4) + 12;
          v59 = &v53[2 * v57 + 3];
          if ( v57 > 0 )
          {
            v60 = v53 + 3;
            do
            {
              *v60 = *(_DWORD *)((char *)v60 + (char *)v45 - (char *)v53);
              v60 += 2;
              v61 = v56++;
              v53[2 * v61 + 4] = 4 * (((__int64)v59 - v58) >> 2)
                               + (_DWORD)v45
                               + 8 * v61
                               + LODWORD(v45[v61 + 2])
                               - ((_DWORD)v53
                                + 8 * v61);
            }
            while ( v56 < *v53 );
            v44 = nCount;
          }
          v62 = (unsigned __int64)(8 * (*(_DWORD *)v45 - 1) + LODWORD(v45[*(_DWORD *)v45 + 1]) - *((_DWORD *)v45 + 4)) >> 2;
          v63 = (int)v62;
          if ( (int)v62 > 0 )
          {
            v64 = v58 - (_QWORD)v59;
            do
            {
              *v59 = *(_DWORD *)((char *)v59 + v64);
              ++v59;
              --v63;
            }
            while ( v63 );
          }
          v65 = 0;
          goto LABEL_66;
        }
LABEL_72:
        v65 = 0;
LABEL_73:
        if ( v65 >= 0 )
        {
          if ( &v122[1] != v122[0] )
          {
            WPF::ProcessHeapImpl::Free(v122[0]);
            LODWORD(v122[1]) = 0;
            v122[0] = &v122[1];
          }
          goto LABEL_76;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x21u);
LABEL_175:
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v122);
LABEL_76:
        if ( v42 )
          HeapFree(WPF::g_processHeap, 0, v42);
        if ( v65 < 0 )
        {
          v99 = v120;
          *(_DWORD *)v120 = 2;
          *((_DWORD *)v99 + 1) = 0x80000000;
          *((_DWORD *)v99 + 2) = 0x7FFFFFFF;
          *((_DWORD *)v99 + 3) = 0x80000000;
          *((_DWORD *)v99 + 4) = 16;
          *((_DWORD *)v99 + 7) = 0x80000000;
          *((_DWORD *)v99 + 8) = 0x7FFFFFFF;
          *((_DWORD *)v99 + 5) = 0x7FFFFFFF;
          *((_DWORD *)v99 + 6) = 16;
        }
        v66 = *(_DWORD *)v120;
        if ( *(_DWORD *)v120 )
        {
          v67 = *((_DWORD *)v120 + 1);
          v68 = *((_DWORD *)v120 + 2);
          v69 = *((_DWORD *)v120 + 3);
          v70 = *((_DWORD *)v120 + 2 * v66 + 1);
        }
        else
        {
          v70 = nCount;
          v69 = nCount;
          v68 = nCount;
          v67 = nCount;
        }
        v71 = -1;
        v72 = -1;
        if ( v67 >= 0 )
          v72 = v67;
        v73 = -1;
        if ( v69 >= 0 )
          v73 = v69;
        v74 = -1;
        if ( v68 >= 0 )
          v74 = v68;
        if ( v70 >= 0 )
          v71 = v70;
        if ( !v66
          || (v75 = (char *)v120 + 8 * v66 + 4,
              (unsigned int)((__int64)&v75[*((int *)v75 + 1) - (__int64)*((int *)v120 + 4) - ((_QWORD)v120 + 12)] >> 3) != 1)
          || v72
          || v73
          || v74 != v104[0]
          || v71 != v104[1] )
        {
          *((_BYTE *)v7 + 196) = 1;
        }
        goto LABEL_97;
      }
      LastError = GetLastError();
      v65 = LastError;
      if ( LastError > 0 )
        v65 = (unsigned __int16)LastError | 0x80070000;
      v100 = 144;
    }
    else
    {
      v97 = GetLastError();
      v65 = v97;
      if ( v97 > 0 )
        v65 = (unsigned __int16)v97 | 0x80070000;
      v100 = 135;
    }
    if ( v65 >= 0 )
      v65 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, v100);
    goto LABEL_167;
  }
LABEL_98:
  if ( v9 == (HRGN)1 || v37 && *((_DWORD *)v7 + 26) > 1u )
  {
    v88 = (CBitmapRealization *)(*((_QWORD *)v7 + 15) + 144LL);
    v89 = *(void (**)(void))(*(_QWORD *)v88 + 128LL);
    if ( (char *)v89 == (char *)CBitmapRealization::MarkFullDirty )
      CBitmapRealization::MarkFullDirty(v88);
    else
      v89();
  }
  else
  {
    if ( !v10 )
      goto LABEL_104;
    v76 = (CBitmapRealization *)(*((_QWORD *)v7 + 15) + 144LL);
    v77 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct CRegion *))(*(_QWORD *)v76 + 120LL);
    if ( v77 == CBitmapRealization::AddDirtyRegion )
      CBitmapRealization::AddDirtyRegion(v76, (const struct CRegion *)&v120);
    else
      v77(v76, (const struct CRegion *)&v120);
  }
  v37 = v101;
LABEL_104:
  if ( *((_BYTE *)v7 + 384) )
  {
    v82 = 0;
  }
  else
  {
    v78 = HIBYTE(v102);
    v79 = v102;
    v80 = v105;
    *((_BYTE *)v7 + 384) = 1;
    if ( v37 || v102 || v10 || v80 && *(_DWORD *)v80 )
    {
      v81 = *((_DWORD *)v7 + 92);
      v82 = 1;
      if ( v81 > 0 )
      {
        v83 = &v120;
        if ( !v10 )
          v83 = 0LL;
        do
        {
          v84 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)v7 + 43) + 8LL * (unsigned int)(v81 - 1));
          v85 = *(void (__fastcall **)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *))(*(_QWORD *)v84 + 8LL);
          if ( v85 == CCompositionSurfaceBitmap::NotifyUpdate )
            CCompositionSurfaceBitmap::NotifyUpdate(v84, v37, v78, v79, (const struct CRegion *)v83, v80);
          else
            v85(v84, v37, v78, v79, (const struct CRegion *)v83, v80);
          v37 = v101;
          --v81;
          v79 = v102;
          v78 = HIBYTE(v102);
          v80 = v105;
        }
        while ( v81 > 0 );
      }
    }
    else
    {
      v82 = 0;
    }
    *((_BYTE *)v7 + 384) = 0;
  }
  if ( v121 != (_DWORD *)v120 )
    WPF::ProcessHeapImpl::Free(v120);
  return v82;
}
