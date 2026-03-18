/*
 * XREFs of BgpGxConvertRectangleEx @ 0x14013C748
 * Callers:
 *     BgpGxConvertRectangle @ 0x14013B5C8 (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14013BCD8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14013BD50 (GxpWriteFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     BgpGxRectangleCreate @ 0x1407CFFBC (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(int *a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r15
  char v5; // bp
  unsigned int v6; // esi
  int *v7; // rdi
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  _BYTE *v12; // r9
  char *v13; // r10
  unsigned int v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  char v18; // r13
  unsigned int v19; // r8d
  signed __int64 v20; // r12
  unsigned int v21; // r11d
  unsigned int v22; // edi
  unsigned int v23; // esi
  unsigned __int8 *v24; // rbp
  __int64 v25; // r14
  int v26; // ecx
  int v27; // eax
  _BYTE *v28; // rax
  int v29; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-60h]
  int v31; // [rsp+2Ch] [rbp-5Ch]
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+38h] [rbp-50h] BYREF
  char v36; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = a4 & 1;
  v6 = a2;
  v36 = a4 & 1;
  v7 = a1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)a2 > a1[2] )
      return 3221225485LL;
    v10 = *a3;
    *(_DWORD *)v10 = *a1;
    *(_DWORD *)(v10 + 4) = a1[1];
    *(_DWORD *)(v10 + 8) = a2;
    *(_DWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 12) = a1[3];
    *(_QWORD *)(v10 + 24) = *((_QWORD *)a1 + 3);
  }
  else
  {
    v8 = *a1;
    v32 = 0LL;
    HIDWORD(v33) = v8;
    LODWORD(v33) = a1[1];
    result = BgpGxRectangleCreate(&v33, a2, &v32);
    if ( (int)result < 0 )
      return result;
    v10 = v32;
  }
  v11 = v7[2];
  v12 = *(_BYTE **)(v10 + 24);
  v13 = (char *)*((_QWORD *)v7 + 3);
  v14 = v11 >> 3;
  LODWORD(v32) = v11 >> 3;
  if ( v11 != v6 )
  {
    if ( v6 == 4 )
    {
      v17 = 0;
      v30 = 0;
      if ( *(_DWORD *)v10 )
      {
        v18 = v5;
        do
        {
          v19 = 0;
          if ( *(_DWORD *)(v10 + 4) )
          {
            v33 = v14;
            do
            {
              v31 = -1;
              v20 = &FourBitPalette - (_UNKNOWN *)&v29;
              v21 = 0;
              v22 = -1;
              v29 = *(_DWORD *)v13;
              do
              {
                v23 = 0;
                v24 = (unsigned __int8 *)&v29;
                v25 = 3LL;
                do
                {
                  v26 = v24[v20];
                  v27 = *v24++;
                  v23 += abs32(v27 - v26) + 2 * abs32(v27 - v26);
                  --v25;
                }
                while ( v25 );
                if ( v23 < v22 )
                {
                  v22 = v23;
                  v18 = v21;
                }
                ++v21;
                v20 += 4LL;
              }
              while ( v21 < 0x10 );
              if ( (v19 & 1) != 0 )
                *v12++ |= v18;
              else
                *v12 = 16 * v18;
              v13 += v33;
              ++v19;
            }
            while ( v19 < *(_DWORD *)(v10 + 4) );
            v14 = v32;
            v17 = v30;
          }
          ++v17;
          v28 = v12 + 1;
          v30 = v17;
          if ( (v19 & 1) == 0 )
            v28 = v12;
          v12 = v28;
        }
        while ( v17 < *(_DWORD *)v10 );
        v7 = a1;
        v5 = v36;
        v4 = a3;
      }
    }
    else
    {
      v15 = *(_DWORD *)v10 * *(_DWORD *)(v10 + 4);
      if ( v15 )
      {
        v16 = v15;
        do
        {
          v12[2] = v13[2];
          v12[1] = v13[1];
          *v12 = *v13;
          if ( v6 == 32 )
            v12[3] = 0;
          v13 += v14;
          v12 += v6 >> 3;
          --v16;
        }
        while ( v16 );
      }
    }
    if ( v5 )
      v7[4] |= 0x10u;
    goto LABEL_7;
  }
  if ( !v5 )
  {
    memmove(v12, v13, (unsigned int)v7[3]);
LABEL_7:
    *v4 = v10;
  }
  return 0LL;
}
