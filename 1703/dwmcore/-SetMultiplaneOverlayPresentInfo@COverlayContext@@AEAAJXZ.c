/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800716A8
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180071BB8 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180150A14 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180150E30 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151FA8 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAA_NXZ @ 0x18015214C (-UpdateHDRMetaData@COverlayContext@@AEAA_NXZ.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  unsigned int v4; // r12d
  char *v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r13d
  unsigned int v8; // r8d
  __int64 v9; // r10
  unsigned int v10; // r11d
  unsigned int i; // r9d
  unsigned int k; // r11d
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  _OWORD *v17; // rax
  _OWORD *v18; // r8
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  bool v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  char *v28; // rax
  int v29; // r8d
  int v30; // eax
  unsigned int v31; // r9d
  __int64 v32; // rdx
  int v33; // eax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm0
  __int64 v37; // rbp
  int *v38; // rbx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v40; // rdx
  char v41; // r9
  char v42; // r11
  unsigned int v43; // r8d
  int v44; // r10d
  unsigned int v45; // r10d
  bool v46; // cf
  bool v47; // cl
  int v48; // eax
  unsigned __int64 v49; // rbx
  int SingleDXGIResourceAndSubResourceIndex; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // ecx
  unsigned int j; // ecx
  __int64 v57; // rax
  bool updated; // al
  __int64 v59; // rdx
  char *v60; // r9
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r10
  __int64 v64; // r9
  _OWORD *v65; // rax
  _OWORD *v66; // r8
  __int128 v67; // xmm1
  __int64 *v68; // rbx
  __int64 v69; // rdi
  int v70; // [rsp+40h] [rbp-58h]
  unsigned int v71; // [rsp+40h] [rbp-58h]
  unsigned int v72; // [rsp+44h] [rbp-54h]
  __int64 v73; // [rsp+48h] [rbp-50h]
  char v74; // [rsp+A0h] [rbp+8h]
  bool v75; // [rsp+A8h] [rbp+10h]
  unsigned int v76; // [rsp+B0h] [rbp+18h]
  int v77; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)this + 74);
  v3 = *((unsigned int *)this + 66);
  v4 = 0;
  v72 = v2;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v7 = 0;
  v8 = (*((_DWORD *)this + 2144) + 1) % 6u;
  *((_DWORD *)this + 2144) = v8;
  memset_0((char *)this + 1240 * (int)v8 + 1136, 0, 0x4D8uLL);
  LODWORD(v9) = 0;
  v10 = 0;
  *((_QWORD *)this + 155 * *((int *)this + 2144) + 142) = *(_QWORD *)(*((_QWORD *)this + 139) + 400LL);
  if ( *((_DWORD *)this + 66) )
  {
    do
    {
      if ( v10 >= 2 )
        break;
      v14 = v10++;
      v15 = 496 * v14;
      v16 = 240 * v14;
      v17 = (_OWORD *)(240 * v14 + *((_QWORD *)this + 30));
      v18 = (_OWORD *)((char *)this + 1240 * *((int *)this + 2144) + v15 + 1144);
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
      v18[4] = v17[4];
      v18[5] = v17[5];
      v18[6] = v17[6];
      v18 += 8;
      v19 = v17[7];
      v17 += 8;
      *(v18 - 1) = v19;
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
      v18[4] = v17[4];
      v18[5] = v17[5];
      v18[6] = v17[6];
      *(_DWORD *)((char *)this + 1240 * *((int *)this + 2144) + v15 + 1624) = *(_DWORD *)(*(_QWORD *)(v16 + *((_QWORD *)this + 30) + 24)
                                                                                        + 76LL);
      ++*((_DWORD *)this + 310 * *((int *)this + 2144) + 534);
    }
    while ( v10 < *((_DWORD *)this + 66) );
    LODWORD(v9) = 0;
  }
  for ( i = 0; i < *((_DWORD *)this + 74); ++*((_DWORD *)this + 310 * *((int *)this + 2144) + 592) )
  {
    if ( i >= 2 )
      break;
    v20 = *((_QWORD *)this + 34);
    v21 = i++;
    v22 = 112 * v21 + 1240LL * *((int *)this + 2144);
    *(_OWORD *)((char *)this + v22 + 2144) = *(_OWORD *)(v20 + 112 * v21);
    *(_OWORD *)((char *)this + v22 + 2160) = *(_OWORD *)(v20 + 112 * v21 + 16);
    *(_OWORD *)((char *)this + v22 + 2176) = *(_OWORD *)(v20 + 112 * v21 + 32);
    *(_OWORD *)((char *)this + v22 + 2192) = *(_OWORD *)(v20 + 112 * v21 + 48);
    *(_OWORD *)((char *)this + v22 + 2208) = *(_OWORD *)(v20 + 112 * v21 + 64);
    *(_OWORD *)((char *)this + v22 + 2224) = *(_OWORD *)(v20 + 112 * v21 + 80);
    *(_OWORD *)((char *)this + v22 + 2240) = *(_OWORD *)(v20 + 112 * v21 + 96);
  }
  *((_BYTE *)this + 1240 * *((int *)this + 2144) + 2372) = *((_BYTE *)this + 1090);
  if ( !(_DWORD)v3 && !*((_BYTE *)this + 1097) )
  {
    *((_BYTE *)this + 1091) = 0;
    goto LABEL_6;
  }
  v23 = 1;
  v24 = v2 != 0;
  v75 = v2 != 0;
  if ( *((_DWORD *)this + 271) > 1u )
    v23 = *((_DWORD *)this + 271);
  v25 = 1;
  if ( v2 > 1 )
    v25 = v2;
  v26 = *((_DWORD *)this + 270) + v23;
  v27 = v3 + v25;
  if ( v27 <= v26 )
    v27 = v26;
  v6 = v27;
  v28 = (char *)operator new(saturated_mul(v27, 0x80uLL));
  v5 = v28;
  if ( !v28 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA07u);
