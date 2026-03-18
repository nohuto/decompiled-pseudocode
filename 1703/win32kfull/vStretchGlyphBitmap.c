/*
 * XREFs of vStretchGlyphBitmap @ 0x1C02362C8
 * Callers:
 *     vStretchCvtToBitmap @ 0x1C02361C4 (vStretchCvtToBitmap.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     vEmboldenItalicizeLine @ 0x1C0236100 (vEmboldenItalicizeLine.c)
 */

char __fastcall vStretchGlyphBitmap(char *a1, _BYTE *a2, _BYTE *a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int v8; // r13d
  int v11; // edi
  __int64 v12; // r14
  _BYTE *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  int v18; // r15d
  unsigned int v19; // eax
  __int64 v20; // r11
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r8
  _BYTE *i; // rcx
  char *v24; // rsi
  __int64 v25; // r15
  int v26; // ebp
  char v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  char *v30; // r9
  char v31; // r10
  char *v32; // rdx
  char v33; // r10
  char v34; // al
  char *v35; // r10
  char v36; // r9
  char *v37; // rdx
  char v38; // r9
  char *j; // r13
  unsigned __int64 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  unsigned __int64 v43; // [rsp+40h] [rbp-48h]
  __int64 v44; // [rsp+48h] [rbp-40h]
  _BYTE *v45; // [rsp+98h] [rbp+10h]
  char *v46; // [rsp+A0h] [rbp+18h]
  int v47; // [rsp+A8h] [rbp+20h]
  int v48; // [rsp+B0h] [rbp+28h]
  int v49; // [rsp+B8h] [rbp+30h]

  v45 = a2;
  v8 = a7 * a4;
  v42 = a5;
  v11 = 0;
  v12 = 0LL;
  v13 = &a2[a5];
  v14 = a5;
  v43 = (unsigned __int64)v13;
  v47 = v8;
  v15 = (unsigned int)(v8 + 7) >> 3;
  if ( a8 == 0x2000 )
  {
    v16 = (unsigned int)(v8 + 8) >> 3;
  }
  else
  {
    if ( a8 != 0x4000 && a8 != 24576 )
    {
      v16 = (unsigned int)(v8 + 7) >> 3;
      v48 = v16;
      goto LABEL_10;
    }
    v17 = ((a6 * a5 - 1) >> 1) + 1;
    if ( (a8 & 0x2000) == 0 )
      v17 = (a6 * a5 - 1) >> 1;
    v16 = (v17 + v8 + 7) >> 3;
    v11 = v17 & 7;
    v12 = v17 >> 3;
  }
  v48 = v16;
LABEL_10:
  v18 = 0;
  v19 = a6 * v16;
  v49 = 0;
  if ( a2 < v13 )
  {
    v20 = v19;
    v21 = (unsigned __int64)&a3[v15];
    v22 = (unsigned int)v15;
    v44 = v19;
    v41 = (unsigned int)v15;
    v46 = &a3[v15];
    while ( 1 )
    {
      for ( i = a3; (unsigned __int64)i < v21; a2 += v14 )
      {
        switch ( a7 )
        {
          case 1:
            LOBYTE(v19) = *a2;
            *i++ = *a2;
            break;
          case 2:
            *i = ajStretch2[(unsigned __int64)(unsigned __int8)*a2 >> 4];
            LOBYTE(v19) = ajStretch2[*a2 & 0xF];
            i[1] = v19;
            i += 2;
            break;
          case 3:
            *i = ajStretch3B1[(unsigned __int64)(unsigned __int8)*a2 >> 5];
            i[1] = ajStretch3B2[((unsigned __int64)(unsigned __int8)*a2 >> 2) & 0xF];
            LOBYTE(v19) = ajStretch3B3[*a2 & 7];
            i[2] = v19;
            i += 3;
            break;
          default:
            LOBYTE(v19) = a7 - 4;
            if ( a7 == 4 )
            {
              *i = awStretch4[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              i[1] = byte_1C03295A1[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              i[2] = awStretch4[2 * (*a2 & 0xF)];
              LOBYTE(v19) = byte_1C03295A1[2 * (*a2 & 0xF)];
              i[3] = v19;
              i += 4;
            }
            else if ( a7 == 5 )
            {
              *i = awStretch5W1[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              i[1] = byte_1C03295C1[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              i[2] = awStretch5W2[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
              i[3] = byte_1C0329581[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
              LOBYTE(v19) = ajStretch5B1[*a2 & 3];
              i[4] = v19;
              i += 5;
            }
            break;
        }
      }
      v24 = &a1[v20];
      if ( !a8 )
        break;
      if ( a8 == 0x2000 )
      {
        LOBYTE(v19) = v22 + (_BYTE)a1;
        v35 = a1;
        v36 = 0;
        if ( a1 > &a1[v22] )
          v22 = 0LL;
        if ( v22 )
        {
          v37 = a3;
          do
          {
            *v35++ = v36 | *v37 | ((unsigned __int8)*v37 >> 1);
            v38 = *v37++;
            v36 = v38 << 7;
            LOBYTE(v19) = (_BYTE)v37 - (_BYTE)a3;
          }
          while ( v37 - a3 < v22 );
        }
        if ( (v8 & 7) == 0 )
          *v35 = v36;
        for ( j = a1; ; LOBYTE(v19) = (unsigned __int8)memmove(a1, j, v16) )
        {
          a1 += v16;
          if ( a1 >= v24 )
            break;
        }
        v8 = v47;
LABEL_58:
        v21 = (unsigned __int64)v46;
LABEL_59:
        v18 = v49;
LABEL_60:
        v22 = v41;
        v14 = v42;
        goto LABEL_61;
      }
      if ( a8 != 0x4000 )
      {
        if ( a8 != 24576 || a1 >= v24 )
          goto LABEL_61;
        v25 = v16;
        v26 = v49;
        do
        {
          LOBYTE(v19) = vEmboldenItalicizeLine(&a1[(unsigned int)v12], (unsigned __int64)a3, v21, v11, v8);
          v27 = v26++;
          v11 -= v27 & 1;
          if ( v11 < 0 )
          {
            v11 = 7;
            v12 = (unsigned int)(v12 - 1);
          }
          v21 = (unsigned __int64)v46;
          a1 += v25;
        }
        while ( a1 < v24 );
        v49 = v26;
        v16 = v48;
        goto LABEL_59;
      }
      if ( a1 < v24 )
      {
        v28 = v16;
        v29 = v21 - (_QWORD)a3;
        if ( (unsigned __int64)a3 > v21 )
          v29 = 0LL;
        do
        {
          v30 = &a1[v12];
          v31 = 0;
          if ( v29 )
          {
            v32 = &a3[v12 - (unsigned int)v12];
            do
            {
              *v30++ = v31 | ((unsigned __int8)*v32 >> v11);
              v33 = *v32++;
              v31 = v33 << (8 - v11);
            }
            while ( v32 - a3 < v29 );
            v18 = v49;
            v28 = v16;
          }
          if ( (-v8 & 7) < v11 )
            *v30 = v31;
          v34 = v18++;
          v19 = v34 & 1;
          v49 = v18;
          v11 -= v19;
          if ( v11 < 0 )
          {
            v11 = 7;
            v12 = (unsigned int)(v12 - 1);
          }
          a1 += v28;
        }
        while ( a1 < v24 );
        v8 = v47;
        v21 = (unsigned __int64)v46;
        goto LABEL_60;
      }
LABEL_61:
      v20 = v44;
      a2 = v45 + 1;
      v45 = a2;
      if ( (unsigned __int64)a2 >= v43 )
        return v19;
    }
    if ( a1 >= v24 )
      goto LABEL_61;
    do
    {
      LOBYTE(v19) = (unsigned __int8)memmove(a1, a3, v16);
      a1 += v16;
    }
    while ( a1 < v24 );
    goto LABEL_58;
  }
  return v19;
}
