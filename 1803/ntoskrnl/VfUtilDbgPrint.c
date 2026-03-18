/*
 * XREFs of VfUtilDbgPrint @ 0x1402A9838
 * Callers:
 *     VfClearVerifierSettings @ 0x1402A95D4 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1402AAC3C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402AACC0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1402AAD54 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1402AADF8 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140813B50 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x14081408C (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140814AC0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140814B70 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140814E40 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1408154A0 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1408160E4 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1408161A4 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1408162A4 (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x140819D70 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x14081ABC8 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14081BDBC (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14082156C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14082327C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140823314 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x1408233E8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14082343C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140825A90 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x140829F6C (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x14082BAF4 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x14082D2C0 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x14082DD90 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x14082E070 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14082ED58 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x140832570 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140832720 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140832870 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a1, va, 1);
}
