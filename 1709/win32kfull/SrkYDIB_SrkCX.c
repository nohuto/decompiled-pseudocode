/*
 * XREFs of SrkYDIB_SrkCX @ 0x1C0001A10
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall SrkYDIB_SrkCX(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *result; // rax
  __int64 v4; // rdi
  __int64 v6; // rcx
  int v7; // r15d
  int v8; // r13d
  int v9; // r12d
  _WORD *v10; // rsi
  __int64 v11; // r14
  unsigned int v12; // ebx
  __int16 v13; // cx
  unsigned __int8 v14; // bp
  int v15; // ebx
  int v16; // r11d
  int v17; // r10d
  int v18; // r9d
  _BYTE *v19; // [rsp+68h] [rbp+20h]

  result = (unsigned __int8 *)*(unsigned __int16 *)(a1 + 14);
  v4 = (__int64)a2;
  if ( *(_WORD *)(a1 + 14) )
  {
    v6 = *(unsigned __int16 *)(a1 + 10);
    v7 = (_DWORD)result * a2[2];
    v8 = (_DWORD)result * a2[1];
    v9 = (_DWORD)result * *a2;
    result = &a2[v6];
    v4 = (__int64)&a2[2 * v6 + v6];
  }
  else
  {
    v9 = 0;
    v7 = 0;
    v8 = 0;
  }
  v10 = *(_WORD **)(a1 + 40);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = (unsigned __int16)*v10;
  if ( *v10 )
  {
    v19 = (_BYTE *)(a3 + 1);
    do
    {
      v13 = *(_WORD *)v4;
      ++v10;
      v14 = *(_BYTE *)(v4 + 2);
      v4 += 3LL;
      result = (unsigned __int8 *)(v11 + ((v12 >> 5) & 0x400));
      if ( (v12 & 0x4000) != 0 )
      {
        v15 = v12 & 0x3FFF;
        v16 = v15 * v14;
        v17 = v15 * HIBYTE(v13);
        v18 = v15 * (unsigned __int8)v13;
        v19[1] = (unsigned int)(v16 + v7 + 4096) >> 13;
        *v19 = (unsigned int)(v17 + v8 + 4096) >> 13;
        *(v19 - 1) = (unsigned int)(v9 + 4096 + v18) >> 13;
        v8 = *(_DWORD *)&result[4 * HIBYTE(v13)] - v17;
        v19 += 3;
        v7 = *(_DWORD *)&result[4 * v14] - v16;
        v9 = *(_DWORD *)&result[4 * (unsigned __int8)v13] - v18;
      }
      else
      {
        v7 += *(_DWORD *)&result[4 * v14];
        v8 += *(_DWORD *)&result[4 * HIBYTE(v13)];
        v9 += *(_DWORD *)&result[4 * (unsigned __int8)v13];
      }
      v12 = (unsigned __int16)*v10;
    }
    while ( *v10 );
  }
  return result;
}
