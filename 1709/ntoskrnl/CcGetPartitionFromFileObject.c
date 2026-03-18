/*
 * XREFs of CcGetPartitionFromFileObject @ 0x14011ED14
 * Callers:
 *     CcZeroData @ 0x14011E9B0 (CcZeroData.c)
 *     CcDeferWrite @ 0x1401E08A0 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD **)(v1 + 8)) != 0LL )
    return CcGetPartition(v2);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
