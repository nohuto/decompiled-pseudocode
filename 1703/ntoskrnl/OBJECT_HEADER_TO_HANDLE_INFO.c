/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x14001397C
 * Callers:
 *     ObpUnlockHandleDatabaseEntry @ 0x14041F4E8 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpInsertHandleCount @ 0x14042C418 (ObpInsertHandleCount.c)
 *     ObpReleaseHandleInfo @ 0x1406C1374 (ObpReleaseHandleInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}
