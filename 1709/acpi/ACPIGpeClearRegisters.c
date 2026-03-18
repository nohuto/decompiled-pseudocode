/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C0013C48
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C0013AEC (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C00218F0 (ACPIEnableInitializeACPI.c)
 *     ACPILoadProcessFADT @ 0x1C00AE684 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C00105AC (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0013CA4 (ACPIReadGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  __int64 i; // rbx
  char v2; // al

  result = AcpiInformation;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    v2 = ACPIReadGpeStatusRegister((unsigned int)i);
    ACPIWriteGpeStatusRegister(i, v2 & (*((_BYTE *)GpeEnable + i) | *((_BYTE *)GpeWakeEnable + i)));
    result = AcpiInformation;
  }
  return result;
}
