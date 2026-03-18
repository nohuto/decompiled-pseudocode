/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x1400E5400
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x14004D030 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiRemoveViewsFromSection @ 0x1400E503C (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14006276C (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x1400E5F10 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140267E2C (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140268404 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  ULONG_PTR v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int16 v8; // dx
  _KPROCESS *Process; // rax
  ULONG_PTR *v10; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v12; // rax
  int v13; // ebx

  v3 = *BugCheckParameter2;
  v4 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(v3 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v5 = 0LL;
  if ( (a2 & 4) == 0
    && (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2, a2, a3, v3) )
  {
    if ( (v8 & 0x10) != 0 )
    {
      v10 = 0LL;
    }
    else if ( (v8 & 0x80u) != 0 )
    {
      v10 = &MiSystemPartition;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = (v8 & 0x100) != 0
          ? *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(Process[1].ActiveProcessors.Bitmap[2] + 3182))
          : *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
    }
    if ( v10 != *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v4);
      v12 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v13 = *(_DWORD *)(v12 + 48) & 0x3FFFFFFF;
      if ( v13 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v4, (unsigned int)(v13 - 1));
        if ( v13 == 1 )
          v5 = MiComputeCrossPartitionSectionCharges();
      }
    }
  }
  if ( *(_QWORD *)(v3 + 64) && (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (*(_BYTE *)(v4 + 34) & 1) == 0 )
  {
    v6 = *(_QWORD *)(v4 + 96);
    if ( !v6 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v4, 0LL, 0LL);
    *(_QWORD *)(v4 + 96) = v6 - 1;
  }
  return v5;
}
