/*
 * XREFs of SmcCacheCleanup @ 0x140703F48
 * Callers:
 *     SmcProcessCreateRequest @ 0x140701444 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x140703FC8 (SmcCacheDelete.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     SmStoreDelete @ 0x1407010BC (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x140701F04 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x1407032F4 (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi

  v2 = a1 + 168;
  v3 = 16LL;
  do
  {
    if ( *(_DWORD *)v2 != -1 )
    {
      SmStoreDelete(*(_DWORD *)(v2 + 4) & 3, *(_DWORD *)v2);
      MiDeleteSubsection(*(PPRIVILEGE_SET *)(v2 + 8));
    }
    v2 += 24LL;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    SmKmStoreFileDelete(a1 + 40);
  SmKmFileInfoCleanup(a1 + 40);
  StEtaCleanup(a1 + 104);
}
