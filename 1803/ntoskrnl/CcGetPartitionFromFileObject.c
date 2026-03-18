/*
 * XREFs of CcGetPartitionFromFileObject @ 0x1400988C0
 * Callers:
 *     CcZeroData @ 0x140098570 (CcZeroData.c)
 *     CcDeferWrite @ 0x14021FEA0 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    return CcGetPartition(v2);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
