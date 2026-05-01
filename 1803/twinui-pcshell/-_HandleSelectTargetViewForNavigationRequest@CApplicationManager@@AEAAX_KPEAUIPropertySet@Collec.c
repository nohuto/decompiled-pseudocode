/*
 * XREFs of ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180040EF4
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetTargetView@ViewEventArgsForSelectTargetView@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180004610 (-SetTargetView@ViewEventArgsForSelectTargetView@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18000A800 (-GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMoni.c)
 *     ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047DD0 (-GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008CBD0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleSelectTargetViewForNavigationRequest(
        CApplicationManager *this,
        unsigned __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *a4)
{
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, unsigned __int64); // rax
  int ViewForSwitchByHostId; // eax
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, CTaskWindow **); // rax
  int WindowsInternal; // eax
  int v13; // edi
  CTaskWindow *v14; // rdi
  __int64 (__fastcall *v15)(CTaskWindow *__hidden, const struct _GUID *, void **); // rax
  int View; // eax
  __int64 (__fastcall *v17)(ViewEventArgsForSelectTargetView *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v20; // [rsp+30h] [rbp-30h] BYREF
  CTaskWindow *v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23[3]; // [rsp+48h] [rbp-18h] BYREF

  v23[1] = -2LL;
  v22 = 0LL;
  v6 = *((_QWORD *)this + 74);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v6 + 64LL);
  if ( (char *)v7 == (char *)CAppViewManager::GetViewForSwitchByHostId )
    ViewForSwitchByHostId = CAppViewManager::GetViewForSwitchByHostId(v6, 1, a2, 0LL, &v22);
  else
    ViewForSwitchByHostId = v7(v6, 1LL, a2);
  if ( ViewForSwitchByHostId < 0 )
  {
    if ( ViewForSwitchByHostId == -2147319765 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 48LL))(
        a4,
        0LL);
  }
  else
  {
    v20 = 0LL;
    v23[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v22, v23);
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    v23[2] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v21 = 0LL;
    v10 = v23[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, CTaskWindow **))(*(_QWORD *)v10 + 352LL);
    if ( (char *)v11 == (char *)CImmersiveApp::GetWindowsInternal )
      WindowsInternal = CImmersiveApp::GetWindowsInternal(v10, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v21);
    else
      WindowsInternal = v11(v10, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v21);
    v13 = WindowsInternal;
    if ( WindowsInternal >= 0 )
    {
      v14 = v21;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
      v15 = *(__int64 (__fastcall **)(CTaskWindow *__hidden, const struct _GUID *, void **))(*(_QWORD *)v14 + 40LL);
      if ( v15 == CTaskWindow::GetView )
        View = CTaskWindow::GetView(v14, &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e, (void **)&v20);
      else
        View = v15(v14, &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e, (void **)&v20);
      v13 = View;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    if ( v9 )
      ReleaseSRWLockShared(v9);
    if ( v13 >= 0 )
    {
      v17 = *(__int64 (__fastcall **)(ViewEventArgsForSelectTargetView *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a4 + 48LL);
      if ( v17 == ViewEventArgsForSelectTargetView::SetTargetView )
        ViewEventArgsForSelectTargetView::SetTargetView(a4, v20);
      else
        v17(a4, v20);
      LOBYTE(v18) = 3;
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v19, v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
}
