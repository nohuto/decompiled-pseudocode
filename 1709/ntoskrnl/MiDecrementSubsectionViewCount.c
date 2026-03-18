/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x1400A1FF0
 * Callers:
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiRemoveViewsFromSection @ 0x1400A23B4 (MiRemoveViewsFromSection.c)
 *     MiAppendSubsectionChain @ 0x140110780 (MiAppendSubsectionChain.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400148C4 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x1400A1520 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14022DCA0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14022E260 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // r10
  ULONG_PTR v3; // r11
  __int64 v4; // rbx
  __int64 v5; // rax
  __int16 v7; // dx
  _KPROCESS *Process; // rcx
  ULONG_PTR *v9; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rcx

  v2 = *(_QWORD *)BugCheckParameter2;
  v3 = BugCheckParameter2;
  if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && (*(_BYTE *)(BugCheckParameter2 + 34) & 1) == 0
    && !*(_QWORD *)(BugCheckParameter2 + 96) )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v4 = 0LL;
  if ( (a2 & 4) == 0 && (a2 & 8) != 0 && !MiControlAreaExemptFromCrossPartitionCharges(v2) )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v9 = 0LL;
    }
    else if ( (v7 & 0x80u) != 0 )
    {
      v9 = &MiSystemPartition;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = (v7 & 0x100) != 0
         ? *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(Process[1].ActiveProcessors.Bitmap[2] + 3180))
         : *(ULONG_PTR **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
    }
    if ( v9 != *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
      v11 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v12 = *(_DWORD *)(v11 + 48) & 0x3FFFFFFF;
      if ( v12 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v12 - 1));
        if ( v12 == 1 )
          v4 = MiComputeCrossPartitionSectionCharges(v13);
      }
    }
  }
  if ( *(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 56) & 0x20) == 0 && (*(_BYTE *)(v3 + 34) & 1) == 0 )
  {
    v5 = *(_QWORD *)(v3 + 96);
    if ( !v5 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v3, 0LL, 0LL);
    *(_QWORD *)(v3 + 96) = v5 - 1;
  }
  return v4;
}
