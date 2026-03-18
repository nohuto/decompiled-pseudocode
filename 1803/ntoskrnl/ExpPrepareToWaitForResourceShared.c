/*
 * XREFs of ExpPrepareToWaitForResourceShared @ 0x1400CF664
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140159160 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x1400CCA08 (RtlInsertHeadCircularList.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  return RtlInsertHeadCircularList((__int64 *)(a1 + 32), (_QWORD *)a2);
}
