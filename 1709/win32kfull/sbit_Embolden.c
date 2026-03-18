/*
 * XREFs of sbit_Embolden @ 0x1C02BCD94
 * Callers:
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02BDF14 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
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
  unsigned int v8; // r14d
  unsigned int v9; // ecx
  int v10; // r10d
  int v11; // eax
  unsigned int v12; // r12d
  int v13; // r9d
  __int64 v14; // r10
  char *v15; // rdi
  unsigned __int64 v16; // r15
  char *v17; // r13
  char v18; // dl
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // rsi
  __int64 v23; // rdi
  char *v24; // r14
  unsigned __int64 v25; // rax
  size_t v26; // r8
  int v27; // ecx
  int v28; // r13d
  char v29; // al
  int v30; // r10d
  int v31; // ecx
  char v32; // r12
  int v33; // eax
  int v34; // r8d
  char v35; // r11
  unsigned int v36; // r9d
  unsigned __int16 v37; // cx
  __int64 v38; // r14
  char *i; // rsi
  int v40; // r10d
  char v41; // r8
  char v42; // dl
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // rsi
  char *v45; // rbp
  size_t v46; // rdi
  __int64 v47; // r11
  char *v48; // r14
  size_t v49; // r8
  char *v50; // r9
  int v51; // r12d
  int v52; // r13d
  char v53; // cl
  int v54; // r10d
  int v55; // r8d
  unsigned int v56; // edx
  char *v57; // r9
  char v58; // al
  unsigned int v59; // eax
  char *v60; // rcx
  __int64 v61; // r11
  char v62; // r8
  int v63; // r10d
  unsigned int v64; // r9d
  char *v65; // rdx
  __int64 v66; // r14
  unsigned int v67; // edx
  char *v68; // rax
  __int64 v69; // r11
  int v70; // ecx
  char v71; // r8
  int v72; // r10d
  unsigned int v73; // r9d
  char *v74; // rdx
  char v75; // [rsp+20h] [rbp-88h]
  char v76; // [rsp+20h] [rbp-88h]
  char v77; // [rsp+21h] [rbp-87h]
  int v78; // [rsp+24h] [rbp-84h]
  unsigned int v79; // [rsp+28h] [rbp-80h]
  int v80; // [rsp+38h] [rbp-70h]
  __int64 v81; // [rsp+38h] [rbp-70h]
  unsigned __int64 v82; // [rsp+40h] [rbp-68h]
  char *v83; // [rsp+48h] [rbp-60h]
  char *v84; // [rsp+50h] [rbp-58h]
  __int64 v85; // [rsp+58h] [rbp-50h]
  unsigned __int64 v86; // [rsp+58h] [rbp-50h]
  __int64 v87; // [rsp+60h] [rbp-48h]
  char v89; // [rsp+C0h] [rbp+18h]
  char v90; // [rsp+C0h] [rbp+18h]

  if ( !a3 )
    return;
  v6 = a4;
  v7 = a1;
  if ( !a1 )
    return;
  v8 = a2 + 7;
  v9 = v8 >> 3;
  v79 = v8 >> 3;
  if ( a5 < 0 )
  {
    v10 = a5 + a2;
    v78 = a5;
    v11 = (v10 + 7) / 8;
  }
  else
  {
    v10 = a2 - a5;
    v78 = a5;
    v11 = (v10 + 7) / 8;
    v6 = a4;
  }
  v12 = v6;
  v13 = v11;
  v14 = v10 & 7;
  if ( a6 < 0 )
  {
    v15 = &v7[-(a6 * v6)];
    v16 = (unsigned __int64)&v7[v6 * (a3 - 1)];
  }
  else
  {
    v15 = v7;
    v9 = ((unsigned int)a2 + 7) >> 3;
    v16 = (unsigned __int64)&v7[v6 * (a3 - a6 - 1)];
  }
  v17 = &v7[v6 * (a3 - 1)];
  v84 = v17;
  v83 = v15;
  if ( a5 <= 0 )
  {
    if ( a5 >= 0 )
      goto LABEL_35;
    v40 = a5;
    v41 = byte_1C02F11A8[a5 + 24];
    v42 = byte_1C02F11A0[a2 & 7];
    v77 = v42;
    v76 = v41;
    if ( (unsigned __int64)v15 > v16 )
      goto LABEL_35;
    v37 = a4;
    v43 = (unsigned __int64)v8 >> 3;
    v44 = v79 - v43;
    v86 = v44;
    v45 = &v15[v43];
    v46 = a4 - v43;
    v47 = -(__int64)v43;
    v81 = v47;
    while ( 1 )
    {
      v48 = &v45[v47];
      v45[v47] &= v41;
      v45[v44 - 1] &= v42;
      v49 = v46;
      if ( v45 > &v45[v46] )
        v49 = 0LL;
      if ( v49 )
      {
        memset(v45, 0, v49);
        v47 = v81;
        v40 = v78;
        v37 = a4;
      }
      v50 = &v45[v44 - 1];
      v82 = (unsigned __int64)v50;
      if ( v48 <= v50 )
        break;
LABEL_61:
      v40 = v78;
      v41 = v76;
      v42 = v77;
      v45 += v37;
      if ( (unsigned __int64)&v45[v47] > v16 )
      {
        v15 = v83;
        v7 = a1;
        v12 = v6;
        v17 = v84;
        goto LABEL_36;
      }
    }
    v51 = -v40;
    v52 = (7 - v40) / 8;
LABEL_47:
    v53 = *v48;
    v54 = 1;
    v90 = *v48;
    if ( v51 < 1 )
      goto LABEL_59;
    while ( 1 )
    {
      v55 = 0;
      if ( v52 >= 0 )
        break;
LABEL_57:
      if ( ++v54 > v51 )
      {
        v50 = (char *)v82;
LABEL_59:
        *v48++ = v53;
        if ( v48 > v50 )
        {
          v47 = v81;
          v44 = v86;
          v37 = a4;
          goto LABEL_61;
        }
        goto LABEL_47;
      }
    }
    v56 = v54;
    while ( 1 )
    {
      v57 = &v48[v55];
      if ( (unsigned __int64)v57 > v82 )
        goto LABEL_57;
      if ( v56 <= 7 )
        break;
      if ( v56 + 7 <= 6 )
      {
        v58 = (unsigned __int8)*v57 >> (8 * v55 - v54);
        goto LABEL_55;
      }
LABEL_56:
      ++v55;
      v56 -= 8;
      if ( v55 > v52 )
        goto LABEL_57;
    }
    v58 = *v57 << v56;
LABEL_55:
    v53 = v58 | v90;
    v90 |= v58;
    goto LABEL_56;
  }
  v18 = byte_1C02F11A0[v14];
  v19 = (unsigned __int64)v15;
  v75 = v18;
  if ( (unsigned __int64)v15 <= v16 )
  {
    v20 = v9;
    v21 = a4;
    v22 = &v15[v13];
    v85 = v20;
    v23 = a4 - v20;
    v87 = v23;
    do
    {
      *(v22 - 1) &= v18;
      v24 = (char *)(v19 + v20 - 1);
      v25 = v19 + v20 + v23;
      v26 = v25 - (_QWORD)v22;
      if ( (unsigned __int64)v22 > v25 )
        v26 = 0LL;
      if ( v26 )
      {
        memset(v22, 0, v26);
        v21 = a4;
      }
      if ( (unsigned __int64)v24 >= v19 )
      {
        v27 = v78;
        v28 = (v78 + 7) / 8;
        do
        {
          v29 = *v24;
          v30 = 1;
          v89 = *v24;
          if ( v27 >= 1 )
          {
            v31 = -1;
            v32 = *v24;
            v33 = v78;
            v80 = -1;
            do
            {
              v34 = 0;
              if ( v28 >= 0 )
              {
                v35 = v31;
                v36 = v30;
                do
                {
                  if ( (unsigned __int64)&v24[-v34] < v19 )
                    break;
                  if ( v36 > 7 )
                  {
                    if ( v36 + 7 <= 6 )
                      v32 |= v24[-v34] << v35;
                  }
                  else
                  {
                    v32 |= (unsigned __int8)v24[-v34] >> (v30 - 8 * v34);
                  }
                  ++v34;
                  v36 -= 8;
                  v35 += 8;
                }
                while ( v34 <= v28 );
                v31 = v80;
                v33 = v78;
                v89 = v32;
              }
              --v31;
              ++v30;
              v80 = v31;
            }
            while ( v30 <= v33 );
            v29 = v89;
            v27 = v78;
          }
          *v24-- = v29;
        }
        while ( (unsigned __int64)v24 >= v19 );
        v21 = a4;
        v23 = v87;
      }
      v20 = v85;
      v19 += v21;
      v18 = v75;
      v22 += v21;
    }
    while ( v19 <= v16 );
    v15 = v83;
    v7 = a1;
    v12 = v6;
    v17 = v84;
  }
LABEL_35:
  v37 = a4;
LABEL_36:
  if ( a6 <= 0 )
  {
    if ( a6 < 0 )
    {
      v66 = v37;
      while ( 1 )
      {
        v15 -= v66;
        if ( v15 < v7 )
          break;
        if ( v12 )
          memset(v15, 0, v12);
      }
      if ( (unsigned __int64)v7 < v16 )
      {
        v67 = v79;
        do
        {
          v68 = v7;
          if ( v67 )
          {
            v69 = v67;
            v70 = -a6;
            do
            {
              v71 = *v68;
              v72 = 1;
              if ( v70 >= 1 )
              {
                v73 = v12;
                do
                {
                  v74 = &v68[v73];
                  if ( (unsigned __int64)v74 >= v66 + v16 )
                    break;
                  v71 |= *v74;
                  ++v72;
                  v73 += v12;
                }
                while ( v72 <= v70 );
              }
              *v68++ = v71;
              --v69;
            }
            while ( v69 );
            v67 = v79;
          }
          v7 += v66;
        }
        while ( (unsigned __int64)v7 < v16 );
      }
    }
  }
  else
  {
    v38 = v37;
    for ( i = (char *)(v37 + v16); i <= v17; i += v38 )
    {
      if ( v12 )
        memset(i, 0, v12);
    }
    if ( v17 > v15 )
    {
      v59 = v79;
      do
      {
        v60 = v17;
        if ( v59 )
        {
          v61 = v59;
          do
          {
            v62 = *v60;
            v63 = 1;
            if ( a6 >= 1 )
            {
              v64 = v12;
              do
              {
                v65 = &v60[-v64];
                if ( v65 < v15 )
                  break;
                v62 |= *v65;
                ++v63;
                v64 += v12;
              }
              while ( v63 <= a6 );
            }
            *v60++ = v62;
            --v61;
          }
          while ( v61 );
          v59 = v79;
        }
        v17 -= v38;
      }
      while ( v17 > v15 );
    }
  }
}
