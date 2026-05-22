/*
 * XREFs of std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007AD8C
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007AD8C (std--_Sort_unchecked1_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambd.c)
 * Callees:
 *     std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007AD8C (std--_Sort_unchecked1_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambd.c)
 *     std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007B09C (std--_Partition_by_median_guess_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____.c)
 *     std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007B684 (std--_Pop_heap_hole_by_index_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64.c)
 */

unsigned __int64 __fastcall std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rsi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  char *v12; // rax
  char *v13; // xmm0_8
  int v14; // eax
  char *v15; // rsi
  char *v16; // xmm0_8
  __int64 v17; // rcx
  void *v18; // rcx
  char *i; // rdi
  char *v20; // xmm0_8
  char *v21; // rdx
  unsigned __int16 v22; // r9
  char *j; // rcx
  char *v24; // [rsp+30h] [rbp-10h] BYREF
  char *v25; // [rsp+38h] [rbp-8h]
  char *v26; // [rsp+60h] [rbp+20h]
  char *v27; // [rsp+68h] [rbp+28h]
  unsigned int v28; // [rsp+68h] [rbp+28h]

  v4 = a2;
  v6 = a1;
  v7 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  result = v7 >> 63;
  v9 = (v7 >> 63) + v7;
  if ( v9 <= 32 )
    goto LABEL_34;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      &v24,
      v6,
      v4);
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( (v24 - v6) / 12 >= (v4 - v25) / 12 )
    {
      std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        v25,
        v4,
        a3,
        a4);
      v4 = v24;
    }
    else
    {
      std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        v6,
        v24,
        a3,
        a4);
      v6 = v25;
    }
    result = (unsigned __int64)((unsigned __int128)((v4 - v6) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    v9 = (v4 - v6) / 12;
  }
  while ( v9 > 32 );
  v27 = v4;
  if ( v9 <= 32 )
  {
LABEL_34:
    if ( v9 >= 2 && v6 != v4 )
    {
      v18 = v6 + 12;
      for ( i = v6 + 12; i != v4; v18 = v6 + 12 )
      {
        v20 = *(char **)i;
        v21 = i;
        LODWORD(result) = *((_DWORD *)i + 2);
        v24 = v20;
        v28 = result;
        if ( (unsigned __int16)v20 < *(_WORD *)v6 || (_WORD)v20 == *(_WORD *)v6 && WORD2(v24) < *((_WORD *)v6 + 2) )
        {
          memmove(v18, v6, i - v6);
          result = v28;
          *(_QWORD *)v6 = v20;
          *((_DWORD *)v6 + 2) = v28;
        }
        else
        {
          v22 = WORD2(v24);
          for ( j = i; ; v21 = j )
          {
            j -= 12;
            if ( (unsigned __int16)v20 >= *(_WORD *)j && ((_WORD)v20 != *(_WORD *)j || v22 >= *((_WORD *)j + 2)) )
              break;
            *(_QWORD *)v21 = *(_QWORD *)j;
            *((_DWORD *)v21 + 2) = *((_DWORD *)j + 2);
          }
          result = (unsigned int)result;
          *(_QWORD *)v21 = v20;
          *((_DWORD *)v21 + 2) = result;
        }
        i += 12;
      }
    }
  }
  else
  {
    result = (unsigned __int64)((unsigned __int128)((v4 - v6) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    v10 = (v4 - v6) / 12;
    if ( v10 >= 2 )
    {
      if ( v10 / 2 > 0 )
      {
        v11 = v10 / 2;
        v12 = &v6[12 * (v10 / 2)];
        do
        {
          v26 = v12 - 12;
          --v11;
          v13 = *(char **)(v12 - 12);
          v14 = *((_DWORD *)v12 - 1);
          v24 = v13;
          LODWORD(v25) = v14;
          std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
            v6,
            v11,
            v10,
            &v24);
          v12 = v26;
        }
        while ( v11 > 0 );
        v4 = v27;
      }
      v15 = v4 - 12;
      do
      {
        if ( v10 >= 2 )
        {
          v16 = *(char **)v15;
          LODWORD(v25) = *((_DWORD *)v15 + 2);
          v24 = v16;
          *(_QWORD *)v15 = *(_QWORD *)v6;
          *((_DWORD *)v15 + 2) = *((_DWORD *)v6 + 2);
          std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
            v6,
            0LL,
            (v15 - v6) / 12,
            &v24);
        }
        v15 -= 12;
        v17 = v15 - v6 + 12;
        result = (unsigned __int64)((unsigned __int128)(v17 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
        v10 = v17 / 12;
      }
      while ( v17 / 12 >= 2 );
    }
  }
  return result;
}
