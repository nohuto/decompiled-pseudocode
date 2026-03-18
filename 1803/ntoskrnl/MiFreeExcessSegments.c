/*
 * XREFs of MiFreeExcessSegments @ 0x1400C6548
 * Callers:
 *     MmResourcesAvailable @ 0x1400869F0 (MmResourcesAvailable.c)
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiScanLeafNonPagedPool @ 0x1400D7D50 (MiScanLeafNonPagedPool.c)
 *     MiAllocatePoolPages @ 0x1400D85D8 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x140250098 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rcx
  void *v2; // rbx

  result = 9 * (qword_1403CFCA8 / 0xAuLL);
  if ( qword_1403CFC28 >= result )
  {
    result = MiShouldTrimUnusedSegments();
    if ( (_DWORD)result )
    {
      for ( i = 0LL; ; i = v2 )
      {
        result = (unsigned __int64)PsGetNextPartition(i);
        v2 = (void *)result;
        if ( !result )
          break;
        if ( *(_QWORD *)(*(_QWORD *)result + 1624LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)result + 1336LL), 0, 0);
      }
    }
  }
  return result;
}
