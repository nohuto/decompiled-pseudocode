/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C001F1BC
 * Callers:
 *     ACPIVectorDisable @ 0x1C0001CC0 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0001D80 (ACPIVectorEnable.c)
 *     ACPIEnableInitializeACPI @ 0x1C00054A0 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeClearEventMasks @ 0x1C001EA54 (ACPIGpeClearEventMasks.c)
 *     ACPIGpeBuildEventMasks @ 0x1C001F900 (ACPIGpeBuildEventMasks.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B850 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C002BC30 (ACPIInterruptServiceRoutine.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C004F1C0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIVectorConnect @ 0x1C0058DB0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0058F70 (ACPIVectorDisconnect.c)
 *     ACPILoadProcessFADT @ 0x1C00ADCC8 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C001F210 (ACPIWriteGpeEnableRegister.c)
 */

void *__fastcall ACPIGpeEnableDisableEvents(char a1, __int64 a2)
{
  void *result; // rax
  char v3; // di
  __int64 i; // rbx

  result = AcpiInformation;
  v3 = -(a1 != 0);
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    LOBYTE(a2) = v3 & *((_BYTE *)GpeCurEnable + i);
    ACPIWriteGpeEnableRegister((unsigned int)i, a2);
    result = AcpiInformation;
  }
  return result;
}
