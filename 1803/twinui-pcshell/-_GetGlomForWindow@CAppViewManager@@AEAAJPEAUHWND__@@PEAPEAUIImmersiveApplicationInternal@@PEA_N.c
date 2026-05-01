/*
 * XREFs of ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000A694 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18000A8B0 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N2@Z @ 0x180125CD0 (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180126678 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180126C20 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180127E04 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180008D60 (-GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180043DB0 (-GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetGlomForWindow(
        CAppViewManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal **a3,
        bool *a4)
{
  CApplicationManager *v7; // rbx
  __int64 (__fastcall *v8)(CApplicationManager *__hidden, HWND, const struct _GUID *, void **); // rax
  int ApplicationByWindowInternal; // eax
  unsigned int v10; // ebx
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, __int64, GUID *, CImmersiveApplicationWindow **); // rax
  int WindowsInternal; // eax
  __int64 (__fastcall *v14)(CImmersiveApplicationWindow *, HWND *); // rax
  int NativeWindow; // eax
  struct IImmersiveApplicationInternal *v16; // rax
  void *v18; // [rsp+70h] [rbp+30h] BYREF
  CImmersiveApplicationWindow *v19; // [rsp+78h] [rbp+38h] BYREF
  HWND v20; // [rsp+80h] [rbp+40h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v18 = 0LL;
  v7 = (CApplicationManager *)*((_QWORD *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  v8 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, HWND, const struct _GUID *, void **))(*(_QWORD *)v7 + 40LL);
  if ( v8 == CApplicationManager::GetApplicationByWindowInternal )
    ApplicationByWindowInternal = CApplicationManager::GetApplicationByWindowInternal(
                                    v7,
                                    a2,
                                    &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                    &v18);
  else
    ApplicationByWindowInternal = v8(v7, a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18);
  v10 = ApplicationByWindowInternal;
  if ( ApplicationByWindowInternal >= 0 )
  {
    v19 = 0LL;
    v11 = v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v12 = *(__int64 (__fastcall **)(void *, __int64, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v11 + 352LL);
    if ( (char *)v12 == (char *)CImmersiveApp::GetWindowsInternal )
      WindowsInternal = CImmersiveApp::GetWindowsInternal(v11, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v19);
    else
      WindowsInternal = v12(v11, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v19);
    v10 = WindowsInternal;
    if ( WindowsInternal >= 0 )
    {
      v14 = *(__int64 (__fastcall **)(CImmersiveApplicationWindow *, HWND *))(*(_QWORD *)v19 + 32LL);
      if ( v14 == CImmersiveApplicationWindow::GetNativeWindow )
        NativeWindow = CImmersiveApplicationWindow::GetNativeWindow(v19, &v20);
      else
        NativeWindow = v14(v19, &v20);
      v10 = NativeWindow;
      if ( NativeWindow >= 0 )
      {
        *a4 = a2 == v20;
        v16 = (struct IImmersiveApplicationInternal *)v18;
        v18 = 0LL;
        *a3 = v16;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v10;
}
