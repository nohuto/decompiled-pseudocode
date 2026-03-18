/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C00279A4
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C0027598 (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C00277EC (ACPIGpeClearEventMasks.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0027A00 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002A900 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C002AF40 (ACPIInterruptServiceRoutine.c)
 *     ACPIEnableInitializeACPI @ 0x1C00329A0 (ACPIEnableInitializeACPI.c)
 *     ACPIVectorConnect @ 0x1C003F860 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C003FA20 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C003FAF0 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C003FC10 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C009A88C (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0034A3C (ACPIWriteGpeEnableRegister.c)
 */

void *__fastcall ACPIGpeEnableDisableEvents(char a1, __int64 a2)
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    LOBYTE(a2) = a1 != 0 ? *((_BYTE *)GpeCurEnable + i) : 0;
    ACPIWriteGpeEnableRegister(i, a2);
    result = AcpiInformation;
  }
  return result;
}
