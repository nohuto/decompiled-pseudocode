/*
 * XREFs of std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D7EC
 * Callers:
 *     std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D130 (std--_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007DA64 (std--_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd.c)
 */

unsigned __int64 __fastcall std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int128 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rcx
  _OWORD v12[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h]

  v4 = (__int64)((unsigned __int128)((a2 - (__int64)a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v4 >> 63;
  if ( (__int64)((v4 >> 63) + v4) >= 2 )
  {
    v6 = a2 - 72;
    do
    {
      v7 = *(_OWORD *)(v6 + 16);
      v12[0] = *(_OWORD *)v6;
      v8 = *(_OWORD *)(v6 + 32);
      v12[1] = v7;
      v9 = *(_OWORD *)(v6 + 48);
      v12[2] = v8;
      v13 = *(_QWORD *)(v6 + 64);
      v10 = *a1;
      v12[3] = v9;
      *(_OWORD *)v6 = v10;
      *(_OWORD *)(v6 + 16) = a1[1];
      *(_OWORD *)(v6 + 32) = a1[2];
      *(_OWORD *)(v6 + 48) = a1[3];
      *(_QWORD *)(v6 + 64) = *((_QWORD *)a1 + 8);
      std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        a1,
        0LL,
        (v6 - (__int64)a1) / 72,
        v12);
      v6 -= 72LL;
      v11 = v6 - (_QWORD)a1 + 72;
      result = (unsigned __int64)((unsigned __int128)(v11 * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
    }
    while ( v11 / 72 >= 2 );
  }
  return result;
}
