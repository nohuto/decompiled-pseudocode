/*
 * XREFs of vCopyAndZeroOutPaddingBits @ 0x1C0230418
 * Callers:
 *     lGetGlyphBitmap @ 0x1C022EBD0 (lGetGlyphBitmap.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

char __fastcall vCopyAndZeroOutPaddingBits(__int64 a1, _DWORD *a2, __int64 a3, int *a4)
{
  int v4; // r10d
  unsigned __int64 v6; // r11
  int v8; // r8d
  int v9; // eax
  bool v10; // cf
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // r13d
  unsigned int v15; // r8d
  char *v16; // rbx
  char v17; // r9
  unsigned __int64 v18; // rax
  char *v19; // rdi
  char *v20; // rsi
  size_t v21; // r14
  __int64 v22; // r15
  __int64 v23; // r12
  char v24; // bp
  unsigned __int64 v25; // r14
  char *v26; // rsi
  _BYTE *v27; // rdi
  unsigned __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r13
  char *v31; // r11
  unsigned __int64 v32; // r10
  _BYTE *v33; // r8
  char *v34; // rdx
  char v35; // al
  char v36; // al
  _BYTE *v37; // r8
  char v39; // [rsp+50h] [rbp+8h]

  v4 = a4[4];
  v6 = (unsigned int)a4[2];
  v8 = v4 + v6 + a4[3];
  v39 = byte_1C02F11A0[v4 & 7];
  v9 = *(_DWORD *)(a1 + 40) & 0x10000;
  a2[2] = v4;
  v10 = v9 != 0;
  v11 = *a4;
  v12 = (unsigned int)(v4 + 7) >> 3;
  v13 = a4[5];
  v14 = v12 - 1;
  a2[3] = v13;
  v15 = 4 * ((unsigned int)((v10 ? 8 : 1) * v8 + 31) >> 5);
  if ( v11 )
    a3 += v15 * v11;
  v16 = (char *)(a2 + 4);
  v17 = v6 & 7;
  if ( (v6 & 7) != 0 )
  {
    v18 = v6 >> 3;
    v24 = 8 - v17;
    v25 = a3 + v15 * v13;
    v26 = &v16[v12 * v13];
    v27 = (_BYTE *)((v6 >> 3) + a3);
    if ( v16 < v26 )
    {
      v28 = v14;
      v29 = v12;
      v30 = v15;
      v31 = &v16[v28];
      do
      {
        v32 = v28;
        v33 = v27;
        if ( v16 > v31 )
          v32 = 0LL;
        v34 = v16;
        if ( v32 )
        {
          do
          {
            v35 = *v33++ << v17;
            *v34 = v35;
            *v34++ |= *v33 >> v24;
          }
          while ( v34 - v16 < v32 );
        }
        v36 = *v33 << v17;
        v37 = v33 + 1;
        *v34 = v36;
        if ( (unsigned __int64)v37 < v25 )
          *v34 |= *v37 >> v24;
        LOBYTE(v18) = v39;
        v16 += v29;
        *v34 &= v39;
        v31 += v29;
        v27 += v30;
      }
      while ( v16 < v26 );
    }
  }
  else
  {
    v18 = v6 >> 3;
    v19 = (char *)((v6 >> 3) + a3);
    v20 = &v16[v12 * v13];
    if ( v16 < v20 )
    {
      v21 = v12;
      v22 = v12;
      v23 = v15;
      do
      {
        LOBYTE(v18) = (unsigned __int8)memmove(v16, v19, v21);
        v16[v14] &= v39;
        v19 += v23;
        v16 += v22;
      }
      while ( v16 < v20 );
    }
  }
  return v18;
}
