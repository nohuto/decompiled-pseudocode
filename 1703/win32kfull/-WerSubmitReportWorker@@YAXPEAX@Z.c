/*
 * XREFs of ?WerSubmitReportWorker@@YAXPEAX@Z @ 0x1C020A260
 * Callers:
 *     <none>
 * Callees:
 *     WerKernelSubmitReportForHungProcess @ 0x1C023C17C (WerKernelSubmitReportForHungProcess.c)
 */

void __fastcall WerSubmitReportWorker(unsigned int *StartContext)
{
  WerKernelSubmitReportForHungProcess(*StartContext, StartContext[1], StartContext[2]);
  Win32FreePool(StartContext);
}
