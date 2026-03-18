/*
 * XREFs of MiAllocateModWriterEntry @ 0x14010ED60
 * Callers:
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x14016648C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14010EDCC (MiChargeForWriteInProgressPage.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
