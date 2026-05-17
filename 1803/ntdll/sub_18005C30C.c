/*
 * XREFs of sub_18005C30C @ 0x18005C30C
 * Callers:
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18002ADD8 @ 0x18002ADD8 (sub_18002ADD8.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 */

__int64 __fastcall sub_18005C30C(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 *v12; // r11
  unsigned int v13; // edx
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // [rsp+38h] [rbp-10h]

  v7 = a5 - *(_DWORD *)(a2 + 24);
  v8 = 2 * v7;
  if ( !*(_DWORD *)(a2 + 12) )
    v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = *(_DWORD *)(a2 + 8);
  v10 = v8;
  result = *(_QWORD *)(a2 + 48);
  v12 = *(__int64 **)(result + 8 * v10);
  --*(_DWORD *)(a2 + 16);
  v13 = v9 - 1;
  if ( a5 == v9 - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( v12 == a4 )
  {
    v14 = *a4;
    if ( *(_QWORD *)a2 )
      v13 = v9;
    if ( a5 >= v13 )
    {
      if ( v14 == *(_QWORD *)(a2 + 32) )
        goto LABEL_17;
    }
    else
    {
      if ( v14 == *(_QWORD *)(a2 + 32) )
        goto LABEL_16;
      if ( a3 )
      {
        v16 = *(_DWORD *)(v14 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v16 = *(_DWORD *)(v14 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
            sub_18009A5F0(3, a1, v14 - 16, 0, 0LL, 0LL);
        }
        v15 = a6 - (unsigned __int16)v16;
      }
      else
      {
        v15 = a6 - *(_DWORD *)(v14 + 40);
      }
      if ( v15 )
      {
LABEL_16:
        result = *(_QWORD *)(a2 + 48);
LABEL_17:
        *(_QWORD *)(result + 8 * v10) = 0LL;
        result = *(_QWORD *)(a2 + 40);
        *(_DWORD *)(result + 4 * ((unsigned __int64)v7 >> 5)) &= ~(1 << (v7 & 0x1F));
        return result;
      }
      result = *(_QWORD *)(a2 + 48);
    }
    *(_QWORD *)(result + 8 * v10) = v14;
  }
  return result;
}
