/*
 * XREFs of SmHpChunkAlloc @ 0x1402720E4
 * Callers:
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026F38C (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14026F410 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     SmHpBufferAlloc @ 0x140271CC0 (SmHpBufferAlloc.c)
 *     SmHpBufferUpdateFullness @ 0x140271F94 (SmHpBufferUpdateFullness.c)
 */

_WORD *__fastcall SmHpChunkAlloc(_DWORD *a1)
{
  _DWORD *v1; // rbx
  bool v2; // zf
  _WORD *v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx

  v1 = a1;
  v2 = !_BitScanForward((unsigned int *)&a1, a1[71]);
  if ( v2 )
  {
    v3 = 0LL;
    while ( SmHpBufferAlloc(v1) )
    {
      v2 = !_BitScanForward((unsigned int *)&a1, v1[71]);
      if ( !v2 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v4 = *(_QWORD *)&v1[4 * (unsigned int)a1 + 72];
    v5 = *(unsigned int *)(v4 + 16);
    _BitScanReverse((unsigned int *)&v6, v5);
    v7 = *(_QWORD *)&v1[2 * v6] + 16 * (v5 ^ (unsigned int)(1 << v6));
    v3 = (_WORD *)(v4 + *(unsigned __int16 *)(v7 + 8));
    *(_WORD *)(v7 + 8) = *v3;
    SmHpBufferUpdateFullness((ULONG_PTR)v1, v7, -1);
    ++v1[141];
  }
  return v3;
}
