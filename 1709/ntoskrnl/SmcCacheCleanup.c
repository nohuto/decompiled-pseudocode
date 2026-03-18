/*
 * XREFs of SmcCacheCleanup @ 0x14073C248
 * Callers:
 *     SmcProcessCreateRequest @ 0x14073950C (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x14073C2CC (SmcCacheDelete.c)
 * Callees:
 *     StEtaCleanup @ 0x140006EF4 (StEtaCleanup.c)
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     SmStoreDelete @ 0x140739188 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x14073A200 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x14073B5F8 (SmKmStoreFileDelete.c)
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
      MiDeleteSubsection(*v2);
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
