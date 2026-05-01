/*
 * XREFs of ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800587A4
 * Callers:
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z @ 0x180052630 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0004@@@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180054C00 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180054E00 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180054E40 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180055340 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x180055E30 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059230 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_LSdL @ 0x18004FB58 (WPP_SF_LSdL.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(__int64 a1, unsigned int a2)
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
    WPP_SF_LSdL(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, v4, a2, *(_QWORD *)(v4 + 504), *(_DWORD *)v7, *(_DWORD *)v8);
  }
  v5 = *(unsigned int *)(a1 + 196);
  *(_DWORD *)(a1 + 196) &= ~a2;
  return CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(a1, v5, *(unsigned int *)(a1 + 196));
}
