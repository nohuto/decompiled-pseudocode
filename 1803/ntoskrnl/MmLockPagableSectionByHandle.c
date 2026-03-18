/*
 * XREFs of MmLockPagableSectionByHandle @ 0x14053EAD0
 * Callers:
 *     PoRunDownDeviceObject @ 0x14009F930 (PoRunDownDeviceObject.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x140477A40 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x140487610 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x1408B2DEC (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
