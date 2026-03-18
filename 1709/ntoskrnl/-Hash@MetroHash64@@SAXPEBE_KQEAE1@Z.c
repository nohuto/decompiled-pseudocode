/*
 * XREFs of ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14025D7A4
 * Callers:
 *     MiAddMdlTracker @ 0x140215AE4 (MiAddMdlTracker.c)
 *     MiValidateMdlTracker @ 0x1402162C4 (MiValidateMdlTracker.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402652D4 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14026F410 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmFixSingleBitCorruption @ 0x140271BFC (SmFixSingleBitCorruption.c)
 *     SmHpBufferProtectEx @ 0x140271E6C (SmHpBufferProtectEx.c)
 * Callees:
 *     <none>
 */

void __fastcall MetroHash64::Hash(const unsigned __int8 *a1, unsigned __int64 a2, unsigned __int8 *const a3)
{
  const unsigned __int8 *v3; // r11
  const unsigned __int8 *v5; // r10
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx

  v3 = &a1[a2];
  v5 = a1;
  v6 = 0x52BC33FEDBE4CBB5LL;
  if ( a2 >= 0x20 )
  {
    v7 = 0x52BC33FEDBE4CBB5LL;
    v8 = 0x52BC33FEDBE4CBB5LL;
    v9 = 0x52BC33FEDBE4CBB5LL;
    v10 = 0x52BC33FEDBE4CBB5LL;
    do
    {
      v7 = v9 + __ROR8__(3603962101LL * *(_QWORD *)v5 + v7, 29);
      v8 = v10 + __ROR8__(2729050939LL * *((_QWORD *)v5 + 1) + v8, 29);
      v11 = 817650473LL * *((_QWORD *)v5 + 3);
      v12 = __ROR8__(1654206401LL * *((_QWORD *)v5 + 2) + v9, 29);
      v5 += 32;
      v9 = v7 + v12;
      v10 = v8 + __ROR8__(v11 + v10, 29);
    }
    while ( v5 <= v3 - 32 );
    v13 = (2729050939LL * __ROR8__(v8 + 3603962101LL * (v10 + v7), 37)) ^ v9;
    v14 = (3603962101LL * __ROR8__(v7 + 2729050939LL * (v8 + v13), 37)) ^ v10;
    v6 = ((2729050939LL * __ROR8__(v14 + 3603962101LL * (v13 + v7), 37)) ^ v7 ^ (3603962101LL
                                                                               * __ROR8__(
                                                                                   v13 + 2729050939LL * (v14 + v8),
                                                                                   37)) ^ v8)
       + 0x52BC33FEDBE4CBB5LL;
  }
  if ( v3 - v5 >= 16 )
  {
    v15 = 1654206401LL * *(_QWORD *)v5;
    v16 = *((_QWORD *)v5 + 1);
    v5 += 16;
    v17 = 817650473LL * __ROR8__(v6 + v15, 29);
    v18 = 817650473LL * __ROR8__(v6 + 1654206401 * v16, 29);
    v6 += v18 ^ (__ROR8__(817650473 * v18, 21) + (v17 ^ (v18 + __ROR8__(3603962101LL * v17, 21))));
  }
  if ( v3 - v5 >= 8 )
  {
    v19 = 817650473LL * *(_QWORD *)v5;
    v5 += 8;
    v6 = (2729050939LL * __ROR8__(v19 + v6, 55)) ^ (v19 + v6);
  }
  if ( v3 - v5 >= 4 )
  {
    v20 = *(unsigned int *)v5;
    v5 += 4;
    v6 = (2729050939LL * __ROR8__(817650473 * v20 + v6, 26)) ^ (817650473 * v20 + v6);
  }
  if ( v3 - v5 >= 2 )
  {
    v21 = *(unsigned __int16 *)v5;
    v5 += 2;
    v6 = (2729050939LL * __ROR8__(817650473 * v21 + v6, 48)) ^ (817650473 * v21 + v6);
  }
  if ( v3 - v5 >= 1 )
    v6 = (2729050939LL * __ROR8__(817650473LL * *v5 + v6, 37)) ^ (817650473LL * *v5 + v6);
  v22 = 3603962101u * (v6 ^ __ROR8__(v6, 28));
  *(_QWORD *)a3 = v22 ^ __ROR8__(v22, 29);
}
