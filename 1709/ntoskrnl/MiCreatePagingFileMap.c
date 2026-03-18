/*
 * XREFs of MiCreatePagingFileMap @ 0x14048D708
 * Callers:
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 * Callees:
 *     MiUpdatePageFileSectionList @ 0x14001F824 (MiUpdatePageFileSectionList.c)
 *     MiUpdateControlAreaCommitCount @ 0x14001FCD0 (MiUpdateControlAreaCommitCount.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiGetPfnLink @ 0x14012FE20 (MiGetPfnLink.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x140218C4C (MiUpdateLargePageSectionPfn.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x14048DF98 (MiInitializePrototypePtes.c)
 *     MiLogSectionCreate @ 0x1406E1368 (MiLogSectionCreate.c)
 *     MiAllocateLargeZeroPages @ 0x1406EB7E8 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  int v5; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR **v10; // r15
  unsigned __int64 v11; // rdi
  ULONG_PTR *v12; // r15
  int v13; // ebx
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // r8d
  unsigned __int16 *v17; // rsi
  unsigned __int16 *v18; // r14
  unsigned __int64 v19; // rax
  _QWORD *PfnLink; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  PVOID *PoolWithTag; // rax
  PVOID *v24; // r14
  volatile signed __int64 *v25; // rax
  volatile signed __int64 *v26; // r12
  __int16 v27; // dx
  int v28; // eax
  __int16 v29; // ax
  char v30; // al
  __int64 v31; // r10
  char v32; // al
  unsigned __int64 v33; // r9
  PVOID **v34; // rdx
  PVOID **v35; // r8
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r11
  __int16 v38; // ax
  __int16 v39; // ax
  PVOID v40; // rax
  int v41; // edi
  unsigned __int64 ValidPte; // rbx
  __int64 DemandZeroPte; // rsi
  unsigned __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // r15
  unsigned __int64 *v47; // r13
  int v48; // eax
  __int64 v49; // rdx
  _QWORD *v50; // r10
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r10
  __int64 v54; // rdx
  unsigned __int64 *v55; // rdi
  signed __int64 v56; // rax
  unsigned __int64 v57; // r13
  PVOID *v58; // rbx
  __int64 v59; // [rsp+30h] [rbp-79h]
  __int64 v60; // [rsp+30h] [rbp-79h]
  unsigned __int64 v61; // [rsp+38h] [rbp-71h]
  __int64 v62; // [rsp+40h] [rbp-69h]
  __int64 v63; // [rsp+40h] [rbp-69h]
  unsigned __int64 v64; // [rsp+48h] [rbp-61h]
  PVOID **v65; // [rsp+50h] [rbp-59h]
  _QWORD *v66[3]; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v67; // [rsp+70h] [rbp-39h]
  __int64 v68; // [rsp+78h] [rbp-31h]
  PVOID **v69; // [rsp+80h] [rbp-29h]
  unsigned __int64 v70; // [rsp+88h] [rbp-21h]
  PVOID v71; // [rsp+90h] [rbp-19h]
  _QWORD *v72; // [rsp+98h] [rbp-11h]
  ULONG_PTR *v73; // [rsp+A0h] [rbp-9h]
  PVOID *v74; // [rsp+A8h] [rbp-1h]
  volatile signed __int64 *v75; // [rsp+B0h] [rbp+7h]
  int v77; // [rsp+118h] [rbp+6Fh]
  __int64 v78; // [rsp+118h] [rbp+6Fh]
  _QWORD *v79; // [rsp+120h] [rbp+77h]
  unsigned __int64 v80; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = a1;
  memset(v66, 0, sizeof(v66));
  v5 = *(_DWORD *)(a1 + 16);
  if ( (v5 & 0x1000000) != 0 )
    return 3221225504LL;
  if ( v5 < 0 )
  {
    if ( (v5 & 0x8000000) == 0 )
      return 3221225716LL;
    if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 72)) )
      return 3221225569LL;
  }
  v7 = **(_QWORD **)(v4 + 152);
  if ( !v7 )
    return 3221225714LL;
  if ( v7 > 0xFFFFF000000LL )
    return 3221225536LL;
  v8 = 0LL;
  v80 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = *(ULONG_PTR ***)(v4 + 176);
  v11 = (v7 + 4095) >> 12;
  v59 = 0LL;
  v62 = (__int64)CurrentThread;
  if ( v10 )
    v12 = *v10;
  else
    v12 = &MiSystemPartition;
  v13 = *(_DWORD *)(v4 + 16);
  v73 = v12;
  v77 = v13 & 0x8000000;
  if ( (v13 & 0x8000000) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)v12, v11, 0LL, a4) )
      return 3221225773LL;
    if ( (v13 & 0x80000) != 0 && (v11 & 0xF) != 0 )
    {
      MiReturnCommit((__int64)v12, v11);
      return 3221225714LL;
    }
    if ( v13 < 0 )
    {
      if ( (v11 & 0x1FF) != 0 )
      {
        v14 = -1073741582;
LABEL_38:
        MiReturnCommit((__int64)v12, v11);
        return v14;
      }
      if ( !(unsigned int)MiChargeResident(v12, v11) )
      {
LABEL_37:
        v14 = -1073741670;
        goto LABEL_38;
      }
      v15 = *(_DWORD *)(v4 + 172);
      v80 = v11;
      if ( v15 )
        v16 = v15 - 1;
      else
        v16 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23572);
      v17 = (unsigned __int16 *)((char *)qword_140388508 + 2 * v16 * (unsigned int)(unsigned __int16)KeNumberNodes);
      v18 = &v17[(unsigned __int16)KeNumberNodes];
      MiAllocateLargeZeroPages((_DWORD)v12, (unsigned int)&v80, v16, *(_DWORD *)(v4 + 32), (__int64)v66, 0);
      v19 = v80;
      if ( v80 )
      {
        do
        {
          if ( ++v17 == v18 )
            break;
          MiAllocateLargeZeroPages((_DWORD)v12, (unsigned int)&v80, *v17, *(_DWORD *)(v4 + 32), (__int64)v66, 0);
          v19 = v80;
        }
        while ( v80 );
        if ( v19 )
        {
          if ( v19 != v11 )
            MiFreeLargeZeroPages((__int64)v12, v66);
          if ( v12 == &MiSystemPartition )
            MiReturnResidentAvailable(v11);
          else
            MiReturnPartitionResidentAvailable((__int64)v12, v11);
          goto LABEL_37;
        }
      }
      PfnLink = v66[0];
      if ( v66[0] )
      {
        do
        {
          ++v8;
          PfnLink = (_QWORD *)MiGetPfnLink((__int64)PfnLink);
        }
        while ( PfnLink );
        v59 = v8;
      }
      v80 = v11;
    }
  }
  v71 = 0LL;
  if ( (v13 & 0x88000000) == 0x8000000 )
  {
    v67 = v11;
    v21 = 1LL;
  }
  else
  {
    v22 = (unsigned __int64)(((v13 >> 31) & 0x100000u) + 0x100000) >> 3;
    v67 = v22;
    v61 = v11 / v22;
    v21 = v11 / v22;
    if ( !(v11 % v22) )
      goto LABEL_48;
    ++v21;
  }
  v61 = v21;
LABEL_48:
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v21 + 128, 0x61436D4Du);
  v74 = PoolWithTag;
  v24 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_103:
    if ( v77 )
    {
      if ( v80 )
      {
        MiFreeLargeZeroPages((__int64)v12, v66);
        if ( v12 == &MiSystemPartition )
          MiReturnResidentAvailable(v80);
        else
          MiReturnPartitionResidentAvailable((__int64)v12, v80);
        v11 = v80;
      }
      MiReturnCommit((__int64)v12, v11);
    }
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 80 * v21 + 128);
  v25 = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
  v75 = v25;
  v26 = v25;
  if ( !v25 )
  {
LABEL_97:
    v57 = 0LL;
    if ( v21 )
    {
      v58 = v24 + 17;
      do
      {
        if ( !*v58 )
          break;
        ExFreePoolWithTag(*v58, 0);
        v58 += 10;
        ++v57;
      }
      while ( v57 < v21 );
    }
    ExFreePoolWithTag(v24, 0);
    if ( v26 )
      ExFreePoolWithTag((PVOID)v26, 0);
    goto LABEL_103;
  }
  *((_QWORD *)v25 + 9) = 0LL;
  v27 = (*((_WORD *)v24 + 30) ^ *(_WORD *)v12) & 0x3FF;
  *((_DWORD *)v24 + 24) = v21;
  *((_WORD *)v24 + 30) ^= v27;
  *v24 = (PVOID)v25;
  v24[2] = v24 + 1;
  v24[1] = v24 + 1;
  v24[14] = (PVOID)1;
  v24[3] = (PVOID)1;
  v24[6] = (PVOID)1;
  if ( (v13 & 0x200000) != 0 )
    *((_DWORD *)v24 + 14) |= 0x40u;
  if ( (v13 & 0x4000000) != 0 )
    *((_DWORD *)v24 + 14) |= 0x1000u;
  if ( v77 )
    *((_DWORD *)v24 + 14) |= 0x2000u;
  if ( (v13 & 0x80000) != 0 )
    *((_DWORD *)v24 + 14) |= 0x80000000;
  v28 = *(_DWORD *)(v4 + 172);
  v24[13] = 0LL;
  *((_DWORD *)v24 + 14) ^= (*((_DWORD *)v24 + 14) ^ (v28 << 20)) & 0x3F00000;
  memset((void *)v26, 0, 0x48uLL);
  *((_QWORD *)v26 + 5) = 0LL;
  *v26 = (volatile signed __int64)v24;
  *((_QWORD *)v26 + 3) = v11 << 12;
  *((_DWORD *)v26 + 2) = v11;
  if ( (v13 & 0x10000000) != 0 )
  {
    v29 = 0x8000;
LABEL_62:
    *((_WORD *)v26 + 6) |= v29;
    goto LABEL_63;
  }
  if ( (v13 & 0x40000000) != 0 )
  {
    v29 = 0x4000;
    goto LABEL_62;
  }
LABEL_63:
  v30 = 2 * *(_BYTE *)(v4 + 32);
  v72 = v24 + 16;
  v31 = 0LL;
  v32 = (*((_BYTE *)v26 + 14) ^ v30) & 0x3E;
  v68 = 0LL;
  *((_BYTE *)v26 + 14) ^= v32;
  v33 = 0LL;
  v34 = (PVOID **)(v24 + 16);
  v69 = (PVOID **)(v24 + 16);
  v35 = (PVOID **)(v24 + 16);
  v70 = 0LL;
  v36 = v11;
  v64 = v11;
  for ( *((_DWORD *)v26 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v33 < v21;
        v35[2] = (PVOID *)v34 )
  {
    v37 = v36;
    *v34 = v24;
    v35 = v34;
    v65 = v34;
    v38 = (*((_WORD *)v34 + 16) ^ (2 * *(_WORD *)(v4 + 32))) & 0x3E;
    *((_DWORD *)v34 + 9) = v31;
    *((_WORD *)v34 + 16) ^= v38;
    v39 = *((_WORD *)v34 + 16);
    if ( v36 > v67 )
      v37 = v67;
    v64 -= v37;
    *((_DWORD *)v34 + 11) = v37;
    *((_WORD *)v34 + 16) = v39 & 0x3F | (WORD2(v31) << 6);
    if ( v77 )
    {
      v40 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v37, 0x74536D4Du);
      v71 = v40;
      if ( !v40 )
        goto LABEL_97;
      v34 = v69;
      v35 = v65;
      v33 = v70;
      v31 = v68;
      v69[1] = (PVOID *)v40;
    }
    ++v33;
    v31 += *((unsigned int *)v34 + 11);
    v70 = v33;
    v36 = v64;
    v34 += 10;
    v68 = v31;
    v69 = v34;
  }
  v35[2] = 0LL;
  *((_QWORD *)v26 + 8) = v71;
  if ( v77 )
  {
    --*(_WORD *)(v62 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v26 + 5), 0LL);
    MiUpdateControlAreaCommitCount((__int64)v24, v11);
    if ( (_InterlockedExchangeAdd64(v26 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v26 + 5);
    KeAbPostRelease((ULONG_PTR)(v26 + 5));
    KiLeaveGuardedRegionUnsafe(v62);
    if ( v13 >= 0 )
    {
      MiInitializePrototypePtes(v24[17], v11, v24 + 16, 1LL);
      MiUpdatePageFileSectionList((__int64)(v24 + 16), 1);
    }
    else
    {
      *((_WORD *)v26 + 6) |= 0x1000u;
      v41 = *(_DWORD *)(v4 + 32);
      ValidPte = MiMakeValidPte(0LL, -1LL, v41 | 0x80000000);
      DemandZeroPte = MiMakeDemandZeroPte(v41);
      if ( v61 )
      {
        v44 = v61;
        v45 = (__int64)(v24 + 16);
        v46 = v59;
        do
        {
          v47 = *(unsigned __int64 **)(v45 + 8);
          v48 = *(_DWORD *)(v45 + 48) & 0x3FFFFFFF | 0x40000000;
          *(_DWORD *)(v45 + 48) = v48;
          if ( v46 )
          {
            --v46;
            *(_DWORD *)(v45 + 48) = v48 & 0x3FFFFFFF | 0x80000000;
          }
          v60 = 0LL;
          if ( *(_DWORD *)(v45 + 44) )
          {
            do
            {
              v49 = 0LL;
              while ( 1 )
              {
                v50 = v66[v49];
                v79 = v50;
                if ( v50 )
                  break;
                if ( (unsigned __int64)++v49 >= 3 )
                  goto LABEL_84;
              }
              v51 = (_QWORD *)MiGetPfnLink((__int64)v50);
              v66[v52] = v51;
LABEL_84:
              v63 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex((__int64)v50)];
              v54 = (v53 + 0x58000000000LL) / 48;
              v78 = v54;
              memset(v47, 0, 8 * v63);
              v55 = &v47[v63];
              do
              {
                ValidPte ^= (ValidPte ^ (v54 << 12)) & 0xFFFFFFFFF000LL;
                *v47 = ValidPte;
                if ( (unsigned __int64)v47 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v47 <= 0xFFFFF6FB7DBED7F8uLL )
                  MiWritePteShadow();
                MiUpdateLargePageSectionPfn(v53, (__int64)v47++, DemandZeroPte);
                v54 = v78 + 1;
                v53 = (__int64)(v79 + 6);
                ++v78;
                v79 += 6;
              }
              while ( v47 < v55 );
              v45 = (__int64)v72;
              v60 += v63;
            }
            while ( v60 != *((_DWORD *)v72 + 11) );
            v24 = v74;
          }
          MiUpdatePageFileSectionList(v45, 1);
          v45 += 80LL;
          v72 = (_QWORD *)v45;
          --v44;
        }
        while ( v44 );
        v12 = v73;
        v26 = v75;
        v4 = a1;
      }
    }
  }
  *(_QWORD *)(v4 + 64) = v24;
  _InterlockedIncrement64((volatile signed __int64 *)v12 + 162);
  v56 = _InterlockedCompareExchange64(v26 + 3, -1LL, -1LL);
  *(_DWORD *)v4 |= 4u;
  *(_QWORD *)(v4 + 128) = v56;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
    MiLogSectionCreate(v24, 1LL);
  return 0LL;
}
