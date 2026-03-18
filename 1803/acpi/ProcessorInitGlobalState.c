/*
 * XREFs of ProcessorInitGlobalState @ 0x1C009CE90
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C009C790 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 ProcessorInitGlobalState()
{
  SIZE_T v0; // rbx
  PVOID PoolWithTag; // rax
  SIZE_T v3; // rbx
  PVOID v4; // rax

  v0 = 8LL * KeQueryMaximumProcessorCountEx(0xFFFFu);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x49706341u);
  ProcessorByNtNumber = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v0);
  qword_1C0066568 = (__int64)&ProcessorGroupListHead;
  ProcessorGroupListHead = (__int64)&ProcessorGroupListHead;
  v3 = 8LL * KeQueryMaximumGroupCount();
  v4 = ExAllocatePoolWithTag(PagedPool, v3, 0x49706341u);
  ProcessorGroupByNumber = (__int64)v4;
  if ( !v4 )
  {
    ExFreePoolWithTag(ProcessorByNtNumber, 0);
    ProcessorByNtNumber = 0LL;
    return 3221225626LL;
  }
  memset(v4, 0, v3);
  return 0LL;
}
