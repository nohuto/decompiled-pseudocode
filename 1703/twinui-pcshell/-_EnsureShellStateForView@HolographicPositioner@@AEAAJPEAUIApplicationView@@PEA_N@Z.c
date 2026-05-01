/*
 * XREFs of ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800DC2F0
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8B70 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithApplicationViewData @ 0x1800D7474 (_LogEventWithApplicationViewData.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DC440 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::_EnsureShellStateForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        bool *a3)
{
  int v5; // esi
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 49) )
  {
    LogEventWithApplicationViewData(
      (__int64)a2,
      (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::QueueAppViewPending<unsigned short const *>);
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 49) + 24LL))(
           *((_QWORD *)this + 49),
           a2);
    if ( v5 < 0 )
    {
      v6 = 1660LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v8 = *((_QWORD *)this + 48);
    if ( v8 )
    {
      LogEventWithApplicationViewData(
        v8,
        (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::PreviousPendingViewClosed<unsigned short const *>);
      v5 = HolographicPositioner::_CloseView(this, *((struct IApplicationView **)this + 48));
      if ( v5 < 0 )
      {
        v6 = 1667LL;
        goto LABEL_4;
      }
      v9 = *((_QWORD *)this + 48);
      if ( v9 )
      {
        *((_QWORD *)this + 48) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    if ( *((struct IApplicationView **)this + 48) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = *((_QWORD *)this + 48);
      *((_QWORD *)this + 48) = a2;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  LogEventWithApplicationViewData(
    (__int64)a2,
    (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::DenyAppViewPending<unsigned short const *>);
  v11 = HolographicPositioner::_CloseView(this, a2);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x68E,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
