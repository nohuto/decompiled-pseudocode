/*
 * XREFs of MiAllocatePagesForMdl @ 0x14007A5D8
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140077330 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x1401663B0 (MmAllocatePagesForMdl.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     MmAllocateNonCachedMemory @ 0x1406B4790 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     MiFindPagesForMdl @ 0x14007AE64 (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x14007B0D0 (MiObtainMdlCharges.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiRemoveMdlPages @ 0x1406B49B8 (MiRemoveMdlPages.c)
 */

void *__fastcall MiAllocatePagesForMdl(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int16 a7,
        int a8)
{
  unsigned int v9; // r12d
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // rax
  _DWORD *v15; // r13
  unsigned __int64 v16; // r15
  int PagesForMdl; // eax
  __int64 v18; // r8
  int v19; // ecx
  bool v20; // zf
  unsigned int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r10
  int v24; // eax
  void *result; // rax
  ULONG_PTR *v26; // r11
  int v27; // [rsp+50h] [rbp-38h]
  int v28; // [rsp+A8h] [rbp+20h]

  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  v9 = 0;
  v10 = a2 >> 12;
  v11 = a3 >> 12;
  if ( a3 >> 12 < qword_14036C290 )
  {
    v12 = v11 < *(_QWORD *)(a1 + 5576) || v10 ? a8 : a8 | 0x10000;
  }
  else
  {
    v11 = qword_14036C290;
    v12 = a8 | 0x10000;
    if ( v10 )
      v12 = a8;
  }
  v13 = a4 >> 12;
  if ( ((v13 - 1) & v13) != 0 )
    v13 = 0LL;
  v14 = MiObtainMdlCharges(a1, v10, v11, v13, a5, a6, v12);
  v15 = (_DWORD *)v14;
  if ( !v14 )
    return 0LL;
  v16 = (unsigned __int64)*(unsigned int *)(v14 + 40) >> 12;
  *(_DWORD *)(v14 + 40) = 0;
  v28 = 0;
  while ( 1 )
  {
    v27 = v15[10];
    PagesForMdl = MiFindPagesForMdl(a1, (_DWORD)v15, v12, a6, v16, v10, v11, v13, a7);
    v19 = v28;
    v20 = PagesForMdl == 1;
    v21 = v15[10];
    if ( v20 )
      v19 = 1;
    v28 = v19;
    v22 = (unsigned __int64)v21 >> 12;
    if ( v22 == v16 )
      break;
    if ( (v12 & 0x80u) == 0 )
      goto LABEL_31;
    if ( v27 == v21 )
    {
      if ( v9 > 3 || KeGetCurrentIrql() >= 2u || (v12 & 8) != 0 )
      {
LABEL_31:
        if ( (v12 & 4) != 0 )
          LOWORD(v12) = v12 | 1;
        break;
      }
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      ++v9;
    }
    else
    {
      v9 = 0;
    }
    v12 &= ~0x10000u;
  }
  v23 = v16 - v22;
  if ( v16 != v22 )
  {
    v26 = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(v16 - v22, 1LL, v18);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), v23);
    if ( (ULONG_PTR *)a1 == v26 )
      _InterlockedExchangeAdd64(&qword_14036D120, -(__int64)v23);
    MiReturnCommit(a1, v23);
  }
  v24 = 0;
  if ( (v12 & 1) == 0 )
    v24 = v28;
  result = (void *)MiInitializeMdlPages(v15, v24);
  if ( result )
  {
    if ( (v12 & 0x100) != 0 )
      return (void *)MiRemoveMdlPages(result);
  }
  return result;
}
