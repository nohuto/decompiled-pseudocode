/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x1400F2240
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1400F2320 (MmOnlySystemCacheViewsPresent.c)
 *     MmTrimSection @ 0x1400F2370 (MmTrimSection.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
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
  CcFlushCachePriv((__int64)SectionObjectPointer, (__int64 *)FileOffset, v6, 0LL, 0, (int *)&IoStatus->0);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
      v5 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, v6, 4u) == 0;
    if ( IoStatus->Status >= 0 && (Status == 277 || v5) )
      IoStatus->Status = 277;
  }
}
