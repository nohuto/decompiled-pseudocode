/*
 * XREFs of MiAllocatePagesForMdl @ 0x1400B3544
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400B3440 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x14016D980 (MmAllocatePagesForMdl.c)
 *     MiPopulateCombineMdls @ 0x140558A04 (MiPopulateCombineMdls.c)
 *     MmAllocateNonCachedMemory @ 0x14074B6C0 (MmAllocateNonCachedMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140756FD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiInitializeMdlBatchPages @ 0x140051D48 (MiInitializeMdlBatchPages.c)
 *     MiInitializeMdlPages @ 0x1400B36CC (MiInitializeMdlPages.c)
 *     MiFindPagesForMdl @ 0x1400B38D4 (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400B3AB8 (MiObtainMdlCharges.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiRemoveMdlPages @ 0x14074B900 (MiRemoveMdlPages.c)
 */

__int64 __fastcall MiAllocatePagesForMdl(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int16 a7,
        int a8)
{
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // rdi
  int v16; // r9d
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  unsigned __int64 v21; // r12
  unsigned __int64 v23; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v25; // rsi
  unsigned int v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+58h] [rbp-30h]
  unsigned int v28; // [rsp+A8h] [rbp+20h]

  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  v9 = a2 >> 12;
  v10 = a3 >> 12;
  if ( a3 >> 12 < qword_1403CB780 )
  {
    v11 = v10 < *(_QWORD *)(a1 + 6856) || v9 ? a8 : a8 | 0x10000;
  }
  else
  {
    v10 = qword_1403CB780;
    v11 = a8 | 0x10000;
    if ( v9 )
      v11 = a8;
  }
  v12 = 0LL;
  v13 = a4 >> 12;
  if ( ((v13 - 1) & v13) == 0 )
    v12 = v13;
  v27 = v12;
  v14 = MiObtainMdlCharges(a1, v9, v10, v12, a5, a6, v11);
  v15 = (_DWORD *)v14;
  if ( !v14 )
    return 0LL;
  v16 = a6;
  v17 = (unsigned __int64)*(unsigned int *)(v14 + 40) >> 12;
  v18 = 0;
  v15[10] = 0;
  v28 = 0;
  while ( 1 )
  {
    v26 = v18;
    MiFindPagesForMdl(a1, (_DWORD)v15, v11, v16, v17, v9, v10, v27, a7);
    v18 = v15[10];
    v21 = (unsigned __int64)v18 >> 12;
    if ( v21 == v17 )
      goto LABEL_10;
    if ( (v11 & 0x80u) == 0 )
      break;
    if ( v26 != v18 )
    {
      v28 = 0;
      goto LABEL_27;
    }
    if ( v28 > 3 || KeGetCurrentIrql() >= 2u || (v11 & 8) != 0 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    ++v28;
    v18 = v15[10];
LABEL_27:
    v16 = a6;
    v11 &= ~0x10000u;
  }
  v23 = v17 - v21;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(v23, v19);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), v23);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1403CC658, -(__int64)v23);
  MiReturnCommit(a1, v23);
  if ( !v21 )
  {
LABEL_18:
    ExFreePoolWithTag(v15, 0);
    return 0LL;
  }
  if ( (v11 & 4) != 0 )
  {
    MiInitializeMdlBatchPages((__int64)v15, v11, a6, v20);
    MiInitializeMdlPages(v15, v11);
    MiFreePagesFromMdl((ULONG_PTR)v15);
    goto LABEL_18;
  }
  if ( v23 > 0x800 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v21 + 48, 0x69646D4Du);
    v25 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[10] = (_DWORD)v21 << 12;
      *((_WORD *)PoolWithTag + 5) = 0;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      PoolWithTag[11] = 0;
      *((_WORD *)PoolWithTag + 4) = 8 * ((((v21 << 12) + 4095) >> 12) + 6);
      memmove(PoolWithTag + 12, v15 + 12, 8 * v21);
      ExFreePoolWithTag(v15, 0);
      v15 = v25;
    }
  }
LABEL_10:
  MiInitializeMdlBatchPages((__int64)v15, v11, a6, v20);
  MiInitializeMdlPages(v15, v11);
  if ( (v11 & 0x100) != 0 )
    return MiRemoveMdlPages(v15);
  return (__int64)v15;
}
