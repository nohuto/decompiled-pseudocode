/*
 * XREFs of __security_check_cookie @ 0x140003040
 * Callers:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400027D0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002A20 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002AE0 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     McTemplateU0 @ 0x1400044EC (McTemplateU0.c)
 *     McTemplateU0q @ 0x140004528 (McTemplateU0q.c)
 *     McTemplateU0qqq @ 0x140004588 (McTemplateU0qqq.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1400047E8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140004A50 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140004E24 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1400059E0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x140005F20 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     __GSHandlerCheckCommon @ 0x140006394 (__GSHandlerCheckCommon.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x140007008 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007180 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 *     ?GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z @ 0x14000747C (-GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140007E80 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
