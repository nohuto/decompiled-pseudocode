/*
 * XREFs of MiBuildPagedPool @ 0x14082F958
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F739C (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     MiIssueNoPtesBugcheck @ 0x14021A4D4 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405B471C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     InitializePagedPool @ 0x14082DD0C (InitializePagedPool.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  __int64 *v1; // rax
  char *AnyMultiplexedVm; // rax
  __int64 v3; // r8
  ULONG_PTR v4; // rdx
  __int64 result; // rax

  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
  {
    dword_140388090 = 0;
  }
  else if ( qword_14038B750 < 0x80000 )
  {
    if ( qword_14038B750 < 0x40000 )
      dword_140388090 = 8;
    else
      dword_140388090 *= 2;
  }
  else
  {
    dword_140388090 *= 8;
  }
  v0 = qword_140389AE0;
  v1 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v1, v0, 0x100000000000uLL) )
    return 0LL;
  qword_140389330 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  qword_140389358 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x108000000LL) )
    return 0LL;
  v4 = MiReservePtes((__int64)&qword_140389360, 0x20000uLL, v3);
  if ( !v4 )
    MiIssueNoPtesBugcheck(0x20000uLL);
  MiInitializeDynamicBitmap(&qword_140389320, (__int64)(v4 << 25) >> 16, qword_140389358, 19);
  qword_140389320 = 0LL;
  qword_140389318 = 0LL;
  qword_140389338 = qword_140389358;
  InitializePagedPool();
  result = 1LL;
  qword_140388080 = 7680LL;
  qword_140388088 = 15360LL;
  return result;
}
