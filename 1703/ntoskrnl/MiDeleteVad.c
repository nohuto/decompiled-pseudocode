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
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int16 v85; // ax
  struct _KTHREAD *v86; // rcx
  __int16 v87; // ax
  _KPROCESS *v88; // rdi
  char *v89; // r12
  __int64 v90; // rdi
  struct _KTHREAD *v91; // rax
  ULONG_PTR v92; // r14
  __int64 v93; // rcx
  char **v94; // rax
  struct _KTHREAD *v95; // r13
  __int64 v96; // rcx
  struct _KTHREAD *v97; // rdi
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v99; // r9
  int v100; // r12d
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rdx
  __int16 v106; // ax
  __int16 v107; // ax
  __int64 result; // rax
  __int64 v109; // rbx
  __int64 v110; // rdi
  volatile signed __int32 *v111; // r14
  BOOL v112; // r12d
  unsigned __int8 v113; // r15
  signed __int32 v114; // edx
  __int64 v115; // r14
  unsigned int v116; // eax
  struct _KTHREAD *v117; // rbx
  __int64 v118; // rdx
  unsigned int v119; // eax
  unsigned __int64 i; // rax
  int v121; // ecx
  __int64 v122; // r12
  __int64 v123; // r14
  LONG *SharedVm; // rdi
  signed __int32 v125; // eax
  __int64 *v126; // rax
  signed __int32 v127; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v129; // al
  int v130; // [rsp+40h] [rbp-C0h]
  int v132; // [rsp+44h] [rbp-BCh]
  volatile signed __int64 *v133; // [rsp+48h] [rbp-B8h]
  __int64 v134; // [rsp+50h] [rbp-B0h]
  int v135; // [rsp+58h] [rbp-A8h] BYREF
  int v136; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v137; // [rsp+60h] [rbp-A0h]
  int v138; // [rsp+64h] [rbp-9Ch] BYREF
  int v139; // [rsp+68h] [rbp-98h]
  _KPROCESS *v140; // [rsp+70h] [rbp-90h]
  unsigned __int64 v141; // [rsp+78h] [rbp-88h]
  int v142; // [rsp+80h] [rbp-80h] BYREF
  int v143; // [rsp+84h] [rbp-7Ch] BYREF
  int v144; // [rsp+88h] [rbp-78h]
  int v145; // [rsp+8Ch] [rbp-74h]
  int v146; // [rsp+90h] [rbp-70h]
  int v147; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v148; // [rsp+98h] [rbp-68h]
  __int64 v149; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v150; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v151; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v152; // [rsp+B8h] [rbp-48h]
  int v153; // [rsp+C0h] [rbp-40h]
  int v154; // [rsp+C4h] [rbp-3Ch]
  int v155; // [rsp+C8h] [rbp-38h] BYREF
  int v156; // [rsp+CCh] [rbp-34h] BYREF
  int v157; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *v158; // [rsp+D8h] [rbp-28h]
  __int64 v159; // [rsp+E0h] [rbp-20h]
  __int64 v160; // [rsp+E8h] [rbp-18h]
  int v161; // [rsp+F0h] [rbp-10h]
  PVOID P; // [rsp+F8h] [rbp-8h]
  int v163; // [rsp+100h] [rbp+0h]
  _QWORD v164[4]; // [rsp+108h] [rbp+8h] BYREF
  char v165; // [rsp+128h] [rbp+28h] BYREF
  char v166; // [rsp+138h] [rbp+38h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  P = (PVOID)a1;
  v3 = 32;
  memset(v164, 0, sizeof(v164));
  CurrentThread = KeGetCurrentThread();
  v5 = 1LL;
  v6 = 0LL;
  LOBYTE(v7) = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = *(unsigned int *)(a1 + 28);
  v141 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v158 = CurrentThread;
  v140 = Process;
  v152 = (v10 << 12) | 0xFFF;
  v11 = *(_DWORD *)(a1 + 48);
  v149 = 0LL;
  v150 = 0LL;
  v137 = v7;
  LODWORD(v160) = 0;
  v145 = 0;
  v144 = 0;
  v130 = 0;
  v139 = 0;
  v146 = 0;
  v134 = 0LL;
  if ( (v11 & 0x8000) != 0 )
  {
    if ( (v11 & 7) == 5 )
      LOBYTE(v137) = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
      v137 = (v11 & 7) == 2;
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
  v133 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
    p_ProfileListHead = &dword_14036D4C0;
  else
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  CurrentIrql = KeGetCurrentIrql();
  v148 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v142 = 0;
    if ( _interlockedbittestandset(p_ProfileListHead, 0x1Fu) )
      v142 = ExpWaitForSpinLockExclusiveAndAcquire(p_ProfileListHead, CurrentIrql);
    v16 = *p_ProfileListHead;
    while ( (v16 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v16 & 0x40000000) == 0 )
      {
        v125 = _InterlockedCompareExchange(p_ProfileListHead, v16 | 0x40000000, v16);
        v23 = v16 == v125;
        v16 = v125;
        if ( !v23 )
          continue;
      }
      KeYieldProcessorEx(&v142);
      v16 = *p_ProfileListHead;
    }
  }
  p_ProfileListHead[1] = 0;
  *(_DWORD *)(a1 + 48) |= 0x80000u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
  v135 = 0;
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
  v154 = v24;
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
      v154 = v24;
      if ( v23 )
        goto LABEL_206;
    }
    if ( !v27 )
    {
LABEL_206:
      v13 = (ULONG_PTR)v133;
      goto LABEL_207;
    }
    v27->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v27->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree((__int64)&v18->LockEntries[v26], v22, v21);
    v135 = 0;
    v135 = v27->BoostBitmap.AllFields & 0x1FFFF;
    v27->BoostBitmap.AllFields &= 0xFFFE0000;
    v27->ThreadLocalFlags &= ~1u;
    v27->LockState.0 = 0LL;
    v28 = (unsigned __int128)(((char *)v27 - (char *)v18 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v13 = (ULONG_PTR)v133;
    v29 = ((unsigned __int64)v28 >> 63) + (v28 >> 4);
    if ( v20 )
      v18->AbEntrySummary |= 1 << v29;
    else
      _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v29);
  }
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v18, v13, &v135);
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
    v126 = *(__int64 **)(a1 + 72);
    if ( v126 )
      v134 = *v126;
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
  MiDeleteVirtualAddresses(v141, v152, v3, (unsigned __int8)v148, (__int64)v164);
  if ( (v3 & 2) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 48);
    v35 = **(_QWORD **)(a1 + 72);
    v134 = v35;
    if ( (v34 & 7) == 2 )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
      {
        v121 = 1;
        v130 = 1;
      }
      else
      {
        v121 = 0;
      }
      v139 = v121;
      v36 = v121;
      if ( v121 )
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
          &v149);
        if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
          v146 = 1;
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
          1,
          &v150);
      }
      v36 = 0;
    }
    if ( (*(_BYTE *)(a1 + 48) & 7) != 7 )
    {
      if ( ((__int64)v140[2].Header.WaitListHead.Blink & 7) == 2 )
        v37 = &dword_14036D4C0;
      else
        v37 = (LONG *)&v140[2].ProfileListHead;
      v38 = (_QWORD *)*((_QWORD *)v37 + 5);
      if ( v38 )
      {
        MiEmptyPageAccessLog(v38);
        *((_QWORD *)v37 + 5) = 0LL;
      }
      v39 = *(_DWORD *)(a1 + 48);
      if ( (v39 & 7) == 2 )
      {
        if ( (*(_DWORD *)(v134 + 56) & 0x4000000) != 0 )
          v144 = 1;
        v145 = 1;
      }
      else if ( (v39 & 0x8000) == 0 && !*(_QWORD *)(v134 + 64) )
      {
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
          1,
          &v149);
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
          1,
          &v150);
      }
    }
    v160 = *(_QWORD *)(a1 + 120) >> 63;
    v130 = 1;
    v139 = v36;
  }
