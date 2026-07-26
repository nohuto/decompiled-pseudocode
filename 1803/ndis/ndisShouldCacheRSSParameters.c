/*
 * XREFs of ndisShouldCacheRSSParameters @ 0x1C00159F8
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C00152B0 (ndisOidPostRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001589C (ndisPostSetMiniportRSSParameters.c)
 *     ndisOidPreRSSParameters @ 0x1C00B59A0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisShouldCacheRSSParameters(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( ((*(_DWORD *)(a1 + 88) & 0x4000) != 0 || *(_BYTE *)(a1 + 1) >= 2u)
    && (*(_DWORD *)(a1 + 244) & 1) != 0
    && (unsigned int)(*(_DWORD *)(a1 + 240) - 1) <= 0xFFFFFFFD )
  {
    return 0;
  }
  return v1;
}
