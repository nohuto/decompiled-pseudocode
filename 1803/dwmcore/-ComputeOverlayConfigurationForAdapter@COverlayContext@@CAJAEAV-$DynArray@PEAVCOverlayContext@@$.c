/*
 * XREFs of ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180079180 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001AA24 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180079770 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x18007A548 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x18007A678 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007B4CC (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C8CB8 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180164AC8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180165298 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180165F98 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801674B0 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801675CC (-RemoveAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?ReplaceWith@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1801677B8 (-ReplaceWith@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180167830 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801ACBCC (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801AD124 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(__int64 *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  char v4; // si
  __int64 *v6; // r14
  __int64 v7; // rcx
  char v8; // bl
  char v9; // r13
  __int64 v10; // r15
  __int64 v11; // r14
  char v12; // r15
  bool v13; // zf
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // r8
  char v18; // si
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 i; // r15
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // r12
  unsigned int v25; // r13d
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // r9d
  __int64 v33; // r15
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r13d
  __int64 *v37; // r12
  __int64 v38; // r15
  bool v39; // cf
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // r15d
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  unsigned int v50; // [rsp+20h] [rbp-49h]
  bool v51; // [rsp+30h] [rbp-39h] BYREF
  int v52; // [rsp+34h] [rbp-35h]
  int v53; // [rsp+38h] [rbp-31h]
  _QWORD v54[2]; // [rsp+50h] [rbp-19h] BYREF
  int v55; // [rsp+60h] [rbp-9h]
  int v56; // [rsp+64h] [rbp-5h]
  int v57; // [rsp+68h] [rbp-1h]
  _BYTE v58[80]; // [rsp+70h] [rbp+7h] BYREF
  char v60; // [rsp+E0h] [rbp+77h] BYREF
  int v61; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = 0LL;
  v53 = 0;
  v4 = 0;
  LOBYTE(v61) = 0;
  v6 = a1;
  v60 = 0;
  v52 = 0;
  if ( !*((_DWORD *)a1 + 6) )
    return (unsigned int)v2;
  v7 = *a1;
  v8 = v61;
  do
  {
    if ( COverlayContext::HaveOverlayCandidatesChanged(*(COverlayContext **)(v7 + 8 * v3)) )
      v8 = 1;
    v9 = 0;
    if ( *(_DWORD *)(a2 + 24) != *(_DWORD *)(*(_QWORD *)(*v6 + 8 * v3) + 584LL) )
      goto LABEL_47;
    v10 = 0LL;
    v11 = *(_QWORD *)(*v6 + 8 * v3);
    do
    {
      if ( (unsigned int)v10 >= *(_DWORD *)(v11 + 584) )
        break;
      v29 = 144 * v10;
      COverlayContext::ComparePlaneAttributes(
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(144 * v10 + *(_QWORD *)a2 + 16LL),
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(144 * v10 + *(_QWORD *)(v11 + 560) + 16LL),
        (bool *)&v61,
        &v51);
      if ( !(_BYTE)v61 )
      {
        v30 = *(_QWORD *)(v11 + 560);
        v31 = *(_QWORD *)a2;
        if ( *(_QWORD *)(v29 + *(_QWORD *)a2 + 8) == *(_QWORD *)(v29 + v30 + 8)
          && *(_DWORD *)(v29 + v31 + 136) == *(_DWORD *)(v29 + v30 + 136)
          && *(_BYTE *)(v29 + v31 + 140) == *(_BYTE *)(v29 + v30 + 140) )
        {
          continue;
        }
      }
      v9 = 1;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( !v9 );
    v6 = a1;
    LODWORD(v3) = v52;
    if ( v9 )
    {
LABEL_47:
      v12 = 1;
      v60 = 1;
    }
    else
    {
      v12 = v60;
    }
    v7 = *v6;
    if ( *(_DWORD *)(*(_QWORD *)(*v6 + 8LL * (unsigned int)v3) + 796LL) )
      v4 = 1;
    v3 = (unsigned int)(v3 + 1);
    v52 = v3;
  }
  while ( (unsigned int)v3 < *((_DWORD *)v6 + 6) );
  v13 = v8 == 0;
  v2 = v53;
  if ( (v13 || !v4) && !v12 )
    return (unsigned int)v2;
  v57 &= v53;
  v54[0] = v58;
  v15 = 0;
  v60 = v53;
  v54[1] = v58;
  v55 = 4;
  v56 = 4;
  LOBYTE(v61) = v53;
  do
  {
    v16 = COverlayContext::DeriveCheckCandidatesList(v6, a2, v54, &v61);
    v2 = v16;
    if ( v16 < 0 )
    {
      v50 = 2089;
      goto LABEL_103;
    }
    v18 = v61;
    if ( (_BYTE)v61 )
    {
      v16 = COverlayContext::CheckMultiPlaneOverlaySupport(v6, a2, v54, &v60);
      v2 = v16;
      if ( v16 < 0 )
      {
        v50 = 2096;
        goto LABEL_103;
      }
    }
    LOBYTE(v17) = v60;
    ++v15;
  }
  while ( v18 && !v60 && v15 <= 8 );
  v19 = *((_DWORD *)v6 + 6);
  v20 = 0LL;
  if ( v19 )
  {
    while ( 1 )
    {
      v16 = COverlayContext::PushCandidates(*(_QWORD *)(*v6 + 8 * v20), v54, v17);
      v2 = v16;
      if ( v16 < 0 )
        break;
      v19 = *((_DWORD *)v6 + 6);
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= v19 )
        goto LABEL_24;
      LOBYTE(v17) = v60;
    }
    v50 = 2110;
LABEL_103:
    v32 = v16;
    goto LABEL_104;
  }
LABEL_24:
  for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
  {
    v22 = *(_QWORD *)(*v6 + 8 * i) + 560LL;
    if ( *(_QWORD *)v22 != *(_QWORD *)(v22 + 8) )
    {
      operator delete(*(void **)v22);
      *(_QWORD *)v22 = 0LL;
    }
    *(_DWORD *)(v22 + 24) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(v22 + 20) = *(_DWORD *)(a2 + 20);
    v23 = DynArrayImpl<0>::DetachData(a2, 0x90u, (_QWORD *)v22);
    v2 = v23;
    if ( v23 < 0 )
    {
      *(_DWORD *)(v22 + 24) = 0;
      *(_DWORD *)(v22 + 20) = 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1118u);
    }
    if ( v2 < 0 )
    {
      v50 = 2118;
      goto LABEL_57;
    }
    v19 = *((_DWORD *)v6 + 6);
  }
  v24 = 0LL;
  if ( !v19 )
    goto LABEL_35;
  do
  {
    v2 = 0;
    v25 = 0;
    v26 = *(_QWORD *)(*v6 + 8 * v24);
    if ( !*(_DWORD *)(v26 + 280) )
      goto LABEL_33;
    while ( 1 )
    {
      v33 = 248LL * v25;
      if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                           (COverlayContext *)v26,
                           *(struct CVisual **)(v33 + *(_QWORD *)(v26 + 256) + 8),
                           *(struct ISwapChainContent **)(v33 + *(_QWORD *)(v26 + 256) + 16),
                           *(_QWORD *)(v33 + *(_QWORD *)(v26 + 256) + 32)) == -1 )
        break;
LABEL_65:
      if ( ++v25 >= *(_DWORD *)(v26 + 280) )
        goto LABEL_33;
    }
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 3 )
      goto LABEL_63;
    v34 = COverlayContext::EnsureIndependentFlipState(
            (COverlayContext *)v26,
            (struct COverlayContext::OverlayPlaneInfo *)(v33 + *(_QWORD *)(v26 + 256)),
            0,
            0);
    v2 = v34;
    if ( v34 >= 0 )
    {
      v35 = CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(v33 + *(_QWORD *)(v26 + 256) + 24) + 48LL));
      v2 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x113Fu);
        goto LABEL_33;
      }
      *(_BYTE *)(v26 + 1194) = 1;
      CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(
        (_QWORD *)(*(_QWORD *)(v33 + *(_QWORD *)(v26 + 256) + 24) + 48LL),
        2,
        0);
LABEL_63:
      if ( !(unsigned __int8)COverlayContext::RectContainedInDirty(v26, v33 + *(_QWORD *)(v26 + 256) + 152LL) )
        *(_BYTE *)(v26 + 1203) = 1;
      goto LABEL_65;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x113Du);
LABEL_33:
    if ( v2 < 0 )
    {
      v50 = 2126;
      goto LABEL_57;
    }
    v24 = (unsigned int)(v24 + 1);
    v19 = *((_DWORD *)v6 + 6);
  }
  while ( (unsigned int)v24 < v19 );
LABEL_35:
  v27 = 0LL;
  v61 = 0;
  if ( !v19 )
    goto LABEL_39;
  while ( 2 )
  {
    v2 = 0;
    v28 = *(_QWORD *)(*v6 + 8 * v27);
    COverlayContext::ResetOverlayPlanesList((COverlayContext *)v28);
    if ( !*(_DWORD *)(v28 + 216) )
      goto LABEL_37;
    v36 = 0;
    v37 = (__int64 *)(v28 + 192);
    while ( 2 )
    {
      v38 = 248LL * v36;
      if ( *(_BYTE *)(v38 + *v37 + 192) )
        goto LABEL_82;
      v39 = CCommonRegistryData::m_dwOverlayTestMode < 3;
      *(_BYTE *)(v38 + *v37 + 240) = 1;
      if ( !v39 )
        goto LABEL_78;
      v40 = CCompositionSurfaceInfo::CBindInfo::PinResources(
              (CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(v38 + *v37 + 24) + 48LL),
              *(struct _LUID *)(v28 + 80));
      v2 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x1178u);
      CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v38 + *v37 + 24) + 48LL), 2, 1);
      if ( v2 != -2005532292 )
      {
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1188u);
          goto LABEL_101;
        }
LABEL_78:
        if ( !*(_BYTE *)(v28 + 1203) && !(unsigned __int8)COverlayContext::RectContainedInDirty(v28, v38 + *v37 + 152) )
          *(_BYTE *)(v28 + 1203) = 1;
        *(_BYTE *)(v38 + *v37 + 192) = 1;
        *(_BYTE *)(v38 + *v37 + 216) = 1;
LABEL_82:
        v41 = *(_DWORD *)(v28 + 216);
        if ( ++v36 >= v41 )
          goto LABEL_92;
        continue;
      }
      break;
    }
    v2 = 0;
    v42 = 0;
    if ( !*(_DWORD *)(v28 + 216) )
      goto LABEL_97;
    do
    {
      v43 = 248LL * v42;
      v44 = *v37;
      if ( *(_BYTE *)(*v37 + v43 + 240) )
      {
        v45 = *(_QWORD *)(v44 + v43 + 24);
        if ( *(_BYTE *)(v45 + 220) )
        {
          CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v45 + 48));
          v44 = *(_QWORD *)(v28 + 192);
        }
        COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v44 + v43));
        DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v28 + 192, v42--);
      }
      v41 = *(_DWORD *)(v28 + 216);
      ++v42;
    }
    while ( v42 < v41 );
    v6 = a1;
LABEL_92:
    if ( !v41 )
    {
LABEL_97:
      v49 = *(_DWORD *)(v28 + 104);
      *(_BYTE *)(v28 + 1202) = 1;
      *(_DWORD *)(v28 + 108) = v49;
      goto LABEL_98;
    }
    v46 = 0;
    do
    {
      v47 = v46++;
      *(_BYTE *)(248 * v47 + *(_QWORD *)(v28 + 192) + 240) = 0;
    }
    while ( v46 < *(_DWORD *)(v28 + 216) );
    v48 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(v28 + 256);
    v2 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x11C1u);
      goto LABEL_101;
    }
    *(_BYTE *)(v28 + 1189) = 1;
LABEL_98:
    if ( *(_DWORD *)(v28 + 312) && !*(_DWORD *)(v28 + 1172) )
      *(_BYTE *)(v28 + 1203) = 1;
LABEL_101:
    LODWORD(v27) = v61;
LABEL_37:
    *(_DWORD *)(v28 + 796) = 0;
    if ( v2 >= 0 )
    {
      v27 = (unsigned int)(v27 + 1);
      v61 = v27;
      if ( (unsigned int)v27 >= *((_DWORD *)v6 + 6) )
        goto LABEL_39;
      continue;
    }
    break;
  }
  v50 = 2134;
LABEL_57:
  v32 = v2;
LABEL_104:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v50);
LABEL_39:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v54);
  return (unsigned int)v2;
}
