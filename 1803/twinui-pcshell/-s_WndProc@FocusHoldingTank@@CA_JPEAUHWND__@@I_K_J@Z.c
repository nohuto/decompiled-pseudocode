/*
 * XREFs of ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1802330F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180078470 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007854C (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F6C78 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F6E00 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StartActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x180231F7C (-StartActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall FocusHoldingTank::s_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  __int64 v9; // rcx
  _QWORD v11[40]; // [rsp+30h] [rbp-178h] BYREF

  if ( Msg == 6 && (_WORD)wParam == 1 )
  {
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v11,
      (__int64)"ActivateHoldingTankWindow");
    v11[0] = &StartWindowTelemetry::ActivateHoldingTankWindow::`vftable';
    StartWindowTelemetry::ActivateHoldingTankWindow::StartActivity((StartWindowTelemetry::ActivateHoldingTankWindow *)v11);
    WindowLongPtrW = GetWindowLongPtrW(hWnd, Msg - 27);
    if ( WindowLongPtrW )
    {
      v9 = *(_QWORD *)(WindowLongPtrW + 16);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
    }
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11);
    v11[0] = &StartWindowTelemetry::ActivateHoldingTankWindow::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  }
  return DefWindowProcW(hWnd, Msg, wParam, lParam);
}
