/*
 * XREFs of CcFetchDataForRead @ 0x14007AE80
 * Callers:
 *     CcMapAndCopyFromCache @ 0x1404A68D0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 * Callees:
 *     MmWaitForCacheManagerPrefetch @ 0x140020718 (MmWaitForCacheManagerPrefetch.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MmPrefetchForCacheManager @ 0x140492FC0 (MmPrefetchForCacheManager.c)
 *     MmHardFaultBytesRequired @ 0x1404A6A80 (MmHardFaultBytesRequired.c)
 */

char __fastcall CcFetchDataForRead(__int64 a1, _QWORD *a2, unsigned int a3, char a4, _DWORD *a5, _QWORD *P, int a7)
{
  int v7; // r14d
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v13; // rsi
  int v14; // r8d

  v7 = a1;
  v8 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  v9 = *P + (*(_DWORD *)a2 & 0x3F000);
  v10 = ((*a2 + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - v8;
  v11 = 0x40000 - ((*(_DWORD *)P + (*(_DWORD *)a2 & 0x3F000)) & 0x3FFFF);
  if ( v11 >= (unsigned int)v10 )
    v11 = ((*(_DWORD *)a2 + a3 + 4095) & 0xFFFFF000) - v8;
  v13 = v11;
  if ( !(unsigned int)MmHardFaultBytesRequired(a1, *a2 & 0xFFFFFFFFFFFFF000uLL, v11) )
    goto LABEL_4;
  if ( a4 )
  {
    MmPrefetchForCacheManager(v7, v8, v14, v10, a7);
    *a5 = 1;
LABEL_4:
    MmCheckCachedPageStates(v9, v13, 0LL, 0LL);
    return 1;
  }
  return 0;
}
