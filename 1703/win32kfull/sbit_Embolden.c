/*
 * XREFs of sbit_Embolden @ 0x1C02C2F5C
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02C40BC (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall sbit_Embolden(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6)
{
  unsigned __int16 v6; // bx
  char *v7; // rsi
  unsigned int v8; // ecx
  int v9; // r10d
  int v10; // eax
  int v11; // r12d
  int v12; // r9d
  __int64 v13; // r10
  char *v14; // rdi
  unsigned __int64 v15; // rbp
  char *v16; // r13
  char v17; // dl
  unsigned __int64 v18; // r15
  __int64 v19; // rcx
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  char *v23; // r14
  unsigned __int64 v24; // rax
  size_t v25; // r8
  int v26; // ecx
  int v27; // r13d
  char v28; // al
  int v29; // r9d
  int v30; // ecx
  char v31; // r12
  int v32; // eax
  int v33; // r8d
  char v34; // r11
  unsigned int v35; // r10d
  unsigned __int16 v36; // r8
  __int64 v37; // r14
  char *i; // rsi
  char v39; // r9
  char v40; // r11
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rcx
  size_t v43; // rdx
  unsigned __int64 v44; // rsi
  char *v45; // r14
  __int64 v46; // r10
  char *v47; // r15
  size_t v48; // r8
  char *v49; // r11
  int v50; // r12d
  int v51; // r13d
  char v52; // cl
  int v53; // r9d
  int v54; // r8d
  unsigned int v55; // edx
  char *v56; // r11
  char v57; // al
  int v58; // eax
  char *v59; // rcx
  __int64 v60; // r11
  char v61; // r8
  int v62; // r9d
  int v63; // r10d
  char *v64; // rdx
  __int64 v65; // r14
  char *v66; // rax
  __int64 v67; // r11
  int v68; // ecx
  char v69; // r8
  int v70; // r10d
  int v71; // r9d
  char *v72; // rdx
  char v73; // [rsp+20h] [rbp-88h]
  char v74; // [rsp+20h] [rbp-88h]
  char v75; // [rsp+21h] [rbp-87h]
  int v76; // [rsp+24h] [rbp-84h]
  int v77; // [rsp+28h] [rbp-80h]
  int v78; // [rsp+40h] [rbp-68h]
  __int64 v79; // [rsp+40h] [rbp-68h]
  char *v80; // [rsp+48h] [rbp-60h]
  char *v81; // [rsp+50h] [rbp-58h]
  __int64 v82; // [rsp+58h] [rbp-50h]
  unsigned __int64 v83; // [rsp+58h] [rbp-50h]
  __int64 v84; // [rsp+60h] [rbp-48h]
  unsigned __int64 v85; // [rsp+60h] [rbp-48h]
  size_t v86; // [rsp+68h] [rbp-40h]
  char v88; // [rsp+C0h] [rbp+18h]
  char v89; // [rsp+C0h] [rbp+18h]

  if ( !a3 )
    return;
  v6 = a4;
  v7 = a1;
  if ( !a1 )
    return;
  v8 = ((unsigned int)a2 + 7) >> 3;
  v77 = v8;
  if ( a5 < 0 )
  {
    v9 = a5 + a2;
    v76 = a5;
    v10 = (v9 + 7) / 8;
  }
  else
  {
    v9 = a2 - a5;
    v76 = a5;
    v10 = (v9 + 7) / 8;
    v6 = a4;
  }
  v11 = v6;
  v12 = v10;
  v13 = v9 & 7;
  if ( a6 < 0 )
  {
    v14 = &v7[-(a6 * v6)];
    v15 = (unsigned __int64)&v7[v6 * (a3 - 1)];
  }
  else
  {
    v14 = v7;
    v8 = ((unsigned int)a2 + 7) >> 3;
    v15 = (unsigned __int64)&v7[v6 * (a3 - a6 - 1)];
  }
  v16 = &v7[v6 * (a3 - 1)];
  v81 = v16;
  v80 = v14;
  if ( a5 <= 0 )
  {
    if ( a5 >= 0 )
      goto LABEL_35;
    v39 = byte_1C02F4540[a5 + 24];
    v74 = v39;
    v40 = byte_1C02F0398[a2 & 7];
    v75 = v40;
    if ( (unsigned __int64)v14 > v15 )
      goto LABEL_35;
    v41 = (unsigned __int64)((unsigned int)a2 + 7) >> 3;
    v42 = (unsigned int)v77 - v41;
    v43 = a4 - v41;
    v83 = v42;
    v44 = v77 - 1 - v41;
    v86 = v43;
    v45 = &v14[v41];
    v85 = v44;
    v46 = -(__int64)v41;
    v79 = v46;
    while ( 1 )
    {
      v47 = &v45[v46];
      v45[v46] &= v39;
      v48 = v43;
      v45[v42 - 1] &= v40;
      if ( v45 > &v45[v43] )
        v48 = 0LL;
      if ( v48 )
      {
        memset(v45, 0, v48);
        v46 = v79;
      }
      v49 = &v45[v44];
      if ( v47 <= &v45[v44] )
        break;
LABEL_61:
      v36 = a4;
      v42 = v83;
      v45 += a4;
      v43 = v86;
      v39 = v74;
      v40 = v75;
      if ( (unsigned __int64)&v45[v46] > v15 )
      {
        v7 = a1;
        v11 = v6;
        v16 = v81;
        goto LABEL_36;
      }
    }
    v50 = -v76;
    v51 = (7 - v76) / 8;
LABEL_47:
    v52 = *v47;
    v53 = 1;
    v89 = *v47;
    if ( v50 < 1 )
      goto LABEL_59;
    while ( 1 )
    {
      v54 = 0;
      if ( v51 >= 0 )
        break;
LABEL_57:
      if ( ++v53 > v50 )
      {
        v49 = &v45[v44];
LABEL_59:
        *v47++ = v52;
        if ( v47 > v49 )
        {
          v46 = v79;
          v44 = v85;
          goto LABEL_61;
        }
        goto LABEL_47;
      }
    }
    v55 = v53;
    while ( 1 )
    {
      v56 = &v47[v54];
      if ( v56 > &v45[v44] )
        goto LABEL_57;
      if ( v55 <= 7 )
        break;
      if ( v55 + 7 <= 6 )
      {
        v57 = (unsigned __int8)*v56 >> (8 * v54 - v53);
        goto LABEL_55;
      }
LABEL_56:
      ++v54;
      v55 -= 8;
      if ( v54 > v51 )
        goto LABEL_57;
    }
    v57 = *v56 << v55;
LABEL_55:
    v52 = v57 | v89;
    v89 |= v57;
    goto LABEL_56;
  }
  v17 = byte_1C02F0398[v13];
  v18 = (unsigned __int64)v14;
  v73 = v17;
  if ( (unsigned __int64)v14 <= v15 )
  {
    LODWORD(v21) = v8 - 1;
    v19 = a4;
    v20 = &v14[v12];
    v21 = (int)v21;
    v22 = a4 - (__int64)(int)v21;
    v84 = (int)v21;
    v82 = v22;
    do
    {
      *(v20 - 1) &= v17;
      v23 = (char *)(v21 + v18);
      v24 = v21 + v18 + v22;
      v25 = v24 - (_QWORD)v20;
      if ( (unsigned __int64)v20 > v24 )
        v25 = 0LL;
      if ( v25 )
      {
        memset(v20, 0, v25);
        v19 = a4;
      }
      if ( (unsigned __int64)v23 >= v18 )
      {
        v26 = v76;
        v27 = (v76 + 7) / 8;
        do
        {
          v28 = *v23;
          v29 = 1;
          v88 = *v23;
          if ( v26 >= 1 )
          {
            v30 = -1;
            v31 = *v23;
            v32 = v76;
            v78 = -1;
            do
            {
              v33 = 0;
              if ( v27 >= 0 )
              {
                v34 = v30;
                v35 = v29;
                do
                {
                  if ( (unsigned __int64)&v23[-v33] < v18 )
                    break;
                  if ( v35 > 7 )
                  {
                    if ( v35 + 7 <= 6 )
                      v31 |= v23[-v33] << v34;
                  }
                  else
                  {
                    v31 |= (unsigned __int8)v23[-v33] >> (v29 - 8 * v33);
                  }
                  ++v33;
                  v35 -= 8;
                  v34 += 8;
                }
                while ( v33 <= v27 );
                v30 = v78;
                v32 = v76;
                v88 = v31;
              }
              --v30;
              ++v29;
              v78 = v30;
            }
            while ( v29 <= v32 );
            v28 = v88;
            v26 = v76;
          }
          *v23-- = v28;
        }
        while ( (unsigned __int64)v23 >= v18 );
        v19 = a4;
        v22 = v82;
      }
      v21 = v84;
      v18 += v19;
      v17 = v73;
      v20 += v19;
    }
    while ( v18 <= v15 );
    v14 = v80;
    v7 = a1;
    v11 = v6;
    v16 = v81;
  }
LABEL_35:
  v36 = a4;
LABEL_36:
  if ( a6 <= 0 )
  {
    if ( a6 < 0 )
    {
      v65 = v36;
      while ( 1 )
      {
        v14 -= v65;
        if ( v14 < v7 )
          break;
        if ( v11 > 0 )
          memset(v14, 0, (unsigned int)v11);
      }
      for ( ; (unsigned __int64)v7 < v15; v7 += v65 )
      {
        v66 = v7;
        if ( v77 > 0 )
        {
          v67 = (unsigned int)v77;
          v68 = -a6;
          do
          {
            v69 = *v66;
            v70 = 1;
            if ( v68 >= 1 )
            {
              v71 = v11;
              do
              {
                v72 = &v66[v71];
                if ( (unsigned __int64)v72 >= v65 + v15 )
                  break;
                v69 |= *v72;
                ++v70;
                v71 += v11;
              }
              while ( v70 <= v68 );
            }
            *v66++ = v69;
            --v67;
          }
          while ( v67 );
        }
      }
    }
  }
  else
  {
    v37 = v36;
    for ( i = (char *)(v36 + v15); i <= v16; i += v37 )
    {
      if ( v11 > 0 )
        memset(i, 0, (unsigned int)v11);
    }
    if ( v16 > v14 )
    {
      v58 = v77;
      do
      {
        v59 = v16;
        if ( v58 > 0 )
        {
          v60 = (unsigned int)v58;
          do
          {
            v61 = *v59;
            v62 = 1;
            if ( a6 >= 1 )
            {
              v63 = v11;
              do
              {
                v64 = &v59[-v63];
                if ( v64 < v14 )
                  break;
                v61 |= *v64;
                ++v62;
                v63 += v11;
              }
              while ( v62 <= a6 );
            }
            *v59++ = v61;
            --v60;
          }
          while ( v60 );
          v58 = v77;
        }
        v16 -= v37;
      }
      while ( v16 > v14 );
    }
  }
}
