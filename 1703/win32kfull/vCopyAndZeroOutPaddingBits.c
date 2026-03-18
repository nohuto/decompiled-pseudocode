/*
 * XREFs of vCopyAndZeroOutPaddingBits @ 0x1C022EEA0
 * Callers:
 *     lGetGlyphBitmap @ 0x1C022D6AC (lGetGlyphBitmap.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

char __fastcall vCopyAndZeroOutPaddingBits(__int64 a1, _DWORD *a2, __int64 a3, int *a4)
{
  int v4; // r10d
  unsigned __int64 v6; // r11
  int v8; // r8d
  int v9; // eax
  bool v10; // cf
  int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // edx
  int v14; // ecx
  unsigned __int64 v15; // r13
  unsigned int v16; // r8d
  char *v17; // rbx
  char v18; // r9
  unsigned __int64 v19; // rax
  char *v20; // rdi
  char *v21; // rsi
  __int64 v22; // r12
  char v23; // r14
  unsigned __int64 v24; // r12
  char *v25; // rbp
  _BYTE *v26; // rdi
  __int64 v27; // rsi
  char *v28; // r11
  __int64 v29; // r15
  unsigned __int64 v30; // r10
  _BYTE *v31; // r8
  char *v32; // rdx
  char v33; // al
  char v34; // al
  _BYTE *v35; // r8
  char v37; // [rsp+60h] [rbp+8h]
  __int64 v38; // [rsp+68h] [rbp+10h]

  v4 = a4[4];
  v6 = (unsigned int)a4[2];
  v8 = v4 + v6 + a4[3];
  v37 = byte_1C02F0398[v4 & 7];
  v9 = *(_DWORD *)(a1 + 40) & 0x10000;
  a2[2] = v4;
  v10 = v9 != 0;
  v11 = *a4;
  v12 = (unsigned int)(v4 + 7) >> 3;
  v13 = v12;
  v14 = a4[5];
  v15 = v12 - 1;
  a2[3] = v14;
  v16 = 4 * ((unsigned int)((v10 ? 8 : 1) * v8 + 31) >> 5);
  if ( v11 )
    a3 += v16 * v11;
  v17 = (char *)(a2 + 4);
  v18 = v6 & 7;
  if ( (v6 & 7) != 0 )
  {
    v19 = v6 >> 3;
    v23 = 8 - v18;
    v24 = a3 + v16 * v14;
    v25 = &v17[v12 * v14];
    v26 = (_BYTE *)((v6 >> 3) + a3);
    if ( v17 < v25 )
    {
      v27 = v16;
      v28 = &v17[v15];
      v38 = v16;
      v29 = v13;
      do
      {
        v30 = v15;
        v31 = v26;
        if ( v17 > v28 )
          v30 = 0LL;
        v32 = v17;
        if ( v30 )
        {
          do
          {
            v33 = *v31++ << v18;
            *v32 = v33;
            *v32++ |= *v31 >> v23;
          }
          while ( v32 - v17 < v30 );
          v27 = v38;
        }
        v34 = *v31 << v18;
        v35 = v31 + 1;
        *v32 = v34;
        if ( (unsigned __int64)v35 < v24 )
          *v32 |= *v35 >> v23;
        LOBYTE(v19) = v37;
        v17 += v29;
        *v32 &= v37;
        v28 += v29;
        v26 += v27;
      }
      while ( v17 < v25 );
    }
  }
  else
  {
    v19 = v6 >> 3;
    v20 = (char *)((v6 >> 3) + a3);
    v21 = &v17[v12 * v14];
    if ( v17 < v21 )
    {
      v22 = v16;
      do
      {
        LOBYTE(v19) = (unsigned __int8)memmove(v17, v20, v12);
        v17[(unsigned int)v15] &= v37;
        v20 += v22;
        v17 += v12;
      }
      while ( v17 < v21 );
    }
  }
  return v19;
}
