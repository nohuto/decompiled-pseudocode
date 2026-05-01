/*
 * XREFs of ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1801B1868
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801AD920 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801ADB50 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B1338 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _LogEventWithApplicationViewData @ 0x1801B2A78 (_LogEventWithApplicationViewData.c)
 */

__int64 __fastcall HolographicPositioner::_EnsureShellStateForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        bool *a3)
{
  int v3; // r9d
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // esi
  struct IApplicationView **v11; // rsi
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 108);
  *a3 = v3 == 0;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 108) == 1 )
    {
      LogEventWithApplicationViewData(a2, HolographicPositionerTelemetry::DenyAppViewDuringOOBE<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView(this, a2);
      if ( v6 < 0 )
      {
        v7 = 1975LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
    }
    else if ( *((_QWORD *)this + 52) )
    {
      LogEventWithApplicationViewData(a2, HolographicPositionerTelemetry::QueueAppViewPending<unsigned short const *>);
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 52) + 24LL))(
             *((_QWORD *)this + 52),
             a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7BD,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      v11 = (struct IApplicationView **)((char *)this + 408);
      v12 = *((_QWORD *)this + 51);
      if ( v12 )
      {
        LogEventWithApplicationViewData(
          v12,
          HolographicPositionerTelemetry::PreviousPendingViewClosed<unsigned short const *>);
        v6 = HolographicPositioner::_CloseView(this, *v11);
        if ( v6 < 0 )
        {
          v7 = 1988LL;
          goto LABEL_5;
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v11, a2);
    }
    else
    {
      LogEventWithApplicationViewData(a2, HolographicPositionerTelemetry::DenyAppViewPending<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView(this, a2);
      if ( v6 < 0 )
      {
        v7 = 1999LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
