/*
 * XREFs of SmcCacheCleanup @ 0x14079F24C
 * Callers:
 *     SmcProcessCreateRequest @ 0x14079C744 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x14079F2D0 (SmcCacheDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     StEtaCleanup @ 0x14009AD44 (StEtaCleanup.c)
 *     SmStoreDelete @ 0x14079C3DC (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x14079D204 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x14079E600 (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1)
{
  PPRIVILEGE_SET *v2; // rbx
  __int64 v3; // rsi
  int v4; // edx

  v2 = (PPRIVILEGE_SET *)(a1 + 176);
  v3 = 16LL;
  do
  {
    v4 = *((_DWORD *)v2 - 2);
    if ( v4 != -1 )
    {
      SmStoreDelete(*((_DWORD *)v2 - 1) & 3, v4);
      CmSiFreeMemory(*v2);
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    SmKmStoreFileDelete(a1 + 40);
  SmKmFileInfoCleanup(a1 + 40);
  StEtaCleanup(a1 + 104);
}
