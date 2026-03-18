/*
 * XREFs of ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14012ECF0
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14012EB64 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     SmHpChunkHeapInitialize @ 0x14012EFA4 (SmHpChunkHeapInitialize.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14012F0B0 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14012F0F4 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     memset @ 0x140192D80 (memset.c)
 */

unsigned __int64 __fastcall ST_STORE<SM_TRAITS>::StDmInitialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+10h] BYREF

  memset((void *)a1, 0, 0x780uLL);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    a1 + 24,
    1LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    a1 + 88,
    1LL);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    a1 + 152,
    1LL);
  SmHpChunkHeapInitialize((void *)(a1 + 192));
  memset((void *)(a1 + 1360), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1432) = a1 + 1424;
  *(_QWORD *)(a1 + 1424) = 0LL;
  *(_DWORD *)(a1 + 1412) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1456) = 0;
  *(_QWORD *)(a1 + 1488) = a2;
  memset((void *)(a1 + 1496), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1568) = a1 + 1560;
  *(_QWORD *)(a1 + 1560) = 0LL;
  *(_DWORD *)(a1 + 1548) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1592) = 1;
  *(_QWORD *)(a1 + 1624) = a2;
  memset((void *)(a1 + 1632), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1704) = a1 + 1696;
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_DWORD *)(a1 + 1684) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_QWORD *)(a1 + 1752) = 0LL;
  v4 = 6LL;
  *(_QWORD *)(a1 + 1736) = 0LL;
  *(_QWORD *)(a1 + 1608) = 0x20000000LL;
  *(_QWORD *)(a1 + 1600) = 0x20000000LL;
  v5 = (_QWORD *)(a1 + 1088);
  *(_DWORD *)(a1 + 1592) = 2;
  *(_QWORD *)(a1 + 1624) = a2;
  *(_QWORD *)(a1 + 1472) = 1LL;
  *(_QWORD *)(a1 + 1480) = 0x1FFFFFFFLL;
  *(_QWORD *)(a1 + 1464) = 1LL;
  *(_QWORD *)(a1 + 1616) = 0x3FFFFFFFLL;
  *(_QWORD *)(a1 + 16) = a1 + 1360;
  *(_QWORD *)(a1 + 80) = a1 + 1496;
  *(_QWORD *)(a1 + 144) = a1 + 1632;
  do
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
    *(_DWORD *)v5 = -1;
    v5 += 3;
    --v4;
  }
  while ( v4 );
  v6 = (_DWORD *)(a1 + 1232);
  v7 = 8LL;
  do
  {
    *v6 = -1;
    v6 += 4;
    --v7;
  }
  while ( v7 );
  v8 = *(_DWORD *)(a1 + 864) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 872) = 4;
  *(_BYTE *)(a1 + 776) = 2;
  *(_DWORD *)(a1 + 864) = v8 | 6;
  *(_DWORD *)(a1 + 1008) = -10001;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  result = (unsigned __int64)((unsigned __int128)(10000 * PerformanceFrequency.QuadPart * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63;
  *(_DWORD *)(a1 + 992) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  return result;
}
