/*
 * XREFs of vStretchGlyphBitmap @ 0x1C0237858
 * Callers:
 *     vStretchCvtToBitmap @ 0x1C0237760 (vStretchCvtToBitmap.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     vEmboldenItalicizeLine @ 0x1C023769C (vEmboldenItalicizeLine.c)
 */

char __fastcall vStretchGlyphBitmap(char *a1, _BYTE *a2, _BYTE *a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int v8; // r11d
  _BYTE *v11; // r8
  int v12; // edi
  __int64 v13; // r10
  unsigned int v14; // r15d
  __int64 v15; // rcx
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r14
  _BYTE *v23; // rcx
  char *v24; // rsi
  char v25; // r10
  char *v26; // rdx
  char *v27; // r9
  char v28; // r10
  char v29; // al
  unsigned __int64 v30; // r8
  char *v31; // r10
  char v32; // r9
  char *v33; // rdx
  char v34; // r9
  char *v35; // r12
  unsigned __int64 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  unsigned __int64 v39; // [rsp+40h] [rbp-48h]
  __int64 v40; // [rsp+48h] [rbp-40h]
  _BYTE *v41; // [rsp+98h] [rbp+10h]
  char *v42; // [rsp+A0h] [rbp+18h]
  int v43; // [rsp+A8h] [rbp+20h]
  int v44; // [rsp+B0h] [rbp+28h]
  int v45; // [rsp+B8h] [rbp+30h]

  v41 = a2;
  v38 = a5;
  v8 = a7 * a4;
  v11 = &a2[a5];
  v12 = 0;
  v13 = a5;
  v39 = (unsigned __int64)v11;
  v14 = 0;
  v43 = a7 * a4;
  v15 = (unsigned int)(a7 * a4 + 7) >> 3;
  if ( a8 == 0x2000 )
  {
    v16 = (unsigned int)(v8 + 8) >> 3;
  }
  else
  {
    if ( a8 != 0x4000 && a8 != 24576 )
    {
      v16 = (unsigned int)(a7 * a4 + 7) >> 3;
      v44 = v16;
      goto LABEL_10;
    }
    v17 = ((a6 * a5 - 1) >> 1) + 1;
    if ( (a8 & 0x2000) == 0 )
      v17 = (a6 * a5 - 1) >> 1;
    v16 = (v17 + v8 + 7) >> 3;
    v12 = v17 & 7;
    v14 = v17 >> 3;
  }
  v44 = v16;
LABEL_10:
  v18 = 0;
  v19 = a6 * v16;
  v45 = 0;
  if ( a2 < v11 )
  {
    v20 = v19;
    v21 = (unsigned __int64)&a3[v15];
    v22 = (unsigned int)v15;
    v40 = v19;
    v37 = (unsigned int)v15;
    v42 = &a3[v15];
    while ( 1 )
    {
      v23 = a3;
      if ( (unsigned __int64)a3 < v21 )
      {
        do
        {
          switch ( a7 )
          {
            case 1:
              LOBYTE(v19) = *a2;
              *v23++ = *a2;
              break;
            case 2:
              *v23 = ajStretch2[(unsigned __int64)(unsigned __int8)*a2 >> 4];
              LOBYTE(v19) = ajStretch2[*a2 & 0xF];
              v23[1] = v19;
              v23 += 2;
              break;
            case 3:
              *v23 = ajStretch3B1[(unsigned __int64)(unsigned __int8)*a2 >> 5];
              v23[1] = ajStretch3B2[((unsigned __int64)(unsigned __int8)*a2 >> 2) & 0xF];
              LOBYTE(v19) = ajStretch3B3[*a2 & 7];
              v23[2] = v19;
              v23 += 3;
              break;
            default:
              LOBYTE(v19) = a7 - 4;
              if ( a7 == 4 )
              {
                *v23 = awStretch4[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[1] = byte_1C0324369[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[2] = awStretch4[2 * (*a2 & 0xF)];
                LOBYTE(v19) = byte_1C0324369[2 * (*a2 & 0xF)];
                v23[3] = v19;
                v23 += 4;
              }
              else if ( a7 == 5 )
              {
                *v23 = awStretch5W1[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[1] = byte_1C0324389[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[2] = awStretch5W2[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
                v23[3] = byte_1C0324349[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
                LOBYTE(v19) = ajStretch5B1[*a2 & 3];
                v23[4] = v19;
                v23 += 5;
              }
              break;
          }
          a2 += v13;
        }
        while ( (unsigned __int64)v23 < v21 );
        v8 = v43;
      }
      v24 = &a1[v20];
      if ( !a8 )
        break;
      if ( a8 == 0x2000 )
      {
        LOBYTE(v19) = v22 + (_BYTE)a1;
        v30 = v22;
        v31 = a1;
        v32 = 0;
        if ( a1 > &a1[v22] )
          v30 = 0LL;
        if ( v30 )
        {
          v33 = a3;
          do
          {
            *v31++ = v32 | *v33 | ((unsigned __int8)*v33 >> 1);
            v34 = *v33++;
            v32 = v34 << 7;
            LOBYTE(v19) = (_BYTE)v33 - (_BYTE)a3;
          }
          while ( v33 - a3 < v30 );
        }
        if ( (v8 & 7) == 0 )
          *v31 = v32;
        v35 = a1;
        a1 += v16;
        if ( a1 < v24 )
        {
          do
          {
            LOBYTE(v19) = (unsigned __int8)memmove(a1, v35, v16);
            a1 += v16;
          }
          while ( a1 < v24 );
          v8 = v43;
        }
        v18 = v45;
LABEL_58:
        v21 = (unsigned __int64)v42;
LABEL_59:
        v22 = v37;
        v13 = v38;
        goto LABEL_60;
      }
      if ( a8 != 0x4000 )
      {
        if ( a8 != 24576 || a1 >= v24 )
          goto LABEL_60;
        do
        {
          LOBYTE(v19) = vEmboldenItalicizeLine(&a1[v14], (unsigned __int64)a3, v21, v12, v43);
          v12 -= v45 & 1;
          v18 = ++v45;
          if ( v12 < 0 )
          {
            v12 = 7;
            --v14;
          }
          v21 = (unsigned __int64)v42;
          a1 += v16;
        }
        while ( a1 < v24 );
        v16 = v44;
        v8 = v43;
        goto LABEL_59;
      }
      if ( a1 < v24 )
      {
        if ( (unsigned __int64)a3 > v21 )
          v22 = 0LL;
        do
        {
          v25 = 0;
          v26 = &a1[v14];
          if ( v22 )
          {
            v27 = a3;
            do
            {
              *v26++ = v25 | ((unsigned __int8)*v27 >> v12);
              v28 = *v27++;
              v25 = v28 << (8 - v12);
            }
            while ( v27 - a3 < v22 );
            v18 = v45;
          }
          if ( (-v8 & 7) < v12 )
            *v26 = v25;
          v29 = v18++;
          v19 = v29 & 1;
          v45 = v18;
          v12 -= v19;
          if ( v12 < 0 )
          {
            v12 = 7;
            --v14;
          }
          a1 += v16;
        }
        while ( a1 < v24 );
        v8 = v43;
        goto LABEL_58;
      }
LABEL_60:
      v20 = v40;
      a2 = v41 + 1;
      v41 = a2;
      if ( (unsigned __int64)a2 >= v39 )
        return v19;
    }
    if ( a1 >= v24 )
      goto LABEL_60;
    do
    {
      LOBYTE(v19) = (unsigned __int8)memmove(a1, a3, v16);
      a1 += v16;
    }
    while ( a1 < v24 );
    v8 = v43;
    v18 = v45;
    goto LABEL_58;
  }
  return v19;
}
