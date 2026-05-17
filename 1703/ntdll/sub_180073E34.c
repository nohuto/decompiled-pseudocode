/*
 * XREFs of sub_180073E34 @ 0x180073E34
 * Callers:
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 *     RtlEnumerateEntryHashTable @ 0x180073D80 (RtlEnumerateEntryHashTable.c)
 *     RtlContractHashTable @ 0x1800862F0 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x18008C560 (RtlExpandHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x1800F1510 (RtlStronglyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180073E34(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ecx

  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v5, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v5);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (v5 - 7));
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
  }
  return v3 + 16LL * a2;
}
