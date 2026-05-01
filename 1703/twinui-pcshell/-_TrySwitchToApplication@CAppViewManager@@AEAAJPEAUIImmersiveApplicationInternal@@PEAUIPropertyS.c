/*
 * XREFs of ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800411BC
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180040140 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCall.c)
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180042350 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__&___ptr64_1__1_::Invoke @ 0x180044BE0 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__-.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_TrySwitchToApplication(
        IUnknown **this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  void (__fastcall **v6)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  HRESULT v8; // ebx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+58h] [rbp+28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v13[1] = -2LL;
  v13[0] = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v13);
  (*v6)((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v7);
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                            + 56LL))(
         CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
         v13[0],
         &v15);
  if ( v8 >= 0 )
  {
    ppvOut = 0LL;
    v8 = IUnknown_QueryService(
           this[14],
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
           &ppvOut);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 32LL))(
             ppvOut,
             v15,
             a3);
    v9 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v8;
}
