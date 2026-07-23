/*
 * XREFs of MiDeletePartialVad @ 0x140071BC0
 * Callers:
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiInsertVad @ 0x14001F3B0 (MiInsertVad.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiReturnFullProcessCharges @ 0x14003E5A0 (MiReturnFullProcessCharges.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x14007230C (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x140072540 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x140072630 (MiDeleteVirtualAddresses.c)
 *     MiAdvanceVadView @ 0x140072C74 (MiAdvanceVadView.c)
 *     MiDrainSystemAccessLog @ 0x14007A2A4 (MiDrainSystemAccessLog.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EF7F0 (PsReturnProcessPagedPoolQuota.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x140268574 (MiReInsertPlaceholderVad.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiResidentPagesForSpan @ 0x140568E3C (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x14057FBA0 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x140584AB8 (MiFreePlaceholderStorage.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiUnlockNestedVad @ 0x1405BFC80 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x1405BFCB8 (MiLockNestedVad.c)
 *     MiFreeRotateView @ 0x14074D138 (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 */

__int64 __fastcall MiDeletePartialVad(
        _QWORD *BugCheckParameter4,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  bool v10; // r13
  int v11; // r12d
  __int64 Process; // r14
  int v13; // eax
  SIZE_T v14; // rbx
  int v15; // edx
  unsigned __int64 v16; // r15
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // r14
  unsigned __int64 v20; // r14
  __int64 v21; // r12
  __int64 SharedVm; // rbx
  KIRQL v23; // al
  __int64 v24; // rbx
  int v25; // edx
  unsigned __int64 v26; // r14
  unsigned int v27; // edx
  __int64 v28; // rdx
  _QWORD *v29; // r15
  _QWORD *v30; // r14
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 j; // r14
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG_PTR v41; // r14
  struct _KTHREAD *v42; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v44; // r15
  unsigned int v45; // edx
  __int64 v46; // r9
  bool v47; // zf
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  _KLOCK_ENTRY *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // r14
  __int64 v54; // r12
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  ULONG_PTR v57; // rbx
  _QWORD *i; // rax
  __int64 v60; // rbx
  KIRQL v61; // al
  unsigned __int64 v62; // r14
  int v63; // edx
  __int64 v64; // rbx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 k; // r15
  _QWORD *v69; // rcx
  __int64 *v70; // rax
  __int64 v71; // rcx
  PVOID PoolWithTag; // rax
  int PlaceholderStorage; // ebx
  __int64 v74; // rax
  int v75; // ecx
  unsigned __int64 v76; // rdx
  unsigned int v77; // ecx
  unsigned __int64 v78; // r14
  __int64 v79; // rcx
  unsigned int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rbx
  unsigned __int64 v84; // r15
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned __int64 v89; // r15
  unsigned __int64 v90; // rbx
  __int64 v91; // rbx
  KIRQL v92; // al
  int v93; // edx
  unsigned __int64 v94; // r8
  unsigned int v95; // r9d
  __int64 v96; // rcx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r13
  __int64 v102; // rdi
  BOOL v103; // r14d
  KIRQL v104; // r15
  __int64 v105; // rax
  char v106; // [rsp+40h] [rbp-91h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-79h] BYREF
  __int64 v110; // [rsp+60h] [rbp-71h] BYREF
  __int64 v111; // [rsp+68h] [rbp-69h]
  int v112; // [rsp+70h] [rbp-61h] BYREF
  __int64 v113; // [rsp+78h] [rbp-59h]
  int v114; // [rsp+80h] [rbp-51h]
  unsigned int v115; // [rsp+84h] [rbp-4Dh]
  __int64 v116; // [rsp+88h] [rbp-49h]
  __int64 v117; // [rsp+90h] [rbp-41h]
  _BYTE v118[4]; // [rsp+98h] [rbp-39h] BYREF
  int v119; // [rsp+9Ch] [rbp-35h]
  unsigned __int64 v120; // [rsp+A0h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-29h]
  __int64 v122; // [rsp+B0h] [rbp-21h]
  __int64 v123; // [rsp+B8h] [rbp-19h]
  _QWORD v124[4]; // [rsp+C0h] [rbp-11h] BYREF

  v114 = a4;
  v122 = a5;
  memset(v124, 0, sizeof(v124));
  BugCheckParameter2 = 0LL;
  v110 = 0LL;
  v117 = 0LL;
  v8 = (a3 - a2 + 1) >> 12;
  v9 = 0LL;
  v120 = v8;
  v10 = 0;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  v115 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v116 = Process;
  v113 = Process + 1280;
  v13 = *((_DWORD *)BugCheckParameter4 + 12);
  if ( (v13 & 0x4000) != 0 )
  {
    v14 = 64LL;
    v111 = 64LL;
    v15 = 8;
    if ( (v13 & 7) != 6 )
      v15 = 0;
    v115 = v15;
  }
  else
  {
    v70 = (__int64 *)BugCheckParameter4[9];
    v14 = 136LL;
    v111 = 136LL;
    v71 = *v70;
    v117 = v71;
    if ( *(_QWORD *)(v71 + 64) )
    {
      if ( (__int64)BugCheckParameter4[15] < 0 )
        return 3221225505LL;
      v10 = (*(_DWORD *)(v71 + 56) & 0x420) == 0;
    }
  }
  LOBYTE(v16) = 15;
  if ( v114 == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x46646156u);
    v9 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memmove(PoolWithTag, BugCheckParameter4, v14);
    *(_DWORD *)(v9 + 36) = 0;
    *(_QWORD *)(v9 + 16) = -2LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    v74 = *((unsigned int *)BugCheckParameter4 + 13);
    LODWORD(v74) = v74 & 0x7FFFFFFF;
    v75 = *(_DWORD *)(v9 + 52);
    v76 = v74 | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31);
    if ( v76 == 0x7FFFFFFFDLL )
      v77 = v75 & 0x80000000 | 0x7FFFFFFD;
    else
      v77 = v75 & 0x80000000;
    *(_DWORD *)(v9 + 52) = v77;
    *(_BYTE *)(v9 + 34) = v76 != 0x7FFFFFFFDLL ? 0 : 0xF;
    *(_QWORD *)(v9 + 40) = 0LL;
    v78 = ((a3 + 1) >> 12)
        - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32));
    if ( (*(_BYTE *)(v9 + 48) & 7) == 6 && !(unsigned int)MiCreateRotateView(v9, v76, v9) )
    {
      PlaceholderStorage = -1073741670;
LABEL_106:
      MiFreeRotateView(v9);
      MiFreePlaceholderStorage(v9);
      ExFreePoolWithTag((PVOID)v9, 0);
      return (unsigned int)PlaceholderStorage;
    }
    if ( MiLocateVadEvent(BugCheckParameter4, 512LL) )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(v9);
      if ( PlaceholderStorage < 0 )
        goto LABEL_106;
      v14 = v111;
    }
    MiLockNestedVad(v9);
    MiAdvanceVadView(v9, v78);
    MiUnlockNestedVad(v9);
    Process = v116;
    if ( v14 != 64 )
    {
      v79 = v117;
      v80 = *(_DWORD *)(v9 + 64) & 0xFDFFFFFF;
      *(_QWORD *)(v9 + 120) = 0LL;
      *(_DWORD *)(v9 + 64) = v80;
      PlaceholderStorage = MiInsertSharedCommitNode(v79, Process, 0LL);
      if ( PlaceholderStorage < 0 )
        goto LABEL_106;
      v11 = 1;
    }
    PlaceholderStorage = MiInsertVadCharges(v9, Process);
    if ( PlaceholderStorage >= 0 )
    {
      v81 = *(_QWORD *)(Process + 1296);
      if ( v111 == 64 )
      {
        if ( (*(_DWORD *)(v9 + 48) & 0x20000) != 0 )
          ++*(_QWORD *)(v81 + 360);
      }
      else
      {
        if ( *(_QWORD *)(v9 + 128) )
        {
          ObfReferenceObjectWithTag(*(PVOID *)(v9 + 128), 0x746C6644u);
        }
        else if ( (*(_DWORD *)(v9 + 48) & 0x20000) != 0 )
        {
          ++*(_QWORD *)(v81 + 368);
        }
        MiUpControlAreaRefs(v9, 1LL);
      }
      goto LABEL_6;
    }
    if ( v11 )
      MiRemoveSharedCommitNode(v117, Process, 0LL);
    goto LABEL_106;
  }
