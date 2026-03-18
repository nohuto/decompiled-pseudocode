/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00331B0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C0067BC4 (MultiUserNtGreCleanup.c)
 *     HmgPrefetchAllObjt @ 0x1C007C440 (HmgPrefetchAllObjt.c)
 *     MultiUserCleanupDCs @ 0x1C0088B3C (MultiUserCleanupDCs.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0088BE4 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0090C98 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00A00A4 (HmgNextGarbageCollectible.c)
 *     NtGdiGetStats @ 0x1C00EC070 (NtGdiGetStats.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00EC4A8 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GdiHandleManager::GetNextEntryIndex(GdiHandleManager *this, unsigned int a2, struct _ENTRY **a3)
{
  GdiHandleManager *v3; // r10
  __int64 v5; // rdx
  unsigned int v6; // r11d
  signed int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // eax
  struct _ENTRY *v10; // r11

  v3 = gpHandleManager;
LABEL_2:
  *a3 = 0LL;
  while ( ++a2 < *(_DWORD *)v3 )
  {
    v5 = *((_QWORD *)v3 + 2);
    v6 = *(_DWORD *)(v5 + 2056);
    if ( a2 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      goto LABEL_2;
    if ( a2 >= v6 )
    {
      v7 = ((a2 - v6) >> 16) + 1;
      if ( (a2 - v6) >> 16 == -2 )
        goto LABEL_2;
    }
    else
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)(v5 + 8LL * v7 + 8);
    v9 = a2;
    if ( v7 )
      v9 = a2 - (v7 << 16) - v6 + 0x10000;
    v10 = 0LL;
    if ( v9 < *(_DWORD *)(v8 + 20) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                     + 16LL * (unsigned __int8)v9
                     + 8) )
        v10 = (struct _ENTRY *)(*(_QWORD *)v8 + 24LL * v9);
    }
    *a3 = v10;
    if ( v10 )
      return a2;
  }
  return 0LL;
}
