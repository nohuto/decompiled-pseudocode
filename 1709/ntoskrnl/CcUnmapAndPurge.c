/*
 * XREFs of CcUnmapAndPurge @ 0x1400202D4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 */

__int64 __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // rsi

  v4 = CcReferenceSharedCacheMapFileObject();
  LOBYTE(v5) = a2;
  v6 = v4;
  CcUnmapVacbArray(a1, 0, 0, v5, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  return CcDereferenceSharedCacheMapFileObject(a1, v6);
}
