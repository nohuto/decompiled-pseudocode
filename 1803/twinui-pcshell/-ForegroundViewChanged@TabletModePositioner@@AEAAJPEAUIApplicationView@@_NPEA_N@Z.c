/*
 * XREFs of ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1802C63A0
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C633C (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1802C7A30 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802C3F60 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802C84B8 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1802CE3BC (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1802D35C8 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 */

__int64 __fastcall TabletModePositioner::ForegroundViewChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        char a3,
        bool *a4)
{
  unsigned int v8; // ebp
  struct IApplicationView **v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWinRTApplicationView *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 184LL))(*((_QWORD *)this + 31)) )
  {
    if ( a3 )
      return 0LL;
LABEL_15:
    (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
    return 0LL;
  }
  if ( !a3 )
    goto LABEL_15;
  v8 = 1;
  if ( (unsigned __int8)TabletModePositioner::IsSwitcherVisible(this, 2LL) )
    v8 = 9;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  if ( (int)ScreenManagerHelpers::IsRelatedWin32ViewPresentInLayout(
              *((ScreenManagerHelpers **)this + 31),
              a2,
              (struct IApplicationView *)&v15,
              v9) < 0 )
  {
    v10 = TabletModePositioner::SwitchToAppHelper(this, a2, v8, 0LL, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1742LL;
      goto LABEL_12;
    }
  }
  else
  {
    v10 = TabletModePositioner::AppToAppSwitchHelper((IUnknown *)this, (__int64)v15, 5u, (__int64)a2, 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1738LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
      return v11;
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  return 0LL;
}
