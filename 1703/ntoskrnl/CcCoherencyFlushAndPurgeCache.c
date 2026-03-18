/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x140014340
 * Callers:
 *     <none>
 * Callees:
 *     MmOnlySystemCacheViewsPresent @ 0x140014420 (MmOnlySystemCacheViewsPresent.c)
 *     MmTrimSection @ 0x140014470 (MmTrimSection.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  bool v5; // r12
  __int64 v6; // rbp
  NTSTATUS Status; // esi

  v5 = 0;
  v6 = Length;
  if ( (Flags & 1) != 0 && (unsigned __int8)MmOnlySystemCacheViewsPresent() )
    IoStatus->Status = 0;
  else
    IoStatus->Status = MmTrimSection(SectionObjectPointer, FileOffset, v6, (Flags >> 1) & 1);
  Status = IoStatus->Status;
  CcFlushCachePriv((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, v6, 0, 0, (__int64)IoStatus);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
      v5 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, v6, 4u) == 0;
    if ( IoStatus->Status >= 0 && (Status == 277 || v5) )
      IoStatus->Status = 277;
  }
}
