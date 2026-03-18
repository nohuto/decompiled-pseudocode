/*
 * XREFs of WbAlloc @ 0x140501FF8
 * Callers:
 *     sub_14044A2C0 @ 0x14044A2C0 (sub_14044A2C0.c)
 *     WbValidateEncryptionSegmentArguments @ 0x14044A800 (WbValidateEncryptionSegmentArguments.c)
 *     sub_14044AEBC @ 0x14044AEBC (sub_14044AEBC.c)
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 *     WbCreateHeapExecutedBlock @ 0x140503894 (WbCreateHeapExecutedBlock.c)
 *     WbHashData @ 0x14057328C (WbHashData.c)
 *     WbAllocateMemoryBlock @ 0x140575B10 (WbAllocateMemoryBlock.c)
 *     WbCreateWarbirdProcess @ 0x140575D44 (WbCreateWarbirdProcess.c)
 *     WbReAlloc @ 0x14057672C (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x140583A0C (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x14059C164 (WbProcessStartup.c)
 *     sub_14059E290 @ 0x14059E290 (sub_14059E290.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WbAlloc(SIZE_T NumberOfBytes, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax
  void *v5; // rcx

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
      *a2 = PoolWithTag;
    v5 = 0LL;
    if ( !a2 )
      v5 = PoolWithTag;
    if ( v5 )
      ExFreePoolWithTag(v5, 0x42524157u);
  }
  return v2;
}
