/*
 * XREFs of MiAllocatePagesForMdl @ 0x1400CB9E8
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x14015A4A0 (MmAllocatePagesForMdl.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     MmAllocateNonCachedMemory @ 0x1406E0780 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406EDB48 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiInitializeMdlPages @ 0x1400CA600 (MiInitializeMdlPages.c)
 *     MiFindPagesForMdl @ 0x1400CBBA0 (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400CBE04 (MiObtainMdlCharges.c)
 *     MiRemoveMdlPages @ 0x1406E09D0 (MiRemoveMdlPages.c)
 */

char *__fastcall MiAllocatePagesForMdl(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int16 a7,
        int a8)
{
  unsigned int v9; // r13d
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  int PagesForMdl; // eax
  int v17; // ecx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r10
  int v21; // eax
  char *result; // rax
  ULONG_PTR *v23; // r11
  int v24; // [rsp+50h] [rbp-38h]
  char *P; // [rsp+58h] [rbp-30h]
  int v26; // [rsp+A8h] [rbp+20h]

  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  v9 = 0;
  v10 = a2 >> 12;
  v11 = a3 >> 12;
  if ( a3 >> 12 < qword_1403885E0 )
  {
    v12 = v11 < *(_QWORD *)(a1 + 5768) || v10 ? a8 : a8 | 0x10000;
  }
  else
  {
    v11 = qword_1403885E0;
    v12 = a8 | 0x10000;
    if ( v10 )
      v12 = a8;
  }
  v13 = a4 >> 12;
  if ( ((v13 - 1) & v13) != 0 )
    v13 = 0LL;
  v14 = MiObtainMdlCharges(a1, v10, v11, v13, a5, a6, v12);
  P = (char *)v14;
  if ( !v14 )
    return 0LL;
  v15 = (unsigned __int64)*(unsigned int *)(v14 + 40) >> 12;
  *(_DWORD *)(v14 + 40) = 0;
  v26 = 0;
  while ( 1 )
  {
    v24 = *(_DWORD *)(v14 + 40);
    PagesForMdl = MiFindPagesForMdl(a1, v14, v12, a6, v15, v10, v11, v13, a7);
    v17 = v26;
    v18 = PagesForMdl == 1;
    v14 = (__int64)P;
    if ( v18 )
      v17 = 1;
    v26 = v17;
    v19 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
    if ( v19 == v15 )
      break;
    if ( (v12 & 0x80u) == 0 )
      goto LABEL_30;
    if ( v24 == *((_DWORD *)P + 10) )
    {
      if ( v9 > 3 || KeGetCurrentIrql() >= 2u || (v12 & 8) != 0 )
      {
LABEL_30:
        if ( (v12 & 4) != 0 )
          v12 |= 1u;
        break;
      }
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      v14 = (__int64)P;
      ++v9;
      v12 &= ~0x10000u;
    }
    else
    {
      v9 = 0;
      v12 &= ~0x10000u;
    }
  }
  v20 = v15 - v19;
  if ( v15 != v19 )
  {
    v23 = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(v15 - v19);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), v20);
    if ( (ULONG_PTR *)a1 == v23 )
      _InterlockedExchangeAdd64(&qword_1403893E0, -(__int64)v20);
    MiReturnCommit(a1, v20);
  }
  v21 = 0;
  if ( (v12 & 1) == 0 )
    v21 = v26;
  result = MiInitializeMdlPages(P, v12, a6, v15, v21);
  if ( result )
  {
    if ( (v12 & 0x100) != 0 )
      return (char *)MiRemoveMdlPages(result);
  }
  return result;
}
