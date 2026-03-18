/*
 * XREFs of MiAllocateProcessShadow @ 0x14041D3DC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1405D1CE0 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14017C628 (KeMakeUserDirectoryTableBase.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  __int64 ProcessPartition; // rsi
  unsigned __int64 v3; // r8
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx
  __int64 TopLevelPage; // rax

  if ( (MiFlags & 0x1800000) != 0 )
  {
    ProcessPartition = MiGetProcessPartition(a1);
    if ( !(unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1LL) )
      return 3221225626LL;
    v5 = MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v3);
    v6 = v5;
    if ( !v5 )
    {
      MiReleaseNonPagedResources(ProcessPartition, 1uLL);
      return 3221225626LL;
    }
    TopLevelPage = MiAllocateTopLevelPage(a1, v5);
    *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
    *(_QWORD *)(a1 + 1544) = (__int64)(v6 << 25) >> 16;
  }
  return 0LL;
}