LABEL_6:
  v17 = BugCheckParameter4[6] & 7;
  v123 = 0LL;
  if ( v17 <= 6 )
  {
    v18 = 74;
    if ( _bittest(&v18, v17) )
      v123 = MiResidentPagesForSpan(
               (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 32) << 32)) << 12,
               ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                                + 33) << 32)) << 12) | 0xFFF);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(Process + 880, 0LL);
  v19 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v19) = v19 & 0x7FFFFFFF;
  v20 = ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v19;
  if ( v20 == 0x7FFFFFFFDLL )
  {
    v20 = 0LL;
    goto LABEL_11;
  }
  if ( !v20 )
  {
LABEL_11:
    v21 = 0LL;
    SharedVm = MiGetSharedVm(v113);
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    goto LABEL_12;
  }
  if ( v111 == 64 )
  {
    v60 = MiGetSharedVm(v113);
    v61 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v60);
    *(_DWORD *)(v60 + 4) = 0;
    v106 = v61;
    v21 = MiComputePageCommitment(a2, a3, (__int64)BugCheckParameter4, v61, 4, 0LL);
    goto LABEL_13;
  }
  v21 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
      - MiCountSharedPages(
          BugCheckParameter4,
          ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
      + 1;
  v82 = MiGetSharedVm(v113);
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v82);
  *(_DWORD *)(v82 + 4) = 0;
