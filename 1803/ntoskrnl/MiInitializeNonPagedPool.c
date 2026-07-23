/*
 * XREFs of MiInitializeNonPagedPool @ 0x14089CAE8
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140170128 (MiInitializeNonPagedPoolThresholds.c)
 *     MiAddExpansionNonPagedPool @ 0x14017021C (MiAddExpansionNonPagedPool.c)
 *     MiBuildDynamicRegion @ 0x14017677C (MiBuildDynamicRegion.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14060B070 (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiInitializeNonPagedPool()
{
  char *AnyMultiplexedVm; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  unsigned int *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // rsi
  PSLIST_HEADER v17; // rbx
  ULONG_PTR v18; // rbp
  __int64 v19; // rdi
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rdx
  __int64 v24; // r15
  ULONG_PTR v25; // rbp
  _SLIST_HEADER *v26; // r14
  _SLIST_HEADER *v27; // r12
  unsigned __int64 v28; // rbx
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v33; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  PSLIST_HEADER v35; // [rsp+30h] [rbp-88h]
  unsigned __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+48h] [rbp-70h]
  __int64 v38; // [rsp+50h] [rbp-68h]
  unsigned __int64 v39; // [rsp+58h] [rbp-60h]
  unsigned __int64 v40; // [rsp+60h] [rbp-58h]
  __int64 v41; // [rsp+C0h] [rbp+8h] BYREF
  ULONG_PTR v42; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v43; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v44; // [rsp+D8h] [rbp+20h]

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 7, 0LL) )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v4 = (v3 | (unsigned int)ExGenRandom(0)) ^ v2;
  if ( !v4 )
    v4 = 1LL;
  qword_1403CC500 = v4;
  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
    goto LABEL_12;
  dword_1403CB108[0] = 4;
  if ( qword_1403CFA10 >= 0x80000 )
  {
    v5 = 32;
LABEL_9:
    dword_1403CB108[0] = v5;
    goto LABEL_10;
  }
  if ( qword_1403CFA10 >= 0x40000 )
  {
    v5 = 8;
    goto LABEL_9;
  }
LABEL_10:
  v6 = (unsigned int *)&unk_1403CB10C;
  v7 = 2LL;
  do
  {
    *v6++ = (unsigned int)dword_1403CB108[0] >> 1;
    --v7;
  }
  while ( v7 );
LABEL_12:
  v8 = MmPfnDatabase + (MxPfnAllocation << 12);
  v36 = v8;
  v9 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  v39 = v9;
  qword_1403CC5D0 = 0x100000000LL;
  v33 = qword_1403CD090[0];
  v10 = (0x200000 - v9) & -(__int64)(v9 != 0);
  v37 = v10;
  v11 = 0x800000uLL / (unsigned __int16)KeNumberNodes;
  v44 = v11;
  v12 = ((v11 + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v34 = v11 << 9;
  v13 = (((v11 << 9) + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v42 = MiReservePtes((__int64)&qword_1403CC5E0, ((unsigned __int16)KeNumberNodes * (v13 + 2 * v12)) >> 12);
  if ( !v42 )
    return 0LL;
  v14 = 0;
  if ( KeNumberNodes )
  {
    v15 = 8 * (v13 >> 12);
    v38 = v15;
    v16 = 8 * (v12 >> 12);
    v40 = v11 << 21;
    do
    {
      v17 = qword_1403CB6A8;
      v18 = v42;
      v19 = v14;
      v20 = 25LL * v14;
      v21 = v33 + ((v34 * v14) << 12);
      v22 = v14 + 1;
      LODWORD(v41) = v22;
      v23 = (__int64)(v42 << 25) >> 16;
      v43 = v20 * 16;
      v35 = qword_1403CB6A8;
      qword_1403CB6A8[v20 + 20].Alignment = v21;
      v17[v20 + 20].Region = v33 + ((v34 * v22) << 12);
      MiInitializeDynamicBitmap(&v17[v20 + 23].Alignment, v23, v34, 11);
      v24 = v44;
      v25 = v15 + v18;
      v42 = 2LL;
      v26 = &v17[v20 + 24];
      v27 = &v17[v20 + 21];
      v28 = v43;
      do
      {
        MiInitializeDynamicBitmap(v27, (__int64)(v25 << 25) >> 16, v24, 3);
        v25 += v16;
        *(unsigned __int64 *)((char *)&v35[11].Alignment + v28) = v27->Alignment;
        v27->Alignment = 8LL;
        ++v27;
        v26->Alignment = 8LL;
        v26 = (_SLIST_HEADER *)((char *)v26 + 8);
        --v42;
      }
      while ( v42 );
      v8 = v36;
      v15 = v38;
      v9 = v39;
      v42 = v25;
      v10 = v37;
      if ( !(unsigned int)MiBuildDynamicRegion(
                            (__int64 *)((char *)&qword_1403CB6A8[11].Region + v43),
                            v33 + ((v44 * v19) << 21),
                            v40) )
        return 0LL;
      v14 = v41;
    }
    while ( (unsigned int)v41 < (unsigned __int16)KeNumberNodes );
  }
  if ( v10 )
  {
    v41 = MI_READ_PTE_LOCK_FREE(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v29 = v10 & -(__int64)((v41 & 0x80u) != 0LL);
  }
  else
  {
    v41 = 0LL;
    v29 = 0LL;
  }
  if ( v29 )
  {
    v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41);
    MiAddExpansionNonPagedPool((v9 >> 12) + ((v30 >> 12) & 0xFFFFFFFFFLL), v31 >> 12);
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
