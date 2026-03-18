/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1404B2EC0
 * Callers:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x140415880 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x14041AE34 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140817890 (KiInitializeMTRR.c)
 * Callees:
 *     <none>
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
