/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C0027948
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C00277EC (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C00329A0 (ACPIEnableInitializeACPI.c)
 *     ACPILoadProcessFADT @ 0x1C009A88C (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x1C00349A4 (ACPIReadGpeStatusRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0034ADC (ACPIWriteGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  __int64 i; // rbx
  __int64 v2; // rdx

  result = AcpiInformation;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    LOBYTE(v2) = ACPIReadGpeStatusRegister((unsigned int)i) & (*((_BYTE *)GpeEnable + i) | *((_BYTE *)GpeWakeEnable + i));
    ACPIWriteGpeStatusRegister((unsigned int)i, v2);
    result = AcpiInformation;
  }
  return result;
}
