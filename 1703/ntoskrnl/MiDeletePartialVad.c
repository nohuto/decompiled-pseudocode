/*
 * XREFs of MiDeletePartialVad @ 0x140016CB0
 * Callers:
 *     MiFreeVadRange @ 0x140016C10 (MiFreeVadRange.c)
 * Callees:
 *     MiUpControlAreaRefs @ 0x14000308C (MiUpControlAreaRefs.c)
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiCaptureDeleteHierarchy @ 0x140017300 (MiCaptureDeleteHierarchy.c)
 *     MiAdvanceVadView @ 0x1400173F0 (MiAdvanceVadView.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiInsertVad @ 0x1400C1CF0 (MiInsertVad.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     MiClearVadBits @ 0x1400DB1D0 (MiClearVadBits.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCreateRotateView @ 0x14045D458 (MiCreateRotateView.c)
 *     MiUnlockNestedVad @ 0x14049B404 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x14049B43C (MiLockNestedVad.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     MiFreeRotateView @ 0x1406B62F4 (MiFreeRotateView.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *Src, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // r12
  _KPROCESS *Process; // r14
  int v12; // edx
  __int64 v13; // r8
  int v14; // eax
  SIZE_T v15; // r13
  int v16; // edx
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rbx
  KIRQL v22; // al
  int v23; // r9d
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r14
  _KPROCESS *v26; // r12
  _QWORD *v27; // rbx
  _DWORD *v28; // r14
  __int64 v29; // r8
  __int64 v30; // rdx
  _DWORD *v31; // rax
  __int64 j; // r14
  ULONG_PTR v33; // r14
  struct _KTHREAD *v34; // rbx
  int SystemRegionType; // eax
  ULONG_PTR BugCheckParameter4; // r10
  int v37; // r11d
  unsigned int v38; // r8d
  unsigned int v39; // edx
  __int64 v40; // r9
  bool v41; // zf
  __int64 v42; // rcx
  __int64 v43; // r14
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  unsigned int v47; // r14d
  __int16 v48; // ax
  __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rbx
  unsigned int SessionId; // eax
  unsigned __int64 v54; // r14
  int v55; // eax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  _DWORD *v58; // rax
  __int64 m; // rbx
  __int64 i; // rax
  _QWORD *k; // rax
  __int64 v62; // rbx
  KIRQL v63; // al
  int v64; // r9d
  __int64 *v65; // rax
  PVOID PoolWithTag; // rax
  unsigned __int64 v67; // rbx
  int inserted; // ebx
  __int64 v69; // rcx
  __int64 v70; // rbx
  unsigned __int64 v71; // r13
  __int64 v72; // rbx
  __int64 v73; // rdx
  int v74; // r9d
  __int64 v75; // r13
  unsigned __int64 v76; // rbx
  __int64 v77; // rbx
  KIRQL v78; // al
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // r13
  __int64 v84; // rdi
  KIRQL v85; // r15
  __int64 v86; // rax
  __int64 v87; // [rsp+48h] [rbp-59h] BYREF
  __int64 v88; // [rsp+50h] [rbp-51h] BYREF
  int v89; // [rsp+58h] [rbp-49h]
  int v90; // [rsp+5Ch] [rbp-45h] BYREF
  _BYTE v91[4]; // [rsp+60h] [rbp-41h] BYREF
  int v92; // [rsp+64h] [rbp-3Dh]
  _KPROCESS *v93; // [rsp+68h] [rbp-39h]
  __int64 v94; // [rsp+70h] [rbp-31h]
  unsigned __int64 v95; // [rsp+78h] [rbp-29h]
  __int64 SharedVm; // [rsp+80h] [rbp-21h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-19h]
  __int64 v98; // [rsp+90h] [rbp-11h]
  _QWORD v99[12]; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int16 *v100; // [rsp+108h] [rbp+67h]
  KIRQL v101; // [rsp+108h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+108h] [rbp+67h]

  memset(v99, 0, 0x20uLL);
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0;
  v8 = (a3 - a2 + 1) >> 12;
  v9 = 0LL;
  v95 = v8;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v93 = Process;
  v100 = &Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v14 = Src[12];
  if ( (v14 & 0x8000) != 0 )
  {
    v15 = (unsigned int)(v12 + 63);
    v98 = v13;
    v94 = v15;
    v16 = v13 + 8;
    v17 = (unsigned int)v13;
    if ( (v14 & 7) != 6 )
      v16 = v13;
    v89 = v16;
  }
  else
  {
    v65 = (__int64 *)*((_QWORD *)Src + 9);
    v15 = 136LL;
    v94 = 136LL;
    v17 = *v65;
    v98 = v17;
    if ( *(_QWORD *)(v17 + 64) != v13 )
    {
      if ( *((_QWORD *)Src + 15) < v13 )
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
    memmove(PoolWithTag, Src, v15);
    *(_DWORD *)(v9 + 36) = 0;
    *(_QWORD *)(v9 + 16) = -2LL;
    *(_DWORD *)(v9 + 52) &= 0x80000000;
    *(_BYTE *)(v9 + 34) = 0;
    *(_QWORD *)(v9 + 40) = 0LL;
    v67 = ((a3 + 1) >> 12) - ((unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32));
    if ( (*(_BYTE *)(v9 + 48) & 7) != 6 || (*(_QWORD *)(v9 + 56) = 0LL, (unsigned int)MiCreateRotateView(v9)) )
    {
      MiLockNestedVad(v9);
      MiAdvanceVadView(v9, v67);
      MiUnlockNestedVad(v9);
      if ( v15 == 64
        || (*(_DWORD *)(v9 + 64) &= ~0x2000000u,
            *(_QWORD *)(v9 + 120) = 0LL,
            inserted = MiInsertSharedCommitNode(v17, Process, 0LL),
            inserted >= 0) )
      {
        inserted = MiInsertVadCharges(v9, Process);
        if ( inserted >= 0 )
        {
          v69 = *(_QWORD *)&Process[1].IdealGlobalNode;
          if ( v15 == 64 )
          {
            if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
              ++*(_QWORD *)(v69 + 256);
          }
          else
          {
            if ( *(_QWORD *)(v9 + 128) )
            {
              ObfReferenceObjectWithTag(*(PVOID *)(v9 + 128), 0x746C6644u);
            }
            else if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
            {
              ++*(_QWORD *)(v69 + 264);
            }
            MiUpControlAreaRefs(v9);
          }
          goto LABEL_6;
        }
        if ( v17 )
          MiRemoveSharedCommitNode(v17, Process, 0LL);
        if ( (*(_BYTE *)(v9 + 48) & 7) == 6 )
          MiFreeRotateView(v9);
      }
    }
    else
    {
      inserted = -1073741670;
    }
    ExFreePoolWithTag((PVOID)v9, 0);
    return (unsigned int)inserted;
  }
LABEL_6:
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v18 = (unsigned int)Src[13];
  LODWORD(v18) = v18 & 0x7FFFFFFF;
  v19 = v18 | ((unsigned __int64)*((unsigned __int8 *)Src + 34) << 31);
  if ( v19 )
  {
    if ( v15 == 64 )
    {
      v62 = MiGetSharedVm(v100);
      v63 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v62);
      *(_DWORD *)(v62 + 4) = 0;
      LOBYTE(v64) = v63;
      v24 = a2;
      v101 = v63;
      v20 = MiComputePageCommitment(a2, a3, (_DWORD)Src, v64, 0LL);
      goto LABEL_9;
    }
    v20 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
        - MiCountSharedPages(
            Src,
            ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
        + 1;
    v70 = MiGetSharedVm(v100);
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v70);
    *(_DWORD *)(v70 + 4) = 0;
  }
  else
  {
    v20 = 0LL;
    v21 = MiGetSharedVm(v100);
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v21);
    *(_DWORD *)(v21 + 4) = 0;
  }
  v24 = a2;
  v101 = v22;
LABEL_9:
  if ( a4 == 1 )
  {
    if ( v15 != 64 && v10 == 1 )
      MiGetProtoPteAddress(
        Src,
        (unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32),
        1LL,
        &v87);
    v25 = v19 - v20;
    Src[13] ^= (Src[13] ^ v25) & 0x7FFFFFFF;
    *((_BYTE *)Src + 34) = v25 >> 31;
    MiAdvanceVadView(
      Src,
      ((a3 + 1) >> 12) - ((unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32)));
    if ( v15 != 64 && v10 == 1 )
      MiGetProtoPteAddress(
        Src,
        (unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32),
        1LL,
        &v88);
    v26 = v93;
    v27 = Src;
    v28 = 0LL;
  }
  else
  {
    v54 = v19 - v20;
    if ( a4 == 2 )
    {
      v55 = (Src[13] ^ v54) & 0x7FFFFFFF;
      *((_BYTE *)Src + 34) = v54 >> 31;
      Src[13] ^= v55;
      if ( v15 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(
          Src,
          (unsigned int)Src[7] | ((unsigned __int64)*((unsigned __int8 *)Src + 33) << 32),
          1LL,
          &v88);
        v88 = *(_QWORD *)(v88 + 16);
      }
      v56 = (v24 - 1) >> 44;
      v57 = (v24 - 1) >> 12;
      Src[7] = v57;
      *((_BYTE *)Src + 33) = v56;
      if ( v15 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(Src, (unsigned int)v57 | ((unsigned __int64)(unsigned __int8)v56 << 32), 1LL, &v87);
        v87 = *(_QWORD *)(v87 + 16);
        MiAdvanceVadView(Src, 0LL);
      }
      v26 = v93;
      v27 = 0LL;
    }
    else
    {
      if ( v15 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(
          Src,
          (unsigned int)Src[7] | ((unsigned __int64)*((unsigned __int8 *)Src + 33) << 32),
          1LL,
          &v88);
        v88 = *(_QWORD *)(v88 + 16);
      }
      v71 = v24 - 1;
      v72 = v94;
      Src[7] = v71 >> 12;
      *((_BYTE *)Src + 33) = v71 >> 44;
      if ( v72 != 64 && v10 == 1 )
      {
        MiGetProtoPteAddress(
          Src,
          (unsigned int)(v71 >> 12) | ((unsigned __int64)(unsigned __int8)(v71 >> 44) << 32),
          1LL,
          &v87);
        v87 = *(_QWORD *)(v87 + 16);
        MiAdvanceVadView(Src, 0LL);
      }
      v26 = v93;
      v95 += (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
           - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
           + 1;
      MiInsertVad(v9, v93);
      if ( v72 == 64 )
      {
        LOBYTE(v74) = v101;
        v75 = MiComputePageCommitment(Src[6] << 12, v71, (_DWORD)Src, v74, 0LL);
      }
      else
      {
        LOBYTE(v73) = v101;
        MiUnlockWorkingSetExclusive(&v26[1].IdealNode[12], v73);
        v76 = 8 * (((unsigned int)Src[6] | ((unsigned __int64)*((unsigned __int8 *)Src + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v75 = ((__int64)(((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v76) >> 3)
            - MiCountSharedPages(Src, v76, ((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v77 = MiGetSharedVm(&v26[1].IdealNode[12]);
        v78 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v77);
        *(_DWORD *)(v77 + 4) = 0;
        v101 = v78;
      }
      v79 = v54 - v75;
      v27 = (_QWORD *)v9;
      Src[13] ^= (Src[13] ^ v75) & 0x7FFFFFFF;
      v80 = v75;
      v15 = v94;
      *((_BYTE *)Src + 34) = v80 >> 31;
      *(_DWORD *)(v9 + 52) ^= (*(_DWORD *)(v9 + 52) ^ v79) & 0x7FFFFFFF;
      *(_BYTE *)(v9 + 34) = v79 >> 31;
    }
    v28 = Src;
  }
  LOBYTE(v23) = v101;
  MiDeleteVirtualAddresses(a2, a3, v89, v23, (__int64)v99);
  if ( v87 )
  {
    v81 = *(_QWORD **)(SharedVm + 40);
    if ( v81 )
    {
      MiEmptyPageAccessLog(v81);
      *(_QWORD *)(SharedVm + 40) = 0LL;
    }
  }
  LOBYTE(v29) = v101;
  MiCaptureDeleteHierarchy(a2, a3, v29, v91);
  LOBYTE(v30) = v101;
  MiUnlockWorkingSetExclusive(&v26[1].IdealNode[12], v30);
  if ( !v28 )
  {
    v28 = *(_DWORD **)Src;
    v31 = Src;
    if ( *(_QWORD *)Src )
    {
      for ( i = *((_QWORD *)v28 + 1); i; i = *(_QWORD *)(i + 8) )
        v28 = (_DWORD *)i;
    }
    else
    {
      for ( j = *((_QWORD *)Src + 2); ; j = *((_QWORD *)v28 + 2) )
      {
        v28 = (_DWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v28 || *((_DWORD **)v28 + 1) == v31 )
          break;
        v31 = v28;
      }
    }
  }
  if ( !v27 )
  {
    v27 = (_QWORD *)*((_QWORD *)Src + 1);
    v58 = Src;
    if ( v27 )
    {
      for ( k = (_QWORD *)*v27; k; k = (_QWORD *)*k )
        v27 = k;
    }
    else
    {
      for ( m = *((_QWORD *)Src + 2); ; m = v27[2] )
      {
        v27 = (_QWORD *)(m & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v27 || (_DWORD *)*v27 == v58 )
          break;
        v58 = v27;
      }
    }
  }
  MiClearVadBits(a2, a3, v28, v27);
  MiReturnPageTablePageCommitment(a2, a3, (_DWORD)v26, (_DWORD)v28, (__int64)v27, (__int64)Src, (__int64)v91);
  v33 = (ULONG_PTR)&v26[1].Affinity.Bitmap[8];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v26[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&v26[1].Affinity.Bitmap[8]);
  v34 = KeGetCurrentThread();
  v90 = 0;
  SystemRegionType = MiGetSystemRegionType(&v26[1].Affinity.Bitmap[8]);
  v37 = BugCheckParameter4 + 1;
  if ( SystemRegionType == (_DWORD)BugCheckParameter4 + 1 )
  {
    SessionId = MmGetSessionIdEx(v34->ApcState.Process);
    BugCheckParameter4 = 0LL;
    v38 = SessionId;
    v37 = 1;
  }
  else
  {
    v38 = -1;
  }
  --v34->SpecialApcDisable;
  v34->AbAllocationRegionCount += v37;
  AbAllocationRegionCount = v34->AbAllocationRegionCount;
  v39 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
  v40 = v33 & 0x7FFFFFFFFFFFFFFCLL;
  v41 = !_BitScanReverse((unsigned int *)&v42, v39);
  v92 = v42;
  if ( v41 )
  {
LABEL_62:
    if ( (*((_DWORD *)&v34->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v34, v33, v38, BugCheckParameter4);
  }
  else
  {
    while ( 1 )
    {
      v43 = (__int64)&v34->LockEntries[v42];
      v39 &= ~(v37 << v42);
      if ( ((unsigned __int8)v37 & *(_BYTE *)(v43 + 26)) != 0
        && ((unsigned __int8)*(_DWORD *)(v43 + 32) & (unsigned __int8)v37) == 0
        && (*(_QWORD *)(v43 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v40
        && *(_DWORD *)(v43 + 40) == v38 )
      {
        *(_BYTE *)(v43 + 26) &= ~1u;
        if ( *(_QWORD *)(v43 + 32) )
          break;
      }
      v41 = !_BitScanReverse((unsigned int *)&v42, v39);
      v92 = v42;
      if ( v41 )
        goto LABEL_61;
    }
    if ( !v43 )
    {
LABEL_61:
      v33 = (ULONG_PTR)&v26[1].Affinity.Bitmap[8];
      goto LABEL_62;
    }
    *(_BYTE *)(v43 + 32) |= 2u;
    if ( ((*(__int64 *)(v43 + 32) < 0) & (unsigned __int8)v37) != 0 )
    {
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v43);
      BugCheckParameter4 = 0LL;
      LOBYTE(v37) = 1;
    }
    v44 = *(_DWORD *)(v43 + 88) & 0x1FFFF;
    v45 = *(_DWORD *)(v43 + 88) & 0xFFFE0000;
    *(_BYTE *)(v43 + 25) &= ~1u;
    v90 = v44;
    *(_DWORD *)(v43 + 88) = v45;
    *(_QWORD *)(v43 + 32) = BugCheckParameter4;
    v46 = (v43 - (__int64)v34 - 800) / 96;
    if ( AbAllocationRegionCount == (_BYTE)v37 )
      v34->AbEntrySummary |= 1 << v46;
    else
      _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, (_BYTE)v37 << v46);
  }
  --v34->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v34, &v26[1].Affinity.Bitmap[8], &v90);
  v47 = 0;
  v48 = v34->SpecialApcDisable + 1;
  v34->SpecialApcDisable = v48;
  if ( !v48 && ($69CD3F157F9F39B6F7113F2231989901 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( v9 && (*(_DWORD *)(v9 + 48) & 0x8000) == 0 )
  {
    v82 = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(v9 + 112) = (unsigned __int64)v26 | 1;
    MiManageSubsectionView(v82, v9 + 96, 3LL);
  }
  v49 = v20 - v99[2];
  v50 = v49 - v99[1];
  if ( v49 )
    MiReturnFullProcessCharges(v26, v49);
  if ( v50 )
    MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(v26[1].SecurePid)), v50);
  if ( v15 != 64 )
    PsReturnProcessPagedPoolQuota(v26, 8 * v95);
  MiFinishVadDeletion(Src);
  v51 = v87;
  if ( v87 && v87 != v88 )
  {
    v83 = v98;
    v84 = 0LL;
    LOBYTE(v47) = *(_QWORD *)(v98 + 64) != 0LL;
    v85 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v98 + 72));
    do
    {
      v86 = MiDecrementSubsections(v51, v51, 8LL);
      v51 = *(_QWORD *)(v51 + 16);
      v84 += v86;
    }
    while ( v51 != v88 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v83 + 72));
    __writecr8(v85);
    if ( v84 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v83 + 60) & 0x3FF)),
        v47,
        v84);
  }
  return 0LL;
}
