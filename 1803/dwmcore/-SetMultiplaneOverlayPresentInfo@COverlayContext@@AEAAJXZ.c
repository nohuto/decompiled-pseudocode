/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18007A48C (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DCF88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18015BDE4 (-GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180166148 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?IsPreWDDM22Driver@COverlayContext@@AEBA_NXZ @ 0x18016700C (-IsPreWDDM22Driver@COverlayContext@@AEBA_NXZ.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180167810 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801AC5C4 (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this)
{
  char *v1; // r12
  unsigned int v2; // eax
  unsigned int v4; // edi
  _DWORD *v5; // r14
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  void *v8; // rbp
  char v9; // al
  int v10; // ecx
  SIZE_T v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // eax
  unsigned int *v14; // rcx
  unsigned int v15; // xmm0_4
  float v16; // xmm0_4
  unsigned int v17; // xmm0_4
  __int128 v18; // xmm0
  __int64 v19; // r11
  unsigned int v20; // eax
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rsi
  unsigned int v26; // esi
  unsigned int v27; // r10d
  unsigned int v28; // r9d
  int v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int128 v35; // xmm0
  unsigned int v36; // esi
  __int64 v37; // rdi
  int DXGIResourceAndSubResourceIndex; // eax
  __int64 v39; // r8
  __int64 v40; // rax
  __int128 v41; // xmm0
  unsigned int v42; // r8d
  unsigned int v43; // edi
  __int64 v44; // rcx
  __int64 v45; // r15
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v47; // r10
  struct CBitmapRealization *v48; // rdx
  unsigned int v49; // r8d
  char v50; // r11
  int v51; // edi
  __int64 v52; // rax
  int v53; // esi
  unsigned int v54; // edx
  char v55; // cl
  __int64 v56; // rdx
  __int64 v57; // r10
  __int64 v58; // r9
  __int128 v59; // xmm0
  __int64 v60; // rax
  char *v61; // r8
  __int64 *v62; // rbx
  __int64 v63; // rdi
  bool v65; // cf
  __int64 v66; // rcx
  bool v67; // r8
  int v68; // eax
  __int64 v69; // rsi
  int SingleDXGIResourceAndSubResourceIndex; // eax
  __int64 v71; // rax
  _QWORD *v72; // rcx
  unsigned int v73; // edi
  __int128 v74; // xmm0
  struct CBitmapRealization *v75; // rax
  unsigned int v76; // r15d
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned int v80; // edi
  int v81; // eax
  int v82; // edx
  unsigned int v83; // r9d
  _DWORD *v84; // rdi
  char v85; // r8
  unsigned int v86; // ecx
  _DWORD *v87; // rax
  unsigned int v88; // ecx
  _DWORD *v89; // rax
  __int64 v90; // rcx
  bool v91; // al
  int v92; // r11d
  int v93; // edi
  bool v94; // bp
  int v95; // esi
  unsigned int v96; // r8d
  __int64 v97; // rsi
  int v98; // r8d
  __int64 v99; // r9
  __int64 v100; // r10
  unsigned int v101; // r11d
  unsigned int v102; // r15d
  __int64 v103; // xmm1_8
  _BOOL8 v104; // rdx
  unsigned int v105; // edi
  int v106; // eax
  unsigned int v107; // [rsp+20h] [rbp-D8h]
  char v108; // [rsp+40h] [rbp-B8h]
  unsigned int v109; // [rsp+44h] [rbp-B4h]
  unsigned int v110; // [rsp+48h] [rbp-B0h]
  unsigned int v111; // [rsp+4Ch] [rbp-ACh] BYREF
  bool v112; // [rsp+50h] [rbp-A8h]
  unsigned int v113; // [rsp+54h] [rbp-A4h]
  unsigned int v114; // [rsp+58h] [rbp-A0h]
  __int64 v115; // [rsp+60h] [rbp-98h]
  void *v116; // [rsp+68h] [rbp-90h]
  unsigned int v117; // [rsp+70h] [rbp-88h]
  unsigned int v118; // [rsp+74h] [rbp-84h]
  int v119; // [rsp+78h] [rbp-80h]
  void *lpMem; // [rsp+80h] [rbp-78h]
  struct IDXGIResource *v121; // [rsp+88h] [rbp-70h] BYREF
  struct CBitmapRealization *v122; // [rsp+90h] [rbp-68h]
  __int64 v123; // [rsp+98h] [rbp-60h]
  struct DXGI_HDR_METADATA_HDR10 Buf1; // [rsp+A0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v1 = 0LL;
  v2 = *((_DWORD *)this + 146);
  v109 = *((_DWORD *)this + 70);
  v4 = *((_DWORD *)this + 78);
  v5 = 0LL;
  v115 = 0LL;
  v6 = 0;
  v110 = 0;
  v7 = 0;
  lpMem = 0LL;
  v8 = 0LL;
  v116 = 0LL;
  v113 = v2;
  v114 = v4;
  v117 = 0;
  COverlayContext::DbgSaveOverlayStateInfoBefore(this);
  if ( !v109 && !v113 && !*((_BYTE *)this + 1195) )
  {
    v9 = *((_BYTE *)this + 1190);
    if ( v9 )
    {
      LODWORD(v19) = v115;
      *((_BYTE *)this + 1191) = 1;
    }
    else
    {
      v10 = 1;
      if ( *((_DWORD *)this + 293) > 1u )
        v10 = *((_DWORD *)this + 293);
      v6 = v10 + *((_DWORD *)this + 292) + *((_DWORD *)this + 294);
      v11 = 136LL * v6;
      if ( !is_mul_ok(v6, 0x88uLL) )
        v11 = -1LL;
      if ( !v11 )
        v11 = 1LL;
      v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
      v5 = v12;
      if ( !v12 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      memset_0(v12, 0, 136LL * v6);
      v13 = 0;
      if ( v6 )
      {
        v14 = v5;
        do
        {
          *v14 = v13;
          v14 += 34;
          ++v13;
        }
        while ( v13 < v6 );
      }
      *(_QWORD *)(v5 + 7) = 0LL;
      v5[1] = 1;
      *(float *)&v15 = (float)(*((float *)this + 12) - *((float *)this + 10)) + 6291456.25;
      v111 = v15;
      v5[9] = (int)(v15 << 10) >> 11;
      v16 = *((float *)this + 13) - *((float *)this + 11);
      *(_QWORD *)(v5 + 19) = 1LL;
      v5[24] = 0;
      *(float *)&v17 = v16 + 6291456.25;
      v111 = v17;
      v5[10] = (int)(v17 << 10) >> 11;
      v18 = *(_OWORD *)(v5 + 7);
      *(_OWORD *)(v5 + 11) = v18;
      *(_OWORD *)(v5 + 15) = v18;
      v5[25] = *((_DWORD *)this + 25);
      v5[26] = 0;
      v5[30] = 2;
      *(float *)&v18 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 168LL))(*((_QWORD *)this + 2));
      v5[32] = ConvertSDRBoostToSDRWhiteLevel(*(float *)&v18, *((enum DXGI_COLOR_SPACE_TYPE *)this + 25));
      if ( v6 > 1 || !*((_BYTE *)this + 1192) )
        *((_BYTE *)this + 1189) = 1;
      v9 = *((_BYTE *)this + 1190);
      LODWORD(v19) = v115;
      v114 = 1;
      *(_WORD *)((char *)this + 1191) = 256;
    }
    goto LABEL_128;
  }
  v20 = *((_DWORD *)this + 293);
  v21 = 1;
  v22 = 1;
  v112 = v4 != 0;
  if ( v20 > 1 )
    v21 = v20;
  if ( v4 > 1 )
    v22 = v4;
  v23 = *((_DWORD *)this + 292) + v21;
  v24 = v109 + v113 + v22;
  if ( v24 <= v23 )
    v24 = v23;
  v25 = v24;
  v115 = v24;
  v5 = operator new(saturated_mul(v24, 0x88uLL));
  if ( !v5 )
  {
    v107 = 2853;
LABEL_28:
    v26 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v107);
    LODWORD(v19) = v115;
    goto LABEL_66;
  }
  lpMem = operator new(saturated_mul(v25, 4uLL));
  if ( !lpMem )
  {
    v107 = 2856;
    goto LABEL_28;
  }
  v116 = operator new(saturated_mul(v25, 8uLL));
  if ( !v116 )
  {
    v26 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB2Bu);
    LODWORD(v19) = v115;
    v8 = 0LL;
    goto LABEL_66;
  }
  memset_0(v5, 0, 136 * v25);
  memset_0(v116, 0, 8 * v25);
  if ( v109 && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*((COverlayContext::OverlayPlaneInfo **)this + 32)) )
  {
    v27 = v114;
    v28 = v109;
    v119 = 0;
  }
  else
  {
    v27 = v114;
    v29 = 1;
    v28 = 0;
    if ( v114 > 1 )
      v29 = v114;
    v119 = v29;
  }
  if ( v27 )
  {
    v30 = 0;
    v31 = 0LL;
    do
    {
      v31 += 120LL;
      v32 = 34LL * v6;
      v33 = v30 + v28;
      ++v6;
      ++v30;
      v5[v32] = v33;
      v5[v32 + 1] = 1;
      v5[v32 + 4] = 0;
      v34 = *((_QWORD *)this + 36);
      *(_OWORD *)&v5[v32 + 6] = *(_OWORD *)(v31 + v34 - 120);
      *(_OWORD *)&v5[v32 + 10] = *(_OWORD *)(v31 + v34 - 104);
      *(_OWORD *)&v5[v32 + 14] = *(_OWORD *)(v31 + v34 - 88);
      *(_OWORD *)&v5[v32 + 18] = *(_OWORD *)(v31 + v34 - 72);
      *(_OWORD *)&v5[v32 + 22] = *(_OWORD *)(v31 + v34 - 56);
      *(_OWORD *)&v5[v32 + 26] = *(_OWORD *)(v31 + v34 - 40);
      v35 = *(_OWORD *)(v31 + v34 - 24);
      *(_QWORD *)&v5[v32 + 2] = 0LL;
      *(_OWORD *)&v5[v32 + 30] = v35;
    }
    while ( v30 < v27 );
  }
  else
  {
    *v5 = v28;
    v6 = 1;
    v5[1] = 0;
    *((_QWORD *)v5 + 1) = 0LL;
    v5[4] = 0;
  }
  v36 = 0;
  if ( v113 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      DXGIResourceAndSubResourceIndex = CPlaneCaptureRenderTargetEngine::GetDXGIResourceAndSubResourceIndex(
                                          *(CPlaneCaptureRenderTargetEngine **)(v37 + *((_QWORD *)this + 70)),
                                          &v121,
                                          &v111);
      v110 = DXGIResourceAndSubResourceIndex;
      if ( DXGIResourceAndSubResourceIndex < 0 )
        break;
      ++v36;
      v39 = 34LL * v6++;
      *(_QWORD *)&v5[v39 + 2] = v121;
      v5[v39 + 4] = v111;
      v5[v39] = *(_DWORD *)(*((_QWORD *)this + 70) + v37 + 136);
      v5[v39 + 1] = *(unsigned __int8 *)(*((_QWORD *)this + 70) + v37 + 140);
      v40 = *((_QWORD *)this + 70);
      *(_OWORD *)&v5[v39 + 6] = *(_OWORD *)(v40 + v37 + 16);
      *(_OWORD *)&v5[v39 + 10] = *(_OWORD *)(v40 + v37 + 32);
      *(_OWORD *)&v5[v39 + 14] = *(_OWORD *)(v40 + v37 + 48);
      *(_OWORD *)&v5[v39 + 18] = *(_OWORD *)(v40 + v37 + 64);
      *(_OWORD *)&v5[v39 + 22] = *(_OWORD *)(v40 + v37 + 80);
      *(_OWORD *)&v5[v39 + 26] = *(_OWORD *)(v40 + v37 + 96);
      v41 = *(_OWORD *)(v40 + v37 + 112);
      v37 += 144LL;
      *(_OWORD *)&v5[v39 + 30] = v41;
      if ( v36 >= v113 )
        goto LABEL_47;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DXGIResourceAndSubResourceIndex, 0xB6Eu);
    goto LABEL_64;
  }
