/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180216E80
 * Callers:
 *     wil::details::ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___::_ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___ @ 0x1802168D4 (wil--details--ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___--_ScopeExitFn__lambda_1ae9.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180217510 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?AltEscPressed@CAltTabViewHost@@UEAAXXZ @ 0x180274EF0 (-AltEscPressed@CAltTabViewHost@@UEAAXXZ.c)
 *     ?DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180275080 (-DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180275C80 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F3DC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x180202CB4 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180207514 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18020F58C (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18020F830 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___ @ 0x180216574 (Windows--Internal--ComTaskPool--QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13[3]; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+58h] [rbp-B0h]
  _QWORD v15[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v13[1] = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v13[2] = (__int64)v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v14 = v3;
  *(_BYTE *)(a1 + 112) = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"DismissMultitaskingView");
  v15[0] = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  MultitaskingViewTelemetry::DismissMultitaskingView::StartActivity((__int64)v15, *(_DWORD *)(a1 + 72));
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 104) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v10 = 0LL;
  v6 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewDismissCallback>((_QWORD *)(a1 + 80), &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v11);
    v12 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v13[0] = a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v13);
    Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___(v8, &v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(
      *(_QWORD *)(a1 + 88),
      *(unsigned int *)(a1 + 72));
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v15, *(_DWORD *)(a1 + 72));
    v7 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\baseviewhost.h",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView((MultitaskingViewTelemetry::DismissMultitaskingView *)v15);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v7;
}
