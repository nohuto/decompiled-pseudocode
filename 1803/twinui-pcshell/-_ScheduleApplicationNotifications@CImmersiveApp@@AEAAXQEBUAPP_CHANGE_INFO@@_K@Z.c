/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&___ptr64_::Invoke @ 0x1800194B0 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-___ptr64_--Invoke.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800483C4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18004C6F0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x18012DCC0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x18012E7E0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18012E850 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18012EC40 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x18012FFC0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180131984 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029CC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002EB00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18002EB00.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180047140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChange.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x18004817C (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1800498A0 (-IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180087140 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationActivation.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800993A8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8B68 (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x18010E668 (-Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        RTL_SRWLOCK *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  unsigned int v7; // esi
  __int64 (__fastcall ***Ptr)(__int64, GUID *, void **); // r9
  __int64 (__fastcall *v9)(__int64, GUID *, void **); // rax
  char *v10; // r9
  int CanCastTo; // eax
  __int64 v12; // rcx
  void *v13; // rcx
  void *v14; // rsi
  void (*v15)(void); // rax
  unsigned __int64 v16; // rcx
  const struct APP_CHANGE_INFO *v17; // rax
  __int64 (*v18)(void); // rax
  char IsApplicationInteractive; // al
  RTL_SRWLOCK *v20; // r15
  _QWORD *v21; // rbx
  volatile signed __int64 *v22; // r14
  __int64 v23; // rcx
  void (*v24)(void); // rax
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  _QWORD *v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  int v32; // edi
  ClientWindowReadyForPresentationEventArgs *v33; // rcx
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 (__fastcall *v38)(AgileRegistrationList::AgileCallbackArray *, unsigned int *); // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // r8
  const struct APP_CHANGE_INFO *v42; // r14
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  int *v45; // rcx
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  __int64 v49; // r9
  __int64 v50; // r10
  int *v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  void *v54; // rax
  char *v55; // rbx
  __int64 v56; // rax
  _QWORD *v57; // rdi
  unsigned __int8 (__fastcall *v58)(RTL_SRWLOCK *); // rax
  __int64 v59; // r8
  unsigned __int64 i; // rdx
  __int64 v61; // rbx
  _QWORD *v62; // r15
  RTL_SRWLOCK *v63; // r12
  _QWORD *v64; // rax
  const struct std::nothrow_t *v65; // rdx
  _QWORD *v66; // r14
  __int64 v67; // rcx
  _QWORD *v68; // rbx
  __int64 v69; // rcx
  char Ptr_high; // bl
  _QWORD *v71; // r13
  _DWORD *v72; // rbx
  _DWORD *v73; // rax
  _DWORD *v74; // rdi
  int v75; // [rsp+20h] [rbp-E0h]
  void *v76; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v77; // [rsp+38h] [rbp-C8h] BYREF
  int v78; // [rsp+40h] [rbp-C0h] BYREF
  void *v79; // [rsp+48h] [rbp-B8h]
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp-B0h] BYREF
  ClientWindowReadyForPresentationEventArgs *v81; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v83; // [rsp+68h] [rbp-98h] BYREF
  void *v84; // [rsp+70h] [rbp-90h]
  unsigned int v85; // [rsp+78h] [rbp-88h]
  signed __int64 v86; // [rsp+80h] [rbp-80h]
  signed __int64 v87; // [rsp+88h] [rbp-78h]
  _QWORD *v88; // [rsp+90h] [rbp-70h]
  _QWORD *v89; // [rsp+98h] [rbp-68h]
  RTL_SRWLOCK *v90; // [rsp+A0h] [rbp-60h]
  _QWORD *v91; // [rsp+A8h] [rbp-58h] BYREF
  char v92; // [rsp+B0h] [rbp-50h]
  void *v93; // [rsp+B8h] [rbp-48h]
  __int64 v94; // [rsp+C0h] [rbp-40h]
  RTL_SRWLOCK *v95; // [rsp+C8h] [rbp-38h]
  _QWORD *v96; // [rsp+D0h] [rbp-30h]
  RTL_SRWLOCK *v97; // [rsp+D8h] [rbp-28h]
  RTL_SRWLOCK *v98; // [rsp+E0h] [rbp-20h]
  volatile signed __int64 *v99; // [rsp+E8h] [rbp-18h]
  __int64 v100; // [rsp+F0h] [rbp-10h]
  __int64 v101; // [rsp+F8h] [rbp-8h]
  _QWORD *v102; // [rsp+100h] [rbp+0h]
  __int64 v103; // [rsp+108h] [rbp+8h]
  _DWORD *v104; // [rsp+110h] [rbp+10h]
  __int64 v105; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]
  bool v107; // [rsp+160h] [rbp+60h]
  unsigned int v108; // [rsp+160h] [rbp+60h]
  char v109; // [rsp+160h] [rbp+60h]

  v100 = -2LL;
  v76 = 0LL;
  v6 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)this[6].Ptr + 4);
  if ( v6 != CWRLObjectWithGITSite::GetSite )
  {
    v6(this + 6, &GUID_00000000_0000_0000_c000_000000000046, &v76);
    goto LABEL_22;
  }
  v76 = 0LL;
  v7 = 0;
  AcquireSRWLockShared(this + 8);
  Ptr = (__int64 (__fastcall ***)(__int64, GUID *, void **))this[10].Ptr;
  if ( Ptr )
  {
    v9 = **Ptr;
    if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::QueryInterface )
    {
      v76 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
      {
        v76 = v10;
      }
      else
      {
        if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000003_0000_0000_c000_000000000046) )
        {
          v76 = v10;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>::CanCastTo(
                        v10 + 136,
                        &GUID_00000000_0000_0000_c000_000000000046);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
          v10 = (char *)v76;
        }
        if ( CanCastTo < 0 )
          goto LABEL_19;
      }
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      v12 = (__int64)this[10].Ptr;
      if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::QueryInterface )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::QueryInterface(
          v12,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v76);
      else
        v9(v12, &GUID_00000000_0000_0000_c000_000000000046, &v76);
    }
  }
  else
  {
    v7 = (unsigned int)this[9].Ptr;
  }
