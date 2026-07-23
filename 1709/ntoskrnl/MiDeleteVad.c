/*
 * XREFs of MiDeleteVad @ 0x1400579B0
 * Callers:
 *     MiFreeVadRange @ 0x140032AC0 (MiFreeVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 *     MiCleanVad @ 0x1404D3230 (MiCleanVad.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MiFreeToSubAllocatedRegion @ 0x14056A828 (MiFreeToSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MiCreateEnclave @ 0x1406E8210 (MiCreateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x1406EC594 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiClearVadBits @ 0x1400588B0 (MiClearVadBits.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLockAddressSpaceToo @ 0x1400BA9EC (MiLockAddressSpaceToo.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiDereferenceControlArea @ 0x140131C80 (MiDereferenceControlArea.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 *     MiDereferenceExtendInfo @ 0x14021EE9C (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiAweViewRemover @ 0x1406E52C0 (MiAweViewRemover.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406E5880 (MiRemoveUserPhysicalPagesVad.c)
 *     MiDeleteEnclavePages @ 0x1406E87CC (MiDeleteEnclavePages.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiDeleteVad(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v4; // rcx
  int v5; // r15d
  _KPROCESS *Process; // rbx
  __int64 v7; // r8
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // ecx
  void *v13; // rcx
  ULONG_PTR v14; // rdi
  char Blink; // al
  LONG *v16; // rbx
  __int64 CurrentIrql; // rcx
  unsigned int v18; // edi
  signed __int32 v19; // edx
  bool v20; // zf
  signed __int32 v21; // eax
  struct _KTHREAD *v22; // rsi
  unsigned int SessionId; // r8d
  unsigned __int8 v24; // r14
  unsigned int v25; // edx
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // eax
  int v35; // edi
  __int64 *v36; // rax
  int v37; // ecx
  __int64 v38; // r14
  unsigned int v39; // edi
  BOOL v40; // esi
  int v41; // eax
  _QWORD **v42; // rdi
  int v43; // ecx
  int v44; // eax
  struct _KTHREAD *v45; // r15
  __int64 v46; // rsi
  int v47; // r12d
  _KPROCESS *v48; // r13
  ULONG_PTR v49; // r14
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // ecx
  __int64 v52; // rax
  int v53; // eax
  struct _KTHREAD *v54; // rdi
  unsigned __int8 v55; // al
  unsigned int v56; // ecx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // r13
  unsigned __int64 v60; // rcx
  int *v61; // r14
  unsigned __int64 v62; // r12
  __int64 v63; // r15
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // r11
  int v66; // edx
  unsigned __int64 v67; // rcx
  unsigned __int64 *v68; // r8
  unsigned int v69; // edi
  __int64 **v70; // rsi
  __int64 *v71; // r10
  __int64 PteShadow; // rax
  LONG *SharedVm; // rdi
  _DWORD *v74; // r12
  PVOID v75; // rax
  unsigned __int64 j; // rsi
  unsigned __int64 i; // rax
  _QWORD *k; // rdi
  PVOID v79; // rax
  _QWORD *v80; // rax
  _KPROCESS *v81; // r15
  int v82; // eax
  unsigned __int8 v83; // r14
  LONG *p_ProfileListHead; // rcx
  int v85; // r9d
  unsigned __int64 v86; // rsi
  struct _KTHREAD *v87; // rax
  __int64 v88; // rdi
  unsigned int v89; // eax
  char *v90; // r14
  __int64 v91; // rdi
  struct _KTHREAD *v92; // rax
  volatile signed __int64 *v93; // rsi
  __int64 v94; // rax
  char **v95; // rcx
  struct _KTHREAD *v96; // rdi
  __int64 v97; // r12
  ULONG_PTR v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // rsi
  BOOL v101; // r15d
  unsigned __int8 v102; // di
  int v103; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v104; // [rsp+44h] [rbp-BCh]
  BOOL v105; // [rsp+48h] [rbp-B8h]
  BOOL v106; // [rsp+4Ch] [rbp-B4h]
  ULONG_PTR v107; // [rsp+50h] [rbp-B0h]
  int v108; // [rsp+58h] [rbp-A8h] BYREF
  int v109; // [rsp+5Ch] [rbp-A4h]
  int v110; // [rsp+60h] [rbp-A0h]
  int v111; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v112; // [rsp+68h] [rbp-98h]
  __int64 v113; // [rsp+70h] [rbp-90h]
  __int64 v114; // [rsp+78h] [rbp-88h]
  unsigned __int64 v115; // [rsp+80h] [rbp-80h]
  int v116; // [rsp+88h] [rbp-78h]
  int v117; // [rsp+8Ch] [rbp-74h] BYREF
  int v118; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h]
  __int64 v120; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v122; // [rsp+B0h] [rbp-50h]
  int v123; // [rsp+B8h] [rbp-48h]
  int v124; // [rsp+BCh] [rbp-44h]
  unsigned __int16 *v125; // [rsp+C0h] [rbp-40h]
  _KPROCESS *v126; // [rsp+C8h] [rbp-38h]
  struct _KTHREAD *v127; // [rsp+D0h] [rbp-30h]
  __int64 v128; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v129; // [rsp+E0h] [rbp-20h]
  __int64 v130; // [rsp+E8h] [rbp-18h]
  __int64 v131; // [rsp+F0h] [rbp-10h]
  char v132; // [rsp+F8h] [rbp-8h] BYREF
  char v133; // [rsp+108h] [rbp+8h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  CurrentThread = KeGetCurrentThread();
  P = (PVOID)a1;
  v4 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v5 = a2;
  Process = CurrentThread->ApcState.Process;
  LOBYTE(a2) = 0;
  v128 = 0LL;
  v7 = 1LL;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v8 = &Process[1].IdealNode[12];
  v9 = *(unsigned int *)(a1 + 24) | v4;
  v127 = CurrentThread;
  v10 = *(unsigned int *)(a1 + 28);
  v112 = v9 << 12;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v126 = Process;
  v125 = &Process[1].IdealNode[12];
  v115 = (v11 << 12) | 0xFFF;
  v12 = *(_DWORD *)(a1 + 48);
  BugCheckParameter2 = 0LL;
  v120 = 0LL;
  v104 = a2;
  LODWORD(v122) = 0;
  v110 = 0;
  v109 = 0;
  v105 = 0;
  v106 = 0;
  v111 = 0;
  v113 = 0LL;
  if ( (v12 & 0x8000) != 0 )
  {
    LOBYTE(v104) = (v12 & 7) == 5;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
      v104 = (v12 & 7) == 2;
    v13 = *(void **)(a1 + 128);
    if ( v13 )
      ObfDereferenceObject(v13);
  }
  if ( (*(_DWORD *)(a1 + 48) & 0x40000) != 0 )
    MiDeleteEnclavePages(Process, a1, v7);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 && (*(_DWORD *)(a1 + 48) & 0x40000) == 0 )
  {
    MiAweViewRemover(Process, a1, v7);
    MiRemoveUserPhysicalPagesVad(a1);
  }
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v14 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  v107 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  Blink = (char)Process[2].Header.WaitListHead.Blink;
  v16 = &dword_140389780;
  if ( (Blink & 7) != 2 )
    v16 = (LONG *)(v8 + 100);
  CurrentIrql = KeGetCurrentIrql();
  v114 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v18 = 0;
    if ( _interlockedbittestandset(v16, 0x1Fu) )
      v18 = ExpWaitForSpinLockExclusiveAndAcquire(v16, CurrentIrql);
    v19 = *v16;
    while ( (v19 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v19 & 0x40000000) == 0 )
      {
        v21 = _InterlockedCompareExchange(v16, v19 | 0x40000000, v19);
        v20 = v19 == v21;
        v19 = v21;
        if ( !v20 )
          continue;
      }
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
      v19 = *v16;
    }
    v14 = v107;
  }
  v16[1] = 0;
  *(_DWORD *)(a1 + 48) |= 0x80000u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  v103 = 0;
  v22 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v14) == 1 )
    SessionId = MmGetSessionIdEx(v22->ApcState.Process);
  else
    SessionId = -1;
  --v22->SpecialApcDisable;
  v24 = ++v22->AbAllocationRegionCount;
  v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
  v26 = v14 & 0x7FFFFFFFFFFFFFFCLL;
  v20 = !_BitScanReverse((unsigned int *)&v27, v25);
  v116 = v27;
  if ( v20 )
  {
LABEL_41:
    if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v22, v14, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v28 = 1 << v27;
      v29 = v27;
      v30 = &v22->LockEntries[v29];
      v25 &= ~v28;
      if ( (v30->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v30->LockState.0 & 1) == 0
        && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v26
        && v30->LockState.SessionId == SessionId )
      {
        v30->AcquiredByte &= ~1u;
        if ( v30->LockState.0 )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v27, v25);
      v116 = v27;
      if ( v20 )
        goto LABEL_40;
    }
    if ( !v30 )
    {
LABEL_40:
      v14 = v107;
      goto LABEL_41;
    }
    v30->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v30->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v22->LockEntries[v29].TreeNode);
    v103 = 0;
    v103 = v30->BoostBitmap.AllFields & 0x1FFFF;
    v30->BoostBitmap.AllFields &= 0xFFFE0000;
    v30->ThreadLocalFlags &= ~1u;
    v30->LockState.0 = 0LL;
    v31 = (unsigned __int128)(((char *)v30 - (char *)v22 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v14 = v107;
    v32 = ((unsigned __int64)v31 >> 63) + (v31 >> 4);
    if ( v24 == 1 )
      v22->AbEntrySummary |= 1 << v32;
    else
      _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v32);
  }
  --v22->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v22, v14, &v103);
  v20 = v22->SpecialApcDisable++ == -1;
  if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  v33 = *(_DWORD *)(a1 + 48);
  v34 = v33 & 7;
  if ( v34 == 3 )
  {
    LOBYTE(v35) = 16;
  }
  else if ( v34 == 1 )
  {
    v36 = *(__int64 **)(a1 + 72);
    if ( v36 )
      v113 = *v36;
    LOBYTE(v35) = 32;
  }
  else if ( (v33 & 0x8000) != 0 )
  {
    LOBYTE(v35) = 8;
    if ( v34 != 6 )
      LOBYTE(v35) = 0;
  }
  else
  {
    v35 = ((v5 >> 31) & 1) + 2;
    if ( (v5 & 1) != 0 )
      LOBYTE(v35) = v35 | 4;
  }
  MiDeleteVirtualAddresses(v112, v115, v35, v114, (__int64)&v128);
  if ( (v35 & 2) != 0 )
  {
    v37 = *(_DWORD *)(a1 + 48);
    v38 = **(_QWORD **)(a1 + 72);
    v113 = v38;
    if ( (v37 & 7) == 2 )
    {
      v41 = *(_DWORD *)(a1 + 64) & 0x1000000;
      v105 = v41 != 0;
      v40 = v105;
      v106 = v105;
      if ( v41 )
        goto LABEL_83;
    }
    else
    {
      if ( *(_QWORD *)(v38 + 64) )
      {
        if ( ((((unsigned __int8)v37 >> 3) - 4) & 0xFFFFFFFD) == 0 )
          _InterlockedDecrement((volatile signed __int32 *)(v38 + 92));
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
          1u,
          &BugCheckParameter2);
        v39 = *(_DWORD *)(a1 + 64);
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
          1u,
          &v120);
        v111 = HIBYTE(v39) & 1;
      }
      v40 = 0;
    }
    if ( (*(_BYTE *)(a1 + 48) & 7) != 7 )
    {
      v42 = (_QWORD **)&unk_1403897A8;
      if ( (v125[96] & 7) != 2 )
        v42 = (_QWORD **)(v125 + 120);
      if ( *v42 )
      {
        MiEmptyPageAccessLog(*v42);
        *v42 = 0LL;
      }
      v43 = *(_DWORD *)(a1 + 48);
      if ( (v43 & 7) == 2 )
      {
        v44 = (*(_DWORD *)(v38 + 56) >> 26) & 1;
        v110 = 1;
        v109 = v44;
      }
      else if ( (v43 & 0x8000) == 0 && !*(_QWORD *)(v38 + 64) )
      {
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
          1u,
          &BugCheckParameter2);
        MiGetProtoPteAddress(
          a1,
          *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
          1u,
          &v120);
      }
    }
    v122 = *(_QWORD *)(a1 + 120) >> 63;
    v105 = 1;
    v106 = v40;
  }
LABEL_83:
  v45 = KeGetCurrentThread();
  v46 = 0LL;
  v117 = 0;
  v47 = 0;
  v48 = v45->ApcState.Process;
  --v45->SpecialApcDisable;
  v49 = (ULONG_PTR)&v48[1].Affinity.Bitmap[7];
  if ( ++v45->AbAllocationRegionCount != 1 )
  {
LABEL_84:
    _interlockedbittestandset((volatile signed __int32 *)&v45->116 + 1, 0x10u);
    goto LABEL_98;
  }
  if ( v45->AbEntrySummary )
    goto LABEL_88;
  if ( v45->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v45->AbOrphanedEntrySummary;
    v45->AbOrphanedEntrySummary = 0;
    v45->AbEntrySummary |= AbOrphanedEntrySummary;
LABEL_88:
    AbEntrySummary = v45->AbEntrySummary;
    _BitScanForward((unsigned int *)&v52, AbEntrySummary);
    v123 = v52;
    v45->AbEntrySummary = AbEntrySummary & ~(1 << v52);
    v46 = (__int64)&v45->LockEntries[v52];
    goto LABEL_89;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceAutoBoostEntryExhaustion(v45, &v48[1].Affinity.Bitmap[7]);
LABEL_89:
  if ( !v46 )
    goto LABEL_84;
  if ( v49 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[794] + ((v49 >> 39) & 0x1FF)) == 1 )
    v53 = MmGetSessionIdEx(v45->ApcState.Process);
  else
    v53 = -1;
  *(_DWORD *)(v46 + 40) = v53;
  *(_QWORD *)(v46 + 32) = v49 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_98:
  --v45->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v45, &v48[1].Affinity.Bitmap[7], &v117);
  v20 = v45->SpecialApcDisable++ == -1;
  if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v49, 0LL) )
    goto LABEL_139;
  if ( v46 )
    *(_BYTE *)(v46 + 26) |= 1u;
  LOBYTE(v45[1].Queue) |= 1u;
  v49 = (ULONG_PTR)&v48[1].Affinity.Bitmap[8];
  v47 = 1;
  v118 = 0;
  v54 = KeGetCurrentThread();
  --v54->SpecialApcDisable;
  if ( ++v54->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v54->116 + 1, 0x10u);
    v46 = 0LL;
    goto LABEL_119;
  }
  if ( !v54->AbEntrySummary )
  {
    if ( !v54->AbOrphanedEntrySummary )
    {
      v46 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v54, &v48[1].Affinity.Bitmap[8]);
      goto LABEL_110;
    }
    v55 = v54->AbOrphanedEntrySummary;
    v54->AbOrphanedEntrySummary = 0;
    v54->AbEntrySummary |= v55;
  }
  v56 = v54->AbEntrySummary;
  _BitScanForward((unsigned int *)&v57, v56);
  v124 = v57;
  v54->AbEntrySummary = v56 & ~(1 << v57);
  v46 = (__int64)&v54->LockEntries[v57];
LABEL_110:
  if ( v46 )
  {
    if ( v49 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[794] + ((v49 >> 39) & 0x1FF)) == 1 )
      v58 = MmGetSessionIdEx(v54->ApcState.Process);
    else
      v58 = -1;
    *(_DWORD *)(v46 + 40) = v58;
    *(_QWORD *)(v46 + 32) = v49 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v54->116 + 1, 0x10u);
  }
LABEL_119:
  --v54->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v54, &v48[1].Affinity.Bitmap[8], &v118);
  v20 = v54->SpecialApcDisable++ == -1;
  if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v49, 0LL) )
  {
LABEL_139:
    if ( v46 )
      KeAbPostReleaseEx(v49);
    MiUnlockWorkingSetExclusive((__int64)&v48[1].IdealNode[12], (unsigned __int8)v114);
    KiLeaveGuardedRegionUnsafe(v45);
    if ( !v47 )
    {
      KiLeaveGuardedRegionUnsafe(v45);
      MiLockAddressSpaceToo(v48, P);
    }
    --v45->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v48[1].Affinity.Bitmap[8], 0LL);
    SharedVm = MiGetSharedVm((__int64)&v48[1].IdealNode[12]);
    ExAcquireSpinLockExclusive(SharedVm);
    v59 = 0LL;
    SharedVm[1] = 0;
    goto LABEL_126;
  }
  if ( v46 )
    *(_BYTE *)(v46 + 26) |= 1u;
  v59 = 0LL;
LABEL_126:
  v60 = v112;
  v61 = &v108;
  v62 = v115;
  v63 = 2LL;
  v108 = 0;
  v64 = 0xFFFFF68000000000uLL;
  v65 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    v66 = 3;
    v67 = ((v60 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v68 = (unsigned __int64 *)&v133;
    do
    {
      *v68 = v67;
      v67 = v64 + ((v67 >> 9) & 0x7FFFFFFFF8LL);
      --v68;
      --v66;
    }
    while ( v66 );
    v69 = 0;
    v70 = (__int64 **)&v132;
    while ( 1 )
    {
      v71 = *v70;
      PteShadow = **v70;
      if ( (unsigned __int64)*v70 >= v65 && (unsigned __int64)v71 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(*v70, **v70);
      if ( !PteShadow )
        break;
      if ( (PteShadow & 1) == 0 && v69 != 2 )
      {
        MiMakeSystemAddressValid((__int64)(((_QWORD)v71 << 25) - (v64 << 25)) >> 16, 0LL, 0, v114, 1);
        v64 = 0xFFFFF68000000000uLL;
        v65 = 0xFFFFF6FB7DBED000uLL;
      }
      ++v69;
      ++v70;
      if ( v69 >= 3 )
        goto LABEL_145;
    }
    *(_BYTE *)v61 = 1 << (2 - v69);
LABEL_145:
    v61 = (int *)((char *)v61 + 1);
    v60 = v62;
    --v63;
  }
  while ( v63 );
  v74 = P;
  v75 = P;
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
      if ( *(PVOID *)(j + 8) == v75 )
        break;
      v75 = (PVOID)j;
    }
  }
  k = (_QWORD *)*((_QWORD *)P + 1);
  v79 = P;
  if ( k )
  {
    v80 = (_QWORD *)*k;
    if ( *k )
    {
      do
      {
        k = v80;
        v80 = (_QWORD *)*v80;
      }
      while ( v80 );
    }
  }
  else
  {
    for ( k = (_QWORD *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( (PVOID)*k == v79 )
        break;
      v79 = k;
    }
  }
  v81 = v126;
  RtlAvlRemoveNode(&v126[2].Affinity.Bitmap[4], P);
  if ( (_DWORD *)v81[2].Affinity.Bitmap[5] == v74 )
    v81[2].Affinity.Bitmap[5] = v81[2].Affinity.Bitmap[4];
  --v81[2].Affinity.Bitmap[6];
  v82 = v74[12] & 7;
  *((_QWORD *)v74 + 2) = -2LL;
  if ( v82 == 5 || v82 == 2 && (v74[16] & 0x1000000) != 0 )
    --HIDWORD(v81[2].ReadyListHead.Flink);
  v83 = v114;
  MiPreUnlockWorkingSetExclusive((__int64)&v81[1].IdealNode[12], v114);
  if ( ((__int64)v81[2].Header.WaitListHead.Blink & 7) == 2 )
    p_ProfileListHead = &dword_140389780;
  else
    p_ProfileListHead = (LONG *)&v81[2].ProfileListHead;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(p_ProfileListHead, retaddr);
  else
    *p_ProfileListHead = 0;
  __writecr8(v83);
  MiClearVadBits(v112, v115, j, k);
  v85 = j;
  v86 = v112;
  MiReturnPageTablePageCommitment(v112, v115, (_DWORD)v81, v85, (__int64)k, (__int64)v74, (__int64)&v108);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v81[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&v81[1].Affinity.Bitmap[8]);
  KeAbPostRelease((ULONG_PTR)&v81[1].Affinity.Bitmap[8]);
  v87 = v127;
  v20 = v127->SpecialApcDisable++ == -1;
  if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v87->ApcState.ApcListHead[0].Flink != &v87->152 )
    KiCheckForKernelApcDelivery();
  v20 = !v104;
  *((_QWORD *)v74 + 1) = v129;
  *(_QWORD *)v74 = v130;
  if ( !v20 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v86,
      v81,
      26LL,
      ((unsigned int)v74[7] | ((unsigned __int64)*((unsigned __int8 *)v74 + 33) << 32))
    - ((unsigned int)v74[6] | ((unsigned __int64)*((unsigned __int8 *)v74 + 32) << 32))
    + 1);
  v88 = v113;
  if ( (_DWORD)v122 == 1 )
    MiDereferenceExtendInfo(v74, v113);
  if ( v105 )
  {
    if ( v109 == 1 )
    {
      v89 = MmGetSessionIdEx(v81);
      MiDereferencePerSessionProtos(v88, v89);
    }
    if ( v110 && (MiControlAreaRequiresCharge(v88, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v88);
    MiRemoveSharedCommitNode(v88, v81, 0LL);
    v90 = (char *)(v74 + 24);
    v91 = **((_QWORD **)v74 + 9);
    v92 = KeGetCurrentThread();
    --v92->SpecialApcDisable;
    v93 = (volatile signed __int64 *)(v91 + 104);
    ExAcquirePushLockExclusiveEx(v91 + 104, 0LL);
    if ( (*(_DWORD *)(v91 + 56) & 0x400) == 0 )
    {
      v94 = *(_QWORD *)v90;
      if ( *(char **)(*(_QWORD *)v90 + 8LL) != v90 || (v95 = (char **)*((_QWORD *)v74 + 13), *v95 != v90) )
        __fastfail(3u);
      *v95 = (char *)v94;
      *(_QWORD *)(v94 + 8) = v95;
    }
    v96 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v93, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v93);
    KeAbPostRelease((ULONG_PTR)v93);
    v20 = v96->SpecialApcDisable++ == -1;
    if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
      KiCheckForKernelApcDelivery();
  }
  MiFinishVadDeletion(v74, v112, v115);
  v97 = v113;
  if ( v113 )
  {
    if ( v106 )
    {
      MiDereferenceControlArea(v113);
    }
    else
    {
      v98 = BugCheckParameter2;
      if ( BugCheckParameter2 && v111 )
        MiDecrementLargeSubsections(BugCheckParameter2, v120);
      v99 = v97 + 72;
      v100 = 0LL;
      v101 = *(_QWORD *)(v97 + 64) != 0LL;
      v102 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v99, v102);
      else
        ExpAcquireSpinLockExclusive(v99, v102);
      if ( v98 )
        v59 = MiDecrementSubsections(v98);
      --*(_QWORD *)(v97 + 40);
      --*(_QWORD *)(v97 + 48);
      if ( v59 )
        v100 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v97 + 60) & 0x3FF));
      MiCheckControlArea(v97, v102);
      if ( v59 )
        MiReturnCrossPartitionSectionCharges(v100, v101, v59);
    }
  }
}
