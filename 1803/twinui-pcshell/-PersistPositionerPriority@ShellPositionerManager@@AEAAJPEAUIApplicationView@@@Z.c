/*
 * XREFs of ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800F55B0
 * Callers:
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1802B8DF0 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1802B8FD8 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1802BA400 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802BA860 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F56F8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::PersistPositionerPriority(
        ShellPositionerManager *this,
        struct IApplicationView *a2)
{
  int PositionerPriorityForView; // eax
  unsigned int LastError; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  void *v9; // rbx
  struct IApplicationView *v10; // rdx
  HWND WindowForView; // rax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  struct IShellPositionerPriority *v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(this, a2, &v16);
  LastError = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v6 = (**(__int64 (__fastcall ***)(struct IShellPositionerPriority *, GUID *, __int64 *))v16)(
           v16,
           &GUID_12c8e92e_f569_48ec_9d4d_56b96469e294,
           &v15);
    LastError = v6;
    if ( v6 >= 0 )
    {
      v9 = (void *)(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))a2,
                        v10);
      if ( WindowForView )
      {
        if ( SetPropW(WindowForView, L"ShellPositionerManager:PriorityList", v9) )
          LastError = 0;
        else
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x3C7,
                        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                        v12);
        goto LABEL_11;
      }
      LastError = -2147023728;
      v7 = 2147943568LL;
      v8 = 964LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 957LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  return LastError;
}
