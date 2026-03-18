/*
 * XREFs of MmUnlockPagableImageSection @ 0x14006CCE0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x140415880 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x14041AE34 (ExQuerySystemLockInformation.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PnprUnlockPagesForReplace @ 0x1406A30B0 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140755710 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     <none>
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
