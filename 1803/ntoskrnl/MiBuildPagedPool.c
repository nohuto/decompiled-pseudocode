/*
 * XREFs of MiBuildPagedPool @ 0x1408AC498
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x140049920 (MiSystemVaToDynamicBitmap.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiBuildDynamicRegion @ 0x14017677C (MiBuildDynamicRegion.c)
 *     MiIssueNoPtesBugcheck @ 0x140256A90 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14060B070 (MiInitializeSystemWorkingSetList.c)
 *     InitializePagedPool @ 0x1408ACF98 (InitializePagedPool.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  __int64 *v1; // rax
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v3; // rdx
  __int64 result; // rax

  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
  {
    dword_1403CB190 = 0;
  }
  else if ( qword_1403CFA10 < 0x80000 )
  {
    if ( qword_1403CFA10 < 0x40000 )
      dword_1403CB190 = 8;
    else
      dword_1403CB190 *= 2;
  }
  else
  {
    dword_1403CB190 *= 8;
  }
  v0 = qword_1403CD0A0;
  v1 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v1, v0, 0x100000000000uLL) )
    return 0LL;
  qword_1403CC5B0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  qword_1403CC5D8 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x108000000LL) )
    return 0LL;
  v3 = MiReservePtes((__int64)&qword_1403CC5E0, 0x20000u);
  if ( !v3 )
    MiIssueNoPtesBugcheck(0x20000uLL);
  MiInitializeDynamicBitmap(&qword_1403CC5A0, (__int64)(v3 << 25) >> 16, qword_1403CC5D8, 11);
  qword_1403CC5A0 = 0LL;
  BugCheckParameter2 = 0LL;
  qword_1403CC5B8 = qword_1403CC5D8;
  InitializePagedPool();
  result = 1LL;
  qword_1403CB180 = 7680LL;
  qword_1403CB188 = 15360LL;
  return result;
}
