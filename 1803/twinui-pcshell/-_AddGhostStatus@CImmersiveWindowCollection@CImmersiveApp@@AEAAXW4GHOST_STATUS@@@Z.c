/*
 * XREFs of ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005D358
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0004@@@Z @ 0x18009D970 (-AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0004@@@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18009DED8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x18012EB20 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 * Callees:
 *     WPP_SF_LSdL @ 0x1801326D8 (WPP_SF_LSdL.c)
 */

TLG_STATUS __fastcall CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(__int64 a1, int a2)
{
  int v4; // edx

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_LSdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      22,
      *(_QWORD *)(a1 + 144),
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 144) + 544LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 144) + 552LL),
      *(_DWORD *)(a1 + 196));
  v4 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 196) = a2 | v4;
  return CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(a1, v4, a2 | v4);
}
