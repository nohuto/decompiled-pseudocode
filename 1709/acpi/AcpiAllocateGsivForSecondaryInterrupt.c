/*
 * XREFs of AcpiAllocateGsivForSecondaryInterrupt @ 0x1C00A16E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 AcpiAllocateGsivForSecondaryInterrupt()
{
  return ((__int64 (*)(void))HalPrivateDispatchTable[63])();
}