LABEL_47:
  v42 = v109;
  v43 = 0;
  v118 = 0;
  if ( !v109 )
    goto LABEL_100;
  do
  {
    v44 = *((_QWORD *)this + 32);
    v45 = 248LL * v43;
    v123 = v43;
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(v45 + v44 + 24));
    v47 = *((_QWORD *)this + 32);
    v48 = RenderingRealizationNoRef;
    v49 = *((_DWORD *)this + 146);
    v50 = 0;
    v122 = RenderingRealizationNoRef;
    v51 = (_DWORD)v8 + v119 + v43;
    v52 = *(_QWORD *)(v45 + v47 + 24);
    v108 = 0;
    LODWORD(v121) = *((_DWORD *)v48 + 69);
    v53 = *(_DWORD *)(v52 + 76);
    while ( 1 )
    {
      v54 = 0;
      if ( !v49 )
        break;
      while ( *(_DWORD *)(144LL * v54 + *((_QWORD *)this + 70) + 136) != v51 )
      {
        if ( ++v54 >= v49 )
          goto LABEL_52;
      }
      ++v51;
      LODWORD(v8) = (_DWORD)v8 + 1;
    }
LABEL_52:
    v111 = (unsigned int)v8;
    if ( *(_BYTE *)(v45 + v47 + 216) && (v53 < 2 || !*(_BYTE *)(v45 + v47 + 217)) || *(_DWORD *)(v45 + v47 + 220) != v51 )
      v50 = 1;
    if ( *((_BYTE *)this + 1193)
      || v50
      || *(_BYTE *)(v45 + v47 + 228)
      || *(_DWORD *)(v45 + v47 + 232) != *(_DWORD *)(*(_QWORD *)(v45 + v47 + 24) + 72LL) && v53 < 2 )
    {
      v55 = 1;
      v108 = 1;
      *((_BYTE *)this + 1189) = 1;
    }
    else
    {
      v55 = 0;
    }
    v65 = CCommonRegistryData::m_dwOverlayTestMode < 3;
    *(_DWORD *)(v45 + v47 + 196) = (_DWORD)v121;
    *(_DWORD *)(v45 + *((_QWORD *)this + 32) + 220) = v51;
    *(_BYTE *)(v45 + *((_QWORD *)this + 32) + 216) = 0;
    *(_BYTE *)(v45 + *((_QWORD *)this + 32) + 228) = v55;
    *(_DWORD *)(v45 + *((_QWORD *)this + 32) + 232) = *(_DWORD *)(*(_QWORD *)(v45 + *((_QWORD *)this + 32) + 24) + 72LL);
    if ( v65 )
    {
      if ( v50
        || (v66 = *((_QWORD *)this + 32), *(_DWORD *)(*(_QWORD *)(v66 + v45 + 24) + 76LL) == -1)
        || *((_BYTE *)this + 1193) )
      {
        v66 = *((_QWORD *)this + 32);
        v67 = 0;
      }
      else
      {
        v67 = 1;
      }
      v68 = COverlayContext::EnsureIndependentFlipState(
              this,
              (struct COverlayContext::OverlayPlaneInfo *)(v45 + v66),
              v67,
              0);
      v110 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xBCAu);
