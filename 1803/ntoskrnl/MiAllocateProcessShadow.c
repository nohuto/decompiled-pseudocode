/*
 * XREFs of MiAllocateProcessShadow @ 0x140512DBC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140650994 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x1400B3390 (MiMarkPfnTradable.c)
 *     KeMakeUserDirectoryTableBase @ 0x1400CA584 (KeMakeUserDirectoryTableBase.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  ULONG_PTR *ProcessPartition; // rbx
  ULONG_PTR v3; // rax
  ULONG_PTR v4; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0x1800000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  if ( (unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL) )
  {
    v3 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
    v4 = v3;
    if ( v3 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v3);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0);
      *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1544) = (__int64)(v4 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
  }
  return 3221225626LL;
}
