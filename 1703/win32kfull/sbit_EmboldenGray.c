/*
 * XREFs of sbit_EmboldenGray @ 0x1C02C3510
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02C40BC (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
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
  unsigned __int16 v8; // r9
  char *v9; // rsi
  __int16 v10; // r13
  char *v11; // rdi
  char *v12; // r15
  char *v13; // r12
  unsigned __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // r13
  unsigned __int8 *v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // r8
  int v21; // r10d
  unsigned __int8 *v22; // r11
  char *v23; // rbp
  __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // r11
  unsigned __int64 v27; // r10
  char *v28; // rcx
  unsigned __int8 v29; // dl
  int v30; // r8d
  _BYTE *v31; // r9
  __int64 v32; // r14
  char *v33; // rsi
  size_t v34; // rbp
  char *v35; // rdx
  __int64 v36; // r11
  unsigned __int8 v37; // cl
  int v38; // r9d
  int v39; // r10d
  char *v40; // r8
  __int64 v41; // r14
  char *v42; // rdi
  size_t v43; // rbp
  char *v44; // rdx
  __int64 v45; // rdi
  int v46; // r8d
  unsigned __int8 v47; // cl
  int v48; // r10d
  int v49; // r9d
  char *v50; // rax
  int v51; // [rsp+20h] [rbp-68h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  __int64 v53; // [rsp+30h] [rbp-58h]
  int v56; // [rsp+A0h] [rbp+18h]

  if ( !a3 )
    return;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( !a1 )
    return;
  v10 = a7;
  v56 = v7;
  if ( a7 < 0 )
  {
    v51 = a7;
    v11 = &a1[-(a7 * v7)];
    v12 = &a1[v7 * (a3 - 1)];
  }
  else
  {
    v11 = a1;
    v51 = a7;
    v12 = &a1[v7 * (a3 - a7 - 1)];
  }
  v13 = &a1[v7 * (a3 - 1)];
  if ( a6 > 0 )
  {
    v14 = (unsigned __int64)v11;
    if ( v11 > v12 )
    {
LABEL_41:
      v8 = a2;
      goto LABEL_42;
    }
    v15 = v7;
    v16 = a2 - 1;
    do
    {
      v17 = (unsigned __int8 *)(v14 + v16);
      v18 = (_BYTE *)(v14 + v16);
      if ( a6 > 0 )
      {
        v19 = (unsigned int)a6;
        do
        {
          *v18-- = 0;
          --v19;
        }
        while ( v19 );
      }
      while ( (unsigned __int64)v17 > v14 )
      {
        v20 = *v17;
        v21 = 1;
        if ( a6 >= 1 )
        {
          v22 = v17 - 1;
          while ( 1 )
          {
            if ( (unsigned __int64)&v17[-v21] >= v14 )
            {
              v20 += *v22;
              if ( v20 >= a5 )
                break;
            }
            ++v21;
            --v22;
            if ( v21 > a6 )
              goto LABEL_20;
          }
          v20 = a5 - 1;
        }
LABEL_20:
        *v17-- = v20;
      }
      v14 += v15;
    }
    while ( v14 <= (unsigned __int64)v12 );
    v9 = a1;
    v10 = a7;
LABEL_40:
    v7 = a4;
    goto LABEL_41;
  }
  if ( a6 < 0 )
  {
    v23 = v11;
    if ( v11 <= v12 )
    {
      v24 = a2;
      v25 = -a6;
      v26 = v7;
      v52 = a2;
      v53 = v7;
      do
      {
        if ( a6 < 0 )
        {
          memset(v23, 0, v25);
          v26 = v53;
          v24 = v52;
        }
        v27 = (unsigned __int64)&v23[v24];
        v28 = v23;
        if ( v23 < &v23[v24] )
        {
          do
          {
            v29 = *v28;
            v30 = 1;
            if ( v25 >= 1 )
            {
              v31 = v28 + 1;
              while ( 1 )
              {
                if ( (unsigned __int64)&v28[v30] < v27 )
                {
                  v29 += *v31;
                  if ( v29 >= a5 )
                    break;
                }
                ++v30;
                ++v31;
                if ( v30 > v25 )
                  goto LABEL_37;
              }
              v29 = a5 - 1;
            }
LABEL_37:
            *v28++ = v29;
          }
          while ( (unsigned __int64)v28 < v27 );
          v24 = v52;
        }
        v23 += v26;
      }
      while ( v23 <= v12 );
      goto LABEL_40;
    }
  }
LABEL_42:
  if ( v10 <= 0 )
  {
    if ( v10 < 0 )
    {
      v41 = v7;
      v42 = &v11[-v7];
      if ( v42 >= v9 )
      {
        v43 = v8;
        do
        {
          if ( (_DWORD)v43 )
            memset(v42, 0, v43);
          v42 -= v41;
        }
        while ( v42 >= v9 );
      }
      for ( ; v9 < v12; v9 += v41 )
      {
        v44 = v9;
        if ( a2 )
        {
          v45 = a2;
          v46 = -v51;
          do
          {
            v47 = *v44;
            v48 = 1;
            if ( v46 >= 1 )
            {
              v49 = v56;
              do
              {
                v50 = &v44[v49];
                if ( v50 >= &v12[v41] )
                  break;
                v47 += *v50;
                if ( v47 >= a5 )
                {
                  v47 = a5 - 1;
                  break;
                }
                ++v48;
                v49 += v56;
              }
              while ( v48 <= v46 );
            }
            *v44++ = v47;
            --v45;
          }
          while ( v45 );
        }
      }
    }
  }
  else
  {
    v32 = v7;
    v33 = &v12[v7];
    if ( v33 <= v13 )
    {
      v34 = v8;
      do
      {
        if ( (_DWORD)v34 )
          memset(v33, 0, v34);
        v33 += v32;
      }
      while ( v33 <= v13 );
    }
    for ( ; v13 > v11; v13 -= v32 )
    {
      v35 = v13;
      if ( a2 )
      {
        v36 = a2;
        do
        {
          v37 = *v35;
          v38 = 1;
          if ( v51 >= 1 )
          {
            v39 = v56;
            do
            {
              v40 = &v35[-v39];
              if ( v40 < v11 )
                break;
              v37 += *v40;
              if ( v37 >= a5 )
              {
                v37 = a5 - 1;
                break;
              }
              ++v38;
              v39 += v56;
            }
            while ( v38 <= v51 );
          }
          *v35++ = v37;
          --v36;
        }
        while ( v36 );
      }
    }
  }
}
