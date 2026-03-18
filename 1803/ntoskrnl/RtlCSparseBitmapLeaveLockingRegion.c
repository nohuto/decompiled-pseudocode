/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x14029EEDC
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x14029D404 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x14029DC74 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14029DDC4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14029DF34 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

void __fastcall RtlCSparseBitmapLeaveLockingRegion(unsigned __int8 *a1)
{
  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 56LL) )
    __writecr8(*a1);
  else
    KeLeaveCriticalRegion();
}
