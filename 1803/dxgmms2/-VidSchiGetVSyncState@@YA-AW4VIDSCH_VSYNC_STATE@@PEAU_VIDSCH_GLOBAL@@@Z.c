/*
 * XREFs of ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0033D40
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00BF1F0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetVSyncState(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1984) )
    return 0x10000LL;
  else
    return *(_BYTE *)(a1 + 2012) != 0 ? 3 : 0;
}
