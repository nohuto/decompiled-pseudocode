/*
 * XREFs of MiBuildPagedPool @ 0x14081450C
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiBuildDynamicRegion @ 0x14015A518 (MiBuildDynamicRegion.c)
 *     MiIssueNoPtesBugcheck @ 0x1402129DC (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14057EA30 (MiInitializeSystemWorkingSetList.c)
 *     InitializePagedPool @ 0x140814FA8 (InitializePagedPool.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v2; // r8
  ULONG_PTR v3; // rdx
  __int64 result; // rax

  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
  {
    dword_14036BD90 = 0;
  }
  else if ( qword_1403817D0 < 0x80000 )
  {
    if ( qword_1403817D0 < 0x40000 )
      dword_14036BD90 = 8;
    else
      dword_14036BD90 *= 2;
  }
  else
  {
    dword_14036BD90 *= 8;
  }
  v0 = qword_14036D810;
  if ( !(unsigned int)MiBuildDynamicRegion(&qword_14036C3A8, qword_14036D810, 0x100000000000uLL) )
    return 0LL;
  qword_14036D070 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  qword_14036D098 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x108000000LL) )
    return 0LL;
  v3 = MiReservePtes((__int64)&qword_14036D0A0, 0x20000uLL, v2);
  if ( !v3 )
    MiIssueNoPtesBugcheck(0x20000uLL);
  MiInitializeDynamicBitmap(&qword_14036D060, (__int64)(v3 << 25) >> 16, qword_14036D098, 19);
  qword_14036D060 = 0LL;
  qword_14036D058 = 0LL;
  qword_14036D078 = qword_14036D098;
  InitializePagedPool();
  result = 1LL;
  qword_14036BD80 = 7680LL;
  qword_14036BD88 = 15360LL;
  return result;
}
