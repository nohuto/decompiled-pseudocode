/*
 * XREFs of MiCreatePagingFileMap @ 0x1404BC908
 * Callers:
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiFreeLargeZeroPages @ 0x140049444 (MiFreeLargeZeroPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x14004B4CC (MiUpdateControlAreaCommitCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiGetPfnLink @ 0x1400D1210 (MiGetPfnLink.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x140255AB8 (MiUpdateLargePageSectionPfn.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404BD1E0 (MiInitializePrototypePtes.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     MiLogSectionCreate @ 0x14074C154 (MiLogSectionCreate.c)
 *     MiAllocateLargeZeroPages @ 0x14075522C (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  __int64 v1; // r13
  int v2; // eax
  unsigned __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR **v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  ULONG_PTR *v9; // r15
  int v10; // esi
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // r8d
  int v14; // r8d
  unsigned __int16 *v15; // rbx
  unsigned __int16 *v16; // r14
  unsigned __int64 v17; // rax
  _QWORD *PfnLink; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  volatile signed __int64 **PoolWithTag; // rax
  volatile signed __int64 **v22; // r14
  volatile signed __int64 *v23; // rax
  volatile signed __int64 *v24; // r12
  __int16 v25; // dx
  int v26; // ecx
  int v27; // eax
  __int16 v28; // ax
  unsigned __int64 v29; // r11
  char v30; // al
  volatile signed __int64 ***v31; // rdx
  volatile signed __int64 ***v32; // r10
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r15
  int v36; // eax
  __int16 v37; // cx
  __int16 v38; // cx
  unsigned __int64 v39; // rax
  PVOID v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r9
  unsigned int v48; // edi
  __int64 v49; // r8
  unsigned __int64 ValidPte; // rbx
  __int64 DemandZeroPte; // rsi
  unsigned __int64 v52; // r12
  _DWORD *v53; // rdi
  __int64 v54; // r15
  unsigned __int64 *v55; // rdx
  int v56; // eax
  _QWORD *v57; // rdi
  __int64 v58; // rdx
  _QWORD *v59; // r10
  _QWORD *v60; // rax
  __int64 v61; // rdx
  unsigned __int64 *v62; // rdi
  __int64 v63; // r10
  __int64 v64; // r14
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r10
  signed __int64 v68; // rax
  unsigned __int64 v69; // r13
  PVOID *v70; // rsi
  unsigned __int64 v71; // [rsp+30h] [rbp-79h]
  unsigned __int64 v72; // [rsp+38h] [rbp-71h]
  PVOID v73; // [rsp+40h] [rbp-69h]
  __int64 v74; // [rsp+40h] [rbp-69h]
  __int64 v75; // [rsp+48h] [rbp-61h]
  unsigned __int64 *v76; // [rsp+48h] [rbp-61h]
  unsigned __int64 v77; // [rsp+50h] [rbp-59h]
  __int64 v78; // [rsp+58h] [rbp-51h]
  ULONG_PTR *v79; // [rsp+60h] [rbp-49h]
  volatile signed __int64 ***v80; // [rsp+68h] [rbp-41h]
  __int64 v81; // [rsp+68h] [rbp-41h]
  _QWORD *v82[3]; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v83; // [rsp+90h] [rbp-19h]
  volatile signed __int64 ***v84; // [rsp+98h] [rbp-11h]
  unsigned __int64 v85; // [rsp+A0h] [rbp-9h]
  unsigned __int64 v86; // [rsp+A8h] [rbp-1h]
  volatile signed __int64 **v87; // [rsp+B0h] [rbp+7h]
  volatile signed __int64 *v88; // [rsp+B8h] [rbp+Fh]
  __int16 v90; // [rsp+118h] [rbp+6Fh]
  _QWORD *v91; // [rsp+118h] [rbp+6Fh]
  int v92; // [rsp+120h] [rbp+77h]
  _QWORD *v93; // [rsp+120h] [rbp+77h]
  unsigned __int64 v94; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = a1;
  memset(v82, 0, sizeof(v82));
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
  v4 = **(_QWORD **)(v1 + 152);
  if ( !v4 )
    return 3221225714LL;
  if ( v4 > 0xFFFFF000000LL )
    return 3221225536LL;
  v94 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *(ULONG_PTR ***)(v1 + 176);
  v7 = 0LL;
  v8 = (v4 + 4095) >> 12;
  v78 = 0LL;
  v75 = (__int64)CurrentThread;
  if ( v6 )
    v9 = *v6;
  else
    v9 = &MiSystemPartition;
  v10 = *(_DWORD *)(v1 + 16);
  v79 = v9;
  v92 = v10 & 0x8000000;
  if ( (v10 & 0x8000000) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)v9, v8, 0) )
      return 3221225773LL;
    if ( (v10 & 0x80000) != 0 && (v8 & 0xF) != 0 )
    {
      MiReturnCommit((__int64)v9, v8);
      return 3221225714LL;
    }
    if ( v10 < 0 )
    {
      if ( (v8 & 0x1FF) != 0 )
      {
        v12 = -1073741582;
LABEL_38:
        MiReturnCommit((__int64)v9, v8);
        return v12;
      }
      if ( !(unsigned int)MiChargeResident(v9, v8, 0LL, v11) )
      {
LABEL_37:
        v12 = -1073741670;
        goto LABEL_38;
      }
      v13 = *(_DWORD *)(v1 + 172);
      v94 = v8;
      if ( v13 )
        v14 = v13 - 1;
      else
        v14 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23572);
      v15 = (unsigned __int16 *)((char *)qword_1403CB6A0 + 2 * v14 * (unsigned int)(unsigned __int16)KeNumberNodes);
      v16 = &v15[(unsigned __int16)KeNumberNodes];
      MiAllocateLargeZeroPages((_DWORD)v9, (unsigned int)&v94, v14, *(_DWORD *)(v1 + 32), (__int64)v82, 0);
      v17 = v94;
      if ( v94 )
      {
        do
        {
          if ( ++v15 == v16 )
            break;
          MiAllocateLargeZeroPages((_DWORD)v9, (unsigned int)&v94, *v15, *(_DWORD *)(v1 + 32), (__int64)v82, 0);
          v17 = v94;
        }
        while ( v94 );
        if ( v17 )
        {
          if ( v17 != v8 )
            MiFreeLargeZeroPages((int)v9, v82);
          if ( v9 == &MiSystemPartition )
            MiReturnResidentAvailable(v8);
          else
            MiReturnPartitionResidentAvailable((__int64)v9, v8);
          goto LABEL_37;
        }
      }
      PfnLink = v82[0];
      if ( v82[0] )
      {
        do
        {
          ++v7;
          PfnLink = (_QWORD *)MiGetPfnLink((__int64)PfnLink);
        }
        while ( PfnLink );
        v78 = v7;
      }
      v94 = v8;
    }
  }
  v73 = 0LL;
  if ( (v10 & 0x88000000) == 0x8000000 )
  {
    v77 = v8;
    v19 = 1LL;
  }
  else
  {
    v20 = (unsigned __int64)(((v10 >> 31) & 0x100000u) + 0x100000) >> 3;
    v77 = v20;
    v71 = v8 / v20;
    v19 = v8 / v20;
    if ( !(v8 % v20) )
      goto LABEL_48;
    ++v19;
  }
  v71 = v19;
LABEL_48:
  PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, 88 * v19 + 128, 0x61436D4Du);
  v87 = PoolWithTag;
  v22 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_106:
    if ( v92 )
    {
      if ( v94 )
      {
        MiFreeLargeZeroPages((int)v9, v82);
        if ( v9 == &MiSystemPartition )
          MiReturnResidentAvailable(v94);
        else
          MiReturnPartitionResidentAvailable((__int64)v9, v94);
        v8 = v94;
      }
      MiReturnCommit((__int64)v9, v8);
    }
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 88 * v19 + 128);
  v23 = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
  v88 = v23;
  v24 = v23;
  if ( !v23 )
  {
LABEL_100:
    v69 = 0LL;
    if ( v19 )
    {
      v70 = (PVOID *)(v22 + 17);
      do
      {
        if ( !*v70 )
          break;
        ExFreePoolWithTag(*v70, 0);
        v70 += 11;
        ++v69;
      }
      while ( v69 < v19 );
    }
    ExFreePoolWithTag(v22, 0);
    if ( v24 )
      ExFreePoolWithTag((PVOID)v24, 0);
    goto LABEL_106;
  }
  *((_QWORD *)v23 + 9) = 0LL;
  v25 = (*(_WORD *)v9 ^ *((_WORD *)v22 + 30)) & 0x3FF;
  *((_DWORD *)v22 + 24) = v19;
  *((_WORD *)v22 + 30) ^= v25;
  *v22 = v23;
  v22[2] = (volatile signed __int64 *)(v22 + 1);
  v22[1] = (volatile signed __int64 *)(v22 + 1);
  v26 = *((_DWORD *)v22 + 14);
  v22[14] = (volatile signed __int64 *)1;
  v22[3] = (volatile signed __int64 *)1;
  v22[6] = (volatile signed __int64 *)1;
  if ( (v10 & 0x200000) != 0 )
  {
    v26 |= 0x40u;
    *((_DWORD *)v22 + 14) = v26;
  }
  if ( (v10 & 0x4000000) != 0 )
  {
    v26 |= 0x1000u;
    *((_DWORD *)v22 + 14) = v26;
  }
  if ( v92 )
  {
    v26 |= 0x2000u;
    *((_DWORD *)v22 + 14) = v26;
  }
  if ( (v10 & 0x80000) != 0 )
  {
    v26 |= 0x80000000;
    *((_DWORD *)v22 + 14) = v26;
  }
  v27 = v26 ^ (*(_DWORD *)(v1 + 172) << 20);
  v22[13] = 0LL;
  *((_DWORD *)v22 + 14) = v26 ^ v27 & 0x3F00000;
  memset((void *)v24, 0, 0x48uLL);
  *v24 = (volatile signed __int64)v22;
  *((_QWORD *)v24 + 5) = 0LL;
  *((_QWORD *)v24 + 3) = v8 << 12;
  *((_DWORD *)v24 + 2) = v8;
  if ( (v10 & 0x10000000) != 0 )
  {
    v28 = 0x8000;
LABEL_62:
    *((_WORD *)v24 + 6) |= v28;
    goto LABEL_63;
  }
  if ( (v10 & 0x40000000) != 0 )
  {
    v28 = 0x4000;
    goto LABEL_62;
  }
LABEL_63:
  v29 = 0LL;
  v30 = 2 * *(_BYTE *)(v1 + 32);
  v83 = 0LL;
  v72 = v8;
  *((_BYTE *)v24 + 14) ^= (*((_BYTE *)v24 + 14) ^ v30) & 0x3E;
  v85 = 0LL;
  *((_DWORD *)v24 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v31 = (volatile signed __int64 ***)(v22 + 16);
  v84 = (volatile signed __int64 ***)(v22 + 16);
  v32 = (volatile signed __int64 ***)(v22 + 16);
  if ( v19 )
  {
    LOWORD(v33) = 0;
    v90 = 0;
    v34 = v77;
    do
    {
      v35 = v34;
      v80 = v31;
      v32 = v31;
      v31[10] = (volatile signed __int64 **)((unsigned __int64)v31[10] & 0xFFFFFFFFFFFFFFF8uLL | 1);
      v36 = v72;
      *v31 = v22;
      v37 = *(_WORD *)(v1 + 32);
      *((_DWORD *)v31 + 9) = v29;
      v38 = *((_WORD *)v31 + 16) ^ (*((_WORD *)v31 + 16) ^ (2 * v37)) & 0x3E;
      if ( v72 > v34 )
        v36 = v34;
      else
        v35 = v72;
      v86 = v35;
      *((_DWORD *)v31 + 11) = v36;
      v39 = v86;
      if ( v72 <= v34 )
        LOWORD(v33) = v90;
      v72 -= v86;
      v9 = v79;
      *((_WORD *)v31 + 16) = v38 & 0x3F | ((_WORD)v33 << 6);
      if ( v92 )
      {
        v40 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v39, 0x74536D4Du);
        v73 = v40;
        if ( !v40 )
          goto LABEL_100;
        v31 = v84;
        v34 = v77;
        v32 = v80;
        v29 = v83;
        v84[1] = (volatile signed __int64 **)v40;
      }
      v41 = *((unsigned int *)v31 + 11);
      v31 += 11;
      v42 = v29 + v41;
      v43 = v85 + 1;
      v83 = v42;
      v84 = v31;
      v33 = HIDWORD(v42);
      v29 = v42;
      v32[2] = (volatile signed __int64 **)v31;
      v85 = v43;
      v90 = WORD2(v42);
    }
    while ( v43 < v19 );
  }
  v32[2] = 0LL;
  *((_QWORD *)v24 + 8) = v73;
  if ( v92 )
  {
    --*(_WORD *)(v75 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v24 + 5), 0LL);
    MiUpdateControlAreaCommitCount((__int64)v22, v8);
    if ( (_InterlockedExchangeAdd64(v24 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24 + 5, v44, v45, v46);
    KeAbPostRelease((ULONG_PTR)(v24 + 5));
    KiLeaveGuardedRegionUnsafe(v75);
    if ( v10 >= 0 )
    {
      MiInitializePrototypePtes(v22[17], v8, v22 + 16, 1LL);
      MiUpdateSystemProtoPtesTree((__int64)(v22 + 23), 1);
    }
    else
    {
      *((_WORD *)v24 + 6) |= 0x1000u;
      *((_DWORD *)v22 + 23) |= 0x10000u;
      v48 = *(_DWORD *)(v1 + 32);
      v49 = v48;
      LODWORD(v49) = v48 | 0x80000000;
      ValidPte = MiMakeValidPte(0LL, -1LL, v49, v47);
      DemandZeroPte = MiMakeDemandZeroPte(v48);
      if ( v71 )
      {
        v52 = v71;
        v53 = v22 + 22;
        v54 = v78;
        v91 = v22 + 22;
        do
        {
          v55 = (unsigned __int64 *)*((_QWORD *)v53 - 5);
          v56 = *v53 & 0x3FFFFFFF | 0x40000000;
          v76 = v55;
          *v53 = v56;
          if ( v54 )
          {
            --v54;
            *v53 = v56 & 0x3FFFFFFF | 0x80000000;
          }
          memset(v55, 0, 8LL * (unsigned int)*(v53 - 1));
          v57 = v91;
          MiUpdateSystemProtoPtesTree((__int64)(v91 + 1), 1);
          v74 = 0LL;
          if ( *((_DWORD *)v91 - 1) )
          {
            do
            {
              v58 = 0LL;
              while ( 1 )
              {
                v59 = v82[v58];
                v93 = v59;
                if ( v59 )
                  break;
                if ( (unsigned __int64)++v58 >= 3 )
                  goto LABEL_88;
              }
              v60 = (_QWORD *)MiGetPfnLink((__int64)v59);
              v82[v61] = v60;
LABEL_88:
              v81 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex((__int64)v59)];
              v62 = v76;
              v64 = (v63 + 0x58000000000LL) / 48;
              do
              {
                ValidPte ^= (ValidPte ^ (v64 << 12)) & 0xFFFFFFFFF000LL;
                *v62 = ValidPte;
                if ( MiPteInShadowRange((unsigned __int64)v62) )
                  MiWritePteShadow(v65, ValidPte, v66);
                MiUpdateLargePageSectionPfn(v67, (__int64)v62, DemandZeroPte);
                ++v64;
                ++v62;
                v93 += 6;
              }
              while ( v62 < &v76[v81] );
              v76 = v62;
              v57 = v91;
              v74 += v81;
            }
            while ( v74 != *((_DWORD *)v91 - 1) );
            v52 = v71;
          }
          v53 = v57 + 11;
          --v52;
          v91 = v53;
          v71 = v52;
        }
        while ( v52 );
        v22 = v87;
        v9 = v79;
        v24 = v88;
        v1 = a1;
      }
    }
  }
  *(_QWORD *)(v1 + 64) = v22;
  _InterlockedIncrement64((volatile signed __int64 *)v9 + 162);
  v68 = _InterlockedCompareExchange64(v24 + 3, -1LL, -1LL);
  *(_DWORD *)v1 |= 4u;
  *(_QWORD *)(v1 + 128) = v68;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
    MiLogSectionCreate(v22, 1LL);
  return 0LL;
}
