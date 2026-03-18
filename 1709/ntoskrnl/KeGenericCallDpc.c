/*
 * XREFs of KeGenericCallDpc @ 0x14012F0C0
 * Callers:
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x14012F060 (KeSwapDirectoryTableBase.c)
 *     MiJumpStack @ 0x14015C480 (MiJumpStack.c)
 *     KeSetSystemTime @ 0x14020497C (KeSetSystemTime.c)
 *     MiInitializeDynamicPfns @ 0x14021464C (MiInitializeDynamicPfns.c)
 *     KiInitializeDynamicProcessor @ 0x14042E5D4 (KiInitializeDynamicProcessor.c)
 *     ExGetPoolTagInfo @ 0x140446F2C (ExGetPoolTagInfo.c)
 *     EtwpUpdateFilterData @ 0x1404EEF40 (EtwpUpdateFilterData.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     KeConfigureHeteroProcessors @ 0x1405B7564 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x1406E2300 (MmSetPermanentCacheAttribute.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     ExpAeThresholdInitialization @ 0x14083E1A0 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 */

void __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[0] = a1;
  v2[1] = a2;
  KeGenericProcessorCallback(0LL, (void (__fastcall *)(struct _KPRCB *, __int64))KiGenericCallDpcWorker, (__int64)v2, 1);
}
