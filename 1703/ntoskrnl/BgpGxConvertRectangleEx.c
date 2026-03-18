/*
 * XREFs of BgpGxConvertRectangleEx @ 0x14014141C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140140A34 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140140AAC (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x1401678FC (BgpGxConvertRectangle.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     BgpGxRectangleCreate @ 0x140757D58 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r12
  char v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  _BYTE *v11; // r9
  char *v12; // r10
  unsigned int v13; // r15d
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  char v17; // r12
  unsigned int v18; // r8d
  unsigned int v19; // r11d
  signed __int64 v20; // r13
  unsigned int v21; // r14d
  unsigned int v22; // ebp
  unsigned __int8 *v23; // r15
  int v24; // ecx
  int v25; // eax
  _BYTE *v26; // rax
  int v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-60h]
  int v29; // [rsp+2Ch] [rbp-5Ch]
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  char v34; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = a4 & 1;
  v6 = a2;
  v34 = a4 & 1;
  v7 = a1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)a2 > *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    LODWORD(v8) = 0;
    v10 = *a3;
    *(_DWORD *)v10 = *(_DWORD *)a1;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v10 + 8) = a2;
    *(_DWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(a1 + 24);
  }
  else
  {
    HIDWORD(v31) = *(_DWORD *)a1;
    LODWORD(v8) = 0;
    LODWORD(v31) = *(_DWORD *)(a1 + 4);
    v30 = 0LL;
    result = BgpGxRectangleCreate(&v31, a2, &v30);
    if ( (int)result < 0 )
      return result;
    v10 = v30;
  }
  v11 = *(_BYTE **)(v10 + 24);
  v12 = *(char **)(v7 + 24);
  v13 = *(_DWORD *)(v7 + 8) >> 3;
  LODWORD(v30) = v13;
  if ( *(_DWORD *)(v7 + 8) != v6 )
  {
    if ( v6 == 4 )
    {
      v16 = 0;
      v28 = 0;
      if ( *(_DWORD *)v10 )
      {
        v17 = v5;
        do
        {
          v18 = v8;
          if ( *(_DWORD *)(v10 + 4) > (unsigned int)v8 )
          {
            v31 = v13;
            do
            {
              v29 = -1;
              v19 = v8;
              v20 = &FourBitPalette - (_UNKNOWN *)&v27;
              v21 = -1;
              v27 = *(_DWORD *)v12;
              do
              {
                v22 = v8;
                v23 = (unsigned __int8 *)&v27;
                v8 = 3LL;
                do
                {
                  v24 = v23[v20];
                  v25 = *v23++;
                  v22 += abs32(v25 - v24) + 2 * abs32(v25 - v24);
                  --v8;
                }
                while ( v8 );
                if ( v22 < v21 )
                {
                  v21 = v22;
                  v17 = v19;
                }
                ++v19;
                v20 += 4LL;
              }
              while ( v19 < 0x10 );
              if ( (v18 & 1) != 0 )
                *v11++ |= v17;
              else
                *v11 = 16 * v17;
              v12 += v31;
              ++v18;
            }
            while ( v18 < *(_DWORD *)(v10 + 4) );
            v13 = v30;
            v16 = v28;
          }
          ++v16;
          v26 = v11 + 1;
          v28 = v16;
          if ( (v18 & 1) == 0 )
            v26 = v11;
          v11 = v26;
        }
        while ( v16 < *(_DWORD *)v10 );
        v7 = a1;
        v5 = v34;
        v4 = a3;
      }
    }
    else
    {
      v14 = *(_DWORD *)v10 * *(_DWORD *)(v10 + 4);
      if ( v14 )
      {
        v15 = v14;
        do
        {
          v11[2] = v12[2];
          v11[1] = v12[1];
          *v11 = *v12;
          if ( v6 == 32 )
            v11[3] = 0;
          v12 += v13;
          v11 += v6 >> 3;
          --v15;
        }
        while ( v15 );
      }
    }
    if ( v5 )
      *(_DWORD *)(v7 + 16) |= 0x10u;
    goto LABEL_7;
  }
  if ( !v5 )
  {
    memmove(v11, v12, *(unsigned int *)(v7 + 12));
LABEL_7:
    *v4 = v10;
  }
  return (unsigned int)v8;
}
