/*
 * XREFs of ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000A04C
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180122CF0 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18012596C (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180126A6C (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800237C0 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_TrySwitchToApplication(
        IUnknown **this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3)
{
  CApplicationViewManager *Ptr; // rbx
  __int64 (__fastcall *v7)(CApplicationViewManager *__hidden, struct IImmersiveApplication *, struct IApplicationView **); // rax
  int ViewForApplication; // eax
  HRESULT Service; // ebx
  int (*v10)(ShellPositionerManager *__hidden, struct IApplicationView *, struct IUnknown *); // rax
  int v11; // eax
  void *ppvOut[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationView *v14; // [rsp+58h] [rbp+28h] BYREF
  struct IImmersiveApplication *v15; // [rsp+68h] [rbp+38h] BYREF

  ppvOut[1] = (void *)-2LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  (**(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, struct IImmersiveApplication **))a2)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v15);
  v14 = 0LL;
  Ptr = (CApplicationViewManager *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  v7 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, struct IImmersiveApplication *, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
  if ( v7 == CApplicationViewManager::GetViewForApplication )
    ViewForApplication = CApplicationViewManager::GetViewForApplication(Ptr, v15, &v14);
  else
    ViewForApplication = v7(Ptr, v15, &v14);
  Service = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    ppvOut[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
    Service = IUnknown_QueryService(
                this[15],
                &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
                ppvOut);
    if ( Service >= 0 )
    {
      v10 = *(int (**)(ShellPositionerManager *__hidden, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)ppvOut[0] + 32LL);
      if ( v10 == ShellPositionerManager::ActivationRequested )
        v11 = ShellPositionerManager::ActivationRequested((ShellPositionerManager *)ppvOut[0], v14, a3);
      else
        v11 = ((__int64 (__fastcall *)(void *, struct IApplicationView *, struct IUnknown *))v10)(ppvOut[0], v14, a3);
      Service = v11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return (unsigned int)Service;
}
