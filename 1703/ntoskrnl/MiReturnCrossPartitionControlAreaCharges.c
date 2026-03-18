/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C
 * Callers:
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x140149B04 (MiSessionRemoveImage.c)
 *     MiDereferenceFailedControlArea @ 0x14045ED34 (MiDereferenceFailedControlArea.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1404974E0 (MiUnmapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned int v5; // ecx

  v1 = *(_QWORD *)(a1 + 64);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = MiDecrementSubsectionViewCount((_QWORD *)(a1 + 128), 24);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v3);
  v5 = 0;
  if ( v4 )
  {
    LOBYTE(v5) = v1 != 0;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)), v5, v4);
  }
}
