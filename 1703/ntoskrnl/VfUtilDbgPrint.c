/*
 * XREFs of VfUtilDbgPrint @ 0x14024FF14
 * Callers:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x140251260 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402512E4 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140251378 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14025141C (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140764CA0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilClearOneBootSettings @ 0x1407650A8 (VfUtilClearOneBootSettings.c)
 *     VfUtilPrintCheckinString @ 0x14076533C (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140765DB0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140765E40 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140766110 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1407668D8 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140767500 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1407675EC (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x140767714 (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x14076AF30 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x14076BD8C (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14076CF8C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140772608 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1407737D4 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14077386C (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140773940 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140773998 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140776A10 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x14077ACA0 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x14077C760 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x14077DDC0 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x14077E8A0 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x14077EB80 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14077F838 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x140782C80 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140782E30 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140782F80 (VerifierNtWriteFile.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(File, 0x65u, 0, a1, va, 1);
}
