/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x1406F5A80
 * Callers:
 *     <none>
 * Callees:
 *     CmpRebuildKcbCache @ 0x1404985B8 (CmpRebuildKcbCache.c)
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(a1 + 24) == a2)
    && !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)
    && *(_QWORD *)(a1 + 24)
    && (*(_DWORD *)(a1 + 176) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1);
  }
  return 0LL;
}
