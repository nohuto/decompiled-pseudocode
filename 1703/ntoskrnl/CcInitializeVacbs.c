/*
 * XREFs of CcInitializeVacbs @ 0x1408191EC
 * Callers:
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 * Callees:
 *     CcBuildUpHighPriorityMappings @ 0x14015E4F4 (CcBuildUpHighPriorityMappings.c)
 *     CcAllocateInitializeVacbArray @ 0x14015E56C (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_QWORD *CcInitializeVacbs()
{
  PVOID PoolWithTag; // rax
  char *InitializeVacbArray; // rax
  char *v2; // rbx

  CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2800uLL, 0x61566343u);
  CcVacbArrays = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x34u, 0x90417uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  memset(PoolWithTag, 0, 0x2800uLL);
  CcMinimumFreeHighPriorityVacbs = 64;
  qword_14036B488 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  qword_14036B498 = (__int64)&CcVacbFreeHighPriorityList;
  CcVacbFreeHighPriorityList = (__int64)&CcVacbFreeHighPriorityList;
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v2 = InitializeVacbArray;
  if ( !InitializeVacbArray )
    KeBugCheckEx(0x34u, 0x90430uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  *((_DWORD *)InitializeVacbArray + 1) = 1;
  CcBuildUpHighPriorityMappings((__int64)InitializeVacbArray);
  return CcInsertVacbArray(v2);
}
