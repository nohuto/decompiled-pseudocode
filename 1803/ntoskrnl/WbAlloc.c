/*
 * XREFs of WbAlloc @ 0x14050F678
 * Callers:
 *     sub_140489FD8 @ 0x140489FD8 (sub_140489FD8.c)
 *     WbValidateEncryptionSegmentArguments @ 0x14048A518 (WbValidateEncryptionSegmentArguments.c)
 *     sub_14048AC0C @ 0x14048AC0C (sub_14048AC0C.c)
 *     WbDispatchOperation @ 0x14050F10C (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x140539864 (WbAllocateMemoryBlock.c)
 *     WbCreateHeapExecutedBlock @ 0x140539C10 (WbCreateHeapExecutedBlock.c)
 *     WbHashData @ 0x14053A76C (WbHashData.c)
 *     WbReAlloc @ 0x14053AE90 (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x14056EC88 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x140582D70 (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x140583160 (WbProcessStartup.c)
 *     sub_140584498 @ 0x140584498 (sub_140584498.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
