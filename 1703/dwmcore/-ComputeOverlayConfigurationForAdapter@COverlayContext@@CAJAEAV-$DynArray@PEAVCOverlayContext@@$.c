/*
 * XREFs of ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180070CA0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800211D4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800714A0 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x1800715F4 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007181C (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C83C0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18014FA70 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180150A14 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180150C68 (-FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x180151D64 (-RectContainedInRegionRect@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x180151E44 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x180151F50 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180151FC8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801757EC (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180175D64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(__int64 a1)
{
  int v1; // edi
  char v2; // r15
  char v3; // si
  __int64 v4; // r12
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  char v10; // si
  __int64 v11; // rbx
  __int64 v12; // r15
  unsigned int v13; // r13d
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r12
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  int v21; // r9d
  unsigned int v22; // r13d
  _QWORD *v23; // r12
  __int64 v24; // r15
  bool v25; // cf
  int v26; // eax
  unsigned int i; // r15d
  __int64 v28; // r13
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-50h]
  void *v34[2]; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+40h] [rbp-30h]
  int v36; // [rsp+44h] [rbp-2Ch]
  int v37; // [rsp+48h] [rbp-28h]
  _BYTE v38[32]; // [rsp+50h] [rbp-20h] BYREF
  char v39; // [rsp+B0h] [rbp+40h] BYREF
  int v40; // [rsp+B8h] [rbp+48h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  if ( !*(_DWORD *)(a1 + 24) )
    return (unsigned int)v1;
  do
  {
    if ( COverlayContext::HaveOverlayCandidatesChanged(*(COverlayContext **)(*(_QWORD *)a1 + 8 * v4)) )
      v2 = 1;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v4) + 732LL) )
      v3 = 1;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *(_DWORD *)(a1 + 24) );
  if ( !v2 || !v3 )
    return (unsigned int)v1;
  v37 = 0;
  v34[0] = v38;
  v7 = 0;
  v39 = 0;
  v34[1] = v38;
  v35 = 4;
  v36 = 4;
  LOBYTE(v40) = 0;
  do
  {
    v8 = COverlayContext::DeriveCheckCandidatesList(a1, v34, &v40);
    v1 = v8;
    if ( v8 < 0 )
    {
      v33 = 1895;
      goto LABEL_79;
    }
    v10 = v40;
    if ( (_BYTE)v40 )
    {
      v8 = COverlayContext::CheckMultiPlaneOverlaySupport(a1, v34, &v39);
      v1 = v8;
      if ( v8 < 0 )
      {
        v33 = 1901;
        goto LABEL_79;
      }
    }
    LOBYTE(v9) = v39;
    ++v7;
  }
  while ( v10 && !v39 && v7 <= 8 );
  v11 = 0LL;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v8 = COverlayContext::PushCandidates(*(_QWORD *)(*(_QWORD *)a1 + 8 * v11), v34, v9);
      v1 = v8;
      if ( v8 < 0 )
        break;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 24) )
        goto LABEL_17;
      LOBYTE(v9) = v39;
    }
    v33 = 1915;
LABEL_79:
    v21 = v8;
    goto LABEL_80;
  }
LABEL_17:
  v12 = 0LL;
  if ( !*(_DWORD *)(a1 + 24) )
    goto LABEL_21;
  do
  {
    v1 = 0;
    v13 = 0;
    v14 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v12);
    if ( !*(_DWORD *)(v14 + 264) )
      goto LABEL_19;
    while ( 1 )
    {
      v17 = 240LL * v13;
      if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                           (COverlayContext *)v14,
                           *(struct CVisual **)(*(_QWORD *)(v14 + 240) + v17 + 8),
                           *(struct ISwapChainContent **)(*(_QWORD *)(v14 + 240) + v17 + 16),
                           *(_QWORD *)(*(_QWORD *)(v14 + 240) + v17 + 32)) == -1 )
        break;
LABEL_40:
      if ( ++v13 >= *(_DWORD *)(v14 + 264) )
        goto LABEL_19;
    }
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 3 )
      goto LABEL_38;
    v18 = COverlayContext::EnsureIndependentFlipState(
            (COverlayContext *)v14,
            (struct COverlayContext::OverlayPlaneInfo *)(v17 + *(_QWORD *)(v14 + 240)),
            0,
            0);
    v1 = v18;
    if ( v18 >= 0 )
    {
      v19 = CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(*(_QWORD *)(v14 + 240) + v17 + 24) + 48LL));
      v1 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF81u);
        goto LABEL_19;
      }
      v20 = *(_QWORD *)(v14 + 240);
      *(_BYTE *)(v14 + 1094) = 1;
      CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v20 + v17 + 24) + 48LL), 2, 0);
LABEL_38:
      if ( !(unsigned __int8)COverlayContext::RectContainedInRegionRect(
                               v17 + *(_QWORD *)(v14 + 240) + 144LL,
                               *(unsigned int *)(v14 + 732),
                               v14 + 736) )
        *(_BYTE *)(v14 + 1105) = 1;
      goto LABEL_40;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xF7Fu);
LABEL_19:
    if ( v1 < 0 )
    {
      v33 = 1923;
      goto LABEL_46;
    }
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < *(_DWORD *)(a1 + 24) );
LABEL_21:
  v15 = 0LL;
  v40 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
    goto LABEL_25;
  while ( 2 )
  {
    v1 = 0;
    v16 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v15);
    COverlayContext::ResetOverlayPlanesList((COverlayContext *)v16);
    if ( !*(_DWORD *)(v16 + 200) )
      goto LABEL_23;
    v22 = 0;
    v23 = (_QWORD *)(v16 + 176);
    while ( 2 )
    {
      v24 = 240LL * v22;
      if ( *(_BYTE *)(v24 + *v23 + 184) )
        goto LABEL_59;
      v25 = CCommonRegistryData::m_dwOverlayTestMode < 3;
      *(_BYTE *)(v24 + *v23 + 232) = 1;
      if ( !v25 )
        goto LABEL_55;
      v26 = CCompositionSurfaceInfo::CBindInfo::PinResources(
              (CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(v24 + *v23 + 24) + 48LL),
              *(struct _LUID *)(v16 + 64));
      v1 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xFBCu);
      CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v24 + *v23 + 24) + 48LL), 2, 1);
      if ( v1 != -2005532292 )
      {
        if ( v1 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xFCCu);
          goto LABEL_62;
        }
LABEL_55:
        if ( !*(_BYTE *)(v16 + 1105)
          && !(unsigned __int8)COverlayContext::RectContainedInRegionRect(
                                 v24 + *v23 + 144LL,
                                 *(unsigned int *)(v16 + 732),
                                 v16 + 736) )
        {
          *(_BYTE *)(v16 + 1105) = 1;
        }
        *(_BYTE *)(v24 + *v23 + 184) = 1;
        *(_BYTE *)(v24 + *v23 + 208) = 1;
LABEL_59:
        if ( ++v22 >= *(_DWORD *)(v16 + 200) )
          goto LABEL_69;
        continue;
      }
      break;
    }
    v1 = 0;
    for ( i = 0; i < *(_DWORD *)(v16 + 200); ++i )
    {
      v28 = 240LL * i;
      if ( *(_BYTE *)(*v23 + v28 + 232) )
      {
        v29 = *(_QWORD *)(*v23 + v28 + 24);
        if ( *(_BYTE *)(v29 + 220) )
          CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v29 + 48));
        COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v28 + *v23));
        DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v16 + 176, i--);
      }
    }
LABEL_69:
    if ( *(_DWORD *)(v16 + 200) )
    {
      v30 = 0;
      do
      {
        v31 = v30++;
        *(_BYTE *)(240 * v31 + *(_QWORD *)(v16 + 176) + 232) = 0;
      }
      while ( v30 < *(_DWORD *)(v16 + 200) );
      v32 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(v16 + 240, v16 + 176);
      v1 = v32;
      if ( v32 >= 0 )
      {
        *(_BYTE *)(v16 + 1089) = 1;
        goto LABEL_75;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x1007u);
LABEL_62:
      LODWORD(v15) = v40;
      goto LABEL_23;
    }
    *(_DWORD *)(v16 + 92) = *(_DWORD *)(v16 + 88);
    *(_BYTE *)(v16 + 1104) = 1;
LABEL_75:
    if ( !*(_DWORD *)(v16 + 296) )
      goto LABEL_62;
    LODWORD(v15) = v40;
    if ( !*(_DWORD *)(v16 + 1084) )
      *(_BYTE *)(v16 + 1105) = 1;
LABEL_23:
    *(_DWORD *)(v16 + 732) = 0;
    if ( v1 >= 0 )
    {
      v15 = (unsigned int)(v15 + 1);
      v40 = v15;
      if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 24) )
        goto LABEL_25;
      continue;
    }
    break;
  }
  v33 = 1931;
LABEL_46:
  v21 = v1;
LABEL_80:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v33);
LABEL_25:
  DynArrayImpl<1>::~DynArrayImpl<1>(v34);
  return (unsigned int)v1;
}
