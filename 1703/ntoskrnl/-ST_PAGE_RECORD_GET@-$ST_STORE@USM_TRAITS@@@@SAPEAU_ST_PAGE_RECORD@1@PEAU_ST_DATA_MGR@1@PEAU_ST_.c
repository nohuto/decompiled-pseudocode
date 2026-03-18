/*
 * XREFs of ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14005D4B0
 * Callers:
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14005D3B8 (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024B7F8 (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *i; // rdx
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_DWORD *)(a2 + 4);
  v4 = v2 >> a1[114];
  _BitScanReverse((unsigned int *)&v5, v4);
  for ( i = (_DWORD *)((unsigned int)a1[118]
                     + a1[116] * (v2 & a1[115])
                     + *(_QWORD *)(*(_QWORD *)&a1[2 * v5 + 48] + 16 * (v4 ^ (unsigned int)(1 << v5))));
        *i == -1;
        i = (_DWORD *)((unsigned int)a1[118]
                     + a1[116] * (v8 & a1[115])
                     + *(_QWORD *)(*(_QWORD *)&a1[2 * v10 + 48] + 16 * (v9 ^ (unsigned int)(1 << v10)))) )
  {
    v8 = i[1];
    v9 = v8 >> a1[114];
    _BitScanReverse((unsigned int *)&v10, v9);
  }
  return i;
}
