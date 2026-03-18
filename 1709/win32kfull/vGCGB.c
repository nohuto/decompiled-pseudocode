/*
 * XREFs of vGCGB @ 0x1C02312D8
 * Callers:
 *     lGetGlyphBitmap @ 0x1C022EBD0 (lGetGlyphBitmap.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

unsigned __int64 __fastcall vGCGB(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r11
  __int64 v5; // rbx
  int v6; // r10d
  __int64 v7; // rcx
  unsigned int v8; // r10d
  int v9; // eax
  unsigned __int8 *v10; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  int v18; // r15d
  unsigned __int64 v19; // r8
  unsigned __int8 *v20; // rdx
  _BYTE *v21; // r9
  __int64 v22; // rax
  size_t v23; // r8
  __int64 v24; // [rsp+60h] [rbp+8h]

  v4 = (unsigned int)a4[4];
  v5 = (unsigned int)a4[2];
  v6 = ((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v4 + v5 + a4[3]);
  v7 = (unsigned int)(v4 + 1) >> 1;
  v8 = 4 * ((unsigned int)(v6 + 31) >> 5);
  if ( *a4 )
    a3 += v8 * *a4;
  v9 = a4[5];
  *(_DWORD *)(a2 + 12) = v9;
  v10 = (unsigned __int8 *)(a3 + v5);
  result = (unsigned int)(v7 * v9);
  v12 = a2 + 16;
  *(_DWORD *)(a2 + 8) = v4;
  v13 = result + a2 + 16;
  if ( a2 + 16 < v13 )
  {
    v14 = v4 >> 1;
    v15 = v7 + v12;
    v16 = (unsigned int)v7;
    v24 = v8;
    v17 = (v4 >> 1) - (unsigned int)v7;
    v18 = v4 & 1;
    do
    {
      result = v15 + v17;
      v19 = v14;
      v20 = v10;
      v21 = (_BYTE *)v12;
      if ( v12 > v15 + v17 )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          *v21 = 16 * byte_1C02ECFF8[*v20];
          v22 = v20[1];
          v20 += 2;
          *v21++ += byte_1C02ECFF8[v22];
          result = (unsigned __int64)&v21[-v12];
        }
        while ( (unsigned __int64)&v21[-v12] < v19 );
      }
      if ( v18 )
      {
        result = *v20;
        *v21++ = 16 * byte_1C02ECFF8[result];
      }
      v23 = v15 - (_QWORD)v21;
      if ( (unsigned __int64)v21 > v15 )
        v23 = 0LL;
      if ( v23 )
        result = (unsigned __int64)memset(v21, 0, v23);
      v10 += v24;
      v12 += v16;
      v15 += v16;
    }
    while ( v12 < v13 );
  }
  return result;
}
