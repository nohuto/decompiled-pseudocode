/*
 * XREFs of ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180071448
 * Callers:
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18004C6F0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@@@Z @ 0x18009DA80 (-GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180131DE8 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EB60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18002EB60.c)
 *     ?QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180070990 (-QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IAMPrivate_QueryObject(struct IUnknown *a1, struct _GUID *a2, struct _GUID *a3, void **a4)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(CImmersiveWindowManager *, struct _GUID *, struct _GUID *, void **); // rax
  unsigned int Object; // eax
  CImmersiveWindowManager *v14; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  QueryInterface = a1->lpVtbl->QueryInterface;
  if ( (char *)QueryInterface == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::QueryInterface )
    v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::QueryInterface(
           (__int64)a1,
           &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
           &v14);
  else
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CImmersiveWindowManager **))QueryInterface)(
           a1,
           &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
           &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *(__int64 (__fastcall **)(CImmersiveWindowManager *, struct _GUID *, struct _GUID *, void **))(*(_QWORD *)v14 + 24LL);
    if ( v11 == CImmersiveWindowManager::QueryObject )
      Object = CImmersiveWindowManager::QueryObject(v14, a2, a3, a4);
    else
      Object = v11(v14, a2, a3, a4);
    v10 = Object;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v10;
}
