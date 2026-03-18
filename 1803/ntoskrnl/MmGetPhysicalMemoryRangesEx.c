/*
 * XREFs of MmGetPhysicalMemoryRangesEx @ 0x14064DCF0
 * Callers:
 *     MmGetPhysicalMemoryRanges @ 0x14064DCD0 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1400B3C4C (MiPartitionObjectToPartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x1405E72E8 (MiGetPhysicalMemoryRanges.c)
 */

ULONG_PTR *__fastcall MmGetPhysicalMemoryRangesEx(ULONG_PTR **a1)
{
  ULONG_PTR *result; // rax
  ULONG_PTR *v2; // rbx
  _QWORD *PhysicalMemoryRanges; // rdi
  char v4; // [rsp+38h] [rbp+10h] BYREF

  result = MiPartitionObjectToPartition(a1, 0, &v4);
  v2 = result;
  if ( result )
  {
    PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(result, 0);
    if ( v4 )
      PsDereferencePartition(v2[21]);
    return PhysicalMemoryRanges;
  }
  return result;
}
