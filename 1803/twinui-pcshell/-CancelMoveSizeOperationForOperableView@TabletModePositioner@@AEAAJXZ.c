/*
 * XREFs of ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1802C4BC4
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802C5080 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180284050 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::CancelMoveSizeOperationForOperableView(TabletModePositioner *this)
{
  __int64 v2; // rbx
  int v3; // eax
  struct IApplicationView *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  TabletModePositionerHelpers *v9[2]; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( !GetGUIThreadInfo(0, &pgui) || (pgui.flags & 2) == 0 )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA51,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007139FLL);
    return v5;
  }
  v9[0] = 0LL;
  v2 = *((_QWORD *)this + 42);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9);
  v3 = (*(__int64 (__fastcall **)(__int64, HWND, TabletModePositionerHelpers **))(*(_QWORD *)v2 + 48LL))(
         v2,
         pgui.hwndMoveSize,
         v9);
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( TabletModePositionerHelpers::IsControlledView(v9[0], v4) )
    {
      SendNotifyMessageW(pgui.hwndMoveSize, 0x1Fu, 0LL, 0LL);
      v5 = 0;
      goto LABEL_9;
    }
    v5 = -2147019873;
    v7 = 2648LL;
    v6 = 2147947423LL;
  }
  else
  {
    v6 = (unsigned int)v3;
    v7 = 2645LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)v6);
LABEL_9:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9);
  return v5;
}
