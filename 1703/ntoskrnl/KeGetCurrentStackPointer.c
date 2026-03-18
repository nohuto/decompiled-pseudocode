/*
 * XREFs of KeGetCurrentStackPointer @ 0x140181EE0
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400E4A50 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14010F550 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     PnprGetStackLimits @ 0x1401FA2B8 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x140256F38 (EtwpTraceStackWalk.c)
 *     MmVerifierTrimMemory @ 0x140763CB8 (MmVerifierTrimMemory.c)
 *     VerifierCaptureViolationKernelStack @ 0x14076F050 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14077A004 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
