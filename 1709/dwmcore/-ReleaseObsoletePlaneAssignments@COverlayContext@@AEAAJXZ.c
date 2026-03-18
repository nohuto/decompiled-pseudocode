/*
 * XREFs of ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180144378
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x180075ED8 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180142B90 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180144260 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017CD64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::ReleaseObsoletePlaneAssignments(COverlayContext *this)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  __int64 v4; // rbp
  __int64 v5; // r14
  signed int v6; // eax
  signed int v7; // eax
  __int64 v8; // rax

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 68); ++i )
  {
    v4 = 248LL * i;
    v5 = v4 + *((_QWORD *)this + 31);
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         *(struct CVisual **)(v5 + 8),
                         *(struct ISwapChainContent **)(v5 + 16),
                         *(_QWORD *)(v5 + 32)) == -1 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
      {
        v6 = COverlayContext::EnsureIndependentFlipState(this, (struct COverlayContext::OverlayPlaneInfo *)v5, 0, 0);
        v1 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x10E0u);
          return v1;
        }
        v7 = CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(*((_QWORD *)this + 31) + v4 + 24) + 48LL));
        v1 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x10E2u);
          return v1;
        }
        v8 = *((_QWORD *)this + 31);
        *((_BYTE *)this + 1182) = 1;
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v8 + v4 + 24) + 48LL), 2, 0);
      }
      if ( !COverlayContext::RectContainedInDirty((__int64)this, (float *)(v4 + *((_QWORD *)this + 31) + 152LL)) )
        *((_BYTE *)this + 1191) = 1;
    }
  }
  return v1;
}
