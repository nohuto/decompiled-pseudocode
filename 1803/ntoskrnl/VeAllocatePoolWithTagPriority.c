/*
 * XREFs of VeAllocatePoolWithTagPriority @ 0x140812DA0
 * Callers:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IovAllocateMdl @ 0x140811740 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140811840 (IovAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140816A80 (VerifierIoSetCompletionRoutineEx.c)
 *     ViIrpAllocateLockedPacket @ 0x14081DD80 (ViIrpAllocateLockedPacket.c)
 *     ViRtlReplaceStringBuffer @ 0x140830C9C (ViRtlReplaceStringBuffer.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ViGrowPoolAllocation @ 0x140813894 (ViGrowPoolAllocation.c)
 *     ViPostPoolAllocation @ 0x14081393C (ViPostPoolAllocation.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversGetVerifierData @ 0x140821CB8 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     VfAllocPoolNotification @ 0x140824784 (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x1408247C0 (VfFillAllocatedMemory.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140824D1C (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140824EDC (VfFaultsIsSystemSufficientlyBooted.c)
 *     ExAllocatePoolSanityChecks @ 0x140837C50 (ExAllocatePoolSanityChecks.c)
 */

PVOID __fastcall VeAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        ULONG_PTR BugCheckParameter3,
        ULONG Tag,
        EX_POOL_PRIORITY Priority,
        __int64 a5)
{
  _SLIST_HEADER *VerifierData; // r14
  __int64 v6; // r12
  int v7; // r15d
  POOL_TYPE v11; // esi
  int v13; // r13d
  __int64 v14; // rcx
  PSLIST_ENTRY v15; // rdi
  unsigned __int64 PoolWithTagPriority; // rbp
  __int64 v17; // rcx
  unsigned int v18; // r14d
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // [rsp+30h] [rbp-38h]
  ULONG_PTR v21; // [rsp+38h] [rbp-30h]
  ULONG Taga; // [rsp+80h] [rbp+18h] BYREF

  Taga = Tag;
  VerifierData = 0LL;
  v6 = a5;
  v7 = 0;
  v11 = PoolType;
  if ( (MiFlags & 2) != 0 )
  {
    if ( (PoolType & 0x80u) == 0 )
    {
      v11 = PoolType | 0x80;
    }
    else
    {
      v7 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(a5);
      if ( !VerifierData )
        return ExAllocatePoolWithTagPriority(v11, BugCheckParameter3, Tag, Priority);
    }
  }
  ExAllocatePoolSanityChecks((unsigned int)v11, BugCheckParameter3, &Taga, v6);
  v13 = 0;
  if ( !BugCheckParameter3 && (unsigned int)VfVerifyMode <= 1 )
  {
    BugCheckParameter3 = 1LL;
    v13 = 1;
  }
  v20 = BugCheckParameter3;
  v21 = BugCheckParameter3;
  _InterlockedIncrement(&dword_1403AD170);
  if ( (v11 & 2) != 0 )
  {
    if ( (MmVerifierData & 8) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9AuLL, (int)v11 & 0xFFFFFFFFFFFFFF7FuLL, BugCheckParameter3, Taga);
  }
  else if ( (MmVerifierData & 4) != 0 )
  {
    if ( !v7 )
    {
      v7 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v6);
    }
    if ( VerifierData )
    {
      v14 = Taga;
      LODWORD(v14) = Taga & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v14) )
      {
        VfAllocPoolNotification(0LL, BugCheckParameter3);
        if ( (v11 & 0x10) != 0 )
          RtlRaiseStatus(-1073741670);
        return 0LL;
      }
    }
  }
  if ( (Priority & 9) == 0 && (MmVerifierData & 1) != 0 )
  {
    if ( MmSpecialPoolCatchOverruns == 1 )
      Priority |= 8u;
    else
      Priority |= 9u;
  }
  v15 = 0LL;
  if ( (MmVerifierData & 8) != 0 && (v11 & 0x20) == 0 )
  {
    if ( !v7 )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v6);
    if ( VerifierData && BugCheckParameter3 + 8 >= BugCheckParameter3 )
    {
      v15 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v15 || (v15 = (PSLIST_ENTRY)ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        BugCheckParameter3 += 8LL;
        v11 |= 0x40u;
      }
    }
    else
    {
      ++dword_1403AD198;
    }
  }
  PoolWithTagPriority = (unsigned __int64)ExAllocatePoolWithTagPriority(v11, BugCheckParameter3, Taga, Priority);
  if ( !PoolWithTagPriority )
  {
    ++dword_1403AD188;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(v6, 160LL);
    VfAllocPoolNotification(0LL, BugCheckParameter3);
    if ( v15 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v15);
    if ( (v11 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  if ( v13 )
  {
    v17 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v17) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v17 + 1) = v6;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v17 + 2) = PoolWithTagPriority;
  }
  v18 = 0;
  _InterlockedIncrement(&dword_1403AD174);
  if ( (unsigned int)MmIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v18 = 1;
LABEL_47:
    _InterlockedIncrement(&dword_1403AD178);
    goto LABEL_48;
  }
  if ( BugCheckParameter3 > 0xFE0 )
    goto LABEL_47;
LABEL_48:
  if ( v15 )
  {
    *((_QWORD *)&v15->Next + 1) = v6;
    v15->Next = (_SLIST_ENTRY *)(PoolWithTagPriority | v18);
    v19 = v20;
    if ( !v18 )
      v19 = BugCheckParameter3;
    v15[1].Next = (_SLIST_ENTRY *)v19;
    *((_QWORD *)&v15[1].Next + 1) = Taga;
    PoolWithTagPriority = ViPostPoolAllocation(v15, (unsigned int)v11);
  }
  VfAllocPoolNotification(PoolWithTagPriority, v21);
  if ( v15 && !v18 )
    VfFillAllocatedMemory((void *)PoolWithTagPriority);
  return (PVOID)PoolWithTagPriority;
}
