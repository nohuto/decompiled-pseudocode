/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x1400A8E30
 * Callers:
 *     MiAppendSubsectionChain @ 0x14005E4A0 (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     MiRemoveViewsFromSection @ 0x1400A8D90 (MiRemoveViewsFromSection.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 * Callees:
 *     MiComputeCrossPartitionSectionCharges @ 0x140221020 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402215A8 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(_QWORD *a1, __int16 a2)
{
  __int64 v2; // r10
  __int64 v3; // rbx
  _QWORD *v4; // r11
  __int64 v5; // r8
  _KPROCESS *Process; // rcx
  ULONG_PTR *v7; // rax
  __int64 result; // rax
  int v9; // edi
  __int64 v10; // rcx

  v2 = *a1;
  v3 = 0LL;
  v4 = a1;
  if ( (a2 & 4) == 0 && (a2 & 8) != 0 && (*(_DWORD *)(v2 + 56) & 0x40000000) == 0 )
  {
    v5 = *(_QWORD *)(v2 + 64);
    if ( v5 || (*(_DWORD *)(v2 + 92) & 0x10000) == 0 )
    {
      if ( (a2 & 0x10) != 0 )
      {
        v7 = 0LL;
      }
      else if ( (a2 & 0x80u) != 0 )
      {
        v7 = &MiSystemPartition;
      }
      else
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v7 = (a2 & 0x100) != 0
           ? *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(Process[1].ActiveProcessors.Bitmap[2] + 3180))
           : *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
      }
      if ( v7 != *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
      {
        if ( !v5 )
          v4 = (_QWORD *)(v2 + 128);
        v9 = v4[6] & 0x3FFFFFFF;
        if ( v9 != 0x3FFFFFFF )
        {
          MiUpdateSubsectionCrossPartitionRefs(v4, (unsigned int)(v9 - 1));
          if ( v9 == 1 )
            v3 = MiComputeCrossPartitionSectionCharges(v10);
        }
      }
    }
  }
  if ( !*(_QWORD *)(v2 + 64) || (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
    return v3;
  result = v3;
  if ( (*((_BYTE *)v4 + 34) & 1) == 0 )
    --v4[12];
  return result;
}
