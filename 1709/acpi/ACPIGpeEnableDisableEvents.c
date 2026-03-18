/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C0013D1C
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C00136F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C0013AEC (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C00218F0 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C004EBB0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C004FF00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C0050530 (ACPIInterruptServiceRoutine.c)
 *     ACPIVectorConnect @ 0x1C0059800 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C00599C0 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C0059A90 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C0059BB0 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C00AE684 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0010498 (ACPIWriteGpeEnableRegister.c)
 */

void *__fastcall ACPIGpeEnableDisableEvents(char a1)
{
  void *result; // rax
  char v2; // di
  __int64 i; // rbx

  result = AcpiInformation;
  v2 = -(a1 != 0);
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    ACPIWriteGpeEnableRegister(i, v2 & *((_BYTE *)GpeCurEnable + i));
    result = AcpiInformation;
  }
  return result;
}
