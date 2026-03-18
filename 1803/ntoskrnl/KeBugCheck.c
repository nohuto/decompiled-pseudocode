/*
 * XREFs of KeBugCheck @ 0x1401AAEB0
 * Callers:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspSystemThreadStartup @ 0x140098F60 (PspSystemThreadStartup.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14012F870 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiLockServiceTable @ 0x140169E9C (KiLockServiceTable.c)
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     KxStartSystemThread @ 0x1401B2370 (KxStartSystemThread.c)
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x14047B428 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x14047B720 (KeWriteProtectProcessorState.c)
 *     PspThreadDelete @ 0x140511DD0 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x140627590 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14062DC9C (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x1407A948C (EtwDeleteSiloState.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     BvgaSaveResources @ 0x1408BA8A4 (BvgaSaveResources.c)
 *     PspInitPhase1 @ 0x1408BC630 (PspInitPhase1.c)
 *     KiFatalExceptionFilter @ 0x1408C5BA8 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
