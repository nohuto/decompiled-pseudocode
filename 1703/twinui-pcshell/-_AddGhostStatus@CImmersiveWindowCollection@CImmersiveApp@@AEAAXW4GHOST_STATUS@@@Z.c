/*
 * XREFs of ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058724
 * Callers:
 *     ?AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z @ 0x180052580 (-AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180054E40 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@W4GHOST_STATUS@@@Z @ 0x180058584 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x18005940C (-EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilitySt.c)
 * Callees:
 *     WPP_SF_LSdL @ 0x18004FB58 (WPP_SF_LSdL.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  char v7[4]; // [rsp+28h] [rbp-20h]
  char v8[4]; // [rsp+30h] [rbp-18h]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)v8 = *(_DWORD *)(a1 + 196);
    *(_DWORD *)v7 = *(_DWORD *)(v4 + 512);
    WPP_SF_LSdL(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, v4, a2, *(_QWORD *)(v4 + 504), *(_DWORD *)v7, *(_DWORD *)v8);
  }
  v5 = *(unsigned int *)(a1 + 196);
  *(_DWORD *)(a1 + 196) |= a2;
  return CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(a1, v5, *(unsigned int *)(a1 + 196));
}
