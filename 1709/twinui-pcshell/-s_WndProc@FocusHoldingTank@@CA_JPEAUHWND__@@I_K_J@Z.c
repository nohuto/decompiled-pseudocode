/*
 * XREFs of ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180190730
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CCD4 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801838F4 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x18019032C (-StartActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall FocusHoldingTank::s_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  __int64 v9; // rcx
  _QWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+50h] [rbp-B0h]
  int *v13; // [rsp+58h] [rbp-A8h]
  int *v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h] BYREF
  char v16; // [rsp+6Ch] [rbp-94h]
  int v17; // [rsp+90h] [rbp-70h] BYREF
  const char *v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  char v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  _BYTE v22[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+148h] [rbp+48h]
  __int64 v24; // [rsp+150h] [rbp+50h]
  __int64 v25; // [rsp+158h] [rbp+58h]
  __int64 v26; // [rsp+160h] [rbp+60h]

  if ( Msg == 6 && (_WORD)wParam == 1 )
  {
    v11[1] = 0LL;
    v11[2] = v11;
    v11[3] = 0LL;
    v12 = 0;
    v13 = &v17;
    v14 = &v15;
    v15 = 0;
    v16 = 0;
    v20 = 0;
    v17 = 0;
    v18 = "ActivateHoldingTankWindow";
    v19 = 0LL;
    v21 = 1LL;
    v23 = 0LL;
    v24 = 0LL;
    memset(v22, 0, sizeof(v22));
    v25 = 0LL;
    v26 = 0LL;
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
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v11);
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  }
  return DefWindowProcW(hWnd, Msg, wParam, lParam);
}
