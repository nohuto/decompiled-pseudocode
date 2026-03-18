/*
 * XREFs of CcUnmapAndPurge @ 0x1400DB23C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC (CcReferenceSharedCacheMapFileObject.c)
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
