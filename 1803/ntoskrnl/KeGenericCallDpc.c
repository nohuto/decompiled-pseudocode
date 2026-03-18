/*
 * XREFs of KeGenericCallDpc @ 0x140004B40
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x140144C48 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x14014E78C (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140184940 (MiInitializeWorkingSetManagerParameters.c)
 *     MiInitializeDynamicPfns @ 0x140252AC0 (MiInitializeDynamicPfns.c)
 *     MiJumpStack @ 0x140256410 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 *     KiInitializeDynamicProcessor @ 0x140484794 (KiInitializeDynamicProcessor.c)
 *     ExGetPoolTagInfo @ 0x14048C5A4 (ExGetPoolTagInfo.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateFilterData @ 0x14058CE40 (EtwpUpdateFilterData.c)
 *     KeConfigureHeteroProcessors @ 0x140741178 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x14074CF40 (MmSetPermanentCacheAttribute.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     ExpAeThresholdInitialization @ 0x1408BA930 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(), _QWORD *, __int64))KeGenericProcessorCallback)(
           0LL,
           KiGenericCallDpcWorker,
           v3,
           1LL);
}
