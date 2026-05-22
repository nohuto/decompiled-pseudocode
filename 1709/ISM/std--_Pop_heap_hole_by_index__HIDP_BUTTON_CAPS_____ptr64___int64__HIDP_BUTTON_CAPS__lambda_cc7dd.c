/*
 * XREFs of std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007DA64
 * Callers:
 *     std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D130 (std--_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399.c)
 *     std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D7EC (std--_Sort_heap_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS_____ptr64___int64__HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r11
  __int64 i; // rdx
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  bool v10; // al
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 result; // rax

  v4 = a2;
  v5 = a2;
  for ( i = (a3 - 1) / 2; v4 < i; *(_QWORD *)(a1 + 8 * v12 + 64) = *(_QWORD *)(a1 + 72 * v4 + 64) )
  {
    v8 = 2 * v4 + 2;
    v9 = *(_BYTE *)(a1 + 72 * v8 - 70);
    v10 = *(_BYTE *)(a1 + 72 * v8 + 2) < v9
       || *(_BYTE *)(a1 + 72 * v8 + 2) == v9 && *(_WORD *)(a1 + 72 * v8 + 6) < *(_WORD *)(a1 + 72 * v8 - 66);
    v11 = !v10;
    v4 = 2 * v4 + 1;
    v12 = 9 * v5;
    if ( v11 )
      v4 = v8;
    v5 = v4;
    *(_OWORD *)(a1 + 8 * v12) = *(_OWORD *)(a1 + 72 * v4);
    *(_OWORD *)(a1 + 8 * v12 + 16) = *(_OWORD *)(a1 + 72 * v4 + 16);
    *(_OWORD *)(a1 + 8 * v12 + 32) = *(_OWORD *)(a1 + 72 * v4 + 32);
    *(_OWORD *)(a1 + 8 * v12 + 48) = *(_OWORD *)(a1 + 72 * v4 + 48);
  }
  if ( v4 == i && (a3 & 1) == 0 )
  {
    v13 = 9 * v5;
    v5 = a3 - 1;
    *(_OWORD *)(a1 + 8 * v13) = *(_OWORD *)(a1 + 72 * a3 - 72);
    *(_OWORD *)(a1 + 8 * v13 + 16) = *(_OWORD *)(a1 + 72 * a3 - 56);
    *(_OWORD *)(a1 + 8 * v13 + 32) = *(_OWORD *)(a1 + 72 * a3 - 40);
    *(_OWORD *)(a1 + 8 * v13 + 48) = *(_OWORD *)(a1 + 72 * a3 - 24);
    *(_QWORD *)(a1 + 8 * v13 + 64) = *(_QWORD *)(a1 + 72 * a3 - 8);
  }
  if ( a2 < v5 )
  {
    do
    {
      v14 = (v5 - 1) / 2;
      v15 = *(_BYTE *)(a4 + 2);
      if ( *(_BYTE *)(a1 + 72 * v14 + 2) >= v15
        && (*(_BYTE *)(a1 + 72 * v14 + 2) != v15 || *(_WORD *)(a1 + 72 * v14 + 6) >= *(_WORD *)(a4 + 6)) )
      {
        break;
      }
      v16 = 9 * v5;
      v5 = (v5 - 1) / 2;
      *(_OWORD *)(a1 + 8 * v16) = *(_OWORD *)(a1 + 72 * v14);
      *(_OWORD *)(a1 + 8 * v16 + 16) = *(_OWORD *)(a1 + 72 * v14 + 16);
      *(_OWORD *)(a1 + 8 * v16 + 32) = *(_OWORD *)(a1 + 72 * v14 + 32);
      *(_OWORD *)(a1 + 8 * v16 + 48) = *(_OWORD *)(a1 + 72 * v14 + 48);
      *(_QWORD *)(a1 + 8 * v16 + 64) = *(_QWORD *)(a1 + 72 * v14 + 64);
    }
    while ( a2 < v14 );
  }
  result = 9 * v5;
  *(_OWORD *)(a1 + 8 * result) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 8 * result + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 8 * result + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 8 * result + 48) = *(_OWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 8 * result + 64) = *(_QWORD *)(a4 + 64);
  return result;
}
