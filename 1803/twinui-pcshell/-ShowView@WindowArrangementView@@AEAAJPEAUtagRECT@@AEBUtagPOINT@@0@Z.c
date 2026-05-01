/*
 * XREFs of ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1802DCEB0
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1802DCBA0 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1802AC334 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__&___ptr64_ @ 0x1802D9BA8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__-__.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802DA4B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1802DA4B0.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802DAB80 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x1802DB038 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1802DB294 (-GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1802DB60C (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD14 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1802DCD20 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x1802DE678 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::ShowView(
        WindowArrangementView *this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  bool v4; // zf
  int PlaceModePoint; // eax
  unsigned int LastError; // ebx
  int PrimaryMonitor; // eax
  __int64 v12; // rdx
  HRESULT v13; // eax
  IUnknown *v14; // rcx
  bool *v15; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int v17; // eax
  volatile int *v18; // rdx
  int v19; // eax
  HWND v20; // rax
  const char *v21; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // r8
  int v26; // eax
  struct IUnknown *v27[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct tagPOINT v29; // [rsp+70h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF

  v4 = *((_DWORD *)this + 70) == 2;
  v29 = *a3;
  if ( !v4
    || (PlaceModePoint = WindowArrangementView::GetPlaceModePoint((__int64)this, 7, 0xFFFFFFFF, &v29),
        LastError = PlaceModePoint,
        PlaceModePoint >= 0) )
  {
    v27[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v27);
    PrimaryMonitor = WindowArrangementView::GetPrimaryMonitor((IUnknown **)this, (struct IImmersiveMonitor **)v27);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1141LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)PrimaryMonitor);
      goto LABEL_25;
    }
    PrimaryMonitor = WindowArrangementView::InitDragVisual(this, v27[0], a2, &v29, a4);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1142LL;
      goto LABEL_33;
    }
    if ( *((_DWORD *)this + 70) == 2 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v13 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_1803B45B0,
              &GUID_10d320fe_985c_476a_a6b7_81f8e2d1881e,
              &ppvOut);
      LastError = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x47B,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_25:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v27);
        return LastError;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 192LL))(*((_QWORD *)this + 10));
      v14 = (IUnknown *)*((_QWORD *)this + 2);
      LOBYTE(v29.x) = 0;
      IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                     v14,
                                     0LL,
                                     (struct IImmersiveLauncher *)&v29,
                                     v15);
      if ( IsLauncherVisibleOnMonitor >= 0 )
      {
        if ( LOBYTE(v29.x) )
          WindowArrangementView::EnablePlaceModeDropFeedback((__int64)this, 1, 0LL, 0LL);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1152LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
      }
      v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1159LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
    PrimaryMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9));
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1164LL;
      goto LABEL_33;
    }
    v19 = *((_DWORD *)this + 70);
    if ( v19 == 2 )
    {
      v20 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
      if ( !SetForegroundWindow(v20) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x491,
                      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
                      v21);
        goto LABEL_25;
      }
      WindowArrangementView::ShowPlaceModeFeedback((__int64)this + 48, 0, 0LL, 0);
    }
    else if ( v19 == 3 )
    {
      *((_BYTE *)this + 307) = 1;
      ppvOut = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        v18);
      v29 = (struct tagPOINT)this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
      v26 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97______ptr64_(
              v24,
              v23,
              v25,
              (__int64 *)&v29);
      LastError = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A7,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v26);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v29);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_25;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 176LL))(*((_QWORD *)this + 10));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 80LL))(*((_QWORD *)this + 10), 0LL);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 176LL))(*((_QWORD *)this + 10));
      v29 = *a3;
      PrimaryMonitor = WindowArrangementView::UpdateView(this, &v29, 0LL);
      LastError = PrimaryMonitor;
      if ( PrimaryMonitor < 0 )
      {
        v12 = 1199LL;
        goto LABEL_33;
      }
    }
    LastError = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x470,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)PlaceModePoint);
  return LastError;
}
