/*
 * XREFs of KeGetCurrentStackPointer @ 0x140181960
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140028B90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeQueryCurrentStackInformation @ 0x1400D9080 (KeQueryCurrentStackInformation.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400D9B84 (RtlEnoughStackSpaceForStackCapture.c)
 *     PnprGetStackLimits @ 0x140200000 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x14027FF24 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x1407A5A14 (MmVerifierTrimMemory.c)
 *     VerifierCaptureViolationKernelStack @ 0x1407B0DD0 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1407BBF00 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
