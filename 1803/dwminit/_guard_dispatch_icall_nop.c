/*
 * XREFs of _guard_dispatch_icall_nop @ 0x180008750
 * Callers:
 *     _TlgEnableCallback @ 0x180001000 (_TlgEnableCallback.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002490 (-FallBackToBDD@@YA_NXZ.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x180003BC4 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180004304 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004390 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800044D8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000466C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x180004A4C (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180004AB4 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004AD0 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180005280 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x1800056C0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180005778 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180005A3C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180006640 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180006A44 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     __scrt_dllmain_exception_filter @ 0x18000720C (__scrt_dllmain_exception_filter.c)
 *     dllmain_crt_process_attach @ 0x180008150 (dllmain_crt_process_attach.c)
 *     dllmain_dispatch @ 0x1800082FC (dllmain_dispatch.c)
 *     _RTC_Initialize @ 0x180008568 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x1800085A4 (_RTC_Terminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