LABEL_64:
        LODWORD(v19) = v115;
        goto LABEL_65;
      }
    }
    if ( !v108 )
    {
      v76 = v117;
      *((_DWORD *)lpMem + v117) = v51;
      v7 = v76 + 1;
      v73 = v118;
      v117 = v7;
      goto LABEL_94;
    }
    v69 = 34LL * v6;
    v5[v69] = v51;
    v5[v69 + 1] = 1;
    SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                              *(struct CCompositionSurfaceInfo **)(*((_QWORD *)this + 32) + v45 + 24),
                                              (struct IDXGIResource **)&v5[v69 + 2],
                                              &v5[v69 + 4]);
    v110 = SingleDXGIResourceAndSubResourceIndex;
    if ( SingleDXGIResourceAndSubResourceIndex < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, 0xBD7u);
      goto LABEL_64;
    }
    v71 = *((_QWORD *)this + 32);
    v72 = v116;
    v73 = v118;
    *(_OWORD *)&v5[v69 + 6] = *(_OWORD *)(v45 + v71 + 40);
    *(_OWORD *)&v5[v69 + 10] = *(_OWORD *)(v45 + v71 + 56);
    *(_OWORD *)&v5[v69 + 14] = *(_OWORD *)(v45 + v71 + 72);
    *(_OWORD *)&v5[v69 + 18] = *(_OWORD *)(v45 + v71 + 88);
    *(_OWORD *)&v5[v69 + 22] = *(_OWORD *)(v45 + v71 + 104);
    *(_OWORD *)&v5[v69 + 26] = *(_OWORD *)(v45 + v71 + 120);
    v74 = *(_OWORD *)(v45 + v71 + 136);
    v75 = v122;
    *(_OWORD *)&v5[v69 + 30] = v74;
    v72[v6] = v75;
    if ( v73 < 2 )
      *((_BYTE *)this + 1288 * *((int *)this + 2240) + 512 * v123 + 1744) = v108;
    LODWORD(v8) = v111;
    ++v6;
    v7 = v117;
