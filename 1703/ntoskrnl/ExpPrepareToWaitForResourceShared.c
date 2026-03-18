/*
 * XREFs of ExpPrepareToWaitForResourceShared @ 0x14003ABE0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14014E340 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall ExpPrepareToWaitForResourceShared(__int64 a1, __int64 a2)
{
  ++*(_DWORD *)(a1 + 72);
  memset((void *)a2, 0, 0x28uLL);
  *(_DWORD *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 16) = 1;
  *(_BYTE *)(a2 + 18) = 6;
  *(_QWORD *)(a2 + 32) = a2 + 24;
  *(_QWORD *)(a2 + 24) = a2 + 24;
  return RtlInsertHeadCircularList(a1 + 32, a2);
}
