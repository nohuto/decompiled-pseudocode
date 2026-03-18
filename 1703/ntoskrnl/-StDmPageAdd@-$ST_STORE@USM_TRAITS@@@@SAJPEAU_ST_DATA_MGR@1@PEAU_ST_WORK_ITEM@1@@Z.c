/*
 * XREFs of ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140054D9C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140058180 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmMapPage @ 0x14005D83C (SmMapPage.c)
 *     StIoCountsMovePeriod @ 0x14024D3B8 (StIoCountsMovePeriod.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  unsigned __int32 v6; // edx
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // r10d
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __m128i v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  unsigned int v18; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v16 = *(__m128i *)(a2 + 8);
  v17 = v4;
  v5 = SmMapPage(_mm_srli_si128(v16, 8).m128i_u64[0], &v18);
  v6 = v16.m128i_i32[0];
  if ( v5 )
  {
    if ( v16.m128i_i32[0] >= 0 )
    {
      v8 = v18 >> 12;
      v7 = 0;
    }
    else
    {
      v7 = v18;
      v8 = 1;
    }
    for ( v16.m128i_i64[1] = v5; ; v16.m128i_i64[1] += 4096LL )
    {
      v19 = (v6 & 0x80000000) == 0 ? 1 : (v7 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      do
      {
        v9 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1, &v16, a2, &v19);
        v10 = v9;
      }
      while ( v9 == -1073741267 );
      v6 = v16.m128i_i32[0];
      if ( v9 )
        break;
      v6 = (v16.m128i_i32[0] ^ ((v16.m128i_i32[0] & 0xFFFFFFF8) + 8)) & 0x3FFFFFF8 ^ v16.m128i_i32[0];
      v16.m128i_i32[0] = v6;
      if ( ((v6 >> 3) & 0x7FFFFFF) >= v8 )
        goto LABEL_10;
      LODWORD(v17) = v17 + 1;
    }
    if ( v9 == -1073741818 )
    {
      v6 = v16.m128i_i32[0] & 0xC0000007;
      goto LABEL_13;
    }
LABEL_10:
    v11 = (v6 >> 3) & 0x7FFFFFF;
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 1800);
      if ( v12 )
      {
        v14 = v12 + 24;
        v15 = *(_DWORD **)v14;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(v14 + 16) )
          v15 = (_DWORD *)StIoCountsMovePeriod(v14, MEMORY[0xFFFFF78000000008], v10);
        *v15 += v11;
        v6 = v16.m128i_i32[0];
      }
      LODWORD(v10) = 0;
    }
  }
  else
  {
    LODWORD(v10) = -1073741670;
  }
LABEL_13:
  result = (unsigned int)v10;
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ v6) & 0x3FFFFFF8;
  return result;
}
