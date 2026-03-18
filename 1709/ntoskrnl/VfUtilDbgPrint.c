/*
 * XREFs of VfUtilDbgPrint @ 0x140276714
 * Callers:
 *     VfClearVerifierSettings @ 0x140276548 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x140277AD0 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140277B54 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140277BE8 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140277C8C (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1407A69D0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1407A6F0C (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1407A7940 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1407A79E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1407A7CB0 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1407A8474 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1407A90AC (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1407A916C (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1407A926C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1407ACC00 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1407ADA58 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1407AEC4C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDeleteDevice @ 0x1407B4248 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x1407B43B8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1407B5588 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1407B5620 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x1407B56F4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407B5748 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1407B8800 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1407BCBAC (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x1407BE688 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1407BFD90 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1407C0870 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1407C0B50 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1407C1818 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x1407C5010 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1407C51C0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1407C5310 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140132910 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a1, va, 1);
}
