/*
 * XREFs of MiDeleteVad @ 0x1400D94D0
 * Callers:
 *     MiFreeVadRange @ 0x140016C10 (MiFreeVadRange.c)
 *     MiCleanVad @ 0x14047AE9C (MiCleanVad.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406BF284 (MiDeleteAllPartialCloneVads.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     MiLockAddressSpaceToo @ 0x14003FD5C (MiLockAddressSpaceToo.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     MiClearVadBits @ 0x1400DB1D0 (MiClearVadBits.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiDereferenceExtendInfo @ 0x14013109C (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14013645C (MiDereferenceControlArea.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     MiAweViewRemover @ 0x1406B85F0 (MiAweViewRemover.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406B8B58 (MiRemoveUserPhysicalPagesVad.c)
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiDeleteVad(__int64 a1, int a2)
{
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rdx
  __int64 v6; // r13
  BOOL v7; // r8d
  _KPROCESS *Process; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // ecx
  void *v12; // rcx
  ULONG_PTR v13; // rdi
  LONG *p_ProfileListHead; // rbx
  __int64 CurrentIrql; // rcx
  signed __int32 v16; // edx
  unsigned __int64 *v17; // rcx
  struct _KTHREAD *v18; // rsi
  ULONG_PTR SessionId; // r9
  BOOL v20; // r12d
  __int64 v21; // r8
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _KLOCK_ENTRY *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int16 v30; // ax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // r14d
  LONG *v37; // rdi
  _QWORD *v38; // rcx
  int v39; // ecx
  struct _KTHREAD *v40; // rdi
  _KPROCESS *v41; // rax
  ULONG_PTR v42; // r12
  unsigned int AbEntrySummary; // ecx
  __int64 v44; // rax
  _KLOCK_ENTRY *v45; // r14
  int v46; // eax
  __int16 v47; // ax
  struct _KTHREAD *v48; // rdi
  unsigned int v49; // ecx
  __int64 v50; // rax
  int v51; // eax
  __int16 v52; // ax
  unsigned __int64 v53; // rcx
  int *v54; // r12
  int v55; // edx
  unsigned __int64 v56; // rcx
  unsigned __int64 *v57; // r8
  unsigned __int64 v58; // rsi
  char *v59; // rdi
  unsigned int v60; // r14d
  __int64 v61; // rax
  __int64 v62; // r10
  _DWORD *v63; // r15
  PVOID v64; // rax
  unsigned __int64 j; // r14
  _QWORD *k; // rdi
  PVOID v67; // rax
  _QWORD *v68; // rax
  _KPROCESS *v69; // r12
  _KPROCESS *v70; // rcx
  int v71; // esi
  int v72; // eax
  unsigned __int16 *v73; // r12
  LONG *v74; // rcx
  volatile signed __int64 *v75; // r10
  struct _KTHREAD *v76; // r14
  ULONG_PTR v77; // r10
  ULONG_PTR v78; // r9
  BOOL v79; // r12d
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int16 v84; // ax
  struct _KTHREAD *v85; // rcx
  __int16 v86; // ax
  _KPROCESS *v87; // rdi
  char *v88; // r12
  __int64 v89; // rdi
  struct _KTHREAD *v90; // rax
  ULONG_PTR v91; // r14
  __int64 v92; // rcx
  char **v93; // rax
  struct _KTHREAD *v94; // r13
  __int64 v95; // rcx
  struct _KTHREAD *v96; // rdi
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v98; // r9
  int v99; // r12d
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int16 v104; // ax
  __int16 v105; // ax
  __int64 result; // rax
  __int64 v107; // rbx
  __int64 v108; // rdi
  volatile signed __int32 *v109; // r14
  BOOL v110; // r12d
  unsigned __int8 v111; // r15
  signed __int32 v112; // edx
  __int64 v113; // r14
  unsigned int v114; // eax
  struct _KTHREAD *v115; // rbx
  __int64 v116; // rdx
  unsigned int v117; // eax
  unsigned __int64 i; // rax
  int v119; // ecx
  __int64 v120; // r12
  __int64 v121; // r14
  LONG *SharedVm; // rdi
  signed __int32 v123; // eax
  __int64 *v124; // rax
  signed __int32 v125; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v127; // al
  int v128; // [rsp+40h] [rbp-C0h]
  int v130; // [rsp+44h] [rbp-BCh]
  volatile signed __int64 *v131; // [rsp+48h] [rbp-B8h]
  __int64 v132; // [rsp+50h] [rbp-B0h]
  int v133; // [rsp+58h] [rbp-A8h] BYREF
  int v134; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v135; // [rsp+60h] [rbp-A0h]
  int v136; // [rsp+64h] [rbp-9Ch] BYREF
  int v137; // [rsp+68h] [rbp-98h]
  _KPROCESS *v138; // [rsp+70h] [rbp-90h]
  unsigned __int64 v139; // [rsp+78h] [rbp-88h]
  int v140; // [rsp+80h] [rbp-80h] BYREF
  int v141; // [rsp+84h] [rbp-7Ch] BYREF
  int v142; // [rsp+88h] [rbp-78h]
  int v143; // [rsp+8Ch] [rbp-74h]
  int v144; // [rsp+90h] [rbp-70h]
  int v145; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v146; // [rsp+98h] [rbp-68h]
  __int64 v147; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v148; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v149; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v150; // [rsp+B8h] [rbp-48h]
  int v151; // [rsp+C0h] [rbp-40h]
  int v152; // [rsp+C4h] [rbp-3Ch]
  int v153; // [rsp+C8h] [rbp-38h] BYREF
  int v154; // [rsp+CCh] [rbp-34h] BYREF
  int v155; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *v156; // [rsp+D8h] [rbp-28h]
  __int64 v157; // [rsp+E0h] [rbp-20h]
  __int64 v158; // [rsp+E8h] [rbp-18h]
  int v159; // [rsp+F0h] [rbp-10h]
  PVOID P; // [rsp+F8h] [rbp-8h]
  int v161; // [rsp+100h] [rbp+0h]
  _QWORD v162[4]; // [rsp+108h] [rbp+8h] BYREF
  char v163; // [rsp+128h] [rbp+28h] BYREF
  char v164; // [rsp+138h] [rbp+38h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  P = (PVOID)a1;
  v3 = 32;
  memset(v162, 0, sizeof(v162));
  CurrentThread = KeGetCurrentThread();
  v5 = 1LL;
  v6 = 0LL;
  LOBYTE(v7) = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = *(unsigned int *)(a1 + 28);
  v139 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v156 = CurrentThread;
  v138 = Process;
  v150 = (v10 << 12) | 0xFFF;
  v11 = *(_DWORD *)(a1 + 48);
  v147 = 0LL;
  v148 = 0LL;
  v135 = v7;
  LODWORD(v158) = 0;
  v143 = 0;
  v142 = 0;
  v128 = 0;
  v137 = 0;
  v144 = 0;
  v132 = 0LL;
  if ( (v11 & 0x8000) != 0 )
  {
    if ( (v11 & 7) == 5 )
      LOBYTE(v135) = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
      v135 = (v11 & 7) == 2;
    v12 = *(void **)(a1 + 128);
    if ( v12 )
      ObfDereferenceObject(v12);
  }
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x40000) != 0 )
    {
      MiDeleteEnclavePages(a1, v5);
    }
    else
    {
      MiAweViewRemover(Process, a1);
      MiRemoveUserPhysicalPagesVad(a1);
    }
  }
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v13 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  v131 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
    p_ProfileListHead = &dword_14036D4C0;
  else
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  CurrentIrql = KeGetCurrentIrql();
  v146 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v140 = 0;
    if ( _interlockedbittestandset(p_ProfileListHead, 0x1Fu) )
      v140 = ExpWaitForSpinLockExclusiveAndAcquire(p_ProfileListHead, CurrentIrql);
    v16 = *p_ProfileListHead;
    while ( (v16 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v16 & 0x40000000) == 0 )
      {
        v123 = _InterlockedCompareExchange(p_ProfileListHead, v16 | 0x40000000, v16);
        v23 = v16 == v123;
        v16 = v123;
        if ( !v23 )
          continue;
      }
      KeYieldProcessorEx(&v140);
      v16 = *p_ProfileListHead;
    }
  }
  p_ProfileListHead[1] = 0;
  *(_DWORD *)(a1 + 48) |= 0x80000u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
  v133 = 0;
  v17 = &Process[1].Affinity.Bitmap[8];
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v18->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v18->SpecialApcDisable;
  v20 = ++v18->AbAllocationRegionCount == 1;
  v21 = v13 & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v22) = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  v23 = !_BitScanReverse((unsigned int *)&v24, v22);
  v152 = v24;
  if ( v23 )
  {
LABEL_207:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v13, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v25 = 1 << v24;
      v26 = v24;
      v27 = &v18->LockEntries[v26];
      v22 = ~v25 & (unsigned int)v22;
      if ( (v27->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v27->LockState.0 & 1) == 0
        && (*(_QWORD *)&v27->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v21
        && v27->LockState.SessionId == (_DWORD)SessionId )
      {
        v27->AcquiredByte &= ~1u;
        if ( v27->LockState.0 )
          break;
      }
      v23 = !_BitScanReverse((unsigned int *)&v24, v22);
      v152 = v24;
      if ( v23 )
        goto LABEL_206;
    }
    if ( !v27 )
    {
LABEL_206:
      v13 = (ULONG_PTR)v131;
      goto LABEL_207;
    }
    v27->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v27->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v18->LockEntries[v26].TreeNode, v22);
    v133 = 0;
    v133 = v27->BoostBitmap.AllFields & 0x1FFFF;
    v27->BoostBitmap.AllFields &= 0xFFFE0000;
    v27->ThreadLocalFlags &= ~1u;
    v27->LockState.0 = 0LL;
    v28 = (unsigned __int128)(((char *)v27 - (char *)v18 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v13 = (ULONG_PTR)v131;
    v29 = ((unsigned __int64)v28 >> 63) + (v28 >> 4);
    if ( v20 )
      v18->AbEntrySummary |= 1 << v29;
    else
      _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v29);
  }
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v18, v13, &v133);
  v30 = v18->SpecialApcDisable + 1;
  v18->SpecialApcDisable = v30;
  if ( !v30 && ($69CD3F157F9F39B6F7113F2231989901 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  v31 = *(_DWORD *)(a1 + 48);
  v32 = v31 & 7;
  if ( v32 == 3 )
  {
    v3 = 16;
  }
  else if ( v32 == 1 )
  {
    v124 = *(__int64 **)(a1 + 72);
    if ( v124 )
      v132 = *v124;
  }
  else if ( (v31 & 0x8000) != 0 )
  {
    v3 = 8;
    if ( v32 != 6 )
      v3 = 0;
  }
  else
  {
    v33 = ((a2 >> 31) & 1) + 2;
    v3 = v33;
    if ( (a2 & 1) != 0 )
      v3 = v33 | 4;
  }
  MiDeleteVirtualAddresses(v139, v150, v3, (unsigned __int8)v146, (__int64)v162);
  if ( (v3 & 2) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 48);
    v35 = **(_QWORD **)(a1 + 72);
    v132 = v35;
    if ( (v34 & 7) == 2 )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
      {
        v119 = 1;
        v128 = 1;
      }
      else
      {
        v119 = 0;
      }
      v137 = v119;
      v36 = v119;
      if ( v119 )
        goto LABEL_50;
    }
    else
    {
      if ( *(_QWORD *)(v35 + 64) )
      {
        if ( (((v34 & 0xF8) - 32) & 0xFFFFFFEF) == 0 )
          _InterlockedDecrement((volatile signed __int32 *)(v35 + 92));
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
          1,
          &v147);
        if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
          v144 = 1;
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
          1,
          &v148);
      }
      v36 = 0;
    }
    if ( (*(_BYTE *)(a1 + 48) & 7) != 7 )
    {
      if ( ((__int64)v138[2].Header.WaitListHead.Blink & 7) == 2 )
        v37 = &dword_14036D4C0;
      else
        v37 = (LONG *)&v138[2].ProfileListHead;
      v38 = (_QWORD *)*((_QWORD *)v37 + 5);
      if ( v38 )
      {
        MiEmptyPageAccessLog(v38);
        *((_QWORD *)v37 + 5) = 0LL;
      }
      v39 = *(_DWORD *)(a1 + 48);
      if ( (v39 & 7) == 2 )
      {
        if ( (*(_DWORD *)(v132 + 56) & 0x4000000) != 0 )
          v142 = 1;
        v143 = 1;
      }
      else if ( (v39 & 0x8000) == 0 && !*(_QWORD *)(v132 + 64) )
      {
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
          1,
          &v147);
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
          1,
          &v148);
      }
    }
    v158 = *(_QWORD *)(a1 + 120) >> 63;
    v128 = 1;
    v137 = v36;
  }
LABEL_50:
  v153 = 0;
  v40 = KeGetCurrentThread();
  v149 = (__int64)v40;
  v41 = v40->ApcState.Process;
  v130 = 0;
  --v40->SpecialApcDisable;
  v157 = (__int64)v41;
  v42 = (ULONG_PTR)&v41[1].Affinity.Bitmap[7];
  if ( ++v40->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v40->116 + 1, 0xFu);
    v45 = 0LL;
    goto LABEL_58;
  }
  if ( !v40->AbEntrySummary )
  {
    if ( !v40->AbOrphanedEntrySummary )
    {
      v45 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v40, &v41[1].Affinity.Bitmap[7]);
      goto LABEL_53;
    }
    AbOrphanedEntrySummary = v40->AbOrphanedEntrySummary;
    v40->AbOrphanedEntrySummary = 0;
    v40->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v40->AbEntrySummary;
  _BitScanForward((unsigned int *)&v44, AbEntrySummary);
  v159 = v44;
  v40->AbEntrySummary = AbEntrySummary & ~(1 << v44);
  v45 = &v40->LockEntries[v44];
LABEL_53:
  if ( v45 )
  {
    if ( v42 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((v42 >> 39) & 0x1FF) + 6400) == 1 )
      v46 = MmGetSessionIdEx(v40->ApcState.Process);
    else
      v46 = -1;
    v45->LockState.SessionId = v46;
    v45->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v42 & 0x7FFFFFFFFFFFFFFCLL);
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v40->116 + 1, 0xFu);
  }
LABEL_58:
  --v40->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v40, v42, &v153);
  v47 = v40->SpecialApcDisable + 1;
  v40->SpecialApcDisable = v47;
  if ( !v47 && ($69CD3F157F9F39B6F7113F2231989901 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v42, 0LL) )
    goto LABEL_212;
  if ( v45 )
    v45->AcquiredByte |= 1u;
  v154 = 0;
  v42 = v157 + 880;
  v130 = 1;
  *(_BYTE *)(v149 + 1744) |= 1u;
  v48 = KeGetCurrentThread();
  --v48->SpecialApcDisable;
  if ( ++v48->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v48->116 + 1, 0xFu);
    v45 = 0LL;
    goto LABEL_70;
  }
  if ( !v48->AbEntrySummary )
  {
    if ( !v48->AbOrphanedEntrySummary )
    {
      v45 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v48, v42);
      goto LABEL_65;
    }
    v127 = v48->AbOrphanedEntrySummary;
    v48->AbOrphanedEntrySummary = 0;
    v48->AbEntrySummary |= v127;
  }
  v49 = v48->AbEntrySummary;
  _BitScanForward((unsigned int *)&v50, v49);
  v161 = v50;
  v48->AbEntrySummary = v49 & ~(1 << v50);
  v45 = &v48->LockEntries[v50];
LABEL_65:
  if ( v45 )
  {
    if ( v42 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((v42 >> 39) & 0x1FF) + 6400) == 1 )
      v51 = MmGetSessionIdEx(v48->ApcState.Process);
    else
      v51 = -1;
    v45->LockState.SessionId = v51;
    v45->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v42 & 0x7FFFFFFFFFFFFFFCLL);
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v48->116 + 1, 0xFu);
  }
LABEL_70:
  --v48->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v48, v42, &v154);
  v52 = v48->SpecialApcDisable + 1;
  v48->SpecialApcDisable = v52;
  if ( !v52 && ($69CD3F157F9F39B6F7113F2231989901 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v42, 0LL) )
  {
LABEL_212:
    if ( v45 )
      KeAbPostReleaseEx(v42, v45);
    v120 = v157;
    MiUnlockWorkingSetExclusive(v157 + 1280, v146);
    v121 = v149;
    KiLeaveGuardedRegionUnsafe(v149);
    if ( !v130 )
    {
      KiLeaveGuardedRegionUnsafe(v121);
      MiLockAddressSpaceToo(v120, a1);
    }
    --*(_WORD *)(v121 + 486);
    ExAcquirePushLockExclusiveEx(v120 + 880, 0LL);
    SharedVm = MiGetSharedVm(v120 + 1280);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    goto LABEL_74;
  }
  if ( v45 )
    v45->AcquiredByte |= 1u;
LABEL_74:
  v53 = v139;
  v54 = &v141;
  v141 = 0;
  v149 = 2LL;
  do
  {
    v55 = 3;
    v56 = ((v53 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v57 = (unsigned __int64 *)&v164;
    do
    {
      *v57 = v56;
      v56 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v57;
      --v55;
    }
    while ( v55 );
    v58 = v150;
    v59 = &v163;
    v60 = 0;
    while ( 1 )
    {
      v61 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v59);
      if ( !v61 )
        break;
      if ( (v61 & 1) == 0 && v60 != 2 )
        MiMakeSystemAddressValid(v62 << 25 >> 16, 0LL, 0, v146, 1);
      ++v60;
      v59 += 8;
      if ( v60 >= 3 )
        goto LABEL_81;
    }
    *(_BYTE *)v54 = 1 << (2 - v60);
LABEL_81:
    v54 = (int *)((char *)v54 + 1);
    v53 = v58;
    --v149;
  }
  while ( v149 );
  v63 = P;
  v64 = P;
  j = *(_QWORD *)P;
  if ( *(_QWORD *)P )
  {
    for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
      j = i;
  }
  else
  {
    for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(PVOID *)(j + 8) == v64 )
        break;
      v64 = (PVOID)j;
    }
  }
  k = (_QWORD *)*((_QWORD *)P + 1);
  v67 = P;
  if ( k )
  {
    v68 = (_QWORD *)*k;
    if ( *k )
    {
      do
      {
        k = v68;
        v68 = (_QWORD *)*v68;
      }
      while ( v68 );
    }
  }
  else
  {
    for ( k = (_QWORD *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( (PVOID)*k == v67 )
        break;
      v67 = k;
    }
  }
  v69 = v138;
  RtlAvlRemoveNode(&v138[2].Affinity.Bitmap[4], P);
  v70 = v69;
  v71 = 8;
  if ( (_DWORD *)v69[2].Affinity.Bitmap[5] == v63 )
    v69[2].Affinity.Bitmap[5] = v69[2].Affinity.Bitmap[4];
  --v69[2].Affinity.Bitmap[6];
  v72 = v63[12] & 7;
  *((_QWORD *)v63 + 2) = -2LL;
  if ( v72 == 5 || v72 == 2 && (v63[16] & 0x1000000) != 0 )
    --HIDWORD(v69[2].ReadyListHead.Flink);
  v73 = &v69[1].IdealNode[12];
  MiPreUnlockWorkingSetExclusive((__int64)&v70[1].IdealNode[12], v146);
  if ( (v73[96] & 7) == 2 )
    v74 = &dword_14036D4C0;
  else
    v74 = (LONG *)(v73 + 100);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v74, retaddr);
  else
    *v74 = 0;
  __writecr8((unsigned __int8)v146);
  MiClearVadBits(v139, v150, j, k);
  MiReturnPageTablePageCommitment(v139, v150, (_DWORD)v138, j, (__int64)k, (__int64)v63, (__int64)&v141);
  v75 = v131;
  if ( (_InterlockedExchangeAdd64(v131, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
  {
    ExfTryToWakePushLock(v131);
    v75 = v131;
  }
  v134 = 0;
  v76 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v75) == 1 )
  {
    v117 = MmGetSessionIdEx(v76->ApcState.Process);
    v77 = (ULONG_PTR)v131;
    v78 = v117;
  }
  else
  {
    v78 = 0xFFFFFFFFLL;
  }
  --v76->SpecialApcDisable;
  v79 = ++v76->AbAllocationRegionCount == 1;
  LODWORD(v80) = ((char)v76->AbEntrySummary | (char)v76->AbOrphanedEntrySummary) ^ 0x3F;
  v23 = !_BitScanReverse((unsigned int *)&v81, v80);
  v155 = v81;
  if ( v23 )
    goto LABEL_210;
  while ( 1 )
  {
    v82 = (__int64)&v76->LockEntries[v81];
    v80 = ~(1 << v81) & (unsigned int)v80;
    if ( (*(_BYTE *)(v82 + 26) & 1) != 0
      && (*(_DWORD *)(v82 + 32) & 1) == 0
      && (*(_QWORD *)(v82 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v77 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v82 + 40) == (_DWORD)v78 )
    {
      *(_BYTE *)(v82 + 26) &= ~1u;
      if ( *(_QWORD *)(v82 + 32) )
        break;
    }
    v23 = !_BitScanReverse((unsigned int *)&v81, v80);
    v155 = v81;
    if ( v23 )
      goto LABEL_210;
  }
  if ( !v82 )
  {
LABEL_210:
    if ( (*((_DWORD *)&v76->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v76, v77, v78, 0LL);
  }
  else
  {
    *(_BYTE *)(v82 + 32) |= 2u;
    if ( *(__int64 *)(v82 + 32) < 0 )
    {
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v82, v80);
      v77 = (ULONG_PTR)v131;
    }
    v134 = 0;
    v134 = *(_DWORD *)(v82 + 88) & 0x1FFFF;
    *(_DWORD *)(v82 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v82 + 25) &= ~1u;
    *(_QWORD *)(v82 + 32) = 0LL;
    v83 = (v82 - (__int64)v76 - 800) / 96;
    if ( v79 )
      v76->AbEntrySummary |= 1 << v83;
    else
      _InterlockedOr8((volatile signed __int8 *)&v76->AbOrphanedEntrySummary, 1 << v83);
  }
  --v76->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v76, v77, &v134);
  v84 = v76->SpecialApcDisable + 1;
  v76->SpecialApcDisable = v84;
  if ( !v84 && ($69CD3F157F9F39B6F7113F2231989901 *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
    KiCheckForKernelApcDelivery();
  v85 = v156;
  v86 = v156->SpecialApcDisable + 1;
  v156->SpecialApcDisable = v86;
  if ( !v86 && ($69CD3F157F9F39B6F7113F2231989901 *)v85->ApcState.ApcListHead[0].Flink != &v85->152 )
    KiCheckForKernelApcDelivery();
  v87 = v138;
  *((_QWORD *)v63 + 1) = v162[1];
  *(_QWORD *)v63 = v162[2];
  if ( v135 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v139,
      v87,
      26LL,
      ((unsigned int)v63[7] | ((unsigned __int64)*((unsigned __int8 *)v63 + 33) << 32))
    - ((unsigned int)v63[6] | ((unsigned __int64)*((unsigned __int8 *)v63 + 32) << 32))
    + 1);
  if ( (_DWORD)v158 == 1 )
    MiDereferenceExtendInfo(v63, v132);
  if ( v128 == 1 )
  {
    if ( v142 == 1 )
    {
      MmGetSessionIdEx(v87);
      MiDereferencePerSessionProtos(v132);
    }
    if ( v143 && (MiControlAreaRequiresCharge() & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v132);
    MiRemoveSharedCommitNode(v132, v87, 0LL);
    v88 = (char *)(v63 + 24);
    v89 = **((_QWORD **)v63 + 9);
    v90 = KeGetCurrentThread();
    --v90->SpecialApcDisable;
    v91 = v89 + 104;
    ExAcquirePushLockExclusiveEx(v89 + 104, 0LL);
    if ( (*(_DWORD *)(v89 + 56) & 0x400) == 0 )
    {
      v92 = *(_QWORD *)v88;
      v93 = (char **)*((_QWORD *)v63 + 13);
      if ( *(char **)(*(_QWORD *)v88 + 8LL) != v88 || *v93 != v88 )
        __fastfail(3u);
      *v93 = (char *)v92;
      *(_QWORD *)(v92 + 8) = v93;
    }
    v94 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v89 + 104);
    v95 = v89 + 104;
    v136 = 0;
    v96 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v95) == 1 )
    {
      v98 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
      BugCheckParameter4 = 0LL;
    }
    else
    {
      v98 = 0xFFFFFFFFLL;
    }
    --v96->SpecialApcDisable;
    ++v96->AbAllocationRegionCount;
    v99 = BugCheckParameter4;
    if ( v96->AbAllocationRegionCount == 1 )
      v99 = 1;
    LODWORD(v100) = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
    v23 = !_BitScanReverse((unsigned int *)&v101, v100);
    v151 = v101;
    if ( v23 )
      goto LABEL_220;
    while ( 1 )
    {
      v102 = (__int64)&v96->LockEntries[v101];
      v100 = ~(1 << v101) & (unsigned int)v100;
      if ( (*(_BYTE *)(v102 + 26) & 1) != 0
        && (*(_DWORD *)(v102 + 32) & 1) == 0
        && (*(_QWORD *)(v102 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v91 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v102 + 40) == (_DWORD)v98 )
      {
        *(_BYTE *)(v102 + 26) &= ~1u;
        if ( *(_QWORD *)(v102 + 32) )
          break;
      }
      v23 = !_BitScanReverse((unsigned int *)&v101, v100);
      v151 = v101;
      if ( v23 )
        goto LABEL_220;
    }
    if ( !v102 )
    {
LABEL_220:
      if ( (*((_DWORD *)&v96->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v96, v91, v98, BugCheckParameter4);
    }
    else
    {
      *(_BYTE *)(v102 + 32) |= 2u;
      if ( *(__int64 *)(v102 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v102, v100);
        BugCheckParameter4 = 0LL;
      }
      v136 = BugCheckParameter4;
      v136 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
      *(_DWORD *)(v102 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v102 + 25) &= ~1u;
      *(_QWORD *)(v102 + 32) = BugCheckParameter4;
      v103 = (v102 - (__int64)v96 - 800) / 96;
      if ( v99 )
        v96->AbEntrySummary |= 1 << v103;
      else
        _InterlockedOr8((volatile signed __int8 *)&v96->AbOrphanedEntrySummary, 1 << v103);
    }
    --v96->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v96, v91, &v136);
    v104 = v96->SpecialApcDisable + 1;
    v96->SpecialApcDisable = v104;
    if ( !v104 && ($69CD3F157F9F39B6F7113F2231989901 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
      KiCheckForKernelApcDelivery();
    v105 = v94->SpecialApcDisable + 1;
    v94->SpecialApcDisable = v105;
    if ( !v105 && ($69CD3F157F9F39B6F7113F2231989901 *)v94->ApcState.ApcListHead[0].Flink != &v94->152 )
      KiCheckForKernelApcDelivery();
    v6 = 0LL;
  }
  result = MiFinishVadDeletion(v63);
  if ( v132 )
  {
    if ( v137 == 1 )
    {
      return MiDereferenceControlArea(v132);
    }
    else
    {
      v107 = v147;
      v108 = v148;
      if ( v147 && v144 )
        MiDecrementLargeSubsections(v147, v148);
      v23 = *(_QWORD *)(v132 + 64) == 0LL;
      v109 = (volatile signed __int32 *)(v132 + 72);
      v156 = 0LL;
      v110 = !v23;
      v111 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v109, v111);
      }
      else
      {
        v145 = 0;
        if ( _interlockedbittestandset(v109, 0x1Fu) )
          v145 = ExpWaitForSpinLockExclusiveAndAcquire(v109, v111);
        v112 = *v109;
        while ( (v112 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v112 & 0x40000000) == 0 )
          {
            v125 = _InterlockedCompareExchange(v109, v112 | 0x40000000, v112);
            v23 = v112 == v125;
            v112 = v125;
            if ( !v23 )
              continue;
          }
          KeYieldProcessorEx(&v145);
          v112 = *v109;
        }
        v108 = v148;
        v107 = v147;
      }
      if ( v107 )
      {
        v113 = *(_QWORD *)(*(_QWORD *)v107 + 64LL);
        do
        {
          if ( *(_QWORD *)(v107 + 8) )
          {
            v6 += MiDecrementSubsectionViewCount((_QWORD *)v107, v71);
            if ( v113 )
            {
              if ( !*(_QWORD *)(v107 + 96) && (*(_BYTE *)(v107 + 34) & 1) == 0 )
                v6 += MiInsertUnusedSubsection((_DWORD *)v107, v116);
            }
          }
          if ( v107 == v108 )
            break;
          v107 = *(_QWORD *)(v107 + 16);
          v114 = v71 & 0xFFFFFFF7;
          if ( v113 )
            v114 = v71;
          v71 = v114;
        }
        while ( v107 );
      }
      --*(_QWORD *)(v132 + 40);
      --*(_QWORD *)(v132 + 48);
      if ( v6 )
        v115 = *(struct _KTHREAD **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v132 + 60) & 0x3FF));
      else
        v115 = v156;
      result = MiCheckControlArea(v132, v111);
      if ( v6 )
        return MiReturnCrossPartitionSectionCharges(v115, v110, v6);
    }
  }
  return result;
}
