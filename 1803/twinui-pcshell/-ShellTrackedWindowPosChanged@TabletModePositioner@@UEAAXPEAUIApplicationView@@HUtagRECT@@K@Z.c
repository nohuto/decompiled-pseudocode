/*
 * XREFs of ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1802CA400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800182E0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18001F2C0 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0IFailureCallback@details@wil@@QEAA@XZ @ 0x180104128 (--0IFailureCallback@details@wil@@QEAA@XZ.c)
 *     ??0?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD@Z @ 0x1802C36B0 (--0-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1802C3B74 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802C3D04 (--4-$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1802C83F8 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802C85BC (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1802C87CC (-Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1802CAF70 (-StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1802CB8A8 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802CC06C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1802CF2A0 (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1802CF6F4 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 */

void __fastcall TabletModePositioner::ShellTrackedWindowPosChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  CWinRTApplicationView **v9; // rdi
  __int64 (__fastcall ***v10)(CWin32ApplicationView *, struct _GUID *, void **); // rdx
  HWND WindowForView; // rax
  struct IUnknown *v12; // rcx
  __int64 v13; // rcx
  void **v14; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[40]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v16; // [rsp+60h] [rbp-A0h]
  _BYTE v17[248]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+160h] [rbp+60h]
  volatile signed __int32 *v19[4]; // [rsp+170h] [rbp+70h] BYREF
  int v20; // [rsp+190h] [rbp+90h]
  char *v21; // [rsp+198h] [rbp+98h]
  _BYTE *v22; // [rsp+1A0h] [rbp+A0h]
  _BYTE v23[40]; // [rsp+1A8h] [rbp+A8h] BYREF
  char v24; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v25; // [rsp+2A0h] [rbp+1A0h]

  if ( *((_DWORD *)this + 18) != 2 )
  {
    v9 = (CWinRTApplicationView **)((char *)this - 160);
    if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(v10, (struct IApplicationView *)v10);
      if ( !GetPropW(WindowForView, (LPCWSTR)0xA91D) )
      {
        v12 = (struct IUnknown *)*((_QWORD *)this + 33);
        if ( v12 && (unsigned int)SHIsSameObject(v12, (struct IUnknown *)a2) && EqualRect((const RECT *)this + 18, a4) )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)this + 33);
          SetRectEmpty((LPRECT)this + 18);
        }
        else
        {
          wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)v19);
          v19[1] = 0LL;
          v19[3] = 0LL;
          v20 = 0;
          v19[2] = (volatile signed __int32 *)v19;
          v21 = &v24;
          v22 = v23;
          wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
            (__int64)v23,
            (__int64)"ShellTrackedWindowPosChanged");
          v25 = 0LL;
          v19[0] = (volatile signed __int32 *)&TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::StartActivity(
            (TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v19,
            a2,
            a3,
            a4,
            a5);
          if ( TabletModePositioner::IsWindowStateStale(
                 v13,
                 (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))a2,
                 (struct _GUID *)a4,
                 a5) )
          {
            TabletModeTraceLogging::ShellTrackedWindowPosChanged::StaleState((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v19);
          }
          else if ( a5 )
          {
            if ( a5 == 1 )
            {
              wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)&v14);
              v14 = &wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
              wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
                (wil::details::ThreadFailureCallbackHolder *)v15,
                (struct wil::details::IFailureCallback *)&v14,
                0LL,
                1);
              v16 = v17;
              wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
                (__int64)v17,
                0LL);
              v18 = 0LL;
              wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
                (__int64)&v14,
                v19);
              v14 = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::Maximized((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)&v14);
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((volatile signed __int32 **)&v14);
            }
            else if ( a5 == 2 )
            {
              wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)&v14);
              v14 = &wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
              wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
                (wil::details::ThreadFailureCallbackHolder *)v15,
                (struct wil::details::IFailureCallback *)&v14,
                0LL,
                1);
              v16 = v17;
              wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
                (__int64)v17,
                0LL);
              v18 = 0LL;
              wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
                (__int64)&v14,
                v19);
              v14 = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              TabletModePositioner::ViewMinimized(v9, a2, &v14);
            }
          }
          else
          {
            wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)&v14);
            v14 = &wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
            wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
              (wil::details::ThreadFailureCallbackHolder *)v15,
              (struct wil::details::IFailureCallback *)&v14,
              0LL,
              1);
            v16 = v17;
            wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
              (__int64)v17,
              0LL);
            v18 = 0LL;
            wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
              (__int64)&v14,
              v19);
            v14 = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
            TabletModePositioner::ViewRestored(v9, a2, &v14);
          }
          if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)v9, (struct IUnknown *)a2) )
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9 + 34);
          wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(v19);
        }
      }
    }
  }
}
