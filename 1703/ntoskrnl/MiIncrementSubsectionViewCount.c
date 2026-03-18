/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x14009A170
 * Callers:
 *     MiSetSubsectionBase @ 0x140039EF0 (MiSetSubsectionBase.c)
 *     MiRetainSubsection @ 0x14006BC58 (MiRetainSubsection.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiReferenceSubsection @ 0x140098D38 (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiPrepareSegmentForDeletion @ 0x1401191A4 (MiPrepareSegmentForDeletion.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14009A250 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402215A8 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  unsigned int v4; // ebx
  __int16 v6; // r8
  ULONG_PTR *v7; // rax
  int v8; // edx

  v2 = *a1;
  v3 = a1;
  v4 = 2;
  if ( (a2 & 8) != 0 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*a1, a2, (unsigned int)a2) )
  {
    if ( (v6 & 0x80u) != 0 )
    {
      v7 = &MiSystemPartition;
    }
    else if ( (v6 & 0x100) != 0 )
    {
      v7 = *(ULONG_PTR **)(qword_14036C8F8
                         + 8LL
                         * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                               + 3180));
    }
    else
    {
      v7 = (v6 & 0x10) != 0
         ? 0LL
         : *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
    }
    if ( v7 != *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      if ( (((v6 & 0x200) == 0) & *(_BYTE *)(v2 + 62)) != 0 )
      {
        ++dword_14036C908;
        return 0LL;
      }
      if ( !*(_QWORD *)(v2 + 64) )
        v3 = (_QWORD *)(v2 + 128);
      v8 = v3[6] & 0x3FFFFFFF;
      if ( v8 != 0x3FFFFFFF )
      {
        if ( !v8 )
        {
          if ( (v6 & 0x20) == 0 )
            return 1LL;
          v4 = 3;
        }
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v8 + 1));
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 && *(_QWORD *)(v2 + 64) && (*((_BYTE *)v3 + 34) & 1) == 0 )
    ++v3[12];
  return v4;
}
