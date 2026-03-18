/*
 * XREFs of KeGenericCallDpc @ 0x1400229D0
 * Callers:
 *     MiJumpStack @ 0x1400229B0 (MiJumpStack.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x140136ADC (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x140138470 (KeSetSystemTime.c)
 *     MiInitializeDynamicPfns @ 0x14020D5A0 (MiInitializeDynamicPfns.c)
 *     KeConfigureHeteroProcessors @ 0x140418848 (KeConfigureHeteroProcessors.c)
 *     KiInitializeDynamicProcessor @ 0x140418D40 (KiInitializeDynamicProcessor.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     ExGetPoolTagInfo @ 0x14043E8C8 (ExGetPoolTagInfo.c)
 *     EtwpUpdateFilterData @ 0x140554514 (EtwpUpdateFilterData.c)
 *     MmSetPermanentCacheAttribute @ 0x1406B5F50 (MmSetPermanentCacheAttribute.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     ExpAeThresholdInitialization @ 0x140816F00 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(0LL, KiGenericCallDpcWorker, v3, 1LL);
}
