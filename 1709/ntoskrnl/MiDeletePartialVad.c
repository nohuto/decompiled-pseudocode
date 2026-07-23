/*
 * XREFs of MiDeletePartialVad @ 0x1401123D4
 * Callers:
 *     MiFreeVadRange @ 0x140032AC0 (MiFreeVadRange.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1400365E0 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiInsertVad @ 0x14003ECC0 (MiInsertVad.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiClearVadBits @ 0x1400588B0 (MiClearVadBits.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiCaptureDeleteHierarchy @ 0x140112A38 (MiCaptureDeleteHierarchy.c)
 *     MiAdvanceVadView @ 0x140112B84 (MiAdvanceVadView.c)
 *     MiComputePageCommitment @ 0x140112BF0 (MiComputePageCommitment.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiCreateRotateView @ 0x14044DE28 (MiCreateRotateView.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiUnlockNestedVad @ 0x1404D4DA0 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x1404D4DD8 (MiLockNestedVad.c)
 *     MiResidentPagesForSpan @ 0x14059539C (MiResidentPagesForSpan.c)
 *     MiFreeRotateView @ 0x1406E25E4 (MiFreeRotateView.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // r12
  __int64 Process; // r14
  int v12; // edx
  __int64 v13; // r8
  int v14; // eax
  SIZE_T v15; // r13
  int v16; // edx
  __int64 v17; // r15
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  LONG *v23; // rbx
  KIRQL v24; // al
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r14
  __int64 v27; // r12
  _QWORD *v28; // rbx
  _QWORD *v29; // r14
  __int64 v30; // r8
  __int64 v31; // rdx
  _DWORD *v32; // rax
  __int64 j; // r14
  ULONG_PTR v34; // r14
  struct _KTHREAD *v35; // rbx
  unsigned int SessionId; // r8d
  unsigned int v37; // edx
  __int64 v38; // r9
  bool v39; // zf
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rbx
  ULONG_PTR v49; // rbx
  unsigned __int64 v51; // r14
  int v52; // eax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 m; // rbx
  _QWORD *i; // rax
  _QWORD *k; // rax
  LONG *v59; // rbx
  KIRQL v60; // al
  int v61; // r9d
  __int64 *v62; // rax
  PVOID PoolWithTag; // rax
  unsigned __int64 v64; // rbx
  int v65; // ebx
  int inserted; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  LONG *v69; // rbx
  unsigned __int64 v70; // r13
  __int64 v71; // rbx
  __int64 v72; // rdx
  int v73; // r9d
  __int64 v74; // r13
  unsigned __int64 v75; // rbx
  LONG *v76; // rbx
  KIRQL v77; // al
  unsigned __int64 v78; // r14
  unsigned __int64 v79; // rax
  _QWORD *v80; // rcx
  __int64 *v81; // rcx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rbx
  __int64 v84; // r8
  __int64 v85; // r13
  __int64 v86; // rdi
  BOOL v87; // r14d
  KIRQL v88; // r15
  __int64 v89; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-69h] BYREF
  __int64 v91; // [rsp+50h] [rbp-61h] BYREF
  int v92; // [rsp+58h] [rbp-59h] BYREF
  int v93; // [rsp+5Ch] [rbp-55h]
  _BYTE v94[4]; // [rsp+60h] [rbp-51h] BYREF
  int v95; // [rsp+64h] [rbp-4Dh]
  __int64 v96; // [rsp+68h] [rbp-49h]
  __int64 v97; // [rsp+70h] [rbp-41h]
  unsigned __int64 v98; // [rsp+78h] [rbp-39h]
  LONG *SharedVm; // [rsp+80h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-29h]
  __int64 v101; // [rsp+90h] [rbp-21h]
  __int64 v102; // [rsp+98h] [rbp-19h]
  _QWORD v103[13]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v104; // [rsp+118h] [rbp+67h]
  unsigned __int8 v105; // [rsp+118h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+118h] [rbp+67h]

  memset(v103, 0, 0x20uLL);
  BugCheckParameter2 = 0LL;
  v91 = 0LL;
  v93 = 0;
  v8 = (a3 - a2 + 1) >> 12;
  v9 = 0LL;
  v98 = v8;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v96 = Process;
  v104 = Process + 1280;
  SharedVm = MiGetSharedVm(Process + 1280);
  v14 = P[12];
  if ( (v14 & 0x8000) != 0 )
  {
    v15 = (unsigned int)(v12 + 63);
    v102 = v13;
    v97 = v15;
    v16 = v13 + 8;
    v17 = (unsigned int)v13;
    if ( (v14 & 7) != 6 )
      v16 = v13;
    v93 = v16;
  }
  else
  {
    v62 = (__int64 *)*((_QWORD *)P + 9);
    v15 = 136LL;
    v97 = 136LL;
    v17 = *v62;
    v102 = v17;
    if ( *(_QWORD *)(v17 + 64) != v13 )
    {
      if ( *((_QWORD *)P + 15) < v13 )
        return 3221225505LL;
      v10 = 0;
      if ( (*(_DWORD *)(v17 + 56) & 0x420) == 0 )
        v10 = v12;
    }
  }
  if ( a4 == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x46646156u);
    v9 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, P, v15);
    *(_DWORD *)(v9 + 36) = 0;
    *(_QWORD *)(v9 + 16) = -2LL;
    *(_DWORD *)(v9 + 52) &= 0x80000000;
    *(_BYTE *)(v9 + 34) = 0;
    *(_QWORD *)(v9 + 40) = 0LL;
    v64 = ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
    if ( (*(_BYTE *)(v9 + 48) & 7) != 6 || (*(_QWORD *)(v9 + 56) = 0LL, (unsigned int)MiCreateRotateView(v9)) )
    {
      MiLockNestedVad(v9);
      MiAdvanceVadView(v9, v64);
      MiUnlockNestedVad(v9);
      if ( v15 == 64
        || (*(_DWORD *)(v9 + 64) &= ~0x2000000u,
            *(_QWORD *)(v9 + 120) = 0LL,
            v65 = MiInsertSharedCommitNode(v17, Process, 0LL),
            v65 >= 0) )
      {
        inserted = MiInsertVadCharges(v9, Process);
        v13 = 0LL;
        v65 = inserted;
        if ( inserted >= 0 )
        {
          v68 = *(_QWORD *)(Process + 1296);
          if ( v15 == 64 )
          {
            if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
              ++*(_QWORD *)(v68 + 256);
          }
          else
          {
            if ( *(_QWORD *)(v9 + 128) )
            {
              ObfReferenceObjectWithTag(*(PVOID *)(v9 + 128), 0x746C6644u);
            }
            else if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
            {
              ++*(_QWORD *)(v68 + 264);
            }
            MiUpControlAreaRefs(v9, 1LL);
            v13 = 0LL;
          }
          goto LABEL_6;
        }
        if ( v17 )
          MiRemoveSharedCommitNode(v17, Process, 0LL);
        if ( (*(_BYTE *)(v9 + 48) & 7) == 6 )
          MiFreeRotateView(v9, v67, v13);
      }
    }
    else
    {
      v65 = -1073741670;
    }
    ExFreePoolWithTag((PVOID)v9, 0);
    return (unsigned int)v65;
  }
LABEL_6:
  v18 = P[12] & 7;
  v101 = v13;
  if ( v18 <= 6 )
  {
    v19 = 74;
    if ( _bittest(&v19, v18) )
      v101 = MiResidentPagesForSpan(
               ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
               (((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(Process + 880, 0LL);
  v20 = (unsigned int)P[13];
  LODWORD(v20) = v20 & 0x7FFFFFFF;
  v21 = v20 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31);
  if ( v21 )
  {
    if ( v15 == 64 )
    {
      v59 = MiGetSharedVm(v104);
      v60 = ExAcquireSpinLockExclusive(v59);
      v59[1] = 0;
      LOBYTE(v61) = v60;
      v25 = a2;
      v105 = v60;
      v22 = MiComputePageCommitment(a2, a3, (_DWORD)P, v61, 0LL);
      goto LABEL_12;
    }
    v22 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
        - MiCountSharedPages(
            (__int64)P,
            ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
        + 1;
    v69 = MiGetSharedVm(v104);
    v24 = ExAcquireSpinLockExclusive(v69);
    v69[1] = 0;
  }
  else
  {
    v22 = 0LL;
    v23 = MiGetSharedVm(v104);
    v24 = ExAcquireSpinLockExclusive(v23);
    v23[1] = 0;
  }
  v25 = a2;
  v105 = v24;
LABEL_12:
  if ( a4 == 1 )
  {
    if ( v15 != 64 && v10 == 1 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        1u,
        &BugCheckParameter2);
    v26 = v21 - v22;
    P[13] ^= (P[13] ^ v26) & 0x7FFFFFFF;
    *((_BYTE *)P + 34) = v26 >> 31;
    MiAdvanceVadView(
      P,
      ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)));
    if ( v15 != 64 && v10 == 1 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        1u,
        &v91);
    v27 = v96;
    v28 = P;
    v29 = 0LL;
  }
  else
  {
    v51 = v21 - v22;
    if ( a4 == 2 )
    {
      v52 = (P[13] ^ v51) & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v51 >> 31;
      P[13] ^= v52;
      if ( v15 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
          1u,
          &v91);
        v91 = *(_QWORD *)(v91 + 16);
      }
      v53 = (v25 - 1) >> 44;
      v54 = (v25 - 1) >> 12;
      P[7] = v54;
      *((_BYTE *)P + 33) = v53;
      if ( v15 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)v54 | ((unsigned __int64)(unsigned __int8)v53 << 32),
          1u,
          &BugCheckParameter2);
        BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v27 = v96;
      v28 = 0LL;
    }
    else
    {
      if ( v15 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
          1u,
          &v91);
        v91 = *(_QWORD *)(v91 + 16);
      }
      v70 = v25 - 1;
      v71 = v97;
      P[7] = v70 >> 12;
      *((_BYTE *)P + 33) = v70 >> 44;
      if ( v71 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)(v70 >> 12) | ((unsigned __int64)(unsigned __int8)(v70 >> 44) << 32),
          1u,
          &BugCheckParameter2);
        BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v27 = v96;
      v98 += (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
           - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
           + 1;
      MiInsertVad(v9, v96);
      if ( v71 == 64 )
      {
        LOBYTE(v73) = v105;
        v74 = MiComputePageCommitment(P[6] << 12, v70, (_DWORD)P, v73, 0LL);
      }
      else
      {
        LOBYTE(v72) = v105;
        MiUnlockWorkingSetExclusive(v27 + 1280, v72);
        v75 = 8 * (((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v74 = ((__int64)(((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v75) >> 3)
            - MiCountSharedPages((__int64)P, v75, ((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v76 = MiGetSharedVm(v27 + 1280);
        v77 = ExAcquireSpinLockExclusive(v76);
        v76[1] = 0;
        v105 = v77;
      }
      v78 = v51 - v74;
      v28 = (_QWORD *)v9;
      P[13] ^= (P[13] ^ v74) & 0x7FFFFFFF;
      v79 = v74;
      v15 = v97;
      *((_BYTE *)P + 34) = v79 >> 31;
      *(_DWORD *)(v9 + 52) ^= (*(_DWORD *)(v9 + 52) ^ v78) & 0x7FFFFFFF;
      *(_BYTE *)(v9 + 34) = v78 >> 31;
    }
    v29 = P;
  }
  MiDeleteVirtualAddresses(a2, a3, v93, v105, (__int64)v103);
  if ( BugCheckParameter2 )
  {
    v80 = (_QWORD *)*((_QWORD *)SharedVm + 5);
    if ( v80 )
    {
      MiEmptyPageAccessLog(v80);
      *((_QWORD *)SharedVm + 5) = 0LL;
    }
  }
  LOBYTE(v30) = v105;
  MiCaptureDeleteHierarchy(a2, a3, v30, v94);
  LOBYTE(v31) = v105;
  MiUnlockWorkingSetExclusive(v27 + 1280, v31);
  if ( !v29 )
  {
    v29 = *(_QWORD **)P;
    v32 = P;
    if ( *(_QWORD *)P )
    {
      for ( i = (_QWORD *)v29[1]; i; i = (_QWORD *)i[1] )
        v29 = i;
    }
    else
    {
      for ( j = *((_QWORD *)P + 2); ; j = v29[2] )
      {
        v29 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v29 || (_DWORD *)v29[1] == v32 )
          break;
        v32 = v29;
      }
    }
  }
  if ( !v28 )
  {
    v28 = (_QWORD *)*((_QWORD *)P + 1);
    v55 = P;
    if ( v28 )
    {
      for ( k = (_QWORD *)*v28; k; k = (_QWORD *)*k )
        v28 = k;
    }
    else
    {
      for ( m = *((_QWORD *)P + 2); ; m = v28[2] )
      {
        v28 = (_QWORD *)(m & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v28 || (_DWORD *)*v28 == v55 )
          break;
        v55 = v28;
      }
    }
  }
  MiClearVadBits(a2, a3, (__int64)v29, (__int64)v28);
  MiReturnPageTablePageCommitment(a2, a3, v27, (_DWORD)v29, (__int64)v28, (__int64)P, (__int64)v94);
  v34 = v27 + 880;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v27 + 880));
  v92 = 0;
  v35 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v27 + 880) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v35->ApcState.Process);
  else
    SessionId = -1;
  --v35->SpecialApcDisable;
  ++v35->AbAllocationRegionCount;
  v37 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
  AbAllocationRegionCount = v35->AbAllocationRegionCount;
  v38 = v34 & 0x7FFFFFFFFFFFFFFCLL;
  v39 = !_BitScanReverse((unsigned int *)&v40, v37);
  v95 = v40;
  if ( v39 )
  {
LABEL_69:
    if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v35, v34, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v41 = 1 << v40;
      v42 = v40;
      v43 = &v35->LockEntries[v42];
      v37 &= ~v41;
      if ( (v43->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v43->LockState.0 & 1) == 0
        && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v38
        && v43->LockState.SessionId == SessionId )
      {
        v43->AcquiredByte &= ~1u;
        if ( v43->LockState.0 )
          break;
      }
      v39 = !_BitScanReverse((unsigned int *)&v40, v37);
      v95 = v40;
      if ( v39 )
        goto LABEL_68;
    }
    if ( !v43 )
    {
LABEL_68:
      v34 = v27 + 880;
      goto LABEL_69;
    }
    v43->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v43->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v35->LockEntries[v42].TreeNode);
    v92 = 0;
    v92 = v43->BoostBitmap.AllFields & 0x1FFFF;
    v43->BoostBitmap.AllFields &= 0xFFFE0000;
    v43->ThreadLocalFlags &= ~1u;
    v43->LockState.0 = 0LL;
    v44 = ((char *)v43 - (char *)v35 - 800) / 96;
    if ( AbAllocationRegionCount == 1 )
      v35->AbEntrySummary |= 1 << v44;
    else
      _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v44);
  }
  --v35->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v35, v27 + 880, (unsigned int *)&v92);
  v39 = v35->SpecialApcDisable++ == -1;
  if ( v39 && ($B476B70DB57F76B110DA5B9238C3E934 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    KiCheckForKernelApcDelivery(v45);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v9 && (*(_DWORD *)(v9 + 48) & 0x8000) == 0 )
  {
    v81 = *(__int64 **)(v9 + 72);
    *(_QWORD *)(v9 + 112) = v27 | 1;
    MiManageSubsectionView(v81, (_QWORD *)(v9 + 96), 3);
  }
  v46 = v22 - v103[2];
  v47 = v46 - v103[1];
  if ( v46 )
    MiReturnFullProcessCharges(v27, v46);
  if ( v47 )
    MiReturnCommit(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v27 + 1452)), v47);
  if ( v15 != 64 )
    PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v27, 8 * v98);
  v48 = v101;
  if ( v101 )
  {
    v82 = MiResidentPagesForSpan(
            ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            (((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF);
    if ( v82 < v48 )
    {
      v83 = v48 - v82;
      v84 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v27 + 1452));
      if ( (ULONG_PTR *)v84 == &MiSystemPartition )
        MiReturnResidentAvailable(v83);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v84 + 6016), v83);
    }
  }
  MiFinishVadDeletion(P, a2, a3);
  v49 = BugCheckParameter2;
  if ( BugCheckParameter2 && BugCheckParameter2 != v91 )
  {
    v85 = v102;
    v86 = 0LL;
    v87 = *(_QWORD *)(v102 + 64) != 0LL;
    v88 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v102 + 72));
    do
    {
      v89 = MiDecrementSubsections(v49, v49, 8u);
      v49 = *(_QWORD *)(v49 + 16);
      v86 += v89;
    }
    while ( v49 != v91 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v85 + 72));
    __writecr8(v88);
    if ( v86 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v85 + 60) & 0x3FF)),
        v87,
        v86);
  }
  return 0LL;
}
