/*
 * XREFs of ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180057030 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F04C0 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 *     _lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator() @ 0x1801C9430 (_lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_--operator().c)
 *     ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1801CC0A0 (-PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801D0764 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ?AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801DB9C0 (-AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x1801DBBBC (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x1801DC70C (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 *     ?GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAE@Z @ 0x1801DC9F0 (-GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 *     ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x1801DD3F0 (-OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801DD4C0 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x1801DDA40 (-OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x1801DDB00 (-OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z.c)
 *     ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801DDBE0 (-RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1801E14B4 (-WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ.c)
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x1801E1798 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax

  v2 = a1 + 56;
  *(_QWORD *)a1 = &wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  v4 = (_QWORD *)(a1 + 136);
  *(_DWORD *)v2 = 0;
  *(_BYTE *)(v2 + 4) = 0;
  *(_QWORD *)(v2 + 48) = a2;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 72) = 1LL;
  v4[18] = 0LL;
  v4[19] = 0LL;
  memset_0(v4, 0, 0x90uLL);
  *(_QWORD *)(v2 + 240) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  return result;
}
