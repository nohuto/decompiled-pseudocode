/*
 * XREFs of MiAllocateModWriterEntry @ 0x1401330FC
 * Callers:
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x140184BD0 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x140131D70 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * a2 + 264, 0x65576D4Du);
  if ( PoolWithTag )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0, v6, v7) )
      return PoolWithTag;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
