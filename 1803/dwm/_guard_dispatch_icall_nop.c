/*
 * XREFs of _guard_dispatch_icall_nop @ 0x140006470
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001100 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001320 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x1400017D0 (-IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001EB0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F50 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     __scrt_common_main_seh @ 0x140002E9C (__scrt_common_main_seh.c)
 *     __scrt_initialize_thread_safe_statics @ 0x140003320 (__scrt_initialize_thread_safe_statics.c)
 *     _Init_thread_notify @ 0x140003560 (_Init_thread_notify.c)
 *     _Init_thread_wait @ 0x1400035B0 (_Init_thread_wait.c)
 *     _RTC_Initialize @ 0x140003B18 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x140003B60 (_RTC_Terminate.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x140004CD0 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140004E24 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140005424 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1400058F8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1400059E0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x1400071F0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x140008294 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
