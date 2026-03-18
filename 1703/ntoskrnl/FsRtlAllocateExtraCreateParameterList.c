/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x140545270
 * Callers:
 *     PspCreateUserProcessEcp @ 0x140545044 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14057C1B0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  int v2; // ebx
  struct _ECP_LIST *PoolWithQuotaTag; // rax

  v2 = 0;
  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    PoolWithQuotaTag = (struct _ECP_LIST *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x6C655346u);
  }
  else
  {
    ++dword_14036F254;
    PoolWithQuotaTag = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside);
    if ( !PoolWithQuotaTag )
    {
      ++dword_14036F258;
      PoolWithQuotaTag = (struct _ECP_LIST *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14036F270)(
                                               (unsigned int)dword_14036F264,
                                               (unsigned int)dword_14036F26C,
                                               (unsigned int)dword_14036F268);
    }
    v2 = 4;
  }
  if ( !PoolWithQuotaTag )
    return -1073741670;
  PoolWithQuotaTag->EcpList.Blink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->EcpList.Flink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->Flags = v2 | 2;
  PoolWithQuotaTag->Signature = 1282433861;
  *EcpList = PoolWithQuotaTag;
  return 0;
}
