/*
 * XREFs of MiFreeExcessSegments @ 0x1400F7E68
 * Callers:
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x1400815F0 (MmResourcesAvailable.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     MiScanLeafNonPagedPool @ 0x1400C1F00 (MiScanLeafNonPagedPool.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x140211C44 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  volatile signed __int64 *i; // rcx
  volatile signed __int64 *v2; // rbx

  result = 9 * (qword_14038B9E8 / 0xAuLL);
  if ( qword_14038B970 >= result )
  {
    result = MiShouldTrimUnusedSegments(qword_14038B9E8, qword_14038B9E8 / 0xAuLL);
    if ( (_DWORD)result )
    {
      for ( i = 0LL; ; i = v2 )
      {
        result = (unsigned __int64)PsGetNextPartition(i);
        v2 = (volatile signed __int64 *)result;
        if ( !result )
          break;
        if ( *(_QWORD *)(*(_QWORD *)result + 1616LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)result + 1328LL), 0, 0);
      }
    }
  }
  return result;
}
