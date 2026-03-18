/*
 * XREFs of sbit_EmboldenSubPixel @ 0x1C02BD92C
 * Callers:
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
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
  char *v13; // rdx
  char *v14; // rax
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
  char *v30; // r9
  char *v31; // r8
  int v32; // eax
  __int64 v33; // rbp
  unsigned __int8 v34; // dl
  int v35; // ebx
  int v36; // r11d
  char *v37; // rcx
  unsigned __int8 v38; // r10
  unsigned __int8 v39; // cl
  __int64 v40; // r14
  char *i; // rdi
  char *v42; // rdx
  unsigned __int8 *v43; // r8
  __int64 v44; // rdi
  int v45; // r11d
  unsigned __int8 v46; // r9
  int v47; // ebx
  int v48; // ecx
  char *v49; // rax
  char v50; // cl
  char *v51; // rdx
  _BYTE *v52; // r9
  _BYTE *v53; // rcx
  unsigned __int64 v54; // r11
  int v55; // [rsp+20h] [rbp-58h]
  char *v56; // [rsp+28h] [rbp-50h]
  int v59; // [rsp+90h] [rbp+18h]
  unsigned __int16 v60; // [rsp+98h] [rbp+20h]

  if ( !a3 )
    return;
  v60 = a4;
  v6 = a2;
  v7 = a1;
  if ( !a1 )
    return;
  if ( a6 < 0 )
  {
    v55 = a4;
    v59 = a6;
    v8 = &a1[-(a6 * a4)];
    v9 = &a1[a4 * (a3 - 1)];
  }
  else
  {
    v8 = a1;
    v59 = a6;
    v55 = a4;
    v9 = &a1[a4 * (a3 - a6 - 1)];
  }
  v56 = &a1[a4 * (a3 - 1)];
  if ( a5 > 0 )
  {
    v10 = (unsigned __int64)v8;
    if ( v8 > v9 )
      goto LABEL_44;
    v11 = a4;
    while ( 1 )
    {
      v13 = (char *)(v10 + a2 - 1LL);
      v14 = v13;
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
        a4 = v60;
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
            v45 = -v59;
            do
            {
              v46 = *v43;
              v47 = 1;
              if ( v45 >= 1 )
              {
                v48 = v55;
                do
                {
                  v49 = (char *)&v43[v48];
                  if ( v49 >= &v9[v40] )
                    break;
                  if ( *v49 )
                  {
                    if ( v46 )
                    {
                      v50 = v46;
                      if ( (unsigned __int8)*v49 > v46 )
                        v50 = *v49;
                      v46 = v50;
                      break;
                    }
                    v46 = *v49;
                  }
                  v48 += v55;
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
  }
  else
  {
    v27 = a4;
    v28 = &v9[a4];
    for ( j = v56; v28 <= v56; v28 += v27 )
    {
      if ( v6 )
        memset(v28, 0, v6);
    }
    v30 = v56;
    if ( v56 <= v8 )
      goto LABEL_90;
    do
    {
      v31 = v30;
      if ( v6 )
      {
        v32 = v59;
        v33 = v6;
        do
        {
          v34 = *v31;
          v35 = 1;
          if ( v32 >= 1 )
          {
            v36 = v55;
            while ( 1 )
            {
              v37 = &v31[-v36];
              if ( v37 < v8 )
                break;
              v38 = *v37;
              if ( *v37 )
              {
                if ( v34 )
                {
                  v39 = v34;
                  if ( v38 > v34 )
                    v39 = v38;
                  v34 = v39;
                  break;
                }
                v34 = *v37;
              }
              v32 = v59;
              ++v35;
              v36 += v55;
              if ( v35 > v59 )
                goto LABEL_64;
            }
            v32 = v59;
          }
LABEL_64:
          *v31++ = v34;
          --v33;
        }
        while ( v33 );
      }
      v30 -= v27;
    }
    while ( v30 > v8 );
  }
  j = v56;
LABEL_90:
  if ( (int)abs32(v59) > 1 )
  {
    v51 = &v7[v60];
    if ( v51 < j )
    {
      v52 = v51 + 1;
      do
      {
        v53 = v52;
        v54 = (unsigned __int64)&v52[a2 - 2];
        if ( (unsigned __int64)v52 < v54 )
        {
          do
          {
            if ( (unsigned __int8)(*v53 - 1) <= 0x28u && *(v53 - 1) && v53[1] && v53[~(unsigned __int64)v60 + 1] )
            {
              if ( v53[v60] )
                *v53 = 42;
            }
            ++v53;
          }
          while ( (unsigned __int64)v53 < v54 );
          j = v56;
        }
        v51 += v60;
        v52 += v60;
      }
      while ( v51 < j );
    }
  }
}
