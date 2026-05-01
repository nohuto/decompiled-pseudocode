/*
 * XREFs of ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800218D0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180023878 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180024250 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180024540 (-OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18002A6D0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180061150 (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800F55B0 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F56F8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802AD074 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1802AD738 (-_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802AEFC0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802AF340 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1802AF700 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1802BCBB0 (-OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1802BF750 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x1802C6EC8 (-GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802C85BC (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1802C9070 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1802CA400 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1802D9594 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E29A4 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x1802E547C (TabletModeDragPattern--GetWindowTitleWithMap.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1802E8B20 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1802E8E90 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z @ 0x1802EA9FC (-UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1802EBB1C (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1802F1760 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1802F6580 (-RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DET.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18030531C (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18002A470 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002BD10 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIA.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall ApplicationViewHelpers::GetWindowForView(
        __int64 (__fastcall ***this)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        struct IApplicationView *a2)
{
  __int64 (__fastcall **v2)(CWin32ApplicationView *, struct _GUID *, void **); // r8
  __int64 (__fastcall *v4)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  __int64 v5; // r8
  int CanCastTo; // ebx
  CWin32ApplicationView *v7; // r8
  __int64 v8; // r8
  void (*v9)(void); // rax
  __int64 (__fastcall **v10)(ApplicationViewHelpers *, GUID *, CWinRTApplicationView **); // r8
  __int64 v11; // r8
  int v12; // ebx
  CWinRTApplicationView *v13; // rdi
  char *v14; // rdi
  void (*v15)(void); // rax
  __int64 (__fastcall *v16)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  struct IImmersiveApplication *v18; // rbx
  __int64 (__fastcall *v19)(struct IImmersiveApplication *, __int64, GUID *, HWND **); // rax
  char *v20; // rcx
  __int64 (__fastcall *v21)(char *, __int64, GUID *, HWND **); // rax
  int WindowsInternal; // eax
  int v23; // ebx
  HWND *v24; // rbx
  __int64 (__fastcall *v25)(CImmersiveApplicationWindow *, HWND *); // rax
  HWND v26; // rdi
  __int64 v27; // rcx
  struct IImmersiveApplication *v28; // rcx
  CWinRTApplicationView *v29; // rcx
  CWin32ApplicationView *v30; // rcx
  HWND v31; // rbx
  int Interface; // eax
  __int64 (__fastcall *v34)(CWin32ApplicationView *, HWND *); // rax
  unsigned int (__fastcall *v35)(__int64); // rax
  unsigned int (__fastcall *v36)(__int64); // rax
  struct IImmersiveApplication *v37; // rbx
  HWND v38[2]; // [rsp+30h] [rbp-10h] BYREF
  CWin32ApplicationView *v39; // [rsp+80h] [rbp+40h] BYREF
  CWinRTApplicationView *v40; // [rsp+88h] [rbp+48h] BYREF
  HWND *v41; // [rsp+90h] [rbp+50h] BYREF
  struct IImmersiveApplication *v42; // [rsp+98h] [rbp+58h] BYREF

  v2 = *this;
  v38[0] = 0LL;
  v39 = 0LL;
  v4 = *v2;
  if ( (char *)*v2 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
  {
    v39 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_00000000_0000_0000_c000_000000000046)
      && !InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
      {
        v39 = (CWin32ApplicationView *)this;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                      (__int64)(this + 1),
                      (int *)&GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                      &v39);
        if ( CanCastTo == -2147467262 )
        {
          if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_00000038_0000_0000_c000_000000000046) )
          {
            v39 = v7;
            CanCastTo = 0;
LABEL_10:
            v9 = *(void (**)(void))(*(_QWORD *)v39 + 8LL);
            if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef((__int64)v39);
            else
              v9();
            goto LABEL_12;
          }
          if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387) )
          {
            v39 = (CWin32ApplicationView *)v8;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                          (Microsoft::WRL::FtmBase *)(v8 + 8),
                          &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                          (void **)&v39);
            if ( CanCastTo == -2147467262 )
              CanCastTo = -2147467262;
          }
        }
      }
      if ( CanCastTo < 0 )
        goto LABEL_13;
      goto LABEL_10;
    }
    v35 = *(unsigned int (__fastcall **)(__int64))(v5 + 8);
    v39 = (CWin32ApplicationView *)this;
    if ( v35 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
    else
      v35((__int64)this);
    CanCastTo = 0;
  }
  else
  {
    if ( v4 == CWin32ApplicationView::QueryInterface )
      Interface = CWin32ApplicationView::QueryInterface(
                    (CWin32ApplicationView *)this,
                    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                    (void **)&v39);
    else
      Interface = v4((CWin32ApplicationView *)this, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, (void **)&v39);
    CanCastTo = Interface;
  }
LABEL_12:
  if ( CanCastTo >= 0 )
  {
    v34 = *(__int64 (__fastcall **)(CWin32ApplicationView *, HWND *))(*(_QWORD *)v39 + 24LL);
    if ( v34 == CWin32ApplicationView::GetWindow )
      CWin32ApplicationView::GetWindow(v39, v38);
    else
      v34(v39, v38);
    goto LABEL_45;
  }
LABEL_13:
  v10 = (__int64 (__fastcall **)(ApplicationViewHelpers *, GUID *, CWinRTApplicationView **))*this;
  v40 = 0LL;
  if ( (char *)*v10 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
  {
    v12 = (*v10)((ApplicationViewHelpers *)this, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v40);
    goto LABEL_24;
  }
  v40 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v36 = *(unsigned int (__fastcall **)(__int64))(v11 + 8);
    v40 = (CWinRTApplicationView *)this;
    if ( v36 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
    else
      v36((__int64)this);
    v12 = 0;
LABEL_24:
    if ( v12 >= 0 )
    {
      v42 = 0LL;
      v16 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v40 + 24LL);
      if ( v16 == CWinRTApplicationView::GetApplication )
        Application = CWinRTApplicationView::GetApplication(v40, &v42);
      else
        Application = v16(v40, &v42);
      if ( Application >= 0 )
      {
        v18 = v42;
        v41 = 0LL;
        v19 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, HWND **))(*(_QWORD *)v42 + 24LL);
        if ( (char *)v19 == (char *)CImmersiveApp::GetWindows )
        {
          v41 = 0LL;
          AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
          v20 = (char *)v18 + 24;
          v21 = *(__int64 (__fastcall **)(char *, __int64, GUID *, HWND **))(*((_QWORD *)v18 + 3) + 352LL);
          if ( (char *)v21 == (char *)CImmersiveApp::GetWindowsInternal )
            WindowsInternal = CImmersiveApp::GetWindowsInternal(
                                v20,
                                5LL,
                                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                                &v41);
          else
            WindowsInternal = v21(v20, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v41);
          v23 = WindowsInternal;
          ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        }
        else
        {
          v23 = v19(v42, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v41);
        }
        if ( v23 == -2147023728 )
        {
          v37 = v42;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
          v23 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, HWND **))(*(_QWORD *)v37 + 24LL))(
                  v37,
                  0LL,
                  &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                  &v41);
        }
        if ( v23 >= 0 )
        {
          v24 = v41;
          v25 = (__int64 (__fastcall *)(CImmersiveApplicationWindow *, HWND *))*((_QWORD *)*v41 + 4);
          if ( v25 == CImmersiveApplicationWindow::GetNativeWindow )
          {
            v38[0] = 0LL;
            v26 = v41[2];
            SetLastError(0);
            if ( !(unsigned int)IsWindowInDestroy(v26) && GetLastError() != 1400 )
              v38[0] = v24[2];
          }
          else
          {
            v25((CImmersiveApplicationWindow *)v41, v38);
          }
        }
        v27 = (__int64)v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
      v28 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    goto LABEL_43;
  }
  if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
  {
    v40 = (CWinRTApplicationView *)this;
    v12 = 0;
  }
  else
  {
    v12 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
            (__int64)(this + 1),
            (int *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
            &v40);
    if ( v12 == -2147467262 )
    {
      v13 = (CWinRTApplicationView *)(this + 17);
      if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        v40 = v13;
        v12 = 0;
LABEL_22:
        v15 = *(void (**)(void))(*(_QWORD *)v40 + 8LL);
        if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef((__int64)v40);
        else
          v15();
        goto LABEL_24;
      }
      v14 = (char *)v13 + 8;
      if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387) )
      {
        v40 = (CWinRTApplicationView *)v14;
        v12 = 0;
      }
      else
      {
        v12 = Microsoft::WRL::FtmBase::CanCastTo(
                (Microsoft::WRL::FtmBase *)(v14 + 8),
                &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                (void **)&v40);
        if ( v12 == -2147467262 )
          v12 = -2147467262;
      }
    }
  }
  if ( v12 >= 0 )
    goto LABEL_22;
LABEL_43:
  v29 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v29 + 16LL))(v29);
  }
LABEL_45:
  v30 = v39;
  v31 = v38[0];
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return v31;
}
