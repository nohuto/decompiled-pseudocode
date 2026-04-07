/*
 * XREFs of ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020
 * Callers:
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180005570 (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800057E0 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180005E88 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006DF4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006EE0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800070A0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800071EC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180007428 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x1800084A0 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x180009D50 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x18000AACC (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000C994 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180012454 (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001957C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001C3DC (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001D7B4 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180025E88 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180027100 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002792C (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18002EE90 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180030150 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180034AFC (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800363F4 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C00 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180039D1C (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18006A5EC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x18006B8FC (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006C130 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180074420 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x180074B3C (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180075400 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180077BF0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x180078498 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18007AAAC (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007AB50 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007F59C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008BA8C (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800913C0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x18009BC10 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18009BCE8 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180018DD0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180020EF0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::Remove(VisualCollection *this, struct CVisual *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rbx
  int v7; // eax
  unsigned int v8; // ebp
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  int (*v12)(CVisual *__hidden, struct CVisual *); // rax
  int v13; // eax
  unsigned int v14; // ebx

  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v4 = *((_DWORD *)this + 10);
  v5 = 0LL;
  if ( !v4 )
    return 0LL;
  while ( *(struct CVisual **)(*((_QWORD *)this + 2) + 8 * v5) != a2 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v4 )
      return 0LL;
  }
  if ( (_DWORD)v5 == -1 )
    return 0LL;
  if ( (*((_BYTE *)a2 + 84) & 4) != 0
    && (v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                             + 16LL)
                                                               + 424LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
               *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 24LL),
               *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL)),
        v8 = v7,
        v7 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x132u);
    return v8;
  }
  else
  {
    v9 = *((_DWORD *)this + 10);
    if ( (unsigned int)v5 >= v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
    else
    {
      v10 = *((_QWORD *)this + 2);
      if ( (unsigned int)v5 < v9 - 1 )
      {
        do
        {
          v11 = (unsigned int)v5;
          LODWORD(v5) = v5 + 1;
          *(_QWORD *)(v10 + 8 * v11) = *(_QWORD *)(v10 + 8LL * (unsigned int)v5);
        }
        while ( (unsigned int)v5 < *((_DWORD *)this + 10) - 1 );
      }
      --*((_DWORD *)this + 10);
    }
    v12 = *(int (**)(CVisual *__hidden, struct CVisual *))(*(_QWORD *)a2 + 64LL);
    if ( v12 == CVisual::SetParent )
    {
      v13 = CVisual::SetParent(a2, 0LL);
    }
    else if ( (char *)v12 == (char *)CTopLevelWindow3D::SetParent )
    {
      v13 = CTopLevelWindow3D::SetParent(a2, 0LL);
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(struct CVisual *, _QWORD, __int64))v12)(a2, 0LL, v10);
    }
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x137u);
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(struct CVisual *, __int64))a2)(a2, 1LL);
    }
    return v14;
  }
}
