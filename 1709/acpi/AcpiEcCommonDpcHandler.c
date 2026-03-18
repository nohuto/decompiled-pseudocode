/*
 * XREFs of AcpiEcCommonDpcHandler @ 0x1C004BA8C
 * Callers:
 *     ACPIEcGpeServiceRoutine @ 0x1C004B800 (ACPIEcGpeServiceRoutine.c)
 *     ACPIEcGpioDpcRoutine @ 0x1C004B820 (ACPIEcGpioDpcRoutine.c)
 * Callees:
 *     ACPIEcLogAction @ 0x1C004C3D4 (ACPIEcLogAction.c)
 *     ACPIEcServiceDevice @ 0x1C004C618 (ACPIEcServiceDevice.c)
 */

__int64 __fastcall AcpiEcCommonDpcHandler(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  KIRQL v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  LOBYTE(v3) = 80;
  v4 = v2;
  ACPIEcLogAction(a1, v3, 0LL);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v4);
  return ACPIEcServiceDevice(a1);
}
