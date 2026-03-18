/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066FC4
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x180139A18 (-GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180142D14 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180144750 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAA_NPEAPEBX@Z @ 0x180144B28 (-UpdateHDRMetaData@COverlayContext@@AEAA_NPEAPEBX@Z.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this)
{
  unsigned int v2; // r15d
  __int64 *v3; // rdi
  unsigned int v4; // eax
  LPVOID v5; // r14
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  unsigned int v8; // ebp
  unsigned __int64 v9; // rsi
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // r11d
  unsigned int i; // r9d
  unsigned int v14; // eax
  void *v15; // r14
  unsigned int j; // r11d
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r9
  char *v21; // r8
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // edx
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // r8d
  int v33; // eax
  unsigned int v34; // r9d
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm0
  unsigned int v41; // ebp
  __int64 v42; // r14
  int DXGIResourceAndSubResourceIndex; // eax
  __int64 v44; // r8
  __int64 v45; // rax
  __int128 v46; // xmm0
  unsigned int v47; // r11d
  __int64 v48; // rbp
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  unsigned int v50; // r11d
  char v51; // r14
  __int64 v52; // r8
  int v53; // r13d
  unsigned int v54; // r10d
  __int64 v55; // rdx
  __int64 v56; // rcx
  char v57; // cl
  bool v58; // cf
  bool v59; // r8
  int v60; // eax
  __int64 v61; // r14
  int SingleDXGIResourceAndSubResourceIndex; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // edx
  int v68; // eax
  unsigned int v69; // r8d
  char v70; // r9
  unsigned int v71; // ecx
  __int64 *v72; // rax
  unsigned int v73; // ecx
  _DWORD *v74; // rax
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // r10
  __int64 v78; // r9
  char *v79; // r8
  _OWORD *v80; // rax
  __int128 v81; // xmm1
  __int64 *v82; // rbx
  unsigned int v83; // [rsp+20h] [rbp-A8h]
  LPVOID v84; // [rsp+40h] [rbp-88h]
  int v85; // [rsp+48h] [rbp-80h]
  unsigned int v86; // [rsp+4Ch] [rbp-7Ch]
  int v87; // [rsp+50h] [rbp-78h]
  unsigned int v88; // [rsp+54h] [rbp-74h]
  _DWORD *lpMem; // [rsp+58h] [rbp-70h]
  int v90; // [rsp+60h] [rbp-68h]
  unsigned int v91; // [rsp+64h] [rbp-64h]
  struct CBitmapRealization *v92; // [rsp+68h] [rbp-60h]
  __int64 v93; // [rsp+70h] [rbp-58h]
  void *v94; // [rsp+D0h] [rbp+8h] BYREF
  bool v95; // [rsp+D8h] [rbp+10h]
  unsigned int v96; // [rsp+E0h] [rbp+18h]
  struct IDXGIResource *v97; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  lpMem = 0LL;
  v3 = 0LL;
  v84 = 0LL;
  v4 = *((_DWORD *)this + 144);
  v5 = 0LL;
  v6 = *((_DWORD *)this + 68);
  v7 = 0;
  v8 = *((_DWORD *)this + 76);
  v9 = 0LL;
  v86 = 0;
  v85 = 0;
  v10 = *((_DWORD *)this + 2238);
  v96 = v4;
  v88 = v6;
  v91 = v8;
  v11 = (v10 + 1) % 6u;
  *((_DWORD *)this + 2238) = v11;
  memset_0((char *)this + 1288 * (int)v11 + 1224, 0, 0x508uLL);
  v12 = 0;
  for ( *((_QWORD *)this + 161 * *((int *)this + 2238) + 153) = *(_QWORD *)(*((_QWORD *)this + 150) + 360LL);
        v12 < *((_DWORD *)this + 68);
        ++*((_DWORD *)this + 322 * *((int *)this + 2238) + 564) )
  {
    if ( v12 >= 2 )
      break;
    v19 = v12++;
    v20 = 248 * v19;
    v19 <<= 9;
    v21 = (char *)this + 1288 * *((int *)this + 2238) + v19 + 1232;
    v22 = (_OWORD *)(*((_QWORD *)this + 31) + v20);
    *(_OWORD *)v21 = *v22;
    *((_OWORD *)v21 + 1) = v22[1];
    *((_OWORD *)v21 + 2) = v22[2];
    *((_OWORD *)v21 + 3) = v22[3];
    *((_OWORD *)v21 + 4) = v22[4];
    *((_OWORD *)v21 + 5) = v22[5];
    *((_OWORD *)v21 + 6) = v22[6];
    v21 += 128;
    v23 = v22[7];
    v22 += 8;
    *((_OWORD *)v21 - 1) = v23;
    *(_OWORD *)v21 = *v22;
    *((_OWORD *)v21 + 1) = v22[1];
    *((_OWORD *)v21 + 2) = v22[2];
    *((_OWORD *)v21 + 3) = v22[3];
    *((_OWORD *)v21 + 4) = v22[4];
    *((_OWORD *)v21 + 5) = v22[5];
    *((_OWORD *)v21 + 6) = v22[6];
    *((_QWORD *)v21 + 14) = *((_QWORD *)v22 + 14);
    *(_DWORD *)((char *)this + 1288 * *((int *)this + 2238) + v19 + 1728) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 31)
                                                                                                  + v20
                                                                                                  + 24)
                                                                                      + 76LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 76); ++*((_DWORD *)this + 322 * *((int *)this + 2238) + 626) )
  {
    if ( i >= 2 )
      break;
    v24 = *((_QWORD *)this + 35);
    v25 = i++;
    v26 = 120 * v25 + 1288LL * *((int *)this + 2238);
    *(_OWORD *)((char *)this + v26 + 2264) = *(_OWORD *)(v24 + 120 * v25);
    *(_OWORD *)((char *)this + v26 + 2280) = *(_OWORD *)(v24 + 120 * v25 + 16);
    *(_OWORD *)((char *)this + v26 + 2296) = *(_OWORD *)(v24 + 120 * v25 + 32);
    *(_OWORD *)((char *)this + v26 + 2312) = *(_OWORD *)(v24 + 120 * v25 + 48);
    *(_OWORD *)((char *)this + v26 + 2328) = *(_OWORD *)(v24 + 120 * v25 + 64);
    *(_OWORD *)((char *)this + v26 + 2344) = *(_OWORD *)(v24 + 120 * v25 + 80);
    *(_OWORD *)((char *)this + v26 + 2360) = *(_OWORD *)(v24 + 120 * v25 + 96);
    *(_QWORD *)((char *)this + v26 + 2376) = *(_QWORD *)(v24 + 120 * v25 + 112);
  }
  *((_BYTE *)this + 1288 * *((int *)this + 2238) + 2508) = *((_BYTE *)this + 1178);
  if ( !v6 )
  {
    v14 = v96;
    if ( !v96 && !*((_BYTE *)this + 1183) )
    {
      *((_BYTE *)this + 1179) = 0;
      goto LABEL_7;
    }
  }
  v27 = *((_DWORD *)this + 291);
  v28 = 1;
  v29 = 1;
  v95 = v8 != 0;
  if ( v27 > 1 )
    v28 = v27;
  if ( v8 > 1 )
    v29 = v8;
  v30 = *((_DWORD *)this + 290) + v28;
  v31 = v6 + v29 + v96;
  if ( v31 <= v30 )
    v31 = v30;
  v9 = v31;
  v3 = (__int64 *)operator new(saturated_mul(v31, 0x88uLL));
  if ( !v3 )
  {
    v83 = 2808;
LABEL_38:
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v83);
    v15 = 0LL;
    goto LABEL_13;
  }
  lpMem = operator new(saturated_mul(v9, 4uLL));
  if ( !lpMem )
  {
    v83 = 2811;
    goto LABEL_38;
  }
  v84 = operator new(saturated_mul(v9, 8uLL));
  v15 = v84;
  if ( v84 )
  {
    memset_0(v3, 0, 136 * v9);
    memset_0(v84, 0, 8 * v9);
    if ( v6 && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*((COverlayContext::OverlayPlaneInfo **)this + 31)) )
    {
      v87 = 0;
      v32 = v6;
    }
    else
    {
      v32 = 0;
      v33 = 1;
      if ( v8 > 1 )
        v33 = v8;
      v87 = v33;
    }
    if ( v8 )
    {
      v34 = 0;
      v35 = 0LL;
      do
      {
        v36 = v7++;
        v37 = 17 * v36;
        LODWORD(v36) = v34 + v32;
        ++v34;
        LODWORD(v3[v37 + 2]) = 0;
        LODWORD(v3[v37]) = v36;
        HIDWORD(v3[v37]) = 1;
        v38 = *((_QWORD *)this + 35);
        v39 = *(_OWORD *)(v35 + v38);
        v35 += 120LL;
        *(_OWORD *)&v3[v37 + 3] = v39;
        *(_OWORD *)&v3[v37 + 5] = *(_OWORD *)(v35 + v38 - 104);
        *(_OWORD *)&v3[v37 + 7] = *(_OWORD *)(v35 + v38 - 88);
        *(_OWORD *)&v3[v37 + 9] = *(_OWORD *)(v35 + v38 - 72);
        *(_OWORD *)&v3[v37 + 11] = *(_OWORD *)(v35 + v38 - 56);
        *(_OWORD *)&v3[v37 + 13] = *(_OWORD *)(v35 + v38 - 40);
        v40 = *(_OWORD *)(v35 + v38 - 24);
        v3[v37 + 1] = 0LL;
        *(_OWORD *)&v3[v37 + 15] = v40;
      }
      while ( v34 < v8 );
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0;
      v3[1] = 0LL;
      *((_DWORD *)v3 + 4) = 0;
      v7 = 1;
      *(_DWORD *)v3 = v32;
    }
    v41 = 0;
    if ( v96 )
    {
      v42 = 0LL;
      while ( 1 )
      {
        DXGIResourceAndSubResourceIndex = CPlaneCaptureRenderTargetEngine::GetDXGIResourceAndSubResourceIndex(
                                            *(CPlaneCaptureRenderTargetEngine **)(v42 + *((_QWORD *)this + 69)),
                                            &v97,
                                            (unsigned int *)&v94);
        v2 = DXGIResourceAndSubResourceIndex;
        if ( DXGIResourceAndSubResourceIndex < 0 )
          break;
        ++v41;
        v44 = 17LL * v7++;
        v3[v44 + 1] = (__int64)v97;
        LODWORD(v3[v44 + 2]) = (_DWORD)v94;
        LODWORD(v3[v44]) = *(_DWORD *)(*((_QWORD *)this + 69) + v42 + 136);
        HIDWORD(v3[v44]) = *(unsigned __int8 *)(*((_QWORD *)this + 69) + v42 + 140);
        v45 = *((_QWORD *)this + 69);
        *(_OWORD *)&v3[v44 + 3] = *(_OWORD *)(v45 + v42 + 16);
        *(_OWORD *)&v3[v44 + 5] = *(_OWORD *)(v45 + v42 + 32);
        *(_OWORD *)&v3[v44 + 7] = *(_OWORD *)(v45 + v42 + 48);
        *(_OWORD *)&v3[v44 + 9] = *(_OWORD *)(v45 + v42 + 64);
        *(_OWORD *)&v3[v44 + 11] = *(_OWORD *)(v45 + v42 + 80);
        *(_OWORD *)&v3[v44 + 13] = *(_OWORD *)(v45 + v42 + 96);
        v46 = *(_OWORD *)(v45 + v42 + 112);
        v42 += 144LL;
        *(_OWORD *)&v3[v44 + 15] = v46;
        if ( v41 >= v96 )
          goto LABEL_56;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DXGIResourceAndSubResourceIndex, 0xB41u);
      goto LABEL_12;
    }
