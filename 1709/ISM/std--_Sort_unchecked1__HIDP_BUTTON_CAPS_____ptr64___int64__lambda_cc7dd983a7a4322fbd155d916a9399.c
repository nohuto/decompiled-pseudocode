/*
 * XREFs of std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D130
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x18007C3C8 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D130 (std--_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399.c)
 * Callees:
 *     std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D130 (std--_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399.c)
 *     std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D33C (std--_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd.c)
 *     std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D7EC (std--_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1__.c)
 *     std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D8FC (std--_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a939.c)
 *     std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007DA64 (std--_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd.c)
 */

__int64 __fastcall std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  char *v13; // rbp
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  char *v18; // [rsp+38h] [rbp-60h]
  _OWORD v19[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+80h] [rbp-18h]
  __int64 v21; // [rsp+A8h] [rbp+10h]

  v4 = a2;
  v7 = a1;
  v8 = (__int64)((unsigned __int128)((a2 - (__int64)a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v8 >> 63;
  v10 = (v8 >> 63) + v8;
  if ( v10 <= 32 )
    goto LABEL_14;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
      &v17,
      v7,
      v4);
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( (v17 - (__int64)v7) / 72 >= (v4 - (__int64)v18) / 72 )
    {
      std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        v18,
        v4,
        a3,
        a4);
      v4 = v17;
    }
    else
    {
      std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        v7,
        v17,
        a3,
        a4);
      v7 = v18;
    }
    result = 0xE38E38E38E38E39LL * (v4 - (_QWORD)v7);
    v10 = (v4 - (__int64)v7) / 72;
  }
  while ( v10 > 32 );
  v21 = v4;
  if ( v10 <= 32 )
  {
LABEL_14:
    if ( v10 >= 2 )
      return std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v7);
  }
  else
  {
    v11 = (v4 - (__int64)v7) / 72;
    if ( v11 >= 2 )
    {
      v12 = v11 / 2;
      if ( v11 / 2 > 0 )
      {
        v13 = &v7[72 * (v11 / 2)];
        do
        {
          v13 -= 72;
          --v12;
          v14 = *((_OWORD *)v13 + 1);
          v19[0] = *(_OWORD *)v13;
          v15 = *((_OWORD *)v13 + 2);
          v19[1] = v14;
          v16 = *((_OWORD *)v13 + 3);
          v19[2] = v15;
          v20 = *((_QWORD *)v13 + 8);
          v19[3] = v16;
          std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
            v7,
            v12,
            v11,
            v19);
        }
        while ( v12 > 0 );
        v4 = v21;
      }
    }
    return std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v7, v4);
  }
  return result;
}
