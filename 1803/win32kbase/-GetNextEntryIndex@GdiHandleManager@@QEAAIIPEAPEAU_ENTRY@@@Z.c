/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002BD90
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C0076618 (HmgNextGarbageCollectible.c)
 *     NtGdiGetStats @ 0x1C00C3210 (NtGdiGetStats.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00C3F64 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00C406C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00C418C (MultiUserCleanupDCs.c)
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00DAC78 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::GetNextEntryIndex(GdiHandleManager *this, unsigned int a2, struct _ENTRY **a3)
{
  GdiHandleManager *v3; // rdi
  struct _ENTRY *Entry; // rax

  v3 = gpHandleManager;
  *a3 = 0LL;
  while ( ++a2 < *(_DWORD *)v3 )
  {
    Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v3 + 2), a2, 0);
    *a3 = Entry;
    if ( Entry )
      return a2;
  }
  return 0LL;
}
