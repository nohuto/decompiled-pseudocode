/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x14010EFE4
 * Callers:
 *     ObpReleaseHandleInfo @ 0x14044E830 (ObpReleaseHandleInfo.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x14056B3F0 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpInsertHandleCount @ 0x14056B608 (ObpInsertHandleCount.c)
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
