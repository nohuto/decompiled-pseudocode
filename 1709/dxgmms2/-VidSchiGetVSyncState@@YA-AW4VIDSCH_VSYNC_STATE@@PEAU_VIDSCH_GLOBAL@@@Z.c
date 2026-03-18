/*
 * XREFs of ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002C53C
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00B58D0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetVSyncState(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1968) )
    return 0x10000LL;
  else
    return *(_BYTE *)(a1 + 1996) != 0 ? 3 : 0;
}