LABEL_19:
  ReleaseSRWLockShared(this + 8);
  if ( v7 )
    GlobalInterfaceTable::Unmarshal(v7, &GUID_00000000_0000_0000_c000_000000000046, &v76);
LABEL_22:
  v13 = v76;
  v14 = v76;
  v79 = v76;
  if ( v76 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v76 + 8LL))(v76);
    v13 = v76;
  }
  if ( v13 )
  {
    v76 = 0LL;
    v15 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::Release(
        (__int64)v13,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::Release);
    else
      v15();
  }
  if ( v14 )
  {
    if ( !LOBYTE(this[93].Ptr) )
      goto LABEL_38;
    if ( ((__int64)this[67].Ptr & 1) != 0 )
    {
      if ( !this[53].Ptr || (v16 = 0LL, !a3) )
      {
LABEL_38:
        if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
          goto LABEL_156;
        v18 = (__int64 (*)(void))*((_QWORD *)this[14].Ptr + 49);
        if ( (char *)v18 == (char *)CImmersiveApp::IsApplicationInteractive )
          IsApplicationInteractive = CImmersiveApp::IsApplicationInteractive((CImmersiveApp *)&this[14]);
        else
          IsApplicationInteractive = v18();
        v107 = IsApplicationInteractive != 0;
        v20 = this + 16;
        v81 = 0LL;
        v21 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
        v22 = 0LL;
        if ( v21 )
        {
          v21[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          v21[5] = 0LL;
          ppunkMarshal = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
          if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
          {
            v23 = v21[5];
            if ( v23 )
            {
              v21[5] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
              ppunkMarshal,
              &GUID_00000003_0000_0000_c000_000000000046,
              v21 + 5);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
          v21[7] = 1LL;
          *v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
          v21[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
          v21[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
          {
            v24 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
            if ( (char *)v24 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
            {
              _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
              v14 = v79;
            }
            else
            {
              v24();
            }
          }
          *v21 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable';
          v21[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
          v21[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          *((_BYTE *)v21 + 64) = v107;
          v22 = v21;
          v81 = (ClientWindowReadyForPresentationEventArgs *)v21;
        }
        if ( v22 )
        {
          v90 = this + 16;
          if ( this != (RTL_SRWLOCK *)-128LL )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v20->Ptr + 1))(this + 16);
          v97 = this + 16;
          v98 = this + 16;
          if ( this != (RTL_SRWLOCK *)-128LL )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v20->Ptr + 1))(this + 16);
          v99 = v22;
          v25 = *((_QWORD *)v22 + 7);
          v86 = v25;
          while ( v25 >= 0 )
          {
            if ( (_DWORD)v25 != 0x7FFFFFFF )
            {
              v26 = v25;
              v25 = _InterlockedCompareExchange64(v22 + 7, v25 + 1, v25);
              if ( v26 != v25 )
                continue;
            }
            goto LABEL_64;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v25 + 16));
LABEL_64:
          v14 = v79;
          v108 = (unsigned int)this[21].Ptr;
          v27 = 0LL;
          v88 = 0LL;
          v28 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
          v29 = v28;
          if ( v28 )
          {
            *v28 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
            *((_DWORD *)v28 + 3) = 1;
            *v28 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *v29 = off_18031EE70;
            v29[2] = v20;
            v29[3] = v20;
            (*((void (__fastcall **)(RTL_SRWLOCK *))v20->Ptr + 1))(this + 16);
            v29[4] = v22;
            v30 = *((_QWORD *)v22 + 7);
            v87 = v30;
            while ( v30 >= 0 )
            {
              if ( (_DWORD)v30 != 0x7FFFFFFF )
              {
                v31 = v30;
                v30 = _InterlockedCompareExchange64(v22 + 7, v30 + 1, v30);
                if ( v31 != v30 )
                  continue;
              }
              goto LABEL_73;
            }
            Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v30 + 16));
LABEL_73:
            v14 = v79;
            v27 = v29;
            v88 = v29;
          }
          v89 = v27;
          if ( v27 )
          {
            v101 = 0LL;
            v32 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0, 2u, v108);
          }
          else
          {
            v32 = -2147024882;
          }
          if ( v27 )
          {
            v89 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
          }
          v99 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release((ClientWindowReadyForPresentationEventArgs *)v22);
          v98 = 0LL;
          (*((void (__fastcall **)(RTL_SRWLOCK *))v20->Ptr + 2))(this + 16);
          if ( v32 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4A,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
              (const char *)(unsigned int)v32,
              v75);
          v90 = 0LL;
          (*((void (__fastcall **)(RTL_SRWLOCK *))v20->Ptr + 2))(this + 16);
          v33 = v81;
          if ( v81 )
          {
            v81 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v33);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x40,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
            (const char *)0x8007000ELL,
            v75);
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(&v81);
        }
        v77 = 0LL;
        v83 = 0LL;
        v82 = 0LL;
        v34 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v14)(
                v14,
                &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
                &v82);
        if ( v34 >= 0 )
          v34 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v82 + 24LL))(
                  v82,
                  &SID_ImmersiveApplicationListeners,
                  &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
                  &v83);
        v35 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        if ( v34 >= 0 )
          v34 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v83 + 24LL))(v83, &v77);
        v36 = v83;
        if ( v83 )
        {
          v83 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        if ( v34 < 0 )
          goto LABEL_153;
        v37 = v77;
        v38 = *(__int64 (__fastcall **)(AgileRegistrationList::AgileCallbackArray *, unsigned int *))(*v77 + 24LL);
        if ( v38 == AgileRegistrationList::AgileCallbackArray::GetCount )
        {
          v39 = (__int64)(v77[7] - v77[6]) >> 3;
          v78 = v39;
        }
        else
        {
          if ( (int)v38((AgileRegistrationList::AgileCallbackArray *)v77, (unsigned int *)&v78) < 0 )
            goto LABEL_153;
          v37 = v77;
          LODWORD(v39) = v78;
        }
        if ( !(_DWORD)v39 )
          goto LABEL_154;
        v40 = a3;
        v41 = 0LL;
        v42 = a2;
        if ( a3 >= 4 )
        {
          v43 = 0LL;
          v44 = 0LL;
          v45 = (int *)((char *)a2 + 32);
          do
          {
            *(double *)v46.m128i_i64 = dbl_18042FED0[4 * *(v45 - 8)];
            *(double *)&v46.m128i_i64[1] = dbl_18042FED0[4 * *(v45 - 4)];
            v43 = _mm_add_epi64(v46, v43);
            *(double *)v46.m128i_i64 = dbl_18042FED0[4 * *v45];
            *(double *)&v46.m128i_i64[1] = dbl_18042FED0[4 * v45[4]];
            v47 = _mm_add_epi64(v46, v44);
            v44 = v47;
            v41 += 4LL;
            v45 += 16;
          }
          while ( v41 < (a3 & 0xFFFFFFFFFFFFFFFCuLL) );
          v48 = _mm_add_epi64(v47, v43);
          v40 = a3 + _mm_add_epi64(v48, _mm_srli_si128(v48, 8)).m128i_u64[0];
        }
        v49 = 0LL;
        v50 = 0LL;
        if ( v41 < a3 )
        {
          if ( a3 - v41 >= 2 )
          {
            v51 = (int *)((char *)a2 + 16 * v41);
            v52 = ((a3 - v41 - 2) >> 1) + 1;
            v41 += 2 * v52;
            do
            {
              v49 += *((_QWORD *)&unk_18042FEC0 + 4 * *v51 + 2);
              v50 += *((_QWORD *)&unk_18042FEC0 + 4 * v51[4] + 2);
              v51 += 8;
              --v52;
            }
            while ( v52 );
          }
          if ( v41 < a3 )
            v40 += *((_QWORD *)&unk_18042FEC0 + 4 * *((int *)a2 + 4 * v41) + 2);
          v40 += v50 + v49;
        }
        v53 = 16 * v40;
        if ( !is_mul_ok(v40, 0x10uLL) )
          v53 = -1LL;
        v54 = operator new[](v53, (const struct std::nothrow_t *)&std::nothrow);
        v84 = v54;
        if ( v54 )
        {
          v55 = (char *)v54;
          if ( a3 )
          {
            do
            {
              *(_OWORD *)v55 = *(_OWORD *)v42;
              if ( *(_DWORD *)v55 != 6 && *(_DWORD *)v55 != 12 && !*((_QWORD *)v55 + 1) )
              {
                v56 = 0LL;
                if ( this[53].Ptr )
                  v56 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this[52].Ptr + 32LL))(*(_QWORD *)this[52].Ptr);
                *((_QWORD *)v55 + 1) = v56;
              }
              v57 = (_QWORD *)((char *)&unk_18042FEC0 + 32 * *(int *)v42);
              if ( v57[1] )
              {
                v58 = (unsigned __int8 (__fastcall *)(RTL_SRWLOCK *))v57[3];
                if ( !v58 || v58(this) )
                {
                  v59 = *((_QWORD *)v55 + 1);
                  for ( i = 0LL; i < v57[2]; ++i )
                  {
                    v55 += 16;
                    *(_DWORD *)v55 = *(_DWORD *)(v57[1] + 4 * i);
                    *((_QWORD *)v55 + 1) = v59;
                  }
                }
              }
              v55 += 16;
              v42 = (const struct APP_CHANGE_INFO *)((char *)v42 + 16);
              --a3;
            }
            while ( a3 );
            v54 = v84;
          }
          v61 = (v55 - (_BYTE *)v54) >> 4;
          v62 = v77;
          v93 = v54;
          v94 = v61;
          v63 = this + 11;
          v95 = this + 11;
          if ( this != (RTL_SRWLOCK *)-88LL )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v63->Ptr + 1))(this + 11);
          v96 = v62;
          if ( v62 )
            (*(void (__fastcall **)(_QWORD *))(*v62 + 8LL))(v62);
          v64 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
          v66 = v64;
          if ( v64 )
          {
            v65 = 0LL;
            v64[3] = 0LL;
            v64[4] = 0LL;
            v64[1] = v84;
            v64[2] = v61;
            v63 = 0LL;
            v95 = 0LL;
            v67 = v64[3];
            if ( v67 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
              v65 = 0LL;
            }
            v66[3] = this + 11;
            v68 = v62;
            v62 = 0LL;
            v96 = 0LL;
            v69 = v66[4];
            if ( v69 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
              v65 = 0LL;
            }
            v66[4] = v68;
            v84 = 0LL;
            v93 = 0LL;
            v94 = 0LL;
            *v66 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
            *((_DWORD *)v66 + 10) = 0;
          }
          else
          {
            v66 = 0LL;
          }
          v102 = v66;
          if ( v66 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v66 + 8LL))(v66);
            Ptr_high = HIBYTE(this[88].Ptr);
            v109 = Ptr_high;
            v71 = v66;
            v91 = v66;
            (*(void (__fastcall **)(_QWORD *))(*v66 + 8LL))(v66);
            v92 = Ptr_high;
            v85 = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
            v72 = 0LL;
            v103 = 0LL;
            v73 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
            v74 = v73;
            if ( v73 )
            {
              *(_QWORD *)v73 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
              v73[3] = 1;
              *(_QWORD *)v73 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
              *(_QWORD *)v74 = off_18031EEB0;
              *((_QWORD *)v74 + 2) = 0LL;
              if ( v74 + 4 != (_DWORD *)&v91 )
              {
                *((_QWORD *)v74 + 2) = v66;
                v71 = 0LL;
                v91 = 0LL;
              }
              *((_BYTE *)v74 + 24) = v109;
              v72 = v74;
            }
            v104 = v72;
            if ( v72 )
            {
              v105 = 0LL;
              Windows::Internal::ComTaskPool::s_QueuePoolTask(0, 2u, v85);
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v72 + 16LL))(v72);
            }
            if ( v71 )
              (*(void (__fastcall **)(_QWORD *))(*v71 + 16LL))(v71);
          }
          if ( v66 )
            (*(void (__fastcall **)(_QWORD *))(*v66 + 16LL))(v66);
          operator delete(v84, v65);
          if ( v62 )
            (*(void (__fastcall **)(_QWORD *))(*v62 + 16LL))(v62);
          if ( v63 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v63->Ptr + 2))(v63);
        }
LABEL_153:
        v37 = v77;
LABEL_154:
        if ( v37 )
        {
          v77 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
        }
        goto LABEL_156;
      }
      v17 = a2;
      while ( *(_DWORD *)v17 != 8 )
      {
        ++v16;
        v17 = (const struct APP_CHANGE_INFO *)((char *)v17 + 16);
        if ( v16 >= a3 )
          goto LABEL_38;
      }
    }
    CImmersiveApp::_ClearForegroundBoostHintedProcess(&this->Ptr);
    LOBYTE(this[93].Ptr) = 0;
    goto LABEL_38;
  }
LABEL_156:
  if ( v14 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
}
