/*
 * XREFs of ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@W4GHOST_STATUS@@@Z @ 0x180058584
 * Callers:
 *     ?AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z @ 0x180052580 (-AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z.c)
 *     ?PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ @ 0x1800530C0 (-PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180054E40 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x180055E30 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180057BCC (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x18005940C (-EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilitySt.c)
 * Callees:
 *     WPP_SF_ @ 0x180006A8C (WPP_SF_.c)
 *     WPP_SF_SdLL @ 0x18004FD0C (WPP_SF_SdLL.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058724 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058828 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180059010 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006F67C (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  _QWORD *v6; // rcx
  int v8; // eax
  int v9; // esi

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SdLL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      *(const wchar_t **)(*(_QWORD *)(a1 + 144) + 504LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 144) + 512LL),
      a2,
      a3);
    v6 = WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 196) )
  {
    if ( (*((_BYTE *)v6 + 28) & 1) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_(v6[2], 0x14u, &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids);
    return CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(a1, v3);
  }
  else
  {
    CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(a1, v3);
    v8 = *(_DWORD *)(a1 + 192);
    if ( v8 )
    {
      v4 = *(_DWORD *)(a1 + 192);
      if ( v8 == 2 )
        *(_DWORD *)(a1 + 192) = 0;
    }
    v9 = -v4;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 40LL))(
      *(_QWORD *)(a1 + 136),
      2 - (unsigned int)(v9 != 0));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)a1);
    return CSplashScreen::OnSystemVisualChanged(*(_QWORD *)(a1 + 232), 2 - (unsigned int)(v9 != 0));
  }
}
