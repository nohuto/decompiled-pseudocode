/*
 * XREFs of RtlpGetChainHead @ 0x14001ABBC
 * Callers:
 *     RtlInsertEntryHashTable @ 0x14001AAC0 (RtlInsertEntryHashTable.c)
 *     RtlExpandHashTable @ 0x1401019A0 (RtlExpandHashTable.c)
 *     RtlpPopulateContext @ 0x140103E38 (RtlpPopulateContext.c)
 *     RtlContractHashTable @ 0x140111010 (RtlContractHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x140253DB0 (RtlStronglyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
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