LABEL_50:
  v155 = 0;
  v40 = KeGetCurrentThread();
  v151 = (__int64)v40;
  v41 = v40->ApcState.Process;
  v132 = 0;
  --v40->SpecialApcDisable;
  v159 = (__int64)v41;
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
  v161 = v44;
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
  KiAbThreadRemoveBoosts(v40, v42, &v155);
  v47 = v40->SpecialApcDisable + 1;
  v40->SpecialApcDisable = v47;
  if ( !v47 && ($69CD3F157F9F39B6F7113F2231989901 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v42, 0LL) )
    goto LABEL_212;
  if ( v45 )
    v45->AcquiredByte |= 1u;
  v156 = 0;
  v42 = v159 + 880;
  v132 = 1;
  *(_BYTE *)(v151 + 1744) |= 1u;
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
    v129 = v48->AbOrphanedEntrySummary;
    v48->AbOrphanedEntrySummary = 0;
    v48->AbEntrySummary |= v129;
  }
  v49 = v48->AbEntrySummary;
  _BitScanForward((unsigned int *)&v50, v49);
  v163 = v50;
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
  KiAbThreadRemoveBoosts(v48, v42, &v156);
  v52 = v48->SpecialApcDisable + 1;
  v48->SpecialApcDisable = v52;
  if ( !v52 && ($69CD3F157F9F39B6F7113F2231989901 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v42, 0LL) )
  {
LABEL_212:
    if ( v45 )
      KeAbPostReleaseEx(v42, v45);
    v122 = v159;
    MiUnlockWorkingSetExclusive(v159 + 1280, v148);
    v123 = v151;
    KiLeaveGuardedRegionUnsafe(v151);
    if ( !v132 )
    {
      KiLeaveGuardedRegionUnsafe(v123);
      MiLockAddressSpaceToo(v122, a1);
    }
    --*(_WORD *)(v123 + 486);
    ExAcquirePushLockExclusiveEx(v122 + 880, 0LL);
    SharedVm = MiGetSharedVm(v122 + 1280);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    goto LABEL_74;
  }
  if ( v45 )
    v45->AcquiredByte |= 1u;
