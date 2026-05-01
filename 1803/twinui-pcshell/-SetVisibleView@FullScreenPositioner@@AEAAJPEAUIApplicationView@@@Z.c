/*
 * XREFs of ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014E010
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800202B0 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800204AC (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18014D34C (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 *     ?ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18014D3C0 (-ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014D530 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18014D900 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z @ 0x18014D5C0 (-FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z.c)
 *     ?PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z @ 0x18014DD00 (-PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z.c)
 */

__int64 __fastcall FullScreenPositioner::SetVisibleView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  bool v2; // zf
  CWinRTApplicationView **v3; // r14
  struct IApplicationView *v6; // rdx
  char v7; // si
  char v8; // bp
  int v9; // eax
  __int64 v10; // rax
  void (*v11)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2 == 0LL;
  v3 = (CWinRTApplicationView **)((char *)this + 184);
  v6 = (struct IApplicationView *)*((_QWORD *)this + 23);
  v7 = !v2;
  v8 = v6 != 0LL;
  if ( a2 != v6 )
  {
    v9 = FullScreenPositioner::PrivateVisibleFullScreenViewChangedEvent((IUnknown **)this, v6, a2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        685LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(v3, a2);
  if ( v7 != v8 )
  {
    v10 = **((_QWORD **)this + 24);
    if ( a2 )
      v11 = *(void (**)(void))(v10 + 24);
    else
      v11 = *(void (**)(void))(v10 + 32);
    v11();
    FullScreenPositioner::FullScreenVisibilityChangedEvent(this, v7);
  }
  return 0LL;
}
