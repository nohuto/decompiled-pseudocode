/*
 * XREFs of WbAlloc @ 0x14053BF78
 * Callers:
 *     WbAllocateMemoryBlock @ 0x14043EE04 (WbAllocateMemoryBlock.c)
 *     WbReAlloc @ 0x140441428 (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x14045131C (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x14045A96C (WbCreateWarbirdProcess.c)
 *     sub_14045B468 @ 0x14045B468 (sub_14045B468.c)
 *     WbProcessStartup @ 0x14045B80C (WbProcessStartup.c)
 *     WbInitializeEncryptionSegment @ 0x14045CE10 (WbInitializeEncryptionSegment.c)
 *     sub_14045E04C @ 0x14045E04C (sub_14045E04C.c)
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 *     WbCreateHeapExecutedBlock @ 0x1405481A0 (WbCreateHeapExecutedBlock.c)
 *     WbHashData @ 0x140548BA0 (WbHashData.c)
 *     WbValidateEncryptionSegmentArguments @ 0x140549CAC (WbValidateEncryptionSegmentArguments.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbAlloc(SIZE_T NumberOfBytes, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  PoolWithTag = 0LL;
  if ( (_DWORD)NumberOfBytes
    && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42524157u)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    if ( a2 )
    {
      *a2 = PoolWithTag;
      PoolWithTag = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x42524157u);
  }
  return v2;
}
