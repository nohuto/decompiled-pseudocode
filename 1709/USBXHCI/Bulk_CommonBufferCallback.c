/*
 * XREFs of Bulk_CommonBufferCallback @ 0x1C002D8C0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x1C002EA78 (Bulk_MapTransfers.c)
 */

__int64 __fastcall Bulk_CommonBufferCallback(__int64 a1)
{
  ++*(_DWORD *)(a1 + 332);
  return Bulk_MapTransfers(a1, 0LL);
}
