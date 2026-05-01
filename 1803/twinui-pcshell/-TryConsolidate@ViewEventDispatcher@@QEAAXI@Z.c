/*
 * XREFs of ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1801CF1C4
 * Callers:
 *     ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x1801DDA40 (-OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180032188 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18010A648 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Deskt.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::TryConsolidate(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  _QWORD *v5; // rbx
  struct IViewWrapperInternal *v6; // rdx
  __int64 v7; // rcx
  __int64 v8[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IViewWrapperInternal *v9; // [rsp+60h] [rbp+30h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+38h] BYREF

  v8[1] = -2LL;
  v3 = a2;
  wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsageToService(
    (__int64)this,
    a2,
    a3);
  v9 = 0LL;
  v5 = 0LL;
  v10 = 0LL;
  AcquireSRWLockShared(this + 37);
  v8[0] = (__int64)&this[37];
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, v3, &v9) >= 0 )
  {
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v10);
    ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)this, v9, &v10);
    v5 = v10;
  }
  if ( this != (RTL_SRWLOCK *)-296LL )
    ReleaseSRWLockShared(this + 37);
  v6 = v9;
  if ( v9 && v5 )
  {
    v7 = v5[4];
    v8[0] = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v6 = v9;
    }
    ViewEventDispatcher::_RaiseViewEvent((__int64)this, (__int64)v6, 0x23u, v8);
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
}