LABEL_56:
    v47 = 0;
    LODWORD(v97) = 0;
    if ( v6 )
    {
      do
      {
        v48 = 248LL * v47;
        v93 = v47;
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(*((_QWORD *)this + 31) + v48 + 24));
        v50 = (unsigned int)v97;
        v51 = 0;
        v52 = *((_QWORD *)this + 31);
        v53 = v85 + (_DWORD)v97 + v87;
        v54 = *((_DWORD *)this + 144);
        v90 = *((_DWORD *)RenderingRealizationNoRef + 69);
        v92 = RenderingRealizationNoRef;
        LOBYTE(v94) = 0;
        while ( 1 )
        {
          v55 = 0LL;
          if ( !v54 )
            break;
          while ( *(_DWORD *)(*((_QWORD *)this + 69) + 144 * v55 + 136) != v53 )
          {
            v55 = (unsigned int)(v55 + 1);
            if ( (unsigned int)v55 >= v54 )
              goto LABEL_61;
          }
          ++v53;
          ++v85;
        }
LABEL_61:
        v56 = *(_QWORD *)(v52 + v48 + 24);
        if ( *(_BYTE *)(v52 + v48 + 216) && (*(int *)(v56 + 76) < 2 || !*(_BYTE *)(v52 + v48 + 217))
          || *(_DWORD *)(v52 + v48 + 220) != v53 )
        {
          v51 = 1;
        }
        if ( *((_BYTE *)this + 1181)
          || v51
          || *(_BYTE *)(v52 + v48 + 228)
          || *(_DWORD *)(v52 + v48 + 232) != *(_DWORD *)(v56 + 72) && *(int *)(v56 + 76) < 2 )
        {
          v57 = 1;
          LOBYTE(v94) = 1;
          *((_BYTE *)this + 1177) = 1;
        }
        else
        {
          v57 = (char)v94;
        }
        v58 = CCommonRegistryData::m_dwOverlayTestMode < 3;
        *(_DWORD *)(v52 + v48 + 196) = v90;
        *(_DWORD *)(*((_QWORD *)this + 31) + v48 + 220) = v53;
        *(_BYTE *)(*((_QWORD *)this + 31) + v48 + 216) = 0;
        *(_BYTE *)(*((_QWORD *)this + 31) + v48 + 228) = v57;
        *(_DWORD *)(*((_QWORD *)this + 31) + v48 + 232) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + v48 + 24)
                                                                    + 72LL);
        if ( v58 )
        {
          v59 = !v51
             && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + v48 + 24) + 76LL) != -1
             && !*((_BYTE *)this + 1181);
          v60 = COverlayContext::EnsureIndependentFlipState(
                  this,
                  (struct COverlayContext::OverlayPlaneInfo *)(v48 + *((_QWORD *)this + 31)),
                  v59,
                  0);
          v2 = v60;
          if ( v60 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0xB9Du);
            goto LABEL_12;
          }
          v50 = (unsigned int)v97;
        }
        if ( (_BYTE)v94 )
        {
          v61 = 17LL * v7;
          LODWORD(v3[v61]) = v53;
          HIDWORD(v3[v61]) = 1;
          SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                    *(struct CCompositionSurfaceInfo **)(*((_QWORD *)this + 31)
                                                                                       + v48
                                                                                       + 24),
                                                    (struct IDXGIResource **)&v3[v61 + 1],
                                                    (unsigned int *)&v3[v61 + 2]);
          v2 = SingleDXGIResourceAndSubResourceIndex;
          if ( SingleDXGIResourceAndSubResourceIndex < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, 0xBAAu);
            goto LABEL_12;
          }
          v63 = *((_QWORD *)this + 31);
          v50 = (unsigned int)v97;
          *(_OWORD *)&v3[v61 + 3] = *(_OWORD *)(v63 + v48 + 40);
          *(_OWORD *)&v3[v61 + 5] = *(_OWORD *)(v63 + v48 + 56);
          *(_OWORD *)&v3[v61 + 7] = *(_OWORD *)(v63 + v48 + 72);
          *(_OWORD *)&v3[v61 + 9] = *(_OWORD *)(v63 + v48 + 88);
          *(_OWORD *)&v3[v61 + 11] = *(_OWORD *)(v63 + v48 + 104);
          *(_OWORD *)&v3[v61 + 13] = *(_OWORD *)(v63 + v48 + 120);
          *(_OWORD *)&v3[v61 + 15] = *(_OWORD *)(v63 + v48 + 136);
          *((_QWORD *)v84 + v7) = v92;
          if ( v50 < 2 )
            *((_BYTE *)this + 1288 * *((int *)this + 2238) + 512 * v93 + 1736) = (_BYTE)v94;
          ++v7;
        }
        else
        {
          lpMem[v86++] = v53;
        }
        v6 = v88;
        v47 = v50 + 1;
        LODWORD(v97) = v47;
      }
      while ( v47 < v88 );
      if ( v88 )
      {
        v64 = 0LL;
        v65 = v88;
        do
        {
          v66 = *((_QWORD *)this + 31);
          if ( *(_BYTE *)(v66 + v64 + 228) && !*((_BYTE *)this + 1178) )
            *(_BYTE *)(v66 + v64 + 228) = 0;
          v64 += 248LL;
          --v65;
        }
        while ( v65 );
      }
    }
    v8 = v91;
    v67 = 0;
    v68 = 1;
    if ( v91 > 1 )
      v68 = v91;
    v69 = v6 + v68 + v96;
    if ( v69 < (unsigned int)v9 )
    {
      while ( 1 )
      {
        v70 = 0;
        v71 = 0;
        if ( v7 )
        {
          v72 = v3;
          while ( *(_DWORD *)v72 != v67 )
          {
            ++v71;
            v72 += 17;
            if ( v71 >= v7 )
              goto LABEL_107;
          }
          ++v67;
          v70 = 1;
        }
LABEL_107:
        v73 = 0;
        if ( v86 )
        {
          v74 = lpMem;
          while ( *v74 != v67 )
          {
            ++v73;
            ++v74;
            if ( v73 >= v86 )
              goto LABEL_113;
          }
          ++v67;
          v70 = 1;
        }
LABEL_113:
        if ( !v70 )
        {
          ++v69;
          v75 = 17LL * v7++;
          HIDWORD(v3[v75]) = 0;
          LODWORD(v3[v75]) = v67;
          *((_BYTE *)this + 1177) = 1;
          if ( v69 >= (unsigned int)v9 )
            break;
        }
      }
      v6 = v88;
    }
    *((_BYTE *)this + 1179) = v7 <= 1 && !*((_BYTE *)this + 1180) && !v91;
    if ( !*((_BYTE *)this + 1178) )
      *((_BYTE *)this + 1180) = v95;
    v5 = v84;
    v14 = v96;
    *((_BYTE *)this + 1181) = 0;