LABEL_94:
    v42 = v109;
    v43 = v73 + 1;
    v118 = v43;
  }
  while ( v43 < v109 );
  v77 = 0LL;
  v78 = v109;
  do
  {
    v79 = *((_QWORD *)this + 32);
    if ( *(_BYTE *)(v77 + v79 + 228) && !*((_BYTE *)this + 1190) )
      *(_BYTE *)(v77 + v79 + 228) = 0;
    v77 += 248LL;
    --v78;
  }
  while ( v78 );
LABEL_100:
  v80 = v114;
  v81 = 1;
  v19 = v115;
  v82 = 0;
  if ( v114 > 1 )
    v81 = v114;
  v83 = v113 + v81 + v42;
  if ( v83 < (unsigned int)v115 )
  {
    v84 = lpMem;
    while ( 1 )
    {
      while ( 1 )
      {
        v85 = 0;
        v86 = 0;
        if ( v6 )
        {
          v87 = v5;
          while ( *v87 != v82 )
          {
            ++v86;
            v87 += 34;
            if ( v86 >= v6 )
              goto LABEL_112;
          }
          ++v82;
          v85 = 1;
        }
LABEL_112:
        v88 = 0;
        if ( !v7 )
          break;
        v89 = v84;
        while ( *v89 != v82 )
        {
          ++v88;
          ++v89;
          if ( v88 >= v7 )
            goto LABEL_116;
        }
        ++v82;
      }
LABEL_116:
      if ( !v85 )
      {
        ++v83;
        v90 = 34LL * v6++;
        v5[v90] = v82;
        v5[v90 + 1] = 0;
        *((_BYTE *)this + 1189) = 1;
        if ( v83 >= (unsigned int)v19 )
          break;
      }
    }
    v80 = v114;
  }
  v91 = v6 <= 1 && !*((_BYTE *)this + 1192) && !v80;
  *((_BYTE *)this + 1191) = v91;
  v9 = *((_BYTE *)this + 1190);
  if ( !v9 )
    *((_BYTE *)this + 1192) = v112;
  *((_BYTE *)this + 1193) = 0;
  v115 = v19;
