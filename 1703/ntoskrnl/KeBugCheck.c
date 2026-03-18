/*
 * XREFs of KeBugCheck @ 0x140181870
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     KiDetachProcess @ 0x1400B1E40 (KiDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14010F480 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x14011FEF0 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x140145BB8 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x140188C10 (KxStartSystemThread.c)
 *     KiSetFeatureBits @ 0x14040FD30 (KiSetFeatureBits.c)
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140411E0C (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x140412AB0 (KeWriteProtectProcessorState.c)
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x1405A8000 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405AF0D8 (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x14070C6D8 (EtwDeleteSiloState.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     BvgaSaveResources @ 0x140819160 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140822800 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