LABEL_28:
    LODWORD(v9) = 0;
    goto LABEL_10;
  }
  memset_0(v28, 0, v6 << 7);
  v9 = 0LL;
  if ( (_DWORD)v3 && COverlayContext::RequiresFrontPlane(*((struct COverlayContext::OverlayPlaneInfo **)this + 30)) )
  {
    v29 = v3;
    v77 = v9;
  }
  else
  {
    v30 = 1;
    v29 = v9;
    if ( v2 > 1 )
      v30 = v2;
    v77 = v30;
  }
  if ( v2 )
  {
    v31 = v9;
    v32 = v9;
    do
    {
      v33 = v31 + v29;
      v34 = (unsigned __int64)v7++ << 7;
      ++v31;
      *(_DWORD *)&v5[v34] = v33;
      *(_DWORD *)&v5[v34 + 4] = 1;
      *(_DWORD *)&v5[v34 + 16] = v9;
      v35 = *((_QWORD *)this + 34);
      v36 = *(_OWORD *)(v32 + v35);
      v32 += 112LL;
      *(_OWORD *)&v5[v34 + 24] = v36;
      *(_OWORD *)&v5[v34 + 40] = *(_OWORD *)(v32 + v35 - 96);
      *(_OWORD *)&v5[v34 + 56] = *(_OWORD *)(v32 + v35 - 80);
      *(_OWORD *)&v5[v34 + 72] = *(_OWORD *)(v32 + v35 - 64);
      *(_OWORD *)&v5[v34 + 88] = *(_OWORD *)(v32 + v35 - 48);
      *(_OWORD *)&v5[v34 + 104] = *(_OWORD *)(v32 + v35 - 32);
      *(_QWORD *)&v5[v34 + 120] = *(_QWORD *)(v32 + v35 - 16);
      *(_QWORD *)&v5[v34 + 8] = v9;
    }
    while ( v31 < v2 );
  }
  else
  {
    *(_DWORD *)v5 = v29;
    v7 = 1;
    *((_DWORD *)v5 + 1) = v9;
    *((_QWORD *)v5 + 1) = v9;
    *((_DWORD *)v5 + 4) = v9;
  }
  v76 = v9;
  if ( (_DWORD)v3 )
  {
    v73 = v9;
    v37 = v9;
    while ( 1 )
    {
      v38 = *(int **)(*((_QWORD *)this + 30) + v37 + 24);
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)v38);
      v40 = *((_QWORD *)this + 30);
      v41 = 0;
      v74 = 0;
      v42 = 0;
      v70 = *((_DWORD *)RenderingRealizationNoRef + 61);
      if ( *(_BYTE *)(v40 + v37 + 208) )
      {
        if ( v38[19] < 2 || !*(_BYTE *)(v40 + v37 + 209) )
          break;
      }
      v43 = v76;
      v44 = v77;
      if ( *(_DWORD *)(v40 + v37 + 212) != v76 + v77 )
        goto LABEL_47;
