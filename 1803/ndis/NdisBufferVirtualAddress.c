/*
 * XREFs of NdisBufferVirtualAddress @ 0x1C005B160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall NdisBufferVirtualAddress(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
    return *(PVOID *)(a1 + 24);
  else
    return MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
}
