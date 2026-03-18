/*
 * XREFs of ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026D96C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14026F410 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     StIoCountsMovePeriod @ 0x140272608 (StIoCountsMovePeriod.c)
 *     SmMapPage @ 0x140275E1C (SmMapPage.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  unsigned __int32 v6; // edx
  __int64 v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 result; // rax
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
    if ( v16.m128i_i32[0] < 0 )
    {
      v9 = v18;
      v8 = 1;
    }
    else
    {
      v8 = v18 >> 12;
      v9 = 0;
    }
    for ( v16.m128i_i64[1] = v5; ; v16.m128i_i64[1] += 4096LL )
    {
      v19 = (v6 & 0x80000000) == 0 ? 1 : (v9 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      do
      {
        v10 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1, &v16, a2, &v19);
        v7 = v10;
      }
      while ( v10 == -1073741267 );
      v6 = v16.m128i_i32[0];
      if ( v10 )
        break;
      v6 = (v16.m128i_i32[0] ^ ((v16.m128i_i32[0] & 0xFFFFFFF8) + 8)) & 0x3FFFFFF8 ^ v16.m128i_i32[0];
      v16.m128i_i32[0] = v6;
      if ( ((v6 >> 3) & 0x7FFFFFF) >= v8 )
        goto LABEL_16;
      LODWORD(v17) = v17 + 1;
    }
    if ( v10 == -1073741818 )
    {
      v6 = v16.m128i_i32[0] & 0xC0000007;
      goto LABEL_22;
    }
LABEL_16:
    v11 = (v6 >> 3) & 0x7FFFFFF;
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 1816);
      if ( v12 )
      {
        v13 = v12 + 24;
        v14 = *(_DWORD **)v13;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(v13 + 16) )
          v14 = (_DWORD *)StIoCountsMovePeriod(v13, MEMORY[0xFFFFF78000000008], v7);
        *v14 += v11;
        v6 = v16.m128i_i32[0];
      }
      LODWORD(v7) = 0;
    }
  }
  else
  {
    LODWORD(v7) = -1073741670;
  }
LABEL_22:
  result = (unsigned int)v7;
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ v6) & 0x3FFFFFF8;
  return result;
}
