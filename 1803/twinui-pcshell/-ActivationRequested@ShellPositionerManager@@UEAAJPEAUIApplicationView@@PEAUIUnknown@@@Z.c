/*
 * XREFs of ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800237C0
 * Callers:
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000A04C (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180040A10 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001C840 (-GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::ActivationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  int v3; // esi
  __int64 (__fastcall *v6)(CWinRTApplicationView *, struct IImmersiveMonitor **); // rax
  int Monitor; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct IImmersiveMonitor *v10; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = (int)a3;
  v16 = 0LL;
  v6 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 80LL);
  if ( v6 == CWinRTApplicationView::GetMonitor )
    Monitor = CWinRTApplicationView::GetMonitor(a2, &v16);
  else
    Monitor = v6(a2, &v16);
  v8 = Monitor;
  if ( Monitor < 0 )
  {
    v12 = (unsigned int)Monitor;
    v13 = 466LL;
  }
  else
  {
    v14 = v3;
    v9 = ShellPositionerManager::HandleActivationRequest((char *)this - 120, 1LL, a2, v16);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v8 = 0;
      goto LABEL_6;
    }
    v12 = (unsigned int)v9;
    v13 = 467LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)v12,
    v14);
LABEL_6:
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
