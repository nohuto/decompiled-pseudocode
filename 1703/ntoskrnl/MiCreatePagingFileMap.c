/*
 * XREFs of MiCreatePagingFileMap @ 0x14054A5D0
 * Callers:
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiUpdatePageFileSectionList @ 0x140119284 (MiUpdatePageFileSectionList.c)
 *     MiUpdateControlAreaCommitCount @ 0x140119798 (MiUpdateControlAreaCommitCount.c)
 *     MiGetThreadPartition @ 0x14012BA50 (MiGetThreadPartition.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x1402113B0 (MiUpdateLargePageSectionPfn.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x14054AFA8 (MiInitializePrototypePtes.c)
 *     MiLogSectionCreate @ 0x1406B5200 (MiLogSectionCreate.c)
 *     MiAllocateLargeZeroPages @ 0x1406BE398 (MiAllocateLargeZeroPages.c)
 *     MiFreeLargeZeroPages @ 0x1406BEC28 (MiFreeLargeZeroPages.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  bool v8; // zf
  ULONG_PTR *ThreadPartition; // r15
  int v10; // ebp
  int v11; // r13d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  int v15; // esi
  unsigned __int16 *v16; // rbx
  unsigned __int16 *v17; // r14
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID v24; // r15
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rbx
  char *PoolWithTag; // rax
  volatile signed __int64 *v29; // rax
  volatile signed __int64 *v30; // r8
  char *v31; // r10
  __int16 v32; // dx
  unsigned __int64 v33; // rdx
  int v34; // r9d
  __int64 v35; // r11
  int v36; // eax
  __int16 v37; // ax
  __int64 v38; // rsi
  char *v39; // rbx
  char *v40; // r13
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rdx
  __int16 v43; // ax
  __int16 v44; // ax
  PVOID v45; // rax
  __int64 v46; // rcx
  volatile signed __int64 *v47; // r14
  int v48; // edi
  unsigned __int64 ValidPte; // rbx
  __int64 DemandZeroPte; // rsi
  __int64 v51; // rdi
  unsigned __int64 *v52; // r14
  int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // r15
  unsigned __int64 v56; // r12
  PVOID *v57; // rbx
  __int64 v58; // rdi
  unsigned __int64 *v59; // r12
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r10
  unsigned __int64 v63; // rbp
  __int64 v64; // rdx
  signed __int64 v65; // rax
  char *P; // [rsp+30h] [rbp-98h]
  __int64 v67; // [rsp+38h] [rbp-90h]
  __int64 v68; // [rsp+40h] [rbp-88h]
  __int64 v69; // [rsp+48h] [rbp-80h]
  volatile signed __int64 *v70; // [rsp+50h] [rbp-78h]
  unsigned __int64 v71; // [rsp+58h] [rbp-70h]
  __int64 v72; // [rsp+60h] [rbp-68h]
  __int64 v73; // [rsp+60h] [rbp-68h]
  _QWORD v74[4]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v76; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v77; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int64 v78; // [rsp+E8h] [rbp+20h]

  v74[0] = 0LL;
  v74[1] = 0LL;
  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x1000000) != 0 )
    return 3221225504LL;
  if ( v2 < 0 )
  {
    if ( (v2 & 0x8000000) == 0 )
      return 3221225716LL;
    if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 72)) )
      return 3221225569LL;
  }
  v4 = **(_QWORD **)(a1 + 152);
  if ( !v4 )
    return 3221225714LL;
  if ( v4 > 0xFFFFF000000LL )
    return 3221225536LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = (v4 + 4095) >> 12;
  v8 = (*(_DWORD *)a1 & 0x400000) == 0;
  v68 = 0LL;
  v77 = 0LL;
  v72 = (__int64)CurrentThread;
  if ( v8 )
    ThreadPartition = &MiSystemPartition;
  else
    ThreadPartition = (ULONG_PTR *)MiGetThreadPartition((__int64)CurrentThread);
  v10 = *(_DWORD *)(a1 + 16);
  v11 = v10 & 0x8000000;
  v67 = (__int64)ThreadPartition;
  if ( (v10 & 0x8000000) == 0 )
    goto LABEL_43;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)ThreadPartition, v7, 0LL) )
    return 3221225773LL;
  if ( (v10 & 0x80000) != 0 && (v7 & 0xF) != 0 )
  {
    v12 = v7;
    v13 = (__int64)ThreadPartition;
LABEL_21:
    MiReturnCommit(v13, v12);
    return 3221225714LL;
  }
  if ( v10 < 0 )
  {
    v12 = v7;
    v13 = (__int64)ThreadPartition;
    if ( (v7 & 0x1FF) != 0 )
      goto LABEL_21;
    if ( !(unsigned int)MiChargeResident(ThreadPartition, v7, 0LL) )
    {
LABEL_42:
      v22 = v7;
      v23 = (__int64)ThreadPartition;
      goto LABEL_110;
    }
    v14 = *(_DWORD *)(a1 + 172);
    v77 = v7;
    if ( v14 )
      v15 = v14 - 1;
    else
      v15 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23656);
    v16 = (unsigned __int16 *)((char *)qword_14036C1C0 + 2 * v15 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v17 = &v16[(unsigned __int16)KeNumberNodes];
    MiAllocateLargeZeroPages((_DWORD)ThreadPartition, (unsigned int)&v77, v15, *(_DWORD *)(a1 + 32), (__int64)v74);
    v18 = v77;
    if ( v77 )
    {
      while ( ++v16 != v17 )
      {
        *(_DWORD *)(a1 + 172) = *v16;
        MiAllocateLargeZeroPages((_DWORD)ThreadPartition, (unsigned int)&v77, v15, *(_DWORD *)(a1 + 32), (__int64)v74);
        v18 = v77;
        if ( !v77 )
          goto LABEL_31;
      }
      if ( v18 )
      {
        if ( v18 != v7 )
          MiFreeLargeZeroPages(ThreadPartition, v74);
        if ( ThreadPartition == &MiSystemPartition )
        {
          MiReturnResidentAvailable(v7);
          v22 = v7;
          v23 = (__int64)ThreadPartition;
          goto LABEL_110;
        }
        MiReturnPartitionResidentAvailable((__int64)ThreadPartition, v7);
        goto LABEL_42;
      }
    }
LABEL_31:
    v19 = (_QWORD *)v74[0];
    if ( v74[0] )
    {
      v20 = 0LL;
      do
      {
        v19 = (_QWORD *)*v19;
        ++v20;
      }
      while ( v19 );
      v68 = v20;
    }
    v21 = v7;
    v77 = v7;
    v6 = 0LL;
  }
  else
  {
LABEL_43:
    v21 = v77;
  }
  v24 = 0LL;
  if ( (v10 & 0x88000000) == 0x8000000 )
  {
    v25 = v7;
    v26 = 1LL;
  }
  else
  {
    v25 = (unsigned __int64)(((v10 >> 31) & 0x100000u) + 0x100000) >> 3;
    v26 = v7 / v25;
    v78 = v7 / v25;
    if ( !(v7 % v25) )
      goto LABEL_49;
    ++v26;
  }
  v78 = v26;
LABEL_49:
  v27 = 80 * v26;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v26 + 128, 0x61436D4Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_91;
  memset(PoolWithTag, 0, v27 + 128);
  v29 = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
  v70 = v29;
  v30 = v29;
  if ( !v29 )
    goto LABEL_85;
  v31 = P;
  *((_QWORD *)v29 + 9) = 0LL;
  v32 = (*((_WORD *)P + 30) ^ *(_WORD *)v67) & 0x3FF;
  *(_QWORD *)P = v29;
  *((_WORD *)P + 30) ^= v32;
  v33 = v78;
  *((_DWORD *)P + 24) = v78;
  *((_QWORD *)P + 2) = P + 8;
  *((_QWORD *)P + 1) = P + 8;
  *((_QWORD *)P + 14) = 1LL;
  *((_QWORD *)P + 3) = 1LL;
  *((_QWORD *)P + 6) = 1LL;
  if ( (v10 & 0x200000) != 0 )
    *((_DWORD *)P + 14) |= 0x40u;
  if ( (v10 & 0x4000000) != 0 )
    *((_DWORD *)P + 14) |= 0x1000u;
  v34 = v10 & 0x8000000;
  if ( v11 )
    *((_DWORD *)P + 14) |= 0x2000u;
  if ( (v10 & 0x80000) != 0 )
    *((_DWORD *)P + 14) |= 0x80000000;
  v35 = a1;
  v36 = *(_DWORD *)(a1 + 172);
  *((_QWORD *)P + 13) = 0LL;
  *((_DWORD *)P + 14) ^= (*((_DWORD *)P + 14) ^ (v36 << 20)) & 0x3F00000;
  *((_QWORD *)v30 + 1) = 0LL;
  *((_QWORD *)v30 + 2) = 0LL;
  *((_QWORD *)v30 + 4) = 0LL;
  *((_QWORD *)v30 + 6) = 0LL;
  *((_QWORD *)v30 + 7) = 0LL;
  *((_QWORD *)v30 + 8) = 0LL;
  *((_QWORD *)v30 + 5) = 0LL;
  *v30 = (volatile signed __int64)P;
  *((_QWORD *)v30 + 3) = v7 << 12;
  *((_DWORD *)v30 + 2) = v7;
  if ( (v10 & 0x10000000) != 0 )
  {
    v37 = 0x8000;
  }
  else
  {
    if ( (v10 & 0x40000000) == 0 )
      goto LABEL_64;
    v37 = 0x4000;
  }
  *((_WORD *)v30 + 6) |= v37;
LABEL_64:
  v38 = 0LL;
  *((_BYTE *)v30 + 14) ^= (*((_BYTE *)v30 + 14) ^ (2 * *(_BYTE *)(a1 + 32))) & 0x3E;
  *((_DWORD *)v30 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v69 = (__int64)(P + 128);
  v39 = P + 128;
  v40 = P + 128;
  v41 = v7;
  if ( !v33 )
  {
LABEL_71:
    v47 = v70;
    *((_QWORD *)v40 + 2) = 0LL;
    *((_QWORD *)v70 + 8) = v24;
    if ( v34 )
    {
      --*(_WORD *)(v72 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v70 + 5), 0LL);
      MiUpdateControlAreaCommitCount((__int64)P, v7);
      if ( (_InterlockedExchangeAdd64(v70 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v70 + 5);
      KeAbPostRelease((ULONG_PTR)(v70 + 5));
      KiLeaveGuardedRegionUnsafe(v72);
      if ( v10 >= 0 )
      {
        MiInitializePrototypePtes(*((_QWORD *)P + 17), v7, P + 128, 1LL);
        MiUpdatePageFileSectionList(v69, 1);
      }
      else
      {
        *((_WORD *)v70 + 6) |= 0x1000u;
        v48 = *(_DWORD *)(a1 + 32);
        ValidPte = MiMakeValidPte(0LL, -1LL, v48 | 0x80000000);
        DemandZeroPte = MiMakeDemandZeroPte(v48);
        if ( v78 )
        {
          v51 = (__int64)(P + 128);
          do
          {
            v52 = *(unsigned __int64 **)(v51 + 8);
            v53 = *(_DWORD *)(v51 + 48) & 0x3FFFFFFF | 0x40000000;
            *(_DWORD *)(v51 + 48) = v53;
            if ( v68 )
            {
              --v68;
              *(_DWORD *)(v51 + 48) = v53 & 0x3FFFFFFF | 0x80000000;
            }
            v76 = 0LL;
            if ( *(_DWORD *)(v51 + 44) )
            {
              do
              {
                v54 = 0LL;
                while ( 1 )
                {
                  v55 = (_QWORD *)v74[v54];
                  if ( v55 )
                    break;
                  if ( (unsigned __int64)++v54 >= 2 )
                    goto LABEL_96;
                }
                v74[v54] = *v55;
LABEL_96:
                v73 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex((__int64)v55)];
                v59 = &v52[v73];
                v63 = ((unsigned __int64)((unsigned __int128)(((__int64)v55 - v60) * (__int128)v61) >> 64) >> 63)
                    + ((__int64)((unsigned __int128)(((__int64)v55 - v60) * (__int128)v61) >> 64) >> 3);
                memset(v52, 0, 8 * (v62 & v73));
                do
                {
                  ValidPte ^= (ValidPte ^ (v63 << 12)) & 0xFFFFFFFFF000LL;
                  *v52 = ValidPte;
                  if ( MiPteInShadowRange((unsigned __int64)v52) )
                    MiWritePteShadow();
                  MiUpdateLargePageSectionPfn((__int64)v55, (__int64)v52, DemandZeroPte);
                  ++v63;
                  v55 += 6;
                  ++v52;
                }
                while ( v52 < v59 );
                v51 = v69;
                v76 += v73;
              }
              while ( v76 != *(_DWORD *)(v69 + 44) );
            }
            MiUpdatePageFileSectionList(v51, 1);
            v51 += 80LL;
            v8 = v78-- == 1;
            v69 = v51;
          }
          while ( !v8 );
          v47 = v70;
        }
      }
    }
    v64 = a1;
    *(_QWORD *)(a1 + 64) = P;
    _InterlockedIncrement64((volatile signed __int64 *)(v67 + 1360));
    v65 = _InterlockedCompareExchange64(v47 + 3, -1LL, -1LL);
    *(_DWORD *)v64 |= 4u;
    *(_QWORD *)(v64 + 128) = v65;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
      MiLogSectionCreate(P, 1LL);
    return 0LL;
  }
  while ( 1 )
  {
    v42 = v41;
    *(_QWORD *)v39 = v31;
    v43 = 2 * *(_WORD *)(v35 + 32);
    *((_DWORD *)v39 + 9) = v38;
    v40 = v39;
    *((_WORD *)v39 + 16) ^= (*((_WORD *)v39 + 16) ^ v43) & 0x3E;
    v44 = *((_WORD *)v39 + 16);
    if ( v41 > v25 )
      v42 = v25;
    *((_DWORD *)v39 + 11) = v42;
    v41 -= v42;
    *((_WORD *)v39 + 16) = v44 & 0x3F | (WORD2(v38) << 6);
    v71 = v41;
    if ( !v34 )
      goto LABEL_70;
    v45 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v42, 0x74536D4Du);
    v24 = v45;
    if ( !v45 )
      break;
    v41 = v71;
    v34 = v10 & 0x8000000;
    v31 = P;
    v35 = a1;
    *((_QWORD *)v39 + 1) = v45;
LABEL_70:
    v46 = *((unsigned int *)v39 + 11);
    ++v6;
    v39 += 80;
    v38 += v46;
    *((_QWORD *)v40 + 2) = v39;
    if ( v6 >= v78 )
      goto LABEL_71;
  }
  v21 = v77;
  v6 = 0LL;
  v11 = v10 & 0x8000000;
LABEL_85:
  v56 = v78;
  if ( v78 )
  {
    v57 = (PVOID *)(P + 136);
    do
    {
      if ( !*v57 )
        break;
      ExFreePoolWithTag(*v57, 0);
      v57 += 10;
      ++v6;
    }
    while ( v6 < v56 );
  }
  ExFreePoolWithTag(P, 0);
  if ( v70 )
    ExFreePoolWithTag((PVOID)v70, 0);
LABEL_91:
  if ( v11 )
  {
    if ( v21 )
    {
      v58 = v67;
      MiFreeLargeZeroPages(v67, v74);
      if ( (ULONG_PTR *)v67 == &MiSystemPartition )
        MiReturnResidentAvailable(v21);
      else
        MiReturnPartitionResidentAvailable(v67, v21);
    }
    else
    {
      v21 = v7;
      v58 = v67;
    }
    v22 = v21;
    v23 = v58;
LABEL_110:
    MiReturnCommit(v23, v22);
  }
  return 3221225626LL;
}
