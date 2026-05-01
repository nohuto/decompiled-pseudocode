/*
 * XREFs of ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180100C44
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FB940 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FC040 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithApplicationViewData @ 0x1800FA890 (_LogEventWithApplicationViewData.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180100DCC (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::_EnsureShellStateForView(
        struct IApplicationView **this,
        struct IApplicationView *a2,
        bool *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct IApplicationView *v11; // rcx
  struct IApplicationView *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 116) == 1 )
  {
    LogEventWithApplicationViewData(
      (__int64)a2,
      (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::DenyAppViewDuringOOBE<unsigned short const *>);
    v5 = HolographicPositioner::_CloseView((HolographicPositioner *)this, a2);
    if ( v5 < 0 )
    {
      v6 = 2034LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    return 0LL;
  }
  if ( !this[56] )
  {
    LogEventWithApplicationViewData(
      (__int64)a2,
      (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::DenyAppViewPending<unsigned short const *>);
    v5 = HolographicPositioner::_CloseView((HolographicPositioner *)this, a2);
    if ( v5 < 0 )
    {
      v6 = 2058LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  LogEventWithApplicationViewData(
    (__int64)a2,
    (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::QueueAppViewPending<unsigned short const *>);
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationView *))(*(_QWORD *)this[56] + 24LL))(
         this[56],
         a2);
  if ( v8 < 0 )
  {
    v9 = 2040LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v10 = (__int64)this[55];
  if ( v10 )
  {
    LogEventWithApplicationViewData(
      v10,
      (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::PreviousPendingViewClosed<unsigned short const *>);
    v8 = HolographicPositioner::_CloseView((HolographicPositioner *)this, this[55]);
    if ( v8 < 0 )
    {
      v9 = 2047LL;
      goto LABEL_8;
    }
    v11 = this[55];
    if ( v11 )
    {
      this[55] = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( this[55] != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v12 = this[55];
    this[55] = a2;
    if ( v12 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