LABEL_128:
  if ( *((_BYTE *)this + 1191) || v9 )
  {
LABEL_65:
    v26 = v110;
    v8 = v116;
    goto LABEL_66;
  }
  v92 = *((_DWORD *)this + 70);
  v93 = 0;
  v94 = v6 != 0;
  v95 = 0;
  memset(&Buf1, 0, sizeof(Buf1));
  v96 = 0;
  if ( !v92 )
    goto LABEL_138;
  v97 = *((_QWORD *)this + 32);
  while ( 2 )
  {
    if ( !CCompositionSurfaceInfo::GetHDR10MetaData(*(CCompositionSurfaceInfo **)(248LL * v96 + v97 + 24), &Buf1) )
    {
LABEL_136:
      v96 = v98 + 1;
      if ( v96 >= v101 )
      {
        v95 = *(_DWORD *)&Buf1.MaxContentLightLevel;
        goto LABEL_138;
      }
      continue;
    }
    break;
  }
  if ( !v100 || v100 == v99 )
  {
    v93 = 1;
    goto LABEL_136;
  }
  v95 = 0;
  v93 = 0;
  memset(&Buf1, 0, sizeof(Buf1));
LABEL_138:
  v102 = *((_DWORD *)this + 28);
  if ( v93 != v102 || v93 == 1 && memcmp_0(&Buf1, (char *)this + 116, 0x1CuLL) )
  {
    v103 = *(_QWORD *)&Buf1.MaxMasteringLuminance;
    v102 = v93;
    *((_DWORD *)this + 28) = v93;
    *(_OWORD *)((char *)this + 116) = *(_OWORD *)Buf1.RedPrimary;
    *(_QWORD *)((char *)this + 132) = v103;
    *((_DWORD *)this + 35) = v95;
    if ( v93 == 1 )
    {
      v1 = (char *)this + 116;
      v102 = 1;
    }
  }
  if ( (COverlayContext::IsPreWDDM22Driver(this) || (v104 = v94, *((_BYTE *)this + 1187)))
    && (v104 = v94, v6)
    && v5[1] == 1 )
  {
    v105 = v109;
    if ( !*((_QWORD *)v5 + 1) && !v109 && !v113 )
    {
      v104 = v94;
      if ( !*((_BYTE *)this + 1195) )
        v104 = 0LL;
    }
  }
  else
  {
    v105 = v109;
  }
  v8 = v116;
  v106 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8, _QWORD, char *, unsigned int, _DWORD *, void *))(**((_QWORD **)this + 2) + 464LL))(
           *((_QWORD *)this + 2),
           v104,
           v102,
           v1,
           v6,
           v5,
           v116);
  v26 = v106;
  if ( v106 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0xC8Cu);
    LODWORD(v19) = v115;
    LODWORD(v1) = 0;
  }
  else
  {
    LODWORD(v1) = 0;
    LODWORD(v19) = v115;
    *((_DWORD *)this + 293) = v114;
    *((_DWORD *)this + 294) = v113;
    *((_BYTE *)this + 1196) = *((_BYTE *)this + 1195);
    *((_DWORD *)this + 292) = v105;
  }
