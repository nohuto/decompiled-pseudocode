/*
 * XREFs of MiDeleteCachedSubsection @ 0x14024EDD4
 * Callers:
 *     MiRemoveUnusedSegments @ 0x14024FD3C (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiReduceUnusedSubsectionCount @ 0x1400E4064 (MiReduceUnusedSubsectionCount.c)
 *     MiRemoveUnusedSegment @ 0x1400E40E4 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementModifiedWriteCount @ 0x1401351A4 (MiDecrementModifiedWriteCount.c)
 *     MiDestroySection @ 0x14015E144 (MiDestroySection.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiIsSubsectionClean @ 0x14024F640 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
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
  int IsSubsectionClean; // eax
  int v18; // ebx
  KIRQL v19; // al
  unsigned __int64 v20; // rbx
  struct _FILE_OBJECT *v21; // rbp
  KIRQL v22; // r12
  signed __int64 v23; // r15
  KIRQL v24; // al
  __int64 v25; // r8
  int v26; // ecx
  KIRQL v27; // r15
  KIRQL v28; // al
  unsigned int v29; // ecx
  __int64 *v30; // rbx
  __int64 v31; // rbp
  __int64 *v32; // rdi
  int v33[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v35; // [rsp+98h] [rbp+10h]
  ULONG_PTR v36; // [rsp+A0h] [rbp+18h]

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = 1;
  v4 = 1LL;
  v5 = 1LL;
  v6 = (_QWORD **)(a1 + 1648);
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
      inserted = MiInsertUnusedSubsection(v5);
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
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v7);
    IsSubsectionClean = MiIsSubsectionClean(v5);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        *(_DWORD *)(v5 + 52) |= 0x80000000;
        v20 = v19;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        __writecr8(v20);
      }
      v18 = -1073741792;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 112), 1uLL);
    v21 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(v4 + 64));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v7);
    v36 = *(_QWORD *)(v5 + 8);
    v35 = v36 + 8LL * *(unsigned int *)(v5 + 44) - 8;
    v18 = FsRtlAcquireFileForCcFlushEx(v21);
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    v23 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 112));
    if ( v18 < 0 || (*(_DWORD *)(v4 + 56) & 1) != 0 )
    {
      if ( v23 )
        ++*(_DWORD *)(v4 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v22);
      if ( v18 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v21);
        v18 = -1073741431;
      }
      if ( !v23 )
      {
        MiDeleteControlArea((PVOID)v4);
        ObfDereferenceObjectWithTag(v21, 0x746C6644u);
        return (unsigned int)v18;
      }
      v3 = 1;
    }
    else
    {
      ++*(_DWORD *)(v4 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v22);
      v3 = 1;
      KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
      v18 = MiFlushSectionInternal(v36, v35, (__int64 *)v5, v5, 0LL, 2, v33);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(v21);
    }
    MiDereferenceControlAreaFile(v4, (unsigned __int64)v21);
  }
  v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  v26 = *(_DWORD *)(v4 + 56);
  v27 = v24;
  if ( (v26 & 1) == 0 )
  {
    if ( v18 >= 0 )
    {
      if ( *(_QWORD *)(v5 + 96) != 1LL || (*(_BYTE *)(v5 + 32) & 1) != 0 )
      {
        v18 = -1073741823;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        __writecr8(v27);
        v3 = MiPurgeSubsection(v5) == 0;
        v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        v26 = *(_DWORD *)(v4 + 56);
        v27 = v28;
      }
    }
    v29 = v26 & 0xFFFFFEFF;
    *(_DWORD *)(v4 + 56) = v29;
    if ( (v29 & 1) != 0 )
      goto LABEL_47;
    v31 = 0LL;
    if ( v3 || *(_QWORD *)(v5 + 96) != 1LL || *(_DWORD *)(v5 + 104) || (*(_BYTE *)(v5 + 32) & 1) != 0 )
    {
      v18 = -1073741823;
      v31 = MiDecrementSubsectionViewCount((_QWORD *)v5, 0LL, v25);
      if ( !*(_QWORD *)(v5 + 96) )
        v31 += MiInsertUnusedSubsection(v5);
      v16 = 0LL;
    }
    else
    {
      MiUpdateSystemProtoPtesTree(v5 + 112, 0);
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    v32 = MiDecrementModifiedWriteCount(v4, 1);
    if ( *(_QWORD *)(v4 + 24) | *(_QWORD *)(v4 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v27);
    }
    else if ( *(_QWORD *)(v4 + 32) )
    {
      v31 += MiInsertUnusedSegment(v4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      __writecr8(v27);
    }
    else
    {
      MiDestroySection(v4, v27, 0LL);
    }
    if ( v32 )
      MiReleaseControlAreaWaiters(v32);
    if ( v31 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v31);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    return (unsigned int)v18;
  }
  *(_DWORD *)(v4 + 56) = v26 & 0xFFFFFEFF;
LABEL_47:
  MiDecrementSubsectionViewCount((_QWORD *)v5, 0LL, v25);
  v30 = MiDecrementModifiedWriteCount(v4, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  __writecr8(v27);
  if ( v30 )
    MiReleaseControlAreaWaiters(v30);
  return 3221225473LL;
}
