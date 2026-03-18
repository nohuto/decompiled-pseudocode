/*
 * XREFs of MiDeleteCachedSubsection @ 0x140210974
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiReduceUnusedSubsectionCount @ 0x14001F3E4 (MiReduceUnusedSubsectionCount.c)
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x14010A894 (MiDestroySection.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiIsSubsectionClean @ 0x140211280 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // rbp
  BOOL v3; // r12d
  __int64 v4; // rsi
  ULONG_PTR v5; // rdi
  _QWORD **v6; // r14
  KIRQL v7; // r15
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  int v13; // eax
  __int64 inserted; // rbx
  int v15; // ebx
  void *v16; // r13
  volatile LONG *v17; // r14
  int IsSubsectionClean; // eax
  int v19; // ebx
  KIRQL v20; // al
  unsigned __int64 v21; // rbx
  struct _FILE_OBJECT *v22; // rbp
  KIRQL v23; // r12
  signed __int64 v24; // r15
  KIRQL v25; // al
  int v26; // ecx
  KIRQL v27; // r15
  __int64 *v28; // rbx
  __int64 v29; // rbp
  __int64 *v30; // rdi
  _DWORD v31[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h]
  unsigned __int64 v34; // [rsp+A0h] [rbp+18h]

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = 1;
  v4 = 1LL;
  v5 = 1LL;
  v6 = (_QWORD **)(a1 + 1640);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
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
  if ( *(_QWORD *)(v11 + 8) != v5 + 80 || (v12 = *(_QWORD **)(v5 + 88), (_QWORD *)*v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *(_WORD *)(v5 + 34) &= ~8u;
  *(_QWORD *)(v5 + 88) = v5 + 80;
  *v10 = v10;
  MiReduceUnusedSubsectionCount((_DWORD *)v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v13 = *(_DWORD *)(v4 + 56);
  if ( (v13 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    result = 3221225587LL;
    goto LABEL_11;
  }
  if ( (v13 & 8) != 0 )
  {
    if ( *(int *)(v5 + 52) < 0 )
    {
      inserted = MiInsertUnusedSubsection((_DWORD *)v5);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v7);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      return 3221225504LL;
    }
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  if ( *(_QWORD *)(v5 + 96) )
    KeBugCheckEx(0x1Au, 0x42004uLL, v5, 0LL, 0LL);
  *(_QWORD *)(v5 + 96) = 1LL;
  *(_WORD *)(v5 + 32) &= ~1u;
  MiRemoveUnusedSegment(v4);
  *(_DWORD *)(v4 + 56) |= 0x100u;
  v16 = *(void **)(v5 + 8);
  if ( v15 == 1 )
  {
    ++*(_DWORD *)(v4 + 76);
    v17 = (volatile LONG *)(v4 + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v7);
    IsSubsectionClean = MiIsSubsectionClean(v5);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        *(_DWORD *)(v5 + 52) |= 0x80000000;
        v21 = v20;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        __writecr8(v21);
      }
      v19 = -1073741792;
    }
    else
    {
      v19 = 0;
    }
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 112), 1uLL);
    v17 = (volatile LONG *)(v4 + 72);
    v22 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(v4 + 64));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v7);
    v34 = *(_QWORD *)(v5 + 8);
    v33 = v34 + 8LL * *(unsigned int *)(v5 + 44) - 8;
    v19 = FsRtlAcquireFileForCcFlushEx(v22);
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    v24 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 112));
    if ( v19 < 0 || (*(_DWORD *)(v4 + 56) & 1) != 0 )
    {
      if ( v24 )
        ++*(_DWORD *)(v4 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v23);
      if ( v19 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v22);
        v19 = -1073741431;
      }
      if ( !v24 )
      {
        MiDeleteControlArea((char *)v4);
        ObfDereferenceObjectWithTag(v22, 0x746C6644u);
        return (unsigned int)v19;
      }
      v3 = 1;
    }
    else
    {
      ++*(_DWORD *)(v4 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v23);
      v3 = 1;
      KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
      v19 = MiFlushSectionInternal(v34, v33, (_QWORD *)v5, v5, 0LL, 2, v31);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(v22);
    }
    MiDereferenceControlAreaFile(v4, (unsigned __int64)v22);
  }
  v25 = ExAcquireSpinLockExclusive(v17);
  v26 = *(_DWORD *)(v4 + 56);
  v27 = v25;
  if ( (v26 & 1) == 0 )
  {
    if ( v19 >= 0 )
    {
      if ( *(_QWORD *)(v5 + 96) != 1LL || (*(_BYTE *)(v5 + 32) & 1) != 0 )
      {
        v19 = -1073741823;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v17);
        __writecr8(v27);
        v3 = MiPurgeSubsection(v5) == 0;
        v27 = ExAcquireSpinLockExclusive(v17);
      }
    }
    *(_DWORD *)(v4 + 56) &= ~0x100u;
    if ( (*(_DWORD *)(v4 + 56) & 1) != 0 )
      goto LABEL_47;
    v29 = 0LL;
    if ( v3 || *(_QWORD *)(v5 + 96) != 1LL || *(_DWORD *)(v5 + 104) || (*(_BYTE *)(v5 + 32) & 1) != 0 )
    {
      v19 = -1073741823;
      v29 = MiDecrementSubsectionViewCount(v5, 0);
      if ( !*(_QWORD *)(v5 + 96) )
        v29 += MiInsertUnusedSubsection((_DWORD *)v5);
      v16 = 0LL;
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    v30 = MiDecrementModifiedWriteCount(v4, 1);
    if ( *(_QWORD *)(v4 + 24) | *(_QWORD *)(v4 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      __writecr8(v27);
    }
    else if ( *(_QWORD *)(v4 + 32) )
    {
      v29 += MiInsertUnusedSegment(v4);
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      __writecr8(v27);
    }
    else
    {
      MiDestroySection(v4, v27, 0LL);
    }
    if ( v30 )
      MiReleaseControlAreaWaiters(v30);
    if ( v29 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v29);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    return (unsigned int)v19;
  }
  *(_DWORD *)(v4 + 56) = v26 & 0xFFFFFEFF;
LABEL_47:
  MiDecrementSubsectionViewCount(v5, 0);
  v28 = MiDecrementModifiedWriteCount(v4, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v17);
  __writecr8(v27);
  if ( v28 )
    MiReleaseControlAreaWaiters(v28);
  return 3221225473LL;
}
