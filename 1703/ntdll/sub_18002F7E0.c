/*
 * XREFs of sub_18002F7E0 @ 0x18002F7E0
 * Callers:
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001C740 @ 0x18001C740 (sub_18001C740.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 */

__int64 __fastcall sub_18002F7E0(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v8; // edi
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rbp
  __int64 result; // rax
  __int64 *v15; // r8
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // [rsp+38h] [rbp-20h]

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = a5 - *(_DWORD *)(a2 + 24);
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_DWORD *)(a2 + 8);
  v13 = v10;
  result = v12 - 1;
  v15 = *(__int64 **)(v11 + 8 * v13);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == (_DWORD)result )
    --*(_DWORD *)(a2 + 20);
  if ( v15 == a4 )
  {
    if ( !*(_QWORD *)a2 )
      --v12;
    if ( a5 >= v12 )
    {
      result = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(v11 + 8 * v13) = result;
        return result;
      }
      *(_QWORD *)(v11 + 8 * v13) = 0LL;
    }
    else
    {
      v16 = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        if ( a3 )
        {
          v18 = *(_DWORD *)(v16 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v18 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v16 - 16 + 8);
            if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE2(v18) ^ BYTE1(v18))) )
              sub_1800A4DFC(3, a1, v16 - 16, 0, 0LL, 0LL);
          }
          v17 = a6 - (unsigned __int16)v18;
        }
        else
        {
          v17 = a6 - *(_DWORD *)(v16 + 40);
        }
        if ( !v17 )
        {
          result = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(result + 8 * v13) = v16;
          return result;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v13) = 0LL;
    }
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
