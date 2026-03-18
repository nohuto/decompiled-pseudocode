/*
 * XREFs of MiRemoveFaultNode @ 0x14009DCE0
 * Callers:
 *     MiMapPagesToZero @ 0x14009D760 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x14017C0A4 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_1403CBD28;
  if ( v1 )
    v3 = &dword_1403CBD18;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_1403CBD30;
  if ( v1 )
    v4 = &qword_1403CBD20;
  RtlAvlRemoveNode((unsigned __int64 *)v4, a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
