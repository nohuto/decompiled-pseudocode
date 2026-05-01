/*
 * XREFs of ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800241A0
 * Callers:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003EE20 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ?GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001C840 (-GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180023878 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::FrameworkViewTypeChanged(
        __int64 a1,
        CWinRTApplicationView *a2,
        unsigned int a3)
{
  __int64 (__fastcall *v6)(CWinRTApplicationView *, struct IImmersiveMonitor **); // rax
  int Monitor; // eax
  unsigned int v8; // ebx
  int v9; // eax
  IUnknown *v10; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  IUnknown *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  v6 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 80LL);
  if ( v6 == CWinRTApplicationView::GetMonitor )
    Monitor = CWinRTApplicationView::GetMonitor(a2, (struct IImmersiveMonitor **)&v15);
  else
    Monitor = v6(a2, (struct IImmersiveMonitor **)&v15);
  v8 = Monitor;
  if ( Monitor < 0 )
  {
    v12 = (unsigned int)Monitor;
    v13 = 477LL;
  }
  else
  {
    v9 = ShellPositionerManager::HandleFrameworkViewTypeChange(a1 - 128, a3, a2, v15);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v8 = 0;
      goto LABEL_6;
    }
    v12 = (unsigned int)v9;
    v13 = 478LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)v12,
    -2);
LABEL_6:
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
  }
  return v8;
}