LABEL_48:
      if ( *((_BYTE *)this + 1093)
        || v41
        || *(_BYTE *)(v40 + v37 + 220)
        || *(_DWORD *)(v40 + v37 + 224) != *(_DWORD *)(*(_QWORD *)(v40 + v37 + 24) + 72LL) && v38[19] < 2 )
      {
        v42 = 1;
        v74 = 1;
        *((_BYTE *)this + 1089) = 1;
      }
      v45 = v43 + v44;
      v46 = CCommonRegistryData::m_dwOverlayTestMode < 3;
      *(_DWORD *)(v40 + v37 + 188) = v70;
      v71 = v45;
      *(_DWORD *)(*((_QWORD *)this + 30) + v37 + 212) = v45;
      *(_BYTE *)(*((_QWORD *)this + 30) + v37 + 208) = 0;
      *(_BYTE *)(*((_QWORD *)this + 30) + v37 + 220) = v42;
      *(_DWORD *)(*((_QWORD *)this + 30) + v37 + 224) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + v37 + 24) + 72LL);
      if ( v46 )
      {
        v47 = !v41
           && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + v37 + 24) + 76LL) != -1
           && !*((_BYTE *)this + 1093);
        v48 = COverlayContext::EnsureIndependentFlipState(
                this,
                (struct COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 30) + 240LL * v43),
                v47,
                0);
        v4 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xA80u);
          goto LABEL_28;
        }
        v43 = v76;
        v42 = v74;
        v45 = v71;
      }
      if ( v42 )
      {
        v49 = (unsigned __int64)v7 << 7;
        *(_DWORD *)&v5[v49] = v45;
        *(_DWORD *)&v5[v49 + 4] = 1;
        SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                  *(struct CCompositionSurfaceInfo **)(*((_QWORD *)this + 30) + v37 + 24),
                                                  (struct IDXGIResource **)&v5[v49 + 8],
                                                  (unsigned int *)&v5[v49 + 16]);
        LODWORD(v9) = 0;
        v4 = SingleDXGIResourceAndSubResourceIndex;
        if ( SingleDXGIResourceAndSubResourceIndex < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, 0xA8Du);
          goto LABEL_28;
        }
        v51 = *((_QWORD *)this + 30);
        v43 = v76;
        *(_OWORD *)&v5[v49 + 24] = *(_OWORD *)(v51 + v37 + 40);
        *(_OWORD *)&v5[v49 + 40] = *(_OWORD *)(v51 + v37 + 56);
        *(_OWORD *)&v5[v49 + 56] = *(_OWORD *)(v51 + v37 + 72);
        *(_OWORD *)&v5[v49 + 72] = *(_OWORD *)(v51 + v37 + 88);
        *(_OWORD *)&v5[v49 + 88] = *(_OWORD *)(v51 + v37 + 104);
        *(_OWORD *)&v5[v49 + 104] = *(_OWORD *)(v51 + v37 + 120);
        *(_QWORD *)&v5[v49 + 120] = *(_QWORD *)(v51 + v37 + 136);
        if ( v76 < 2 )
          *((_BYTE *)this + 1240 * *((int *)this + 2144) + v73 + 1632) = v74;
        ++v7;
      }
      else
      {
        LODWORD(v9) = 0;
      }
      v73 += 496LL;
      v37 += 240LL;
      v76 = v43 + 1;
      if ( v43 + 1 >= (unsigned int)v3 )
      {
        v2 = v72;
        v24 = v75;
        v52 = 0LL;
        v53 = v3;
        do
        {
          v54 = *((_QWORD *)this + 30);
          if ( *(_BYTE *)(v52 + v54 + 220) && !*((_BYTE *)this + 1090) )
            *(_BYTE *)(v52 + v54 + 220) = 0;
          v52 += 240LL;
          --v53;
        }
        while ( v53 );
        goto LABEL_74;
      }
    }
    v44 = v77;
    v43 = v76;
