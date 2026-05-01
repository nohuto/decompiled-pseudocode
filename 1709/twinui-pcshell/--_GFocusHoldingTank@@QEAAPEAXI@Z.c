/*
 * XREFs of ??_GFocusHoldingTank@@QEAAPEAXI@Z @ 0x180184D44
 * Callers:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180187744 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180189200 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18018B01C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CCD4 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801838F4 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x18018FDF4 (-StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

HWND *__fastcall FocusHoldingTank::`scalar deleting destructor'(HWND *this)
{
  const char *v2; // r9
  HWND v3; // rcx
  _QWORD v5[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+48h] [rbp-C0h]
  int *v7; // [rsp+50h] [rbp-B8h]
  int *v8; // [rsp+58h] [rbp-B0h]
  int v9; // [rsp+60h] [rbp-A8h] BYREF
  char v10; // [rsp+64h] [rbp-A4h]
  int v11; // [rsp+88h] [rbp-80h] BYREF
  const char *v12; // [rsp+90h] [rbp-78h]
  __int64 v13; // [rsp+98h] [rbp-70h]
  char v14; // [rsp+A0h] [rbp-68h]
  __int64 v15; // [rsp+A8h] [rbp-60h]
  _BYTE v16[144]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+140h] [rbp+38h]
  __int64 v18; // [rsp+148h] [rbp+40h]
  __int64 v19; // [rsp+150h] [rbp+48h]
  __int64 v20; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v15 = 1LL;
  v5[1] = 0LL;
  v5[2] = v5;
  v5[3] = 0LL;
  v7 = &v11;
  LODWORD(v6) = 0;
  v8 = &v9;
  v9 = 0;
  v12 = "DestroyHoldingTankWindow";
  v10 = 0;
  v14 = 0;
  v11 = 0;
  v13 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  memset(v16, 0, sizeof(v16));
  v19 = 0LL;
  v5[0] = &StartWindowTelemetry::DestroyHoldingTankWindow::`vftable';
  v20 = 0LL;
  StartWindowTelemetry::DestroyHoldingTankWindow::StartActivity((StartWindowTelemetry::DestroyHoldingTankWindow *)v5);
  if ( *this )
  {
    SetLastError(0);
    if ( !SetWindowLongPtrW(*this, -21, 0LL) && GetLastError() )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v2);
    DestroyWindow(*this);
    *this = 0LL;
  }
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5);
  v5[0] = &StartWindowTelemetry::DestroyHoldingTankWindow::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v5);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  v3 = this[2];
  if ( v3 )
  {
    this[2] = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v3 + 16LL))(v3);
  }
  operator delete(this);
  return this;
}
