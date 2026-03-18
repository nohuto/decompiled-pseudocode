/*
 * XREFs of MmUnlockPagableImageSection @ 0x1400C1700
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140476810 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x140477A40 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x140487610 (ExQuerySystemLockInformation.c)
 *     PnprUnlockPagesForReplace @ 0x1407352F0 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14083B364 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