LABEL_47:
    v41 = 1;
    goto LABEL_48;
  }
LABEL_74:
  v55 = 1;
  if ( v2 > 1 )
    v55 = v2;
  for ( j = v3 + v55; j < (unsigned int)v6; ++j )
  {
    v57 = v7++;
    v57 <<= 7;
    *(_DWORD *)&v5[v57] = j;
    *(_DWORD *)&v5[v57 + 4] = v9;
    *((_BYTE *)this + 1089) = 1;
  }
  if ( v7 > 1 || *((_BYTE *)this + 1092) != (_BYTE)v9 || v2 )
    *((_BYTE *)this + 1091) = v9;
  else
    *((_BYTE *)this + 1091) = 1;
  if ( *((_BYTE *)this + 1090) == (_BYTE)v9 )
    *((_BYTE *)this + 1092) = v24;
  *((_BYTE *)this + 1093) = v9;
LABEL_6:
  if ( !(_DWORD)v3
    && *((_DWORD *)this + 270) <= (unsigned int)v9
    && *((_BYTE *)this + 1097) == (_BYTE)v9
    && *((_BYTE *)this + 1098) == (_BYTE)v9 )
  {
    goto LABEL_10;
  }
  updated = COverlayContext::UpdateHDRMetaData(this);
  if ( CCommonRegistryData::m_dwOverlayTestMode >= 3 )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    if ( updated )
      v60 = (char *)this + 100;
    else
      v60 = 0LL;
    LOBYTE(v59) = v7 != 0;
    v61 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, unsigned int, char *))(**((_QWORD **)this + 2)
                                                                                           + 400LL))(
            *((_QWORD *)this + 2),
            v59,
            *((unsigned int *)this + 24),
            v60,
            v7,
            v5);
    LODWORD(v9) = 0;
    v4 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0xAE3u);
      goto LABEL_28;
    }
  }
  if ( !*((_BYTE *)this + 1090) )
  {
    *((_BYTE *)this + 1098) = *((_BYTE *)this + 1097);
    *((_DWORD *)this + 270) = v3;
    *((_DWORD *)this + 271) = v2;
  }
LABEL_10:
  for ( k = v9;
        k < *((_DWORD *)this + 66);
        *(_DWORD *)((char *)this + 1240 * *((int *)this + 2144) + v63 + 1628) = *(_DWORD *)(*(_QWORD *)(v64 + *((_QWORD *)this + 30) + 24)
                                                                                          + 76LL) )
  {
    if ( k >= 2 )
      break;
    v62 = k++;
    v63 = 496 * v62;
    v64 = 240 * v62;
    v65 = (_OWORD *)(240 * v62 + *((_QWORD *)this + 30));
    v66 = (_OWORD *)((char *)this + 1240 * *((int *)this + 2144) + v63 + 1384);
    *v66 = *v65;
    v66[1] = v65[1];
    v66[2] = v65[2];
    v66[3] = v65[3];
    v66[4] = v65[4];
    v66[5] = v65[5];
    v66[6] = v65[6];
    v66 += 8;
    v67 = v65[7];
    v65 += 8;
    *(v66 - 1) = v67;
    *v66 = *v65;
    v66[1] = v65[1];
    v66[2] = v65[2];
    v66[3] = v65[3];
    v66[4] = v65[4];
    v66[5] = v65[5];
    v66[6] = v65[6];
  }
  *((_BYTE *)this + 1240 * *((int *)this + 2144) + 2373) = *((_BYTE *)this + 1090);
  if ( v5 )
  {
    if ( (_DWORD)v6 )
    {
      v68 = (__int64 *)(v5 + 8);
      v69 = (unsigned int)v6;
      do
      {
        ReleaseInterfaceNoNULL<CD2DPencil>(*v68);
        v68 += 16;
        --v69;
      }
      while ( v69 );
    }
    WPF::ProcessHeapImpl::Free(v5);
  }
  return v4;
}
