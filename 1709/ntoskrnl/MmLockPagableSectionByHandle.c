/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140507380
 * Callers:
 *     PoRunDownDeviceObject @ 0x1400FACA0 (PoRunDownDeviceObject.c)
 *     IoUnregisterShutdownNotification @ 0x14042A8C0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     ExQuerySystemLockInformation @ 0x14043AA18 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x1408388B4 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1u);
}
