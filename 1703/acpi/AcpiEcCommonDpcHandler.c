/*
 * XREFs of AcpiEcCommonDpcHandler @ 0x1C004C674
 * Callers:
 *     ACPIEcGpeServiceRoutine @ 0x1C004C3F0 (ACPIEcGpeServiceRoutine.c)
 *     ACPIEcGpioDpcRoutine @ 0x1C004C410 (ACPIEcGpioDpcRoutine.c)
 * Callees:
 *     ACPIEcLogAction @ 0x1C002B6B0 (ACPIEcLogAction.c)
 */

void __fastcall AcpiEcCommonDpcHandler(__int64 a1)
{
  KIRQL v2; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  ACPIEcLogAction(a1, 0x50u, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v2);
  ACPIEcServiceDevice(a1);
}
