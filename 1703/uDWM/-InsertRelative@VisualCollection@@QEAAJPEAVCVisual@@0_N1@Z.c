/*
 * XREFs of ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30
 * Callers:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180006AB4 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800070D0 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x180007608 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180007B78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000829C (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009B94 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009C80 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180009FD4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000A0E4 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000D00C (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000DEB0 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180015568 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18001D1DC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800233E0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180023E90 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024F10 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180027400 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002780C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180028F6C (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180029E14 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18002ABA4 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18002ABF0 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002E660 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002FEE0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180032820 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180035950 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180038224 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x1800382A0 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003A2A4 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A9F8 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003DBAC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180040FB0 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180041220 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004146C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800419B0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800424F4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800427F0 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x180042B10 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004C608 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006E8CC (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006ED38 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180076774 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007C6F0 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007E770 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180080F98 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180085730 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800859B0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x1800879EC (-Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800880F8 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008B640 (-Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008BD90 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008D800 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008DD40 (-Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E440 (-Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E840 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180093F7C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800943C0 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180095540 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18009DBF8 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18009E31C (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z @ 0x180019E3C (-RemoveAt@-$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180024260 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x18002C9D0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::InsertRelative(
        VisualCollection *this,
        struct CVisual *a2,
        struct CVisual *a3,
        unsigned __int8 a4,
        bool a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // esi
  struct CVisual *v7; // r14
  unsigned int v8; // r12d
  struct CVisual *v9; // rbp
  int v10; // edi
  char v11; // bl
  __int64 v13; // r9
  CTopLevelWindow3D *v14; // r10
  unsigned int v16; // ecx
  struct CVisual **v17; // rax
  int (*v18)(CVisual *__hidden, struct CVisual *); // rax
  CVisual *v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  struct CVisual **v24; // rdx
  struct CVisual **v25; // r8
  int v26; // eax
  void (__fastcall *v28)(CVisual *__hidden); // rax
  __int64 v29; // r8
  char v30; // al
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  struct CVisual **v35; // [rsp+70h] [rbp+8h] BYREF
  struct CVisual *v36; // [rsp+78h] [rbp+10h] BYREF

  v36 = a2;
  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  v7 = (struct CVisual *)*((_QWORD *)a2 + 3);
  v8 = -1;
  v9 = (struct CVisual *)*((_QWORD *)this + 1);
  v10 = -1;
  v11 = 0;
  v13 = 1LL;
  v14 = a2;
  if ( a3 )
  {
    v30 = *((_BYTE *)a2 + 84) & 0x10;
    if ( !v30 )
      LOBYTE(v13) = 0;
    a2 = (struct CVisual *)*((unsigned __int8 *)a3 + 84);
    LOBYTE(a2) = (unsigned __int8)a2 & 0x10;
    if ( (_BYTE)v13 == ((_BYTE)a2 != 0) )
      goto LABEL_49;
    if ( a4 )
    {
      if ( !v30 )
        goto LABEL_49;
    }
    else if ( !(_BYTE)a2 )
    {
LABEL_49:
      v13 = 1LL;
      goto LABEL_2;
    }
    v6 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x78u);
    return v6;
  }
LABEL_2:
  v16 = 0;
  if ( v5 )
  {
    v17 = (struct CVisual **)*((_QWORD *)this + 2);
    while ( 1 )
    {
      a2 = *v17;
      if ( *v17 == v14 )
      {
        if ( v10 == -1 && a3 )
          v11 = 1;
        v8 = v16;
      }
      if ( !a3 && v10 == -1 )
        break;
      if ( a2 == a3 )
        goto LABEL_36;
LABEL_7:
      ++v16;
      ++v17;
      if ( v16 >= v5 )
        goto LABEL_8;
    }
    if ( a4 )
    {
      if ( (*((_BYTE *)a2 + 84) & 0x10) != 0 || (*((_BYTE *)v14 + 84) & 0x10) == 0 )
        goto LABEL_7;
    }
    else if ( (*((_BYTE *)v14 + 84) & 0x10) != 0 || (*((_BYTE *)a2 + 84) & 0x10) == 0 )
    {
      goto LABEL_7;
    }
LABEL_36:
    v10 = v16;
    goto LABEL_7;
  }
LABEL_8:
  if ( a3 )
  {
    if ( v10 == -1 )
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0xB2u);
      return v6;
    }
  }
  else if ( a4 )
  {
    v11 = 0;
  }
  else
  {
    if ( v10 == -1 )
      v10 = v5;
    v11 = 1;
  }
  if ( v7 == v9 )
  {
    DynArray<CVisual *,0>::RemoveAt((char *)this + 16, v8, a3, 1LL);
    *((_BYTE *)v36 + 84) &= ~4u;
    v31 = v10 - 1;
    if ( !v11 )
      v31 = v10;
    v10 = v31;
  }
  else
  {
    v18 = *(int (**)(CVisual *__hidden, struct CVisual *))(*(_QWORD *)v14 + 64LL);
    if ( v18 == CVisual::SetParent )
    {
      *((_QWORD *)v14 + 3) = v9;
      v19 = v9;
      if ( !v9 )
        *((_BYTE *)v14 + 84) &= ~4u;
      if ( *((_DWORD *)v14 + 20) && v9 )
      {
        do
        {
          if ( (*((_BYTE *)v19 + 80) & 1) != 0 )
            break;
          v28 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v19 + 32LL);
          if ( v28 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v19);
          else
            ((void (__fastcall *)(CVisual *, struct CVisual *, struct CVisual *, __int64))v28)(v19, a2, a3, v13);
          v19 = (CVisual *)*((_QWORD *)v19 + 3);
        }
        while ( v19 );
      }
    }
    else
    {
      if ( (char *)v18 == (char *)CTopLevelWindow3D::SetParent )
        v33 = CTopLevelWindow3D::SetParent(v14, v9);
      else
        v33 = ((__int64 (__fastcall *)(CTopLevelWindow3D *, struct CVisual *, struct CVisual *, __int64))v18)(
                v14,
                v9,
                a3,
                1LL);
      v6 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xDEu);
        return v6;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
  }
  v20 = v10 + (unsigned int)a4;
  if ( (unsigned int)v20 > *((_DWORD *)this + 10) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
  }
  else
  {
    v35 = &v36;
    v21 = DynArrayImpl<0>::Grow((int)this + 16, 8, 1, 0, (__int64)&v35);
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1CDu);
    }
    else
    {
      ++*((_DWORD *)this + 10);
      v22 = *((_QWORD *)this + 2);
      v23 = (unsigned int)(*((_DWORD *)this + 10) - 1);
      if ( (unsigned int)v23 > (unsigned int)v20 )
      {
        v29 = v22 + 8 * v23;
        do
        {
          v23 = (unsigned int)(v23 - 1);
          v29 -= 8LL;
          *(_QWORD *)(v29 + 8) = *(_QWORD *)(v22 + 8 * v23);
        }
        while ( (unsigned int)v23 > (unsigned int)v20 );
      }
      v24 = v35;
      v25 = (struct CVisual **)(v22 + 8 * v20);
      if ( v35 >= v25 && (unsigned __int64)v35 < v22 + 8 * ((unsigned __int64)*((unsigned int *)this + 10) - 1) )
        v24 = v35 + 1;
      *v25 = *v24;
    }
  }
  if ( a5 )
  {
    if ( v7 == v9 )
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                                + 16LL)
                                                                                    + 16LL)
                                                                      + 440LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 24LL),
              *(unsigned int *)(*((_QWORD *)v36 + 2) + 24LL),
              (unsigned int)v20);
      v6 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x4Au);
      if ( (v6 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF1u);
        return v6;
      }
      goto LABEL_30;
    }
  }
  else if ( v7 == v9 )
  {
    v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                          + 16LL)
                                                            + 424LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 24LL),
            *(unsigned int *)(*((_QWORD *)v36 + 2) + 24LL));
    v6 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x28u);
    if ( (v6 & 0x80000000) != 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF6u);
    return v6;
  }
  if ( a5 )
  {
    v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                              + 16LL)
                                                                                  + 16LL)
                                                                    + 432LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 24LL),
            *(unsigned int *)(*((_QWORD *)v36 + 2) + 24LL),
            (unsigned int)v20);
    v6 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x39u);
    if ( (v6 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xFEu);
      return v6;
    }
LABEL_30:
    *((_BYTE *)v36 + 84) |= 4u;
  }
  return v6;
}
