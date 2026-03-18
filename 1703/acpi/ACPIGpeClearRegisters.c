/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C0020454
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C00054A0 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeClearEventMasks @ 0x1C001EA54 (ACPIGpeClearEventMasks.c)
 *     ACPILoadProcessFADT @ 0x1C00ADCC8 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C00204B0 (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0020520 (ACPIReadGpeStatusRegister.c)
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
