/*
 * XREFs of AcpiAllocateGsivForSecondaryInterrupt @ 0x1C009E700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AcpiAllocateGsivForSecondaryInterrupt()
{
  return ((__int64 (*)(void))HalPrivateDispatchTable[63])();
}
