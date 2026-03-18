/*
 * XREFs of MiFaultGetFileExtents @ 0x14026194C
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiReleaseFaultCharges @ 0x1400C7D70 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x1400C819C (MiRetainSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceControlArea @ 0x1401404A0 (MiDereferenceControlArea.c)
 *     MiReleaseFaultSynchronization @ 0x14026207C (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v5; // rsi
  unsigned int FileExtents; // ebx

  v2 = *(__int64 **)(a2 + 200);
  v5 = *v2;
  MiRetainSubsection(v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultSynchronization(a1);
  FileExtents = MiAllocateFileExtents((ULONG_PTR)v2, 2);
  MiFreeInPageSupportBlock((char *)a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges(v2);
  return FileExtents;
}
