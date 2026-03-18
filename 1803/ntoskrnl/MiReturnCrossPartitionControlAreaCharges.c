/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C
 * Callers:
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MiFinishCreateSection @ 0x1404C37A0 (MiFinishCreateSection.c)
 *     MiUnmapImageInSystemSpace @ 0x14053D034 (MiUnmapImageInSystemSpace.c)
 *     MiDereferenceFailedControlArea @ 0x140584664 (MiDereferenceFailedControlArea.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rbp
  unsigned int v6; // ecx

  v1 = *(_QWORD *)(a1 + 64);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v5 = MiDecrementSubsectionViewCount((_QWORD *)(a1 + 128), 24LL, v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v3);
  v6 = 0;
  if ( v5 )
  {
    LOBYTE(v6) = v1 != 0;
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)), v6, v5);
  }
}
