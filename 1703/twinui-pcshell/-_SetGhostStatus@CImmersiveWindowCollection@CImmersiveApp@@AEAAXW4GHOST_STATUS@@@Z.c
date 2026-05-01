/*
 * XREFs of ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058828
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180054C00 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800580AC (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@W4GHOST_STATUS@@@Z @ 0x180058584 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 * Callees:
 *     WPP_SF_Ld @ 0x1800392C0 (WPP_SF_Ld.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v6; // [rsp+20h] [rbp-18h]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = *(_DWORD *)(a1 + 196);
    WPP_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids, a2, v6);
  }
  v4 = *(unsigned int *)(a1 + 196);
  *(_DWORD *)(a1 + 196) = a2;
  return CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(a1, v4, a2);
}
