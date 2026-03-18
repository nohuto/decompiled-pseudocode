/*
 * XREFs of SmHpChunkHeapProtect @ 0x14001EC34
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E8E4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmHpBufferProtect @ 0x140059A00 (SmHpBufferProtect.c)
 */

__int64 __fastcall SmHpChunkHeapProtect(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD *v7; // rdx

  for ( i = 1; i < *(_DWORD *)(a1 + 256); ++i )
  {
    _BitScanReverse((unsigned int *)&v5, i);
    result = i;
    v7 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v5) + 16 * (i ^ (unsigned __int64)(unsigned int)(1 << v5)));
    if ( *v7 )
      result = SmHpBufferProtect(v5, v7, a2);
  }
  return result;
}
