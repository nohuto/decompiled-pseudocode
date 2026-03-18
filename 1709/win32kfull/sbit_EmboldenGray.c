/*
 * XREFs of sbit_EmboldenGray @ 0x1C02BD348
 * Callers:
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02BDF14 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall sbit_EmboldenGray(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int16 a6,
        __int16 a7)
{
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r12
  char *v9; // rsi
  __int16 v10; // r13
  char *v11; // rdi
  char *v12; // rbp
  char *v13; // r15
  unsigned __int64 v14; // r9
  __int64 v15; // r13
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  __int64 v18; // rcx
  unsigned __int8 v19; // r8
  int v20; // r10d
  unsigned __int8 *v21; // r11
  char *v22; // r14
  __int64 v23; // rax
  int v24; // r12d
  __int64 v25; // r11
  unsigned __int64 v26; // r10
  char *v27; // rcx
  unsigned __int8 v28; // dl
  int v29; // r8d
  _BYTE *v30; // r9
  __int64 v31; // r14
  char *j; // rsi
  char *v33; // rdx
  __int64 v34; // r11
  unsigned __int8 v35; // cl
  int v36; // r10d
  int v37; // r9d
  char *v38; // r8
  __int64 v39; // r14
  char *i; // rdi
  char *v41; // rdx
  __int64 v42; // rdi
  int v43; // r8d
  unsigned __int8 v44; // cl
  int v45; // r10d
  int v46; // r9d
  char *v47; // rax
  int v48; // [rsp+20h] [rbp-58h]
  __int64 v49; // [rsp+30h] [rbp-48h]
  int v51; // [rsp+90h] [rbp+18h]

  if ( !a3 )
    return;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( !a1 )
    return;
  v10 = a7;
  v51 = a4;
  if ( a7 < 0 )
  {
    v48 = a7;
    v11 = &a1[-(a7 * a4)];
    v12 = &a1[a4 * (a3 - 1)];
  }
  else
  {
    v11 = a1;
    v48 = a7;
    v12 = &a1[a4 * (a3 - a7 - 1)];
  }
  v13 = &a1[a4 * (a3 - 1)];
  if ( a6 > 0 )
  {
    v14 = (unsigned __int64)v11;
    if ( v11 > v12 )
      goto LABEL_41;
    v15 = v7;
    do
    {
      v16 = (unsigned __int8 *)(v14 + v8 - 1LL);
      v17 = v16;
      if ( a6 > 0 )
      {
        v18 = (unsigned int)a6;
        do
        {
          *v17-- = 0;
          --v18;
        }
        while ( v18 );
      }
      while ( (unsigned __int64)v16 > v14 )
      {
        v19 = *v16;
        v20 = 1;
        if ( a6 >= 1 )
        {
          v21 = v16 - 1;
          while ( 1 )
          {
            if ( (unsigned __int64)&v16[-v20] >= v14 )
            {
              v19 += *v21;
              if ( v19 >= a5 )
                break;
            }
            ++v20;
            --v21;
            if ( v20 > a6 )
              goto LABEL_20;
          }
          v19 = a5 - 1;
        }
LABEL_20:
        *v16-- = v19;
      }
      v14 += v15;
    }
    while ( v14 <= (unsigned __int64)v12 );
    goto LABEL_40;
  }
  if ( a6 < 0 )
  {
    v22 = v11;
    if ( v11 <= v12 )
    {
      v23 = a2;
      v24 = -a6;
      v25 = a4;
      v49 = a4;
      do
      {
        if ( a6 < 0 )
        {
          memset(v22, 0, v24);
          v25 = v49;
          v23 = a2;
        }
        v26 = (unsigned __int64)&v22[v23];
        v27 = v22;
        if ( v22 < &v22[v23] )
        {
          do
          {
            v28 = *v27;
            v29 = 1;
            if ( v24 >= 1 )
            {
              v30 = v27 + 1;
              while ( 1 )
              {
                if ( (unsigned __int64)&v27[v29] < v26 )
                {
                  v28 += *v30;
                  if ( v28 >= a5 )
                    break;
                }
                ++v29;
                ++v30;
                if ( v29 > v24 )
                  goto LABEL_37;
              }
              v28 = a5 - 1;
            }
LABEL_37:
            *v27++ = v28;
          }
          while ( (unsigned __int64)v27 < v26 );
          v23 = a2;
        }
        v22 += v25;
      }
      while ( v22 <= v12 );
LABEL_40:
      v8 = a2;
      v7 = a4;
      v10 = a7;
    }
  }
LABEL_41:
  if ( v10 <= 0 )
  {
    if ( v10 < 0 )
    {
      v39 = v7;
      for ( i = &v11[-v7]; i >= v9; i -= v39 )
      {
        if ( v8 )
          memset(i, 0, v8);
      }
      for ( ; v9 < v12; v9 += v39 )
      {
        v41 = v9;
        if ( v8 )
        {
          v42 = v8;
          v43 = -v48;
          do
          {
            v44 = *v41;
            v45 = 1;
            if ( v43 >= 1 )
            {
              v46 = v51;
              do
              {
                v47 = &v41[v46];
                if ( v47 >= &v12[v39] )
                  break;
                v44 += *v47;
                if ( v44 >= a5 )
                {
                  v44 = a5 - 1;
                  break;
                }
                ++v45;
                v46 += v51;
              }
              while ( v45 <= v43 );
            }
            *v41++ = v44;
            --v42;
          }
          while ( v42 );
        }
      }
    }
  }
  else
  {
    v31 = v7;
    for ( j = &v12[v7]; j <= v13; j += v31 )
    {
      if ( v8 )
        memset(j, 0, v8);
    }
    for ( ; v13 > v11; v13 -= v31 )
    {
      v33 = v13;
      if ( v8 )
      {
        v34 = v8;
        do
        {
          v35 = *v33;
          v36 = 1;
          if ( v48 >= 1 )
          {
            v37 = v51;
            do
            {
              v38 = &v33[-v37];
              if ( v38 < v11 )
                break;
              v35 += *v38;
              if ( v35 >= a5 )
              {
                v35 = a5 - 1;
                break;
              }
              ++v36;
              v37 += v51;
            }
            while ( v36 <= v48 );
          }
          *v33++ = v35;
          --v34;
        }
        while ( v34 );
      }
    }
  }
}