LABEL_66:
  if ( *((_DWORD *)this + 70) )
  {
    do
    {
      if ( (unsigned int)v1 >= 2 )
        break;
      v56 = *((_QWORD *)this + 32);
      v57 = (unsigned int)v1;
      LODWORD(v1) = (_DWORD)v1 + 1;
      v58 = 248 * v57;
      v59 = *(_OWORD *)(248 * v57 + v56);
      v60 = 248 * v57 + v56;
      v57 <<= 9;
      v60 += 128LL;
      v61 = (char *)this + 1288 * *((int *)this + 2240) + v57 + 1488;
      *(_OWORD *)v61 = v59;
      *((_OWORD *)v61 + 1) = *(_OWORD *)(v60 - 112);
      *((_OWORD *)v61 + 2) = *(_OWORD *)(v60 - 96);
      *((_OWORD *)v61 + 3) = *(_OWORD *)(v60 - 80);
      *((_OWORD *)v61 + 4) = *(_OWORD *)(v60 - 64);
      *((_OWORD *)v61 + 5) = *(_OWORD *)(v60 - 48);
      *((_OWORD *)v61 + 6) = *(_OWORD *)(v60 - 32);
      v61 += 128;
      *((_OWORD *)v61 - 1) = *(_OWORD *)(v60 - 16);
      *(_OWORD *)v61 = *(_OWORD *)v60;
      *((_OWORD *)v61 + 1) = *(_OWORD *)(v60 + 16);
      *((_OWORD *)v61 + 2) = *(_OWORD *)(v60 + 32);
      *((_OWORD *)v61 + 3) = *(_OWORD *)(v60 + 48);
      *((_OWORD *)v61 + 4) = *(_OWORD *)(v60 + 64);
      *((_OWORD *)v61 + 5) = *(_OWORD *)(v60 + 80);
      *((_OWORD *)v61 + 6) = *(_OWORD *)(v60 + 96);
      *((_QWORD *)v61 + 14) = *(_QWORD *)(v60 + 112);
      *(_DWORD *)((char *)this + 1288 * *((int *)this + 2240) + v57 + 1740) = *(_DWORD *)(*(_QWORD *)(v58 + *((_QWORD *)this + 32) + 24)
                                                                                        + 76LL);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 70) );
  }
  *((_BYTE *)this + 1288 * *((int *)this + 2240) + 2517) = *((_BYTE *)this + 1190);
  if ( v5 )
  {
    if ( (_DWORD)v19 )
    {
      v62 = (__int64 *)(v5 + 2);
      v63 = (unsigned int)v19;
      do
      {
        ReleaseInterfaceNoNULL<IWICBitmap>(*v62);
        v62 += 17;
        --v63;
      }
      while ( v63 );
    }
    HeapFree(WPF::g_processHeap, 0, v5);
  }
  if ( lpMem )
    operator delete(lpMem);
  if ( v8 )
    operator delete(v8);
  return v26;
}
