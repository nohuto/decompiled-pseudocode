/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x140692830
 * Callers:
 *     <none>
 * Callees:
 *     CmpRebuildKcbCache @ 0x1405695C4 (CmpRebuildKcbCache.c)
 *     CmpIsKeyDeleted @ 0x140569BB0 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(BugCheckParameter3 + 24) == a2)
    && !CmpIsKeyDeleted(BugCheckParameter3, 0LL)
    && *(_QWORD *)(BugCheckParameter3 + 24)
    && (*(_DWORD *)(BugCheckParameter3 + 176) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(BugCheckParameter3);
  }
  return 0LL;
}
