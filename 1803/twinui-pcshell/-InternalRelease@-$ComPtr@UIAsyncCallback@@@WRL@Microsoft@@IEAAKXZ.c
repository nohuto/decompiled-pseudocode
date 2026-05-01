/*
 * XREFs of ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C
 * Callers:
 *     _lambda_cc443415f5ecfa248de51aa242c4a017_::operator() @ 0x180003950 (_lambda_cc443415f5ecfa248de51aa242c4a017_--operator().c)
 *     ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x1800049F0 (--_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z.c)
 *     ??4?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z @ 0x1800082D0 (--4-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z.c)
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x180009468 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180009620 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000AB00 (-ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop.c)
 *     ??_E?$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_96f3b658638d677fbd8b16fe22f1426c_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000BAB0 (--_E-$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_96f3b658638d677fbd8b16fe22f1426c_@@$0-0J.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_::Run @ 0x18000C1A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64.c)
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18001712C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x180017180 (-WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180017610 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18005BD5C (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ??1?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F80CC (--1-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_ac4863598604ec72e89080dc7a8a9967_::__lambda_ac4863598604ec72e89080dc7a8a9967_ @ 0x1800F98FC (_lambda_ac4863598604ec72e89080dc7a8a9967_--__lambda_ac4863598604ec72e89080dc7a8a9967_.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a___ @ 0x1801030F8 (CIAMGlobals--QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a___.c)
 *     _lambda_df912a8f06fbc10e53f38c770b2353ff_::__lambda_df912a8f06fbc10e53f38c770b2353ff_ @ 0x1801042D0 (_lambda_df912a8f06fbc10e53f38c770b2353ff_--__lambda_df912a8f06fbc10e53f38c770b2353ff_.c)
 *     _lambda_a3dacda60d197dca336493a83fab45ae_::operator() @ 0x180104DB4 (_lambda_a3dacda60d197dca336493a83fab45ae_--operator().c)
 *     ??_E?$CDelayedOperation@V_lambda_a3dacda60d197dca336493a83fab45ae_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180105160 (--_E-$CDelayedOperation@V_lambda_a3dacda60d197dca336493a83fab45ae_@@@CDelayIAMOperations@@UEAAPE.c)
 *     ??_G?$CTaskWrapper@V_lambda_df912a8f06fbc10e53f38c770b2353ff_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180105270 (--_G-$CTaskWrapper@V_lambda_df912a8f06fbc10e53f38c770b2353ff_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180105890 (-AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     _lambda_fc741a4743938d06b405cea5fdae9784_::operator() @ 0x18011B1C0 (_lambda_fc741a4743938d06b405cea5fdae9784_--operator().c)
 *     _lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x18011D760 (_lambda_2791fcf0aaab69d566675f60a729cea4_--__lambda_2791fcf0aaab69d566675f60a729cea4_.c)
 *     _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x18011D7AC (_lambda_c5bad73058b4167fadc00bcfc86ad84b_--__lambda_c5bad73058b4167fadc00bcfc86ad84b_.c)
 *     _lambda_3c4ff4ccd576f8db880f0fb482543cc9_::operator() @ 0x18011DCEC (_lambda_3c4ff4ccd576f8db880f0fb482543cc9_--operator().c)
 *     ??_E?$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_c5bad73058b4167fadc00bcfc86ad84b_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18011E050 (--_E-$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_c5bad73058b4167fadc00bcfc86ad84b_@@$0-0J.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x18011EA10 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     ?PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180121490 (-PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallbac.c)
 *     ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180121940 (-ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@She.c)
 *     ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x180121A40 (-ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCall.c)
 *     ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180125470 (-Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180125580 (-SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180125720 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180127238 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18012FC14 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@V_lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewHandledEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewHandledEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180134550 (--_G-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerIntero_ea_180134550.c)
 *     ?TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180134C10 (-TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x180139A50 (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180139BD4 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18013D6F0 (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x18018CE8C (CreationThreadDispatcher--RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___ @ 0x1801ABAB4 (CreationThreadDispatcher--RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___.c)
 *     ?TryBack@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1801BD570 (-TryBack@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ??_GViewEventArgsForShowAsViewMode@@UEAAPEAXI@Z @ 0x1801C9C10 (--_GViewEventArgsForShowAsViewMode@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForSwitch@@UEAAPEAXI@Z @ 0x1801C9C70 (--_GViewEventArgsForSwitch@@UEAAPEAXI@Z.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3A80 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4080 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4510 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     CreationThreadDispatcher::RunSync__lambda_0a797daff9b242b959bbd8d51d98a883___ @ 0x18021A4D0 (CreationThreadDispatcher--RunSync__lambda_0a797daff9b242b959bbd8d51d98a883___.c)
 *     CreationThreadDispatcher::RunSync__lambda_49f034628129c0f6bb6239b08c86aef5___ @ 0x18021A5D8 (CreationThreadDispatcher--RunSync__lambda_49f034628129c0f6bb6239b08c86aef5___.c)
 *     CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x18021A6E0 (CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     CreationThreadDispatcher::RunSync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae___ @ 0x18021A7E4 (CreationThreadDispatcher--RunSync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae___.c)
 *     CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x18021A8EC (CreationThreadDispatcher--RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180222390 (CreationThreadDispatcher--RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562___ @ 0x180223180 (CreationThreadDispatcher--RunSync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562___.c)
 *     CreationThreadDispatcher::RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___ @ 0x180223284 (CreationThreadDispatcher--RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___.c)
 *     CreationThreadDispatcher::RunSync__lambda_0f869028d2211307d6500fcb06deb8db___ @ 0x1802578E4 (CreationThreadDispatcher--RunSync__lambda_0f869028d2211307d6500fcb06deb8db___.c)
 *     CreationThreadDispatcher::RunSync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x1802579CC (CreationThreadDispatcher--RunSync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___.c)
 *     CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180257AB4 (CreationThreadDispatcher--RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x180272FB8 (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(void **a1)
{
  __int64 result; // rax
  void *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release )
    {
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v3);
    }
    else if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback>::Release )
    {
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback>::Release();
    }
    else
    {
      return v4();
    }
  }
  return result;
}
