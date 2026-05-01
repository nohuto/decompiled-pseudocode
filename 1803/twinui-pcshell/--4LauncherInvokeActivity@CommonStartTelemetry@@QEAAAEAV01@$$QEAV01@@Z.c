/*
 * XREFs of ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F6E34
 * Callers:
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800789B0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18007A1F8 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007A6F8 (--4-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18007A860 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_18007A860.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

_QWORD *__fastcall CommonStartTelemetry::LauncherInvokeActivity::operator=(_QWORD *a1, __int64 a2, __int64 a3)
{
  LPVOID v6[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v6,
    (__int64)a1,
    a3);
  v6[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v6);
  return a1;
}
