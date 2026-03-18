/*
 * XREFs of ACPIGpeClearEventMasks @ 0x1C00277EC
 * Callers:
 *     ACPITableLoad @ 0x1C003B1B0 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C003B760 (ACPITableUnload.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIGpeClearRegisters @ 0x1C0027948 (ACPIGpeClearRegisters.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00279A4 (ACPIGpeEnableDisableEvents.c)
 */

void ACPIGpeClearEventMasks()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  ACPIGpeClearRegisters();
  memset(GpeHandlerRegistered, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeCurEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeWakeEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeWakeHandler, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeSpecialHandler, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeRunMethod, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpePending, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeComplete, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeIsLevel, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeHandlerType, 0, *((unsigned __int16 *)AcpiInformation + 51));
  KeReleaseSpinLock(&GpeTableLock, v0);
}
