/*
 * XREFs of ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180024250
 * Callers:
 *     ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x1800254C0 (-PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001C840 (-GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x180024650 (-GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEA.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18002AFC0 (-GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18008AE5C (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802BDF9C (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::GetPositionerForView(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall *v8)(CWinRTApplicationView *, struct IImmersiveMonitor **); // rax
  int Monitor; // eax
  int v10; // edi
  void *v11; // rbx
  __int64 (__fastcall *v12)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  __int64 (__fastcall *v14)(void *); // rax
  unsigned int CurrentPositioner; // eax
  unsigned int v16; // edi
  IUnknown *v17; // rbx
  __int64 (__fastcall *v18)(void *, _QWORD, const struct _GUID *, void **); // rax
  int Positioner; // eax
  void *v20; // rcx
  IUnknown *v21; // rcx
  struct IApplicationView *v23; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  HRESULT Service; // eax
  int v34; // [rsp+20h] [rbp-20h]
  int v35; // [rsp+20h] [rbp-20h]
  int v36; // [rsp+20h] [rbp-20h]
  __int64 v37[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  void *ppvOut; // [rsp+88h] [rbp+48h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+58h] BYREF

  v37[1] = -2LL;
  *a4 = 0LL;
  punk = 0LL;
  v8 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 80LL);
  if ( v8 == CWinRTApplicationView::GetMonitor )
  {
    Monitor = CWinRTApplicationView::GetMonitor(a2, (struct IImmersiveMonitor **)&punk);
  }
  else if ( v8 == CWin32ApplicationView::GetMonitor )
  {
    Monitor = CWin32ApplicationView::GetMonitor(a2, (struct IImmersiveMonitor **)&punk);
  }
  else
  {
    Monitor = v8(a2, (struct IImmersiveMonitor **)&punk);
  }
  v10 = Monitor;
  if ( Monitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Monitor,
      v34);
    goto LABEL_20;
  }
  v11 = 0LL;
  v37[0] = 0LL;
  ppvOut = 0LL;
  v12 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a2 + 264LL);
  if ( v12 == CApplicationViewBase::GetPositionerPriority )
    PositionerPriority = CApplicationViewBase::GetPositionerPriority(a2, (struct IShellPositionerPriority **)&ppvOut);
  else
    PositionerPriority = v12(a2, (struct IShellPositionerPriority **)&ppvOut);
  if ( PositionerPriority >= 0 )
    goto LABEL_7;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  ppvOut = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v23);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v27 = PositionerPriority_CreateInstance(PropW, v26, &ppvOut);
      if ( v27 >= 0 )
        goto LABEL_34;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v27,
        v34);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  v29 = PositionerPriority_CreateInstance(*((unsigned int *)this + 12), v28, &ppvOut);
  v10 = v29;
  if ( v29 < 0 )
  {
    v30 = 834LL;
    goto LABEL_36;
  }
LABEL_34:
  v29 = (*(__int64 (__fastcall **)(struct IApplicationView *, void *))(*(_QWORD *)a2 + 272LL))(a2, ppvOut);
  v10 = v29;
  if ( v29 >= 0 )
  {
LABEL_7:
    v11 = ppvOut;
    if ( ppvOut )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
      v11 = ppvOut;
    }
    v37[0] = (__int64)v11;
    if ( v11 )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_11;
  }
  v30 = 838LL;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v29,
    v34);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v10,
      v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v37);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19E,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v10,
      v35);
    goto LABEL_20;
  }
LABEL_11:
  v14 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 24LL);
  if ( (char *)v14 == (char *)PositionerPriority::GetCurrentPositioner )
    CurrentPositioner = PositionerPriority::GetCurrentPositioner(v11);
  else
    CurrentPositioner = v14(v11);
  v16 = CurrentPositioner;
  (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  v17 = punk;
  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         punk,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &ppvOut) < 0 )
  {
    Service = IUnknown_QueryService(v17, &c_positionersSIDs + (int)v16, a3, a4);
    v10 = Service;
    if ( Service >= 0 )
      goto LABEL_17;
    v31 = (unsigned int)Service;
    v32 = 1030LL;
  }
  else
  {
    v18 = *(__int64 (__fastcall **)(void *, _QWORD, const struct _GUID *, void **))(*(_QWORD *)ppvOut + 24LL);
    if ( (char *)v18 == (char *)PerMonitorShellPositionerManager::GetPositioner )
      Positioner = PerMonitorShellPositionerManager::GetPositioner(ppvOut, v16, a3, a4);
    else
      Positioner = v18(ppvOut, v16, a3, a4);
    v10 = Positioner;
    if ( Positioner >= 0 )
    {
LABEL_17:
      v20 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_19;
    }
    v31 = (unsigned int)Positioner;
    v32 = 1023LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)v31,
    v34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( v10 >= 0 )
  {
LABEL_19:
    v10 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A0,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v10,
    v36);
LABEL_20:
  v21 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v21->lpVtbl->Release)(v21);
  }
  return (unsigned int)v10;
}
