/*
 * XREFs of KeBugCheck @ 0x140181270
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140028AC0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     PspSystemThreadStartup @ 0x140128180 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x14013A410 (KiLockServiceTable.c)
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     KxStartSystemThread @ 0x140188710 (KxStartSystemThread.c)
 *     KeWriteProtectProcessorState @ 0x14042572C (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1404266A8 (KiSetCacheInformation.c)
 *     KiSetFeatureBits @ 0x140427A44 (KiSetFeatureBits.c)
 *     PspThreadDelete @ 0x1404FBC50 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x1405B7F90 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405C0234 (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x140747D48 (EtwDeleteSiloState.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     KiFatalExceptionFilter @ 0x140832C9C (KiFatalExceptionFilter.c)
 *     BvgaSaveResources @ 0x140832FE0 (BvgaSaveResources.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     PspInitPhase1 @ 0x14084A9B0 (PspInitPhase1.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
