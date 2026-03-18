/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x1404F3FE0
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1404E0FBC (IopSymlinkAllocateAndAddECP.c)
 *     PspCreateUserProcessEcp @ 0x1404F3DB8 (PspCreateUserProcessEcp.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  struct _ECP_LIST *PoolWithQuotaTag; // rax
  int v4; // edx

  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    PoolWithQuotaTag = (struct _ECP_LIST *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x6C655346u);
    v4 = 2;
  }
  else
  {
    ++FsRtlEcpListLookaside.L.TotalAllocates;
    PoolWithQuotaTag = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside.L.ListHead);
    if ( !PoolWithQuotaTag )
    {
      ++FsRtlEcpListLookaside.L.AllocateMisses;
      PoolWithQuotaTag = (struct _ECP_LIST *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FsRtlEcpListLookaside.L.AllocateEx)(
                                               (unsigned int)FsRtlEcpListLookaside.L.Type,
                                               FsRtlEcpListLookaside.L.Size,
                                               FsRtlEcpListLookaside.L.Tag);
    }
    v4 = 6;
  }
  if ( !PoolWithQuotaTag )
    return -1073741670;
  PoolWithQuotaTag->EcpList.Blink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->EcpList.Flink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->Flags = v4;
  PoolWithQuotaTag->Signature = 1282433861;
  *EcpList = PoolWithQuotaTag;
  return 0;
}
