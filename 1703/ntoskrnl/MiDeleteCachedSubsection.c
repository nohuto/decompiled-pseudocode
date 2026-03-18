/*
 * XREFs of MiDeleteCachedSubsection @ 0x140209E24
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140161338 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x1400150EC (MiDecrementModifiedWriteCount.c)
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     MiReduceUnusedSubsectionCount @ 0x140097E14 (MiReduceUnusedSubsectionCount.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 *     MiDestroySection @ 0x1401490F8 (MiDestroySection.c)
 *     MiIsSubsectionClean @ 0x14020A668 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // rbp
  BOOL v3; // r12d
  __int64 v4; // rdi
  ULONG_PTR v5; // rsi
  _QWORD **v6; // r14
  KIRQL v7; // r15
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 inserted; // rbx
  int v16; // ebx
  void *v17; // r13
  volatile LONG *v18; // r14
  int IsSubsectionClean; // eax
  int v20; // ebx
  KIRQL v21; // al
  unsigned __int64 v22; // rbx
  struct _FILE_OBJECT *v23; // rbp
  KIRQL v24; // r12
  signed __int64 v25; // r15
  KIRQL v26; // al
  int v27; // ecx
  KIRQL v28; // r15
  _QWORD *v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // rsi
  unsigned int v34[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h]
  ULONG_PTR v37; // [rsp+A0h] [rbp+18h]

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = 1;
  v4 = 1LL;
  v5 = 1LL;
  v6 = (_QWORD **)(a1 + 1576);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v5 = (ULONG_PTR)(i - 10);
    v4 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v4 + 72)) )
      break;
  }
  if ( i == v6 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    result = 3221226021LL;
LABEL_11:
    __writecr8(v7);
    return result;
  }
  v10 = (_QWORD *)(v5 + 80);
  v11 = *(_QWORD *)(v5 + 80);
  v12 = *(_QWORD **)(v5 + 88);
  if ( *(_QWORD *)(v11 + 8) != v5 + 80 || (_QWORD *)*v12 != v10 )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *(_WORD *)(v5 + 34) &= ~8u;
  *(_QWORD *)(v5 + 88) = v5 + 80;
  *v10 = v10;
  MiReduceUnusedSubsectionCount(v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v14 = *(_DWORD *)(v4 + 56);
  if ( (v14 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    result = 3221225587LL;
    goto LABEL_11;
  }
  if ( (v14 & 8) != 0 )
  {
    if ( *(_DWORD *)(v5 + 52) >= 0x80000000 )
    {
      inserted = MiInsertUnusedSubsection((_DWORD *)v5, v13);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v7);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      return 3221225504LL;
    }
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  *(_QWORD *)(v5 + 96) = 1LL;
  *(_WORD *)(v5 + 32) &= ~1u;
  MiRemoveUnusedSegment(v4);
  *(_DWORD *)(v4 + 56) |= 0x100u;
  v17 = *(void **)(v5 + 8);
  if ( v16 == 1 )
  {
    ++*(_DWORD *)(v4 + 76);
    v18 = (volatile LONG *)(v4 + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v7);
    IsSubsectionClean = MiIsSubsectionClean(v5);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        *(_DWORD *)(v5 + 52) |= 0x80000000;
        v22 = v21;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        __writecr8(v22);
      }
      v20 = -1073741792;
    }
    else
    {
      v20 = 0;
    }
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 112), 1uLL);
    v18 = (volatile LONG *)(v4 + 72);
    v23 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(v4 + 64));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v7);
    v37 = *(_QWORD *)(v5 + 8);
    v36 = v37 + 8LL * *(unsigned int *)(v5 + 44) - 8;
    v20 = FsRtlAcquireFileForCcFlushEx(v23);
    v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    v25 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 112));
    if ( v20 < 0 || (*(_DWORD *)(v4 + 56) & 1) != 0 )
    {
      if ( v25 )
        ++*(_DWORD *)(v4 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v24);
      if ( v20 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v23);
        v20 = -1073741431;
      }
      if ( !v25 )
      {
        MiDeleteControlArea(v4);
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
        return (unsigned int)v20;
      }
      v3 = 1;
    }
    else
    {
      ++*(_DWORD *)(v4 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v24);
      v3 = 1;
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
      v20 = MiFlushSectionInternal(v37, v36, (__int64 *)v5, v5, 0LL, 2, v34);
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
      FsRtlReleaseFileForCcFlush(v23);
    }
    MiDereferenceControlAreaFile(v4, (unsigned __int64)v23);
  }
  v26 = ExAcquireSpinLockExclusive(v18);
  v27 = *(_DWORD *)(v4 + 56);
  v28 = v26;
  if ( (v27 & 1) == 0 )
  {
    if ( v20 >= 0 )
    {
      if ( *(_QWORD *)(v5 + 96) != 1LL || (*(_BYTE *)(v5 + 32) & 1) != 0 )
      {
        v20 = -1073741823;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
        __writecr8(v28);
        v3 = MiPurgeSubsection(v5) == 0;
        v28 = ExAcquireSpinLockExclusive(v18);
      }
    }
    *(_DWORD *)(v4 + 56) &= ~0x100u;
    if ( (*(_DWORD *)(v4 + 56) & 1) != 0 )
      goto LABEL_45;
    v30 = 0LL;
    if ( v3 || *(_QWORD *)(v5 + 96) != 1LL || *(_DWORD *)(v5 + 104) || (*(_BYTE *)(v5 + 32) & 1) != 0 )
    {
      v20 = -1073741823;
      v30 = MiDecrementSubsectionViewCount((_QWORD *)v5, 0);
      if ( !*(_QWORD *)(v5 + 96) )
        v30 += MiInsertUnusedSubsection((_DWORD *)v5, v31);
      v17 = 0LL;
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    v33 = (_QWORD *)MiDecrementModifiedWriteCount(v4, 1);
    if ( *(_QWORD *)(v4 + 24) | *(_QWORD *)(v4 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      __writecr8(v28);
    }
    else if ( *(_QWORD *)(v4 + 32) )
    {
      v30 += MiInsertUnusedSegment(v4, v32);
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      __writecr8(v28);
    }
    else
    {
      MiDestroySection(v4, v28, 0LL);
    }
    if ( v33 )
      MiReleaseControlAreaWaiters(v33);
    if ( v30 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v30);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    return (unsigned int)v20;
  }
  *(_DWORD *)(v4 + 56) = v27 & 0xFFFFFEFF;
LABEL_45:
  MiDecrementSubsectionViewCount((_QWORD *)v5, 0);
  v29 = (_QWORD *)MiDecrementModifiedWriteCount(v4, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v18);
  __writecr8(v28);
  if ( v29 )
    MiReleaseControlAreaWaiters(v29);
  return 3221225473LL;
}
