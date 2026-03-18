/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x140082000
 * Callers:
 *     <none>
 * Callees:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1400820DC (MmOnlySystemCacheViewsPresent.c)
 *     MmTrimSection @ 0x14008212C (MmTrimSection.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  bool v5; // r12
  __int64 v6; // r14
  NTSTATUS v10; // edi
  NTSTATUS Status; // ecx
  BOOLEAN v12; // al

  v5 = 0;
  v6 = Length;
  if ( (Flags & 1) != 0 && (unsigned __int8)MmOnlySystemCacheViewsPresent() )
    v10 = 0;
  else
    v10 = MmTrimSection(SectionObjectPointer, FileOffset, v6, (Flags >> 1) & 1);
  IoStatus->Status = v10;
  CcFlushCachePriv((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, v6, 0, 0, (__int64)IoStatus);
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
    {
      v12 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, v6, 4u);
      Status = IoStatus->Status;
      v5 = v12 == 0;
    }
    if ( Status >= 0 && (v10 == 277 || v5) )
      IoStatus->Status = 277;
  }
}