LABEL_74:
  v53 = v141;
  v54 = &v143;
  v143 = 0;
  v151 = 2LL;
  do
  {
    v55 = 3;
    v56 = ((v53 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v57 = (unsigned __int64 *)&v166;
    do
    {
      *v57 = v56;
      v56 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v57;
      --v55;
    }
    while ( v55 );
    v58 = v152;
    v59 = &v165;
    v60 = 0;
    while ( 1 )
    {
      v61 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v59);
      if ( !v61 )
        break;
      if ( (v61 & 1) == 0 && v60 != 2 )
        MiMakeSystemAddressValid(v62 << 25 >> 16, 0LL, 0, v148, 1);
      ++v60;
      v59 += 8;
      if ( v60 >= 3 )
        goto LABEL_81;
    }
    *(_BYTE *)v54 = 1 << (2 - v60);
LABEL_81:
    v54 = (int *)((char *)v54 + 1);
    v53 = v58;
    --v151;
  }
  while ( v151 );
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
  v69 = v140;
  RtlAvlRemoveNode(&v140[2].Affinity.Bitmap[4], P);
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
  MiPreUnlockWorkingSetExclusive((__int64)&v70[1].IdealNode[12], v148);
  if ( (v73[96] & 7) == 2 )
    v74 = &dword_14036D4C0;
  else
    v74 = (LONG *)(v73 + 100);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v74, retaddr);
  else
    *v74 = 0;
  __writecr8((unsigned __int8)v148);
  MiClearVadBits(v141, v152, j, k);
  MiReturnPageTablePageCommitment(v141, v152, (_DWORD)v140, j, (__int64)k, (__int64)v63, (__int64)&v143);
  v75 = v133;
  if ( (_InterlockedExchangeAdd64(v133, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
  {
    ExfTryToWakePushLock(v133);
    v75 = v133;
  }
  v136 = 0;
  v76 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v75) == 1 )
  {
    v119 = MmGetSessionIdEx(v76->ApcState.Process);
    v77 = (ULONG_PTR)v133;
    v78 = v119;
  }
  else
  {
    v78 = 0xFFFFFFFFLL;
  }
  --v76->SpecialApcDisable;
  v79 = ++v76->AbAllocationRegionCount == 1;
  v80 = v77 & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v81) = ((char)v76->AbEntrySummary | (char)v76->AbOrphanedEntrySummary) ^ 0x3F;
  v23 = !_BitScanReverse((unsigned int *)&v82, v81);
  v157 = v82;
  if ( v23 )
    goto LABEL_210;
  while ( 1 )
  {
    v83 = (__int64)&v76->LockEntries[v82];
    v81 = ~(1 << v82) & (unsigned int)v81;
    if ( (*(_BYTE *)(v83 + 26) & 1) != 0
      && (*(_DWORD *)(v83 + 32) & 1) == 0
      && (*(_QWORD *)(v83 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v80
      && *(_DWORD *)(v83 + 40) == (_DWORD)v78 )
    {
      *(_BYTE *)(v83 + 26) &= ~1u;
      if ( *(_QWORD *)(v83 + 32) )
        break;
    }
    v23 = !_BitScanReverse((unsigned int *)&v82, v81);
    v157 = v82;
    if ( v23 )
      goto LABEL_210;
  }
  if ( !v83 )
  {
LABEL_210:
    if ( (*((_DWORD *)&v76->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v76, v77, v78, 0LL);
  }
  else
  {
    *(_BYTE *)(v83 + 32) |= 2u;
    if ( *(__int64 *)(v83 + 32) < 0 )
    {
      KiAbEntryRemoveFromTree(v83, v81, v80);
      v77 = (ULONG_PTR)v133;
    }
    v136 = 0;
    v136 = *(_DWORD *)(v83 + 88) & 0x1FFFF;
    *(_DWORD *)(v83 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v83 + 25) &= ~1u;
    *(_QWORD *)(v83 + 32) = 0LL;
    v84 = (v83 - (__int64)v76 - 800) / 96;
    if ( v79 )
      v76->AbEntrySummary |= 1 << v84;
    else
      _InterlockedOr8((volatile signed __int8 *)&v76->AbOrphanedEntrySummary, 1 << v84);
  }
  --v76->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v76, v77, &v136);
  v85 = v76->SpecialApcDisable + 1;
  v76->SpecialApcDisable = v85;
  if ( !v85 && ($69CD3F157F9F39B6F7113F2231989901 *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
    KiCheckForKernelApcDelivery();
  v86 = v158;
  v87 = v158->SpecialApcDisable + 1;
  v158->SpecialApcDisable = v87;
  if ( !v87 && ($69CD3F157F9F39B6F7113F2231989901 *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
    KiCheckForKernelApcDelivery();
  v88 = v140;
  *((_QWORD *)v63 + 1) = v164[1];
  *(_QWORD *)v63 = v164[2];
  if ( v137 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v141,
      v88,
      26LL,
      ((unsigned int)v63[7] | ((unsigned __int64)*((unsigned __int8 *)v63 + 33) << 32))
    - ((unsigned int)v63[6] | ((unsigned __int64)*((unsigned __int8 *)v63 + 32) << 32))
    + 1);
  if ( (_DWORD)v160 == 1 )
    MiDereferenceExtendInfo(v63, v134);
  if ( v130 == 1 )
  {
    if ( v144 == 1 )
    {
      MmGetSessionIdEx(v88);
      MiDereferencePerSessionProtos(v134);
    }
    if ( v145 && (MiControlAreaRequiresCharge() & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v134);
    MiRemoveSharedCommitNode(v134, v88, 0LL);
    v89 = (char *)(v63 + 24);
    v90 = **((_QWORD **)v63 + 9);
    v91 = KeGetCurrentThread();
    --v91->SpecialApcDisable;
    v92 = v90 + 104;
    ExAcquirePushLockExclusiveEx(v90 + 104, 0LL);
    if ( (*(_DWORD *)(v90 + 56) & 0x400) == 0 )
    {
      v93 = *(_QWORD *)v89;
      v94 = (char **)*((_QWORD *)v63 + 13);
      if ( *(char **)(*(_QWORD *)v89 + 8LL) != v89 || *v94 != v89 )
        __fastfail(3u);
      *v94 = (char *)v93;
      *(_QWORD *)(v93 + 8) = v94;
    }
    v95 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v92, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v90 + 104);
    v96 = v90 + 104;
    v138 = 0;
    v97 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v96) == 1 )
    {
      v99 = (unsigned int)MmGetSessionIdEx(v97->ApcState.Process);
      BugCheckParameter4 = 0LL;
    }
    else
    {
      v99 = 0xFFFFFFFFLL;
    }
    --v97->SpecialApcDisable;
    ++v97->AbAllocationRegionCount;
    v100 = BugCheckParameter4;
    if ( v97->AbAllocationRegionCount == 1 )
      v100 = 1;
    v101 = v92 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v102) = ((char)v97->AbEntrySummary | (char)v97->AbOrphanedEntrySummary) ^ 0x3F;
    v23 = !_BitScanReverse((unsigned int *)&v103, v102);
    v153 = v103;
    if ( v23 )
      goto LABEL_220;
    while ( 1 )
    {
      v104 = (__int64)&v97->LockEntries[v103];
      v102 = ~(1 << v103) & (unsigned int)v102;
      if ( (*(_BYTE *)(v104 + 26) & 1) != 0
        && (*(_DWORD *)(v104 + 32) & 1) == 0
        && (*(_QWORD *)(v104 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v101
        && *(_DWORD *)(v104 + 40) == (_DWORD)v99 )
      {
        *(_BYTE *)(v104 + 26) &= ~1u;
        if ( *(_QWORD *)(v104 + 32) )
          break;
      }
      v23 = !_BitScanReverse((unsigned int *)&v103, v102);
      v153 = v103;
      if ( v23 )
        goto LABEL_220;
    }
    if ( !v104 )
    {
LABEL_220:
      if ( (*((_DWORD *)&v97->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v97, v92, v99, BugCheckParameter4);
    }
    else
    {
      *(_BYTE *)(v104 + 32) |= 2u;
      if ( *(__int64 *)(v104 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(v104, v102, v101);
        BugCheckParameter4 = 0LL;
      }
      v138 = BugCheckParameter4;
      v138 = *(_DWORD *)(v104 + 88) & 0x1FFFF;
      *(_DWORD *)(v104 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v104 + 25) &= ~1u;
      *(_QWORD *)(v104 + 32) = BugCheckParameter4;
      v105 = (v104 - (__int64)v97 - 800) / 96;
      if ( v100 )
        v97->AbEntrySummary |= 1 << v105;
      else
        _InterlockedOr8((volatile signed __int8 *)&v97->AbOrphanedEntrySummary, 1 << v105);
    }
    --v97->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v97, v92, &v138);
    v106 = v97->SpecialApcDisable + 1;
    v97->SpecialApcDisable = v106;
    if ( !v106 && ($69CD3F157F9F39B6F7113F2231989901 *)v97->ApcState.ApcListHead[0].Flink != &v97->152 )
      KiCheckForKernelApcDelivery();
    v107 = v95->SpecialApcDisable + 1;
    v95->SpecialApcDisable = v107;
    if ( !v107 && ($69CD3F157F9F39B6F7113F2231989901 *)v95->ApcState.ApcListHead[0].Flink != &v95->152 )
      KiCheckForKernelApcDelivery();
    v6 = 0LL;
  }
  result = MiFinishVadDeletion(v63);
  if ( v134 )
  {
    if ( v139 == 1 )
    {
      return MiDereferenceControlArea(v134);
    }
    else
    {
      v109 = v149;
      v110 = v150;
      if ( v149 && v146 )
        MiDecrementLargeSubsections(v149, v150);
      v23 = *(_QWORD *)(v134 + 64) == 0LL;
      v111 = (volatile signed __int32 *)(v134 + 72);
      v158 = 0LL;
      v112 = !v23;
      v113 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v111, v113);
      }
      else
      {
        v147 = 0;
        if ( _interlockedbittestandset(v111, 0x1Fu) )
          v147 = ExpWaitForSpinLockExclusiveAndAcquire(v111, v113);
        v114 = *v111;
        while ( (v114 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v114 & 0x40000000) == 0 )
          {
            v127 = _InterlockedCompareExchange(v111, v114 | 0x40000000, v114);
            v23 = v114 == v127;
            v114 = v127;
            if ( !v23 )
              continue;
          }
          KeYieldProcessorEx(&v147);
          v114 = *v111;
        }
        v110 = v150;
        v109 = v149;
      }
      if ( v109 )
      {
        v115 = *(_QWORD *)(*(_QWORD *)v109 + 64LL);
        do
        {
          if ( *(_QWORD *)(v109 + 8) )
          {
            v6 += MiDecrementSubsectionViewCount((_QWORD *)v109, v71);
            if ( v115 )
            {
              if ( !*(_QWORD *)(v109 + 96) && (*(_BYTE *)(v109 + 34) & 1) == 0 )
                v6 += MiInsertUnusedSubsection((_DWORD *)v109, v118);
            }
          }
          if ( v109 == v110 )
            break;
          v109 = *(_QWORD *)(v109 + 16);
          v116 = v71 & 0xFFFFFFF7;
          if ( v115 )
            v116 = v71;
          v71 = v116;
        }
        while ( v109 );
      }
      --*(_QWORD *)(v134 + 40);
      --*(_QWORD *)(v134 + 48);
      if ( v6 )
        v117 = *(struct _KTHREAD **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v134 + 60) & 0x3FF));
      else
        v117 = v158;
      result = MiCheckControlArea(v134, v113);
      if ( v6 )
        return MiReturnCrossPartitionSectionCharges(v117, v112, v6);
    }
  }
  return result;
}
