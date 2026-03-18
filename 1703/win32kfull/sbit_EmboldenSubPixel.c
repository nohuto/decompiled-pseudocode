/*
 * XREFs of sbit_EmboldenSubPixel @ 0x1C02C3AEC
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall sbit_EmboldenSubPixel(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6)
{
  unsigned __int16 v6; // r12
  char *v7; // r13
  char *v8; // rdi
  char *v9; // r15
  unsigned __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // r12
  char *v13; // rdx
  _BYTE *v14; // rax
  __int64 v15; // rcx
  char v16; // r9
  int v17; // r10d
  char *v18; // r11
  char *v19; // rbx
  int v20; // ebp
  __int64 v21; // r12
  unsigned __int64 v22; // r10
  char *v23; // rcx
  char v24; // dl
  int v25; // r8d
  char *v26; // r9
  __int64 v27; // r14
  char *v28; // rbx
  char *j; // r15
  char *k; // r9
  char *v31; // rdx
  int v32; // eax
  __int64 v33; // rbx
  unsigned __int8 v34; // r8
  int v35; // r11d
  int v36; // r10d
  char *v37; // rcx
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // al
  __int64 v40; // r14
  char *i; // rdi
  char *v42; // rdx
  unsigned __int8 *v43; // r8
  __int64 v44; // rbp
  int v45; // r10d
  unsigned __int8 v46; // r9
  int v47; // ebx
  int v48; // r11d
  char *v49; // rax
  unsigned __int8 v50; // cl
  unsigned __int8 v51; // al
  char *v52; // rdx
  _BYTE *v53; // r9
  _BYTE *v54; // rcx
  unsigned __int64 v55; // r11
  int v56; // [rsp+20h] [rbp-58h]
  char *v57; // [rsp+28h] [rbp-50h]
  int v60; // [rsp+90h] [rbp+18h]
  unsigned __int16 v61; // [rsp+98h] [rbp+20h]

  if ( a3 )
  {
    v61 = a4;
    v6 = a2;
    v7 = a1;
    if ( a1 )
    {
      if ( a6 < 0 )
      {
        v56 = a4;
        v60 = a6;
        v8 = &a1[-(a6 * a4)];
        v9 = &a1[a4 * (a3 - 1)];
      }
      else
      {
        v8 = a1;
        v60 = a6;
        v56 = a4;
        v9 = &a1[a4 * (a3 - a6 - 1)];
      }
      v57 = &a1[a4 * (a3 - 1)];
      if ( a5 > 0 )
      {
        v10 = (unsigned __int64)v8;
        if ( v8 > v9 )
          goto LABEL_44;
        v11 = a4;
        v12 = a2 - 1;
        while ( 1 )
        {
          v13 = (char *)(v12 + v10);
          v14 = (_BYTE *)(v12 + v10);
          if ( a5 > 0 )
          {
            v15 = (unsigned int)a5;
            do
            {
              *v14-- = 0;
              --v15;
            }
            while ( v15 );
          }
          if ( (unsigned __int64)v13 <= v10 )
            goto LABEL_23;
          do
          {
            v16 = *v13;
            v17 = 1;
            if ( a5 < 1 )
              goto LABEL_22;
            v18 = v13 - 1;
            while ( 1 )
            {
              if ( (unsigned __int64)&v13[-v17] < v10 || !*v18 )
                goto LABEL_19;
              if ( v16 )
                break;
              v16 = *v18;
LABEL_19:
              ++v17;
              --v18;
              if ( v17 > a5 )
                goto LABEL_22;
            }
            v16 = 42;
LABEL_22:
            *v13-- = v16;
          }
          while ( (unsigned __int64)v13 > v10 );
LABEL_23:
          v10 += v11;
          if ( v10 > (unsigned __int64)v9 )
          {
LABEL_43:
            a4 = v61;
            v6 = a2;
            goto LABEL_44;
          }
        }
      }
      if ( a5 < 0 )
      {
        v19 = v8;
        if ( v8 <= v9 )
        {
          v20 = -a5;
          v21 = a4;
LABEL_28:
          if ( a5 < 0 )
            memset(v19, 0, v20);
          v22 = (unsigned __int64)&v19[a2];
          v23 = v19;
          if ( (unsigned __int64)v19 >= v22 )
            goto LABEL_41;
LABEL_31:
          v24 = *v23;
          v25 = 1;
          if ( v20 < 1 )
            goto LABEL_40;
          v26 = v23 + 1;
          while ( 1 )
          {
            if ( (unsigned __int64)&v23[v25] < v22 && *v26 )
            {
              if ( v24 )
              {
                v24 = 42;
LABEL_40:
                *v23++ = v24;
                if ( (unsigned __int64)v23 >= v22 )
                {
LABEL_41:
                  v19 += v21;
                  if ( v19 > v9 )
                  {
                    v7 = a1;
                    goto LABEL_43;
                  }
                  goto LABEL_28;
                }
                goto LABEL_31;
              }
              v24 = *v26;
            }
            ++v25;
            ++v26;
            if ( v25 > v20 )
              goto LABEL_40;
          }
        }
      }
LABEL_44:
      if ( a6 <= 0 )
      {
        if ( a6 < 0 )
        {
          v40 = a4;
          for ( i = &v8[-a4]; i >= v7; i -= v40 )
          {
            if ( v6 )
              memset(i, 0, v6);
          }
          v42 = v7;
          if ( v7 < v9 )
          {
            do
            {
              v43 = (unsigned __int8 *)v42;
              if ( v6 )
              {
                v44 = v6;
                v45 = -v60;
                do
                {
                  v46 = *v43;
                  v47 = 1;
                  if ( v45 >= 1 )
                  {
                    v48 = v56;
                    do
                    {
                      v49 = (char *)&v43[v48];
                      if ( v49 >= &v9[v40] )
                        break;
                      if ( *v49 )
                      {
                        if ( v46 )
                        {
                          v50 = *v49;
                          v51 = v46;
                          if ( v50 > v46 )
                            v51 = v50;
                          v46 = v51;
                          break;
                        }
                        v46 = *v49;
                      }
                      v48 += v56;
                      ++v47;
                    }
                    while ( v47 <= v45 );
                  }
                  *v43++ = v46;
                  --v44;
                }
                while ( v44 );
              }
              v42 += v40;
            }
            while ( v42 < v9 );
            v7 = a1;
          }
        }
        j = v57;
      }
      else
      {
        v27 = a4;
        v28 = &v9[a4];
        for ( j = v57; v28 <= v57; v28 += v27 )
        {
          if ( v6 )
            memset(v28, 0, v6);
        }
        for ( k = v57; k > v8; k -= v27 )
        {
          v31 = k;
          if ( v6 )
          {
            v32 = v60;
            v33 = v6;
            do
            {
              v34 = *v31;
              v35 = 1;
              if ( v32 >= 1 )
              {
                v36 = v56;
                while ( 1 )
                {
                  v37 = &v31[-v36];
                  if ( v37 < v8 )
                    break;
                  if ( *v37 )
                  {
                    if ( v34 )
                    {
                      v38 = *v37;
                      v39 = v34;
                      if ( v38 > v34 )
                        v39 = v38;
                      v34 = v39;
                      break;
                    }
                    v34 = *v37;
                  }
                  v32 = v60;
                  ++v35;
                  v36 += v56;
                  if ( v35 > v60 )
                    goto LABEL_64;
                }
                v32 = v60;
              }
LABEL_64:
              *v31++ = v34;
              --v33;
            }
            while ( v33 );
          }
        }
      }
      if ( (int)abs32(v60) > 1 )
      {
        v52 = &v7[v61];
        if ( v52 < j )
        {
          v53 = v52 + 1;
          do
          {
            v54 = v53;
            v55 = (unsigned __int64)&v53[a2 - 2];
            if ( (unsigned __int64)v53 < v55 )
            {
              do
              {
                if ( (unsigned __int8)(*v54 - 1) <= 0x28u && *(v54 - 1) && v54[1] && v54[-v61] )
                {
                  if ( v54[v61] )
                    *v54 = 42;
                }
                ++v54;
              }
              while ( (unsigned __int64)v54 < v55 );
              j = v57;
            }
            v52 += v61;
            v53 += v61;
          }
          while ( v52 < j );
        }
      }
    }
  }
}
