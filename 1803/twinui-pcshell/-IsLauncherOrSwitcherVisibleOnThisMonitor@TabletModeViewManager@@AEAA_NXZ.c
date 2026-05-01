/*
 * XREFs of ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1802D0B04
 * Callers:
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1802D17F4 (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1802AC334 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 */

char __fastcall TabletModeViewManager::IsLauncherOrSwitcherVisibleOnThisMonitor(
        TabletModeViewManager *this,
        __int64 a2,
        __int64 a3,
        bool *a4)
{
  char v4; // bl
  void **v5; // rsi
  bool v6; // zf
  HRESULT Service; // eax
  int IsLauncherVisibleOnMonitor; // eax
  _QWORD *v10; // rsi
  HRESULT v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (void **)((char *)this + 168);
  v6 = *((_QWORD *)this + 21) == 0LL;
  LOBYTE(v15) = 0;
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
    Service = IUnknown_QueryService(
                *((IUnknown **)this + 2),
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                v5);
    if ( Service < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        724LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Service);
  }
  if ( !*v5 )
    goto LABEL_8;
  IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                 *((IUnknown **)this + 2),
                                 (struct IUnknown *)*v5,
                                 (struct IImmersiveLauncher *)&v15,
                                 a4);
  if ( IsLauncherVisibleOnMonitor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      729LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
  v4 = v15;
  if ( !(_BYTE)v15 )
  {
LABEL_8:
    v10 = (_QWORD *)((char *)this + 176);
    if ( !*((_QWORD *)this + 22) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
      v11 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              (const GUID *const)&SID_MultitaskingViewVisibilityService,
              &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
              (void **)this + 22);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          736LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    if ( *v10 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v10 + 24LL))(*v10, 11LL, &v15);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          743LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v12);
      return v15 != 0;
    }
  }
  return v4;
}
