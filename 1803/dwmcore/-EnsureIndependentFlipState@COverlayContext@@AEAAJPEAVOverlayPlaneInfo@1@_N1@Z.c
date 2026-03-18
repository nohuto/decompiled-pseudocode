/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180167868 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x1801725EC (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001AA24 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180080DBC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180163A60 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x1801661CC (-HasDWMClones@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801AC650 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IIPEA_N@Z @ 0x1801ACEA8 (-RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IIPEA_N@Z.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3,
        char a4)
{
  char v5; // si
  unsigned int v8; // r15d
  char v9; // r14
  unsigned int v10; // ebp
  int v11; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  CCompositionSurfaceInfo *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+30h] [rbp-48h]
  unsigned int v19[4]; // [rsp+40h] [rbp-38h] BYREF
  bool v20; // [rsp+90h] [rbp+18h] BYREF

  v19[0] = 0;
  v5 = a3;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    if ( !*((_BYTE *)this + 1199)
      || !*((_BYTE *)a2 + 178)
      || CRenderTargetManager::HasDWMClones(*(CRenderTargetManager **)(*((_QWORD *)this + 151) + 72LL)) )
    {
      v5 = 0;
    }
    if ( v5 )
    {
      if ( a4
        || CCompositionSurfaceInfo::HasSecondaryRepresentations(*((CCompositionSurfaceInfo **)a2 + 3))
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 208LL))(*((_QWORD *)a2 + 2))
        || CRenderTargetManager::AlwaysNeedsRenderPass(*(CRenderTargetManager **)(*((_QWORD *)this + 151) + 72LL))
        || *((_BYTE *)a2 + 201) && *(_DWORD *)(*((_QWORD *)a2 + 3) + 72LL) == *((_DWORD *)a2 + 59) )
      {
        v9 = 1;
      }
      v10 = *((_DWORD *)CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)a2 + 3)) + 47);
      if ( v10 )
      {
        if ( *((_BYTE *)this + 1201) && *((_DWORD *)this + 70) == 1 && !*((_DWORD *)this + 78)
          || *((_QWORD *)this + 132) )
        {
          if ( v10 == *((_DWORD *)a2 + 52) )
          {
            v19[0] = *((_DWORD *)a2 + 53);
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 472LL))(
                    *((_QWORD *)this + 2),
                    v10,
                    v19);
            v8 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xCE2u);
              return v8;
            }
            *((_DWORD *)a2 + 53) = v19[0];
            *((_DWORD *)a2 + 52) = v10;
          }
        }
      }
    }
  }
  if ( *((_BYTE *)a2 + 200) != v5 || *((_BYTE *)a2 + 201) != v9 || *((_DWORD *)a2 + 51) != v19[0] )
  {
    v12 = *((_DWORD *)a2 + 55);
    v13 = *((_QWORD *)a2 + 4);
    v14 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 3);
    v18 = *((_DWORD *)this + 24);
    v20 = 0;
    if ( (int)CCompositionSurfaceInfo::RecordIndependentFlipInfo(v14, v13, v12, v5, v9, v19[0], v18, &v20) >= 0 )
    {
      if ( *((_BYTE *)a2 + 200) != v5 )
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*((_QWORD *)a2 + 3) + 48LL), 3, v5);
      if ( !v5 && v20 )
        *((_BYTE *)this + 1190) = 1;
      if ( v9 || !v5 )
      {
        v15 = *((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 59) = *(_DWORD *)(v15 + 72);
        if ( *((_BYTE *)a2 + 200) )
        {
          if ( !*((_BYTE *)a2 + 201) && *(_QWORD *)(v15 + 56) == *((_QWORD *)a2 + 4) )
          {
            if ( *(_DWORD *)(v15 + 104) )
            {
              v16 = CCompositionSurfaceInfo::EnsureCurrentRenderingRealization((CCompositionSurfaceInfo *)v15);
              if ( v16 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x337u);
            }
          }
        }
      }
      *((_DWORD *)a2 + 51) = v19[0];
      *((_BYTE *)a2 + 200) = v5;
      *((_BYTE *)a2 + 201) = v9;
    }
  }
  return v8;
}
