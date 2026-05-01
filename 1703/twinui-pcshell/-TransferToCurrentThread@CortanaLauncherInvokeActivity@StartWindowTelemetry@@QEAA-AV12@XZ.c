/*
 * XREFs of ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153420
 * Callers:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180154D88 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180157230 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157980 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180158F6C (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_180158F6C.c)
 */

_QWORD *__fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  LOBYTE(a3) = **(_DWORD **)(a1 + 48) == 1;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    a3);
  *a2 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  return a2;
}
