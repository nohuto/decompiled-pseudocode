/*
 * XREFs of VeAllocatePoolWithTagPriority @ 0x1407640D0
 * Callers:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     IovAllocateMdl @ 0x140762AE0 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140762BD0 (IovAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140767E00 (VerifierIoSetCompletionRoutineEx.c)
 *     ViIrpAllocateLockedPacket @ 0x14076EDB4 (ViIrpAllocateLockedPacket.c)
 *     ViRtlReplaceStringBuffer @ 0x140781564 (ViRtlReplaceStringBuffer.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     ViGrowPoolAllocation @ 0x1407649F0 (ViGrowPoolAllocation.c)
 *     ViPostPoolAllocation @ 0x140764A98 (ViPostPoolAllocation.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversGetVerifierData @ 0x140774D80 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     VfFillAllocatedMemory @ 0x1407757E4 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140775CC0 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140775E80 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ExAllocatePoolSanityChecks @ 0x14078826C (ExAllocatePoolSanityChecks.c)
 */

PVOID __fastcall VeAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority,
        __int64 a5)
{
  _SLIST_HEADER *VerifierData; // r14
  __int64 v6; // r12
  int v7; // r15d
  POOL_TYPE v11; // edi
  __int64 v13; // rcx
  PSLIST_ENTRY v14; // rsi
  unsigned __int64 PoolWithTagPriority; // rbp
  __int64 v16; // rcx
  unsigned int v17; // r14d
  SIZE_T v18; // rax
  int v19; // [rsp+30h] [rbp-48h]
  SIZE_T v20; // [rsp+38h] [rbp-40h]
  SIZE_T v21; // [rsp+40h] [rbp-38h]
  ULONG Taga; // [rsp+90h] [rbp+18h] BYREF

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
        return ExAllocatePoolWithTagPriority(v11, NumberOfBytes, Tag, Priority);
    }
  }
  ExAllocatePoolSanityChecks((unsigned int)v11, NumberOfBytes, &Taga, v6);
  v19 = 0;
  if ( !NumberOfBytes && (unsigned int)VfVerifyMode <= 1 )
  {
    v19 = 1;
    NumberOfBytes = 1LL;
  }
  v20 = NumberOfBytes;
  v21 = NumberOfBytes;
  _InterlockedIncrement(&dword_14034F670);
  if ( (v11 & 2) != 0 )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC2u, Taga);
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
      v13 = Taga;
      LODWORD(v13) = Taga & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v13) )
      {
        if ( VfPoolTraces )
          ViPoolLogStackTrace(0LL, NumberOfBytes);
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
  v14 = 0LL;
  if ( (MmVerifierData & 8) != 0 && (v11 & 0x20) == 0 )
  {
    if ( !v7 )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v6);
    if ( VerifierData && NumberOfBytes + 8 >= NumberOfBytes )
    {
      v14 = RtlpInterlockedPopEntrySList(VerifierData + 4);
      if ( v14 || (v14 = (PSLIST_ENTRY)ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        NumberOfBytes += 8LL;
        v11 |= 0x40u;
      }
    }
    else
    {
      ++dword_14034F698;
    }
  }
  PoolWithTagPriority = (unsigned __int64)ExAllocatePoolWithTagPriority(v11, NumberOfBytes, Taga, Priority);
  if ( !PoolWithTagPriority )
  {
    ++dword_14034F688;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(v6, 144LL);
    if ( VfPoolTraces )
      ViPoolLogStackTrace(0LL, NumberOfBytes);
    if ( v14 )
      RtlpInterlockedPushEntrySList(VerifierData + 4, v14);
    if ( (v11 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  if ( v19 )
  {
    v16 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v16) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v16 + 1) = v6;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v16 + 2) = PoolWithTagPriority;
  }
  v17 = 0;
  _InterlockedIncrement(&dword_14034F674);
  if ( (unsigned int)MmIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v17 = 1;
LABEL_50:
    _InterlockedIncrement(&dword_14034F678);
    goto LABEL_51;
  }
  if ( NumberOfBytes > 0xFE0 )
    goto LABEL_50;
LABEL_51:
  if ( v14 )
  {
    *((_QWORD *)&v14->Next + 1) = v6;
    v14->Next = (_SLIST_ENTRY *)(PoolWithTagPriority | v17);
    v18 = v21;
    if ( !v17 )
      v18 = NumberOfBytes;
    v14[1].Next = (_SLIST_ENTRY *)v18;
    *((_QWORD *)&v14[1].Next + 1) = Taga;
    PoolWithTagPriority = ViPostPoolAllocation(v14, (unsigned int)v11);
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(PoolWithTagPriority, v20);
  if ( v14 && !v17 )
    VfFillAllocatedMemory((void *)PoolWithTagPriority);
  return (PVOID)PoolWithTagPriority;
}
