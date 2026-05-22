/*
 * XREFs of std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A222C
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A1630 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A222C (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c.c)
 * Callees:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A222C (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c.c)
 *     std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A242C (std--_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd.c)
 *     std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A28EC (std--_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1__.c)
 *     std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A2A10 (std--_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a939.c)
 *     std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A2B74 (std--_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd.c)
 */

__int64 __fastcall std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        char *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rbp
  __int64 v7; // r9
  __int64 v8; // r8
  char *v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rbp
  char *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // [rsp+20h] [rbp-88h]
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  char *v21; // [rsp+38h] [rbp-70h]
  _OWORD v22[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+80h] [rbp-28h]
  char *v24; // [rsp+B0h] [rbp+8h]
  __int64 v25; // [rsp+B8h] [rbp+10h]

  v4 = a2;
  v7 = a2 - (_QWORD)a1;
  v8 = 0xE38E38E38E38E39LL;
  v9 = a1;
  v10 = (__int64)((unsigned __int128)((a2 - (__int64)a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v10 >> 63;
  v12 = (v10 >> 63) + v10;
  if ( v12 <= 32 )
    goto LABEL_13;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(v7) = a4;
    std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
      &v20,
      v9,
      v4,
      v7);
    v13 = 0xE38E38E38E38E39LL;
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v13) = a4;
    if ( (v20 - (__int64)v9) / 72 >= (v4 - (__int64)v21) / 72 )
    {
      std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        v21,
        v4,
        a3,
        v13);
      v4 = v20;
    }
    else
    {
      std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        v9,
        v20,
        a3,
        v13);
      v9 = v21;
    }
    v8 = 0xE38E38E38E38E39LL;
    result = 0xE38E38E38E38E39LL * (v4 - (_QWORD)v9);
    v12 = (v4 - (__int64)v9) / 72;
  }
  while ( v12 > 32 );
  v25 = v4;
  if ( v12 <= 32 )
  {
LABEL_13:
    if ( v12 >= 2 )
      return std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v9);
  }
  else
  {
    v14 = ((v4 - (__int64)v9) / 72) >> 1;
    if ( v14 > 0 )
    {
      v15 = (v4 - (__int64)v9) / 72;
      v16 = &v9[72 * v14];
      do
      {
        LOBYTE(v19) = a4;
        --v14;
        v24 = v16 - 72;
        v22[1] = *(_OWORD *)(v16 - 56);
        v17 = *(_OWORD *)(v16 - 24);
        v22[0] = *(_OWORD *)(v16 - 72);
        v18 = *(_OWORD *)(v16 - 40);
        v22[3] = v17;
        v22[2] = v18;
        v23 = *((_QWORD *)v16 - 1);
        std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
          v9,
          v14,
          v15,
          v22,
          v19);
        v16 = v24;
      }
      while ( v14 > 0 );
      v4 = v25;
    }
    LOBYTE(v8) = a4;
    return std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v9, v4, v8);
  }
  return result;
}
