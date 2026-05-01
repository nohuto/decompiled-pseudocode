/*
 * XREFs of ??_GFocusHoldingTank@@QEAAPEAXI@Z @ 0x180150994
 * Callers:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x1801537AC (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180154FA0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180148064 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014E3C4 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014EA54 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??$Start@$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@SA?AV01@XZ @ 0x18015CAD4 (--$Start@$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HWND *__fastcall FocusHoldingTank::`scalar deleting destructor'(HWND *this)
{
  const char *v2; // r9
  HWND v3; // rcx
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  StartWindowTelemetry::DestroyHoldingTankWindow::Start<>((StartWindowTelemetry::DestroyHoldingTankWindow *)v5);
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
