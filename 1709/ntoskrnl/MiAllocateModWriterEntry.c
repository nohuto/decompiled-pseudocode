/*
 * XREFs of MiAllocateModWriterEntry @ 0x14011F3F0
 * Callers:
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x140159AE0 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14011F45C (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * a2 + 264, 0x65576D4Du);
  if ( PoolWithTag )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return PoolWithTag;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
