/*
 * XREFs of FsRtlAllocateExtraCreateParameter @ 0x14053B130
 * Callers:
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140492980 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     PspCreateUserProcessEcp @ 0x14053AFC8 (PspCreateUserProcessEcp.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406B8EE0 (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameter(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        ULONG PoolTag,
        PVOID *EcpContext)
{
  ULONG v6; // ebx
  int v9; // esi
  POOL_TYPE v10; // ecx
  char *PoolWithQuotaTag; // rax
  GUID v12; // xmm0

  v6 = SizeOfContext + 72;
  v9 = 2;
  *EcpContext = 0LL;
  if ( SizeOfContext >= 0xFFFFFFB8 )
    return -1073741675;
  if ( (Flags & 2) != 0 )
  {
    v10 = NonPagedPoolNx;
    v9 = 66;
  }
  else
  {
    v10 = PagedPool;
  }
  if ( (Flags & 1) != 0 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v10 | 8), v6, PoolTag);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(v10, v6, PoolTag);
  if ( !PoolWithQuotaTag )
    return -1073741670;
  *(_QWORD *)PoolWithQuotaTag = 1215324997LL;
  *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
  v12 = *EcpType;
  *((_QWORD *)PoolWithQuotaTag + 5) = CleanupCallback;
  *((_DWORD *)PoolWithQuotaTag + 12) = v9;
  *(GUID *)(PoolWithQuotaTag + 24) = v12;
  *((_DWORD *)PoolWithQuotaTag + 13) = v6;
  *((_QWORD *)PoolWithQuotaTag + 7) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 8) = 0LL;
  *EcpContext = PoolWithQuotaTag + 72;
  return 0;
}
