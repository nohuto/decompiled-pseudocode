/*
 * XREFs of MmUnlockPagableImageSection @ 0x1400BC610
 * Callers:
 *     IoUnregisterShutdownNotification @ 0x14042A8C0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x14043AA18 (ExQuerySystemLockInformation.c)
 *     PnprUnlockPagesForReplace @ 0x1406CD954 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1407D08B8 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
