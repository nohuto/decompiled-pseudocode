/*
 * XREFs of vGCGB @ 0x1C022FD5C
 * Callers:
 *     lGetGlyphBitmap @ 0x1C022D6AC (lGetGlyphBitmap.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

unsigned __int64 __fastcall vGCGB(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r11
  int v6; // r10d
  __int64 v7; // rcx
  unsigned int v8; // r10d
  int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 *v12; // rdi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  int v16; // ebp
  __int64 v17; // rsi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r8
  unsigned __int8 *v20; // rdx
  _BYTE *v21; // r9
  __int64 v22; // rax
  size_t v23; // r8
  unsigned __int64 v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+68h] [rbp+10h]

  v4 = (unsigned int)a4[4];
  v5 = (unsigned int)a4[2];
  v6 = ((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v4 + v5 + a4[3]);
  v7 = (unsigned int)(v4 + 1) >> 1;
  v8 = 4 * ((unsigned int)(v6 + 31) >> 5);
  if ( *a4 )
    a3 += v8 * *a4;
  v9 = a4[5];
  *(_DWORD *)(a2 + 12) = v9;
  v10 = a2 + 16;
  result = (unsigned int)(v7 * v9);
  v12 = (unsigned __int8 *)(a3 + v5);
  *(_DWORD *)(a2 + 8) = v4;
  v13 = result + a2 + 16;
  v24 = v13;
  if ( a2 + 16 < v13 )
  {
    result = v8;
    v14 = v4 >> 1;
    v15 = v7 + v10;
    v16 = v4 & 1;
    v17 = (unsigned int)v7;
    v25 = v8;
    v18 = v14 + v10;
    do
    {
      v19 = v14;
      v20 = v12;
      v21 = (_BYTE *)v10;
      if ( v10 > v18 )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          *v21 = 16 * byte_1C02F03A0[*v20];
          v22 = v20[1];
          v20 += 2;
          *v21++ += byte_1C02F03A0[v22];
          result = (unsigned __int64)&v21[-v10];
        }
        while ( (unsigned __int64)&v21[-v10] < v19 );
        v13 = v24;
      }
      if ( v16 )
      {
        result = *v20;
        *v21++ = 16 * byte_1C02F03A0[result];
      }
      v23 = v15 - (_QWORD)v21;
      if ( (unsigned __int64)v21 > v15 )
        v23 = 0LL;
      if ( v23 )
        result = (unsigned __int64)memset(v21, 0, v23);
      v12 += v25;
      v10 += v17;
      v18 += v17;
      v15 += v17;
    }
    while ( v10 < v13 );
  }
  return result;
}
