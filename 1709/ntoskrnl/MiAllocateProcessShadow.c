/*
 * XREFs of MiAllocateProcessShadow @ 0x14043CF0C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1405EC234 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiMarkPfnTradable @ 0x1400ADA78 (MiMarkPfnTradable.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1400CF9DC (MiAcquireNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14017BD48 (KeMakeUserDirectoryTableBase.c)
 *     MiAllocateTopLevelPage @ 0x14043CD94 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  ULONG_PTR *ProcessPartition; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0x1800000) != 0 )
  {
    ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
    if ( !(unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, v3, v4) )
      return 3221225626LL;
    v7 = MiReservePtes((__int64)&qword_140389360, 1uLL, v5);
    v8 = v7;
    if ( !v7 )
    {
      MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
      return 3221225626LL;
    }
    TopLevelPage = MiAllocateTopLevelPage(a1, v7);
    MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0);
    *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
    *(_QWORD *)(a1 + 1544) = (__int64)(v8 << 25) >> 16;
  }
  return 0LL;
}
