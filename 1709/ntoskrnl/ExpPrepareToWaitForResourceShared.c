/*
 * XREFs of ExpPrepareToWaitForResourceShared @ 0x14012DBF4
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14013F0C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x140113D54 (RtlInsertHeadCircularList.c)
 *     memset @ 0x140192F40 (memset.c)
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