LABEL_12:
  v106 = v23;
LABEL_13:
  if ( v114 == 1 )
  {
    v24 = v111;
    if ( v111 != 64 && v10 )
      MiGetProtoPteAddress(
        (__int64)BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0,
        &BugCheckParameter2);
    v25 = *((_DWORD *)BugCheckParameter4 + 13);
    v26 = v20 - v21;
    if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v25 & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      v27 = v25 & 0x80000000 | 0x7FFFFFFD;
    }
    else
    {
      v16 = v26 >> 31;
      v27 = (v26 ^ v25) & 0x7FFFFFFF ^ v25;
    }
    *((_DWORD *)BugCheckParameter4 + 13) = v27;
    *((_BYTE *)BugCheckParameter4 + 34) = v16;
    MiAdvanceVadView(
      BugCheckParameter4,
      ((a3 + 1) >> 12)
    - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)));
    if ( v24 != 64 && v10 )
      MiGetProtoPteAddress(
        (__int64)BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0,
        &v110);
    v29 = BugCheckParameter4;
    v30 = 0LL;
  }
  else
  {
    v62 = v20 - v21;
    if ( v114 == 2 )
    {
      v63 = *((_DWORD *)BugCheckParameter4 + 13);
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v63 & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        v28 = v63 & 0x80000000 | 0x7FFFFFFD;
      }
      else
      {
        v16 = v62 >> 31;
        v28 = ((unsigned int)v62 ^ v63) & 0x7FFFFFFF ^ v63;
      }
      v64 = v111;
      *((_DWORD *)BugCheckParameter4 + 13) = v28;
      *((_BYTE *)BugCheckParameter4 + 34) = v16;
      if ( v64 != 64 && v10 )
      {
        MiGetProtoPteAddress(
          (__int64)BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0,
          &v110);
        v110 = *(_QWORD *)(v110 + 16);
      }
      v65 = (a2 - 1) >> 44;
      v66 = (a2 - 1) >> 12;
      *((_DWORD *)BugCheckParameter4 + 7) = v66;
      *((_BYTE *)BugCheckParameter4 + 33) = v65;
      if ( v64 != 64 && v10 )
      {
        MiGetProtoPteAddress(
          (__int64)BugCheckParameter4,
          (unsigned int)v66 | ((unsigned __int64)(unsigned __int8)v65 << 32),
          0,
          &BugCheckParameter2);
        BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v29 = 0LL;
    }
    else
    {
      v83 = v111;
      if ( v111 != 64 && v10 )
      {
        MiGetProtoPteAddress(
          (__int64)BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0,
          &v110);
        v110 = *(_QWORD *)(v110 + 16);
      }
      v84 = a2 - 1;
      v85 = (a2 - 1) >> 12;
      v86 = (a2 - 1) >> 44;
      *((_DWORD *)BugCheckParameter4 + 7) = v85;
      *((_BYTE *)BugCheckParameter4 + 33) = v86;
      if ( v83 != 64 && v10 )
      {
        MiGetProtoPteAddress(
          (__int64)BugCheckParameter4,
          (unsigned int)v85 | ((unsigned __int64)(unsigned __int8)v86 << 32),
          0,
          &BugCheckParameter2);
        BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v120 += (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
            - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
            + 1;
      MiInsertVad(v9, v116, 1);
      v88 = *((unsigned int *)BugCheckParameter4 + 13);
      LODWORD(v88) = v88 & 0x7FFFFFFF;
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v88) == 0x7FFFFFFFDLL )
      {
        v89 = 0x7FFFFFFFDLL;
      }
      else if ( v83 == 64 )
      {
        v89 = MiComputePageCommitment(
                (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                                + 32) << 32)) << 12,
                v84,
                (__int64)BugCheckParameter4,
                v106,
                4,
                0LL);
      }
      else
      {
        LOBYTE(v87) = v106;
        MiUnlockWorkingSetExclusive(v113, v87);
        v90 = 8
            * ((*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v89 = ((__int64)(((v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v90) >> 3)
            - MiCountSharedPages(BugCheckParameter4, v90, ((v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v91 = MiGetSharedVm(v113);
        v92 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v91);
        *(_DWORD *)(v91 + 4) = 0;
        v106 = v92;
      }
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        v93 = v89 & 0x7FFFFFFF;
        v94 = v89 >> 31;
      }
      else
      {
        v94 = v89 >> 31;
        v93 = v89 & 0x7FFFFFFF;
      }
      *((_DWORD *)BugCheckParameter4 + 13) = *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000 | v93;
      *((_BYTE *)BugCheckParameter4 + 34) = v94;
      v95 = *(_DWORD *)(v9 + 52) & 0x80000000;
      if ( (((unsigned __int64)(unsigned __int8)v94 << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        v28 = v95 | v93;
      }
      else
      {
        v28 = v95 | ((_DWORD)v62 - (_DWORD)v89) & 0x7FFFFFFF;
        v94 = (v62 - v89) >> 31;
      }
      *(_DWORD *)(v9 + 52) = v28;
      v29 = (_QWORD *)v9;
      *(_BYTE *)(v9 + 34) = v94;
    }
    v30 = BugCheckParameter4;
  }
  LOBYTE(v28) = v106;
  MiUnlockWorkingSetExclusive(v113, v28);
  MiDeleteVirtualAddresses(a2, a3, v115, v124);
  v31 = MiGetSharedVm(v113);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v31);
  *(_DWORD *)(v31 + 4) = 0;
  v33 = v113;
  if ( BugCheckParameter2 )
    MiDrainSystemAccessLog(v113);
  LOBYTE(v32) = v106;
  MiCaptureDeleteHierarchy(a2, a3, v32, v118);
  LOBYTE(v34) = v106;
  MiUnlockWorkingSetExclusive(v33, v34);
  if ( !v30 )
  {
    v30 = (_QWORD *)*BugCheckParameter4;
    v35 = BugCheckParameter4;
    if ( *BugCheckParameter4 )
    {
      for ( i = (_QWORD *)v30[1]; i; i = (_QWORD *)i[1] )
        v30 = i;
    }
    else
    {
      for ( j = BugCheckParameter4[2]; ; j = v30[2] )
      {
        v30 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v30 || (_QWORD *)v30[1] == v35 )
          break;
        v35 = v30;
      }
    }
  }
  if ( !v29 )
  {
    v29 = (_QWORD *)BugCheckParameter4[1];
    v67 = BugCheckParameter4;
    if ( v29 )
    {
      v69 = (_QWORD *)*v29;
      if ( *v29 )
      {
        do
        {
          v29 = v69;
          v69 = (_QWORD *)*v69;
        }
        while ( v69 );
      }
    }
    else
    {
      for ( k = BugCheckParameter4[2]; ; k = v29[2] )
      {
        v29 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v29 || (_QWORD *)*v29 == v67 )
          break;
        v67 = v29;
      }
    }
  }
  if ( !v122 )
    MiClearVadBits(a2, a3, v30, v29);
  v37 = v116;
  MiReturnPageTablePageCommitment(a2, a3, v116, (_DWORD)v30, (__int64)v29, (__int64)BugCheckParameter4, (__int64)v118);
  v41 = v37 + 880;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v37 + 880), v38, v39, v40);
  v112 = 0;
  v42 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v37 + 880) == 1 )
    SessionId = MmGetSessionIdEx(v42->ApcState.Process);
  else
    SessionId = -1;
  --v42->SpecialApcDisable;
  v44 = ++v42->AbAllocationRegionCount;
  v45 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
  v46 = v41 & 0x7FFFFFFFFFFFFFFCLL;
  v47 = !_BitScanReverse((unsigned int *)&v48, v45);
  v119 = v48;
  if ( v47 )
  {
LABEL_66:
    if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v42, v41, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v49 = 1 << v48;
      v50 = v48;
      v51 = &v42->LockEntries[v50];
      v45 &= ~v49;
      if ( (v51->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v51->LockState.0 & 1) == 0
        && (*(_QWORD *)&v51->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v46
        && v51->LockState.SessionId == SessionId )
      {
        v51->AcquiredByte &= ~1u;
        if ( v51->LockState.0 )
          break;
      }
      v47 = !_BitScanReverse((unsigned int *)&v48, v45);
      v119 = v48;
      if ( v47 )
        goto LABEL_65;
    }
    if ( !v51 )
    {
LABEL_65:
      v41 = v37 + 880;
      goto LABEL_66;
    }
    v51->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v51->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v42->LockEntries[v50].TreeNode);
    v112 = 0;
    v112 = v51->BoostBitmap.AllFields & 0x1FFFF;
    v51->BoostBitmap.AllFields &= 0xFFFE0000;
    v51->ThreadLocalFlags &= ~1u;
    v51->LockState.0 = 0LL;
    v52 = ((char *)v51 - (char *)v42 - 800) / 96;
    if ( v44 == 1 )
      v42->AbEntrySummary |= 1 << v52;
    else
      _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v52);
  }
  --v42->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v42, v37 + 880, &v112);
  v47 = v42->SpecialApcDisable++ == -1;
  if ( v47 && ($005F0E83B22994B61E86C72E0CE43C71 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  v53 = v122;
  if ( v122 )
  {
    MiReInsertPlaceholderVad(v122);
    MiUnlockNestedVad(v53);
  }
  if ( v9 && (*(_DWORD *)(v9 + 48) & 0x4000) == 0 )
  {
    v96 = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(v9 + 112) = v37 | 1;
    MiManageSubsectionView(v96, v9 + 96, 3LL);
  }
  v54 = v21 - v124[2];
  v55 = v54 - v124[1];
  if ( v54 )
    MiReturnFullProcessCharges(v37, v54);
  if ( v55 )
    MiReturnCommit(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v37 + 1454)), v55);
  if ( v111 != 64 )
    PsReturnProcessPagedPoolQuota(v37, 8 * v120);
  v56 = v123;
  if ( v123 )
  {
    v97 = MiResidentPagesForSpan(
            (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)) << 12,
            ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32)) << 12) | 0xFFF);
    if ( v97 < v56 )
    {
      v98 = v56 - v97;
      v99 = *(unsigned __int16 *)(v37 + 1454);
      v100 = *(_QWORD *)(qword_1403CBD88 + 8 * v99);
      if ( (ULONG_PTR *)v100 == &MiSystemPartition )
        MiReturnResidentAvailable(v98, v99);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 7104), v98);
    }
  }
  MiFinishVadDeletion(BugCheckParameter4);
  v57 = BugCheckParameter2;
  if ( BugCheckParameter2 && BugCheckParameter2 != v110 )
  {
    v101 = v117;
    v102 = 0LL;
    v103 = *(_QWORD *)(v117 + 64) != 0LL;
    v104 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v117 + 72));
    do
    {
      v105 = MiDecrementSubsections(v57);
      v57 = *(_QWORD *)(v57 + 16);
      v102 += v105;
    }
    while ( v57 != v110 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v101 + 72));
    __writecr8(v104);
    if ( v102 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v101 + 60) & 0x3FF)),
        v103,
        v102);
  }
  return 0LL;
}