LABEL_7:
    if ( v6 || v14 || *((_DWORD *)this + 290) || *((_BYTE *)this + 1183) || *((_BYTE *)this + 1184) )
    {
      v94 = 0LL;
      COverlayContext::UpdateHDRMetaData(this, (const void **)&v94);
      if ( CCommonRegistryData::m_dwOverlayTestMode >= 3
        || (LOBYTE(v18) = v7 != 0,
            v76 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, void *, unsigned int, __int64 *, LPVOID))(**((_QWORD **)this + 2) + 416LL))(
                    *((_QWORD *)this + 2),
                    v18,
                    *((unsigned int *)this + 27),
                    v94,
                    v7,
                    v3,
                    v5),
            v2 = v76,
            v76 >= 0) )
      {
        if ( !*((_BYTE *)this + 1178) )
        {
          *((_BYTE *)this + 1184) = *((_BYTE *)this + 1183);
          *((_DWORD *)this + 290) = v6;
          *((_DWORD *)this + 291) = v8;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0xC31u);
      }
    }
LABEL_12:
    v15 = v84;
    goto LABEL_13;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xAFEu);
LABEL_13:
  for ( j = 0;
        j < *((_DWORD *)this + 68);
        *(_DWORD *)((char *)this + 1288 * *((int *)this + 2238) + v77 + 1732) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + v78 + 24)
                                                                                          + 76LL) )
  {
    if ( j >= 2 )
      break;
    v77 = j++;
    v78 = 248 * v77;
    v77 <<= 9;
    v79 = (char *)this + 1288 * *((int *)this + 2238) + v77 + 1480;
    v80 = (_OWORD *)(*((_QWORD *)this + 31) + v78);
    *(_OWORD *)v79 = *v80;
    *((_OWORD *)v79 + 1) = v80[1];
    *((_OWORD *)v79 + 2) = v80[2];
    *((_OWORD *)v79 + 3) = v80[3];
    *((_OWORD *)v79 + 4) = v80[4];
    *((_OWORD *)v79 + 5) = v80[5];
    *((_OWORD *)v79 + 6) = v80[6];
    v79 += 128;
    v81 = v80[7];
    v80 += 8;
    *((_OWORD *)v79 - 1) = v81;
    *(_OWORD *)v79 = *v80;
    *((_OWORD *)v79 + 1) = v80[1];
    *((_OWORD *)v79 + 2) = v80[2];
    *((_OWORD *)v79 + 3) = v80[3];
    *((_OWORD *)v79 + 4) = v80[4];
    *((_OWORD *)v79 + 5) = v80[5];
    *((_OWORD *)v79 + 6) = v80[6];
    *((_QWORD *)v79 + 14) = *((_QWORD *)v80 + 14);
  }
  *((_BYTE *)this + 1288 * *((int *)this + 2238) + 2509) = *((_BYTE *)this + 1178);
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v82 = v3 + 1;
      do
      {
        ReleaseInterfaceNoNULL<CManipulationManager>(*v82);
        v82 += 17;
        --v9;
      }
      while ( v9 );
    }
    WPF::ProcessHeapImpl::Free(v3);
  }
  if ( lpMem )
    WPF::ProcessHeapImpl::Free(lpMem);
  if ( v15 )
    WPF::ProcessHeapImpl::Free(v15);
  return v2;
}
