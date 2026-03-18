/*
 * XREFs of ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14001C160
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140057744 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140058180 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmHpBufferProtect @ 0x140059A00 (SmHpBufferProtect.c)
 * Callees:
 *     <none>
 */

void __fastcall MetroHash64::Hash(const unsigned __int8 *a1, unsigned __int64 a2, unsigned __int8 *const a3)
{
  const unsigned __int8 *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v3 = &a1[a2];
  v5 = 0x52BC33FEDBE4CBB5LL;
  if ( a2 >= 0x20 )
  {
    v6 = 0x52BC33FEDBE4CBB5LL;
    v7 = 0x52BC33FEDBE4CBB5LL;
    v8 = 0x52BC33FEDBE4CBB5LL;
    v9 = 0x52BC33FEDBE4CBB5LL;
    do
    {
      v6 = v8 + __ROR8__(3603962101LL * *(_QWORD *)a1 + v6, 29);
      v7 = v9 + __ROR8__(2729050939LL * *((_QWORD *)a1 + 1) + v7, 29);
      v10 = 817650473LL * *((_QWORD *)a1 + 3);
      v11 = __ROR8__(1654206401LL * *((_QWORD *)a1 + 2) + v8, 29);
      a1 += 32;
      v8 = v6 + v11;
      v9 = v7 + __ROR8__(v10 + v9, 29);
    }
    while ( a1 <= v3 - 32 );
    v12 = (2729050939LL * __ROR8__(v7 + 3603962101LL * (v9 + v6), 37)) ^ v8;
    v13 = (3603962101LL * __ROR8__(v6 + 2729050939LL * (v7 + v12), 37)) ^ v9;
    v5 = ((2729050939LL * __ROR8__(v13 + 3603962101LL * (v12 + v6), 37)) ^ v6 ^ (3603962101LL
                                                                               * __ROR8__(
                                                                                   v12 + 2729050939LL * (v13 + v7),
                                                                                   37)) ^ v7)
       + 0x52BC33FEDBE4CBB5LL;
  }
  if ( v3 - a1 >= 16 )
  {
    v15 = 1654206401LL * *(_QWORD *)a1;
    v16 = *((_QWORD *)a1 + 1);
    a1 += 16;
    v17 = 817650473LL * __ROR8__(v5 + v15, 29);
    v18 = 817650473LL * __ROR8__(v5 + 1654206401 * v16, 29);
    v5 += v18 ^ (__ROR8__(817650473 * v18, 21) + (v17 ^ (v18 + __ROR8__(3603962101LL * v17, 21))));
  }
  if ( v3 - a1 >= 8 )
  {
    v19 = 817650473LL * *(_QWORD *)a1;
    a1 += 8;
    v5 = (2729050939LL * __ROR8__(v19 + v5, 55)) ^ (v19 + v5);
  }
  if ( v3 - a1 >= 4 )
  {
    v21 = *(unsigned int *)a1;
    a1 += 4;
    v5 = (2729050939LL * __ROR8__(817650473 * v21 + v5, 26)) ^ (817650473 * v21 + v5);
  }
  if ( v3 - a1 >= 2 )
  {
    v20 = *(unsigned __int16 *)a1;
    a1 += 2;
    v5 = (2729050939LL * __ROR8__(817650473 * v20 + v5, 48)) ^ (817650473 * v20 + v5);
  }
  if ( v3 - a1 >= 1 )
    v5 = (2729050939LL * __ROR8__(817650473LL * *a1 + v5, 37)) ^ (817650473LL * *a1 + v5);
  v14 = v5 ^ __ROR8__(v5, 28);
  *(_QWORD *)a3 = (3603962101LL * v14) ^ __ROR8__(3603962101LL * v14, 29);
}
