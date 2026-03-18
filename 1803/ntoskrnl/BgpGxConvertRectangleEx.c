/*
 * XREFs of BgpGxConvertRectangleEx @ 0x1401739C0
 * Callers:
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140165238 (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x14017361C (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     BgpGxRectangleCreate @ 0x14083C2B0 (BgpGxRectangleCreate.c)
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
  unsigned int v14; // r11d
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r13d
  char v18; // si
  unsigned int v19; // r8d
  signed __int64 v20; // r15
  unsigned int v21; // r14d
  unsigned __int8 *v22; // rdi
  __int64 v23; // rbp
  int v24; // ecx
  int v25; // eax
  char v26; // cl
  unsigned int v27; // eax
  _BYTE *v28; // rax
  int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v31[4]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v32[9]; // [rsp+40h] [rbp-48h] BYREF
  char v35; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = a4 & 1;
  v6 = a2;
  v35 = a4 & 1;
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
    v32[0] = 0LL;
    v31[1] = v8;
    v31[0] = a1[1];
    result = BgpGxRectangleCreate(v31, a2, v32);
    if ( (int)result < 0 )
      return result;
    v10 = v32[0];
  }
  v11 = v7[2];
  v12 = *(_BYTE **)(v10 + 24);
  v13 = (char *)*((_QWORD *)v7 + 3);
  v14 = v11 >> 3;
  LODWORD(v32[0]) = v11 >> 3;
  if ( v11 != v6 )
  {
    if ( v6 == 4 )
    {
      v17 = 0;
      if ( *(_DWORD *)v10 )
      {
        v18 = v5;
        do
        {
          v19 = 0;
          if ( *(_DWORD *)(v10 + 4) )
          {
            do
            {
              v31[0] = -1;
              v20 = &FourBitPalette - (_UNKNOWN *)&v30;
              v29 = 0;
              v30 = *(_DWORD *)v13;
              do
              {
                v21 = 0;
                v22 = (unsigned __int8 *)&v30;
                v23 = 3LL;
                do
                {
                  v24 = v22[v20];
                  v25 = *v22++;
                  v21 += abs32(v25 - v24) + 2 * abs32(v25 - v24);
                  --v23;
                }
                while ( v23 );
                v26 = v29;
                if ( v21 >= v31[0] )
                  v26 = v18;
                v27 = v29 + 1;
                v20 += 4LL;
                ++v29;
                v18 = v26;
                if ( v21 >= v31[0] )
                  v21 = v31[0];
                v31[0] = v21;
              }
              while ( v27 < 0x10 );
              if ( (v19 & 1) != 0 )
                *v12++ |= v26;
              else
                *v12 = 16 * v26;
              v13 += v14;
              ++v19;
              v18 = v26;
            }
            while ( v19 < *(_DWORD *)(v10 + 4) );
            v14 = v32[0];
          }
          ++v17;
          v28 = v12 + 1;
          if ( (v19 & 1) == 0 )
            v28 = v12;
          v12 = v28;
        }
        while ( v17 < *(_DWORD *)v10 );
        v7 = a1;
        v5 = v35;
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
