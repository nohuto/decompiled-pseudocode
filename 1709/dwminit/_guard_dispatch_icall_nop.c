/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1800097F0
 * Callers:
 *     _TlgEnableCallback @ 0x180001000 (_TlgEnableCallback.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002610 (-FallBackToBDD@@YA_NXZ.c)
 *     ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003658 (--1-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x180003EB0 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800046B0 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004740 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004874 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800049FC (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x180004DD8 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180004E40 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004E5C (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180005530 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180005960 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180005A18 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180005CCC (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180005E10 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180005EE8 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005FB8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800069B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180006DB4 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@IIIII@Z @ 0x180007AD0 (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimo_ea_180007AD0.c)
 *     _onexit_0 @ 0x180008310 (_onexit_0.c)
 *     _CRT_INIT @ 0x180008C04 (_CRT_INIT.c)
 *     sub_180008E80 @ 0x180008E80 (sub_180008E80.c)
 *     sub_1800090D0 @ 0x1800090D0 (sub_1800090D0.c)
 *     _Init_thread_notify @ 0x180009300 (_Init_thread_notify.c)
 *     _Init_thread_wait @ 0x180009350 (_Init_thread_wait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
