/*
 * XREFs of std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A01CC
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x18009E954 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A01CC (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambda.c)
 * Callees:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A01CC (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambda.c)
 *     std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A051C (std--_Partition_by_median_guess_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____.c)
 *     std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A0850 (std--_Pop_heap_hole_by_index_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64.c)
 */

unsigned __int64 __fastcall std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        char *a1,
        char *a2,
        __int64 a3,
        char a4)
{
  char *v4; // rsi
  signed __int64 v6; // r9
  char *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  signed __int64 v14; // kr00_8
  __int64 v15; // rcx
  char *v16; // xmm0_8
  int v17; // eax
  char *v18; // rcx
  char *v19; // xmm0_8
  char *v20; // rcx
  __int64 v21; // rdx
  void *v22; // rcx
  char *i; // rbx
  char *v24; // rdx
  unsigned __int16 v25; // r8
  char *j; // rcx
  int v27; // [rsp+20h] [rbp-30h]
  unsigned __int64 v28; // [rsp+30h] [rbp-20h]
  __int64 v29; // [rsp+30h] [rbp-20h]
  char *v30; // [rsp+40h] [rbp-10h] BYREF
  char *v31; // [rsp+48h] [rbp-8h]
  __int64 v32; // [rsp+70h] [rbp+20h]
  __int64 v33; // [rsp+70h] [rbp+20h]
  char *v34; // [rsp+78h] [rbp+28h]
  char *v35; // [rsp+78h] [rbp+28h]
  unsigned int v36; // [rsp+78h] [rbp+28h]
  __int64 v37; // [rsp+80h] [rbp+30h]

  v37 = a3;
  v4 = a2;
  v6 = a2 - a1;
  v7 = a1;
  v8 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  result = v8 >> 63;
  v10 = (v8 >> 63) + v8;
  if ( v10 <= 32 )
    goto LABEL_31;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(v6) = a4;
    std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      &v30,
      v7,
      v4,
      v6);
    v11 = 0x2AAAAAAAAAAAAAABLL;
    v37 = (v37 >> 1) + (v37 >> 2);
    LOBYTE(v11) = a4;
    if ( (v30 - v7) / 12 >= (v4 - v31) / 12 )
    {
      std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        v31,
        v4,
        v37,
        v11);
      v4 = v30;
    }
    else
    {
      std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        v7,
        v30,
        v37,
        v11);
      v7 = v31;
    }
    a3 = v37;
    result = (unsigned __int64)((unsigned __int128)((v4 - v7) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    v10 = (v4 - v7) / 12;
  }
  while ( v10 > 32 );
  v34 = v4;
  if ( v10 <= 32 )
  {
LABEL_31:
    if ( v10 >= 2 && v7 != v4 )
    {
      v22 = v7 + 12;
      for ( i = v7 + 12; i != v4; v22 = v7 + 12 )
      {
        v24 = i;
        v29 = *(_QWORD *)i;
        v25 = *(_QWORD *)i;
        v33 = *(_QWORD *)i;
        v36 = *((_DWORD *)i + 2);
        if ( v25 < *(_WORD *)v7 || (unsigned __int16)*(_QWORD *)i == *(_WORD *)v7 && WORD2(v29) < *((_WORD *)v7 + 2) )
        {
          memmove(v22, v7, i - v7);
          result = v36;
          *(_QWORD *)v7 = v33;
          *((_DWORD *)v7 + 2) = v36;
        }
        else
        {
          for ( j = i; ; v24 = j )
          {
            j -= 12;
            if ( v25 >= *(_WORD *)j && (v25 != *(_WORD *)j || WORD2(v29) >= *((_WORD *)j + 2)) )
              break;
            *(_QWORD *)v24 = *(_QWORD *)j;
            *((_DWORD *)v24 + 2) = *((_DWORD *)j + 2);
          }
          result = v36;
          *(_QWORD *)v24 = v33;
          *((_DWORD *)v24 + 2) = v36;
        }
        i += 12;
      }
    }
  }
  else
  {
    v12 = (__int64)((unsigned __int128)((v4 - v7) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
    result = v12 >> 63;
    v14 = v12;
    v13 = (v12 >> 63) + v12;
    v15 = v14 / 2;
    if ( v14 / 2 > 0 )
    {
      result = (unsigned __int64)&v7[12 * v15];
      do
      {
        LOBYTE(v27) = a4;
        v28 = result - 12;
        v32 = v15 - 1;
        v16 = *(char **)(result - 12);
        v17 = *(_DWORD *)(result - 12 + 8);
        v30 = v16;
        LODWORD(v31) = v17;
        std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
          v7,
          v15 - 1,
          v13,
          &v30,
          v27);
        v15 = v32;
        result = v28;
      }
      while ( v32 > 0 );
    }
    if ( v13 >= 2 )
    {
      v18 = v34 - 12;
      v35 = v34 - 12;
      do
      {
        v19 = *(char **)v18;
        LODWORD(v31) = *((_DWORD *)v18 + 2);
        v30 = v19;
        *(_QWORD *)v18 = *(_QWORD *)v7;
        *((_DWORD *)v18 + 2) = *((_DWORD *)v7 + 2);
        LOBYTE(v27) = a4;
        std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
          v7,
          0LL,
          (v18 - v7) / 12,
          &v30,
          v27);
        v20 = v35;
        v35 -= 12;
        v21 = (unsigned __int128)((v20 - v7) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v18 = v20 - 12;
        v21 >>= 1;
        result = (unsigned __int64)v21 >> 63;
      }
      while ( (__int64)(((unsigned __int64)v21 >> 63) + v21) >= 2 );
    }
  }
  return result;
}
