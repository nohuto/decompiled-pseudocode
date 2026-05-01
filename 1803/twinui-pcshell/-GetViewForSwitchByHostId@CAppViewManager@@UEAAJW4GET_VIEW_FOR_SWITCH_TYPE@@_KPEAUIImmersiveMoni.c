/*
 * XREFs of ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18000A800
 * Callers:
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180040EF4 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000A694 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::GetViewForSwitchByHostId(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // r14
  int ViewForSwitchInternalByHostId; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  ViewForSwitchInternalByHostId = CAppViewManager::_GetViewForSwitchInternalByHostId(
                                    (CAppViewManager *)(a1 - 32),
                                    a2,
                                    a3);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v12 = 854LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternalByHostId,
      (int)&a5);
    goto LABEL_3;
  }
  ViewForSwitchInternalByHostId = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a5)(
                                    a5,
                                    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                    v8);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v12 = 855LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return v10;
}
