/*
 * XREFs of ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18001BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001CB50 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800284E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x180084040 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013B2A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18013B2A0.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180142830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E7430 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITag_ea_1802E7430.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetShowInSwitchers(RTL_SRWLOCK *this, int a2)
{
  __int64 v3; // r15
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // r10
  volatile int *v8; // rdx
  _QWORD *v9; // rax
  HKEY v10; // rsi
  HKEY v11; // rcx
  HKEY v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rsi
  volatile int *v16; // rdx
  __int64 v17; // rcx
  HKEY v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  HKEY v21; // rax
  __int64 v22; // r8
  void (__fastcall *v23)(HKEY, RTL_SRWLOCK *, __int64, _QWORD); // rax
  int dwOptions; // [rsp+20h] [rbp-49h]
  unsigned int dwOptionsa; // [rsp+20h] [rbp-49h]
  unsigned int dwOptionsb; // [rsp+20h] [rbp-49h]
  BYTE Data[4]; // [rsp+58h] [rbp-11h] BYREF
  int v29; // [rsp+5Ch] [rbp-Dh]
  BOOL v30; // [rsp+60h] [rbp-9h]
  LPCWSTR lpSubKey[11]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  HKEY hKey; // [rsp+D0h] [rbp+67h] BYREF
  int v34; // [rsp+D8h] [rbp+6Fh]
  HKEY v35; // [rsp+E0h] [rbp+77h]
  RTL_SRWLOCK *v36; // [rsp+E8h] [rbp+7Fh]

  v34 = a2;
  v3 = 0LL;
  hKey = 0LL;
  v4 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v5 = 0LL;
  v6 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v4 = v7;
    v5 = v7;
    v6 = v7;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v9 = v6;
  if ( v5 )
  {
    v10 = (HKEY)v4[6];
    if ( hKey != v10 )
    {
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<ITabletModePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabletModePositionerInternal,ITabletModePositionerPriv,IStartDismissalPolicy,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IImmersiveMonitorNotification,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerWindowingDelegationHandler,IImmersiveShellHookNotification,IMultitaskingViewVisibilityNotification,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>>::AddRef(v4[6]);
      v11 = hKey;
      hKey = v10;
      v9 = v6;
      if ( v11 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(
          v11,
          v8);
        v9 = v6;
      }
    }
  }
  if ( v9 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v6 + 36), v8) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( hKey )
    v12 = hKey + 34;
  else
    v12 = 0LL;
  v35 = v12;
  AcquireSRWLockExclusive(this + 6);
  v36 = this + 6;
  if ( (v34 != 0) != LOBYTE(this[26].Ptr) )
  {
    LOBYTE(this[26].Ptr) = v34 != 0;
    lpSubKey[0] = 0LL;
    lpSubKey[1] = (LPCWSTR)-1LL;
    lpSubKey[2] = (LPCWSTR)-1LL;
    if ( (int)CWinRTApplicationView::GetViewId((CWinRTApplicationView *)&this[2], (unsigned __int16 **)lpSubKey) < 0 )
    {
LABEL_34:
      if ( v12 )
      {
        v22 = 11 - (unsigned int)(v34 != 0);
        v23 = *(void (__fastcall **)(HKEY, RTL_SRWLOCK *, __int64, _QWORD))(*(_QWORD *)v12 + 160LL);
        if ( (char *)v23 == (char *)CApplicationViewManager::RaiseApplicationViewChanged )
          CApplicationViewManager::RaiseApplicationViewChanged(v12, this, v22);
        else
          v23(v12, this, v22, 0LL);
      }
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
      goto LABEL_40;
    }
    v13 = 0LL;
    AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v14 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
    v15 = 0LL;
    if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::AddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
      v13 = v14;
      v3 = v14;
      v15 = v14;
    }
    ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v17 = v15;
    if ( v3 )
    {
      v30 = v34 != 0;
      *(_DWORD *)Data = 4;
      v29 = 1397960752;
      v18 = *(HKEY *)(v3 + 40);
      if ( !v18 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
          (const char *)0x80270257LL,
          dwOptions);
LABEL_29:
        v17 = v15;
        goto LABEL_30;
      }
      hKey = 0LL;
      v19 = RegCreateKeyExW(v18, lpSubKey[0], 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL);
      if ( v19 )
      {
        wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x59,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
          (const char *)v19,
          dwOptionsa);
        CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
        goto LABEL_29;
      }
      v20 = RegSetValueExW(hKey, L"ShowInSwitchers", 0, 3u, Data, 0xCu);
      if ( v20 )
      {
        wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x61,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
          (const char *)v20,
          dwOptionsb);
        CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
        goto LABEL_29;
      }
      v21 = hKey;
      hKey = 0LL;
      v17 = v15;
      if ( v21 )
      {
        RegCloseKey(v21);
        goto LABEL_29;
      }
    }
LABEL_30:
    if ( v13 )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v17 + 36), v16) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 72LL))(v13, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    goto LABEL_34;
  }
LABEL_40:
  if ( this != (RTL_SRWLOCK *)-48LL )
    ReleaseSRWLockExclusive(this + 6);
  if ( v12 )
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}
