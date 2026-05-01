/*
 * XREFs of ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180023878
 * Callers:
 *     ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800241A0 (-FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TY.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShouldHandleFrameworkViewTypeChange@CDesktopPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180021B00 (-ShouldHandleFrameworkViewTypeChange@CDesktopPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_.c)
 *     ?GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x180024650 (-GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEA.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18008AE5C (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B93F0 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x1802B9924 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802BA860 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802BDF9C (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::HandleFrameworkViewTypeChange(
        __int64 a1,
        unsigned int a2,
        CApplicationViewBase *a3,
        IUnknown *a4)
{
  void *v8; // rdi
  __int64 (__fastcall *v9)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  int v11; // ebx
  __int64 (__fastcall *v12)(void *); // rax
  unsigned int CurrentPositioner; // eax
  unsigned int v14; // r14d
  __int64 (__fastcall *v15)(void *, _QWORD, GUID *, void **); // rax
  int Positioner; // eax
  void *v17; // rcx
  void *v18; // rbx
  _BOOL8 (__fastcall *v19)(__int64, __int64, int); // rax
  BOOL v20; // eax
  void *v21; // rcx
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
  HRESULT v33; // eax
  int updated; // eax
  __int64 v35; // rdx
  unsigned int v36; // r15d
  int PositionerForMonitor; // eax
  __int64 v38; // rdx
  int v39; // [rsp+20h] [rbp-30h]
  void *v40; // [rsp+30h] [rbp-20h] BYREF
  __int64 v41; // [rsp+38h] [rbp-18h] BYREF
  void *v42; // [rsp+40h] [rbp-10h]
  __int64 v43; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *ppvOut; // [rsp+90h] [rbp+40h] BYREF

  v43 = -2LL;
  v8 = 0LL;
  v42 = 0LL;
  ppvOut = 0LL;
  v9 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a3 + 264LL);
  if ( v9 == CApplicationViewBase::GetPositionerPriority )
    PositionerPriority = CApplicationViewBase::GetPositionerPriority(a3, (struct IShellPositionerPriority **)&ppvOut);
  else
    PositionerPriority = v9(a3, (struct IShellPositionerPriority **)&ppvOut);
  if ( PositionerPriority >= 0 )
    goto LABEL_4;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  ppvOut = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a3, v23);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v27 = PositionerPriority_CreateInstance(PropW, v26, &ppvOut);
      if ( v27 >= 0 )
        goto LABEL_38;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v27,
        v39);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  v29 = PositionerPriority_CreateInstance(*(unsigned int *)(a1 + 144), v28, &ppvOut);
  v11 = v29;
  if ( v29 < 0 )
  {
    v30 = 834LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v29,
      v39);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_9;
  }
LABEL_38:
  v29 = (*(__int64 (__fastcall **)(CApplicationViewBase *, void *))(*(_QWORD *)a3 + 272LL))(a3, ppvOut);
  v11 = v29;
  if ( v29 < 0 )
  {
    v30 = 838LL;
    goto LABEL_37;
  }
LABEL_4:
  v8 = ppvOut;
  if ( ppvOut )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
    v8 = ppvOut;
  }
  v42 = v8;
  if ( v8 )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v11 = 0;
LABEL_9:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11,
      v39);
    goto LABEL_27;
  }
  v12 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 24LL);
  if ( (char *)v12 == (char *)PositionerPriority::GetCurrentPositioner )
    CurrentPositioner = PositionerPriority::GetCurrentPositioner(v8);
  else
    CurrentPositioner = v12(v8);
  v14 = CurrentPositioner;
  v40 = 0LL;
  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         a4,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &ppvOut) >= 0 )
  {
    v15 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, void **))(*(_QWORD *)ppvOut + 24LL);
    if ( (char *)v15 == (char *)PerMonitorShellPositionerManager::GetPositioner )
      Positioner = PerMonitorShellPositionerManager::GetPositioner(
                     ppvOut,
                     v14,
                     &GUID_ee010e17_919a_4068_868b_675acf787303,
                     &v40);
    else
      Positioner = v15(ppvOut, v14, &GUID_ee010e17_919a_4068_868b_675acf787303, &v40);
    v11 = Positioner;
    if ( Positioner >= 0 )
      goto LABEL_16;
    v31 = (unsigned int)Positioner;
    v32 = 1023LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v31,
      v39);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_19;
  }
  v33 = IUnknown_QueryService(a4, &c_positionersSIDs + (int)v14, &GUID_ee010e17_919a_4068_868b_675acf787303, &v40);
  v11 = v33;
  if ( v33 < 0 )
  {
    v31 = (unsigned int)v33;
    v32 = 1030LL;
    goto LABEL_44;
  }
LABEL_16:
  v17 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v11 = 0;
LABEL_19:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x225,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11,
      v39);
    goto LABEL_25;
  }
  v18 = v40;
  v19 = *(_BOOL8 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v40 + 56LL);
  if ( v19 == CDesktopPositioner::ShouldHandleFrameworkViewTypeChange )
  {
    v20 = CDesktopPositioner::ShouldHandleFrameworkViewTypeChange((__int64)v40, (__int64)a3, a2);
  }
  else
  {
    v20 = v19((__int64)v40, (__int64)a3, a2);
    v18 = v40;
  }
  if ( v20 )
  {
    (*(void (__fastcall **)(void *, CApplicationViewBase *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, a3, a2);
LABEL_24:
    v11 = 0;
    goto LABEL_25;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  updated = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)v8 + 64LL))(v8, &ppvOut);
  v11 = updated;
  if ( updated >= 0 )
  {
    v39 = a2;
    updated = ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(a1, ppvOut, a3, a4);
    v11 = updated;
    if ( updated >= 0 )
    {
      v36 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 24LL))(ppvOut);
      v41 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                               v36,
                               a4,
                               &GUID_ee010e17_919a_4068_868b_675acf787303,
                               &v41);
      v11 = PositionerForMonitor;
      if ( PositionerForMonitor >= 0 )
      {
        PositionerForMonitor = (*(__int64 (__fastcall **)(CApplicationViewBase *, void *))(*(_QWORD *)a3 + 272LL))(
                                 a3,
                                 ppvOut);
        v11 = PositionerForMonitor;
        if ( PositionerForMonitor >= 0 )
        {
          ShellPositionerManager::PerformPositionerHandoff(a1, a3, v14, v36);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_24;
        }
        v38 = 576LL;
      }
      else
      {
        v38 = 573LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor,
        v39);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      goto LABEL_59;
    }
    v35 = 568LL;
  }
  else
  {
    v35 = 565LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)updated,
    v39);
LABEL_59:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
LABEL_25:
  v21 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_27:
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v11;
}
