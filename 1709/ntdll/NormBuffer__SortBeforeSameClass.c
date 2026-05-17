/*
 * XREFs of NormBuffer__SortBeforeSameClass @ 0x1800F9284
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800F8C64 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1800F8CF4 (NormBuffer__GetCurrentOutputChar.c)
 */

__int64 __fastcall NormBuffer__SortBeforeSameClass(_QWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int16 *v14; // [rsp+30h] [rbp+8h] BYREF

  result = a1[5];
  v4 = a1[10];
  a1[13] = result;
  if ( result != v4 )
  {
    v14 = (unsigned __int16 *)(result - 2);
    result = NormBuffer__GetCurrentOutputChar((__int64)a1, &v14);
    v7 = v6 - 2;
    v8 = v14;
    if ( *(int *)(v5 + 88) <= 0xFFFF )
      v7 = v6;
    v9 = (unsigned __int16 *)(v7 - 2);
    if ( v14 != v9 )
    {
      v10 = *(_QWORD *)(v5 + 112);
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_QWORD *)(v10 + 40);
      do
      {
        v13 = result & 0x7F;
        result = v12 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v11) << 7);
        LOBYTE(v10) = *(_BYTE *)(v13 + result - 128) & 0x3F;
        if ( (unsigned __int8)v10 < a2 )
          break;
        *(_QWORD *)(v5 + 104) = v8;
        v14 = v8 - 1;
        result = NormBuffer__GetCurrentOutputChar(v10, &v14);
        v8 = v14;
      }
      while ( v14 != v9 );
    }
  }
  return result;
}
