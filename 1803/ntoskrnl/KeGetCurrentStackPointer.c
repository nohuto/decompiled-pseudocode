/*
 * XREFs of KeGetCurrentStackPointer @ 0x1401AB5B0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14012F950 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeQueryCurrentStackInformation @ 0x140130810 (KeQueryCurrentStackInformation.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1401309A0 (RtlEnoughStackSpaceForStackCapture.c)
 *     PnprGetStackLimits @ 0x14023CDE4 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1402B617C (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1408129E4 (MmVerifierTrimMemory.c)
 *     VerifierCaptureViolationKernelStack @ 0x14081DF70 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1408292B4 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
