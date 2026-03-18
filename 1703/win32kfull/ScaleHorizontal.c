/*
 * XREFs of ScaleHorizontal @ 0x1C02C25D8
 * Callers:
 *     sbit_GetBitmap @ 0x1C02C40BC (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall ScaleHorizontal(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int16 a7)
{
  unsigned __int16 v7; // bp
  unsigned __int8 *v8; // rsi
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r15
  unsigned __int8 *v11; // r12
  unsigned int v12; // edi
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r8
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // r11
  __int16 v18; // r9
  unsigned __int16 v19; // r10
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  unsigned __int8 v22; // cl
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // r12d
  char *v26; // r8
  char *v27; // r9
  __int16 v28; // cx
  unsigned __int16 v29; // si
  char *v30; // r11
  unsigned __int16 v31; // ax
  char *v32; // rdi
  unsigned __int8 v33; // r9
  unsigned __int16 v34; // r8
  char *v35; // r15
  __int16 v36; // dx
  __int16 v37; // si
  unsigned __int16 v38; // bp
  unsigned __int8 v39; // r13
  char *v40; // r14
  bool v41; // zf
  unsigned __int16 v42; // r14
  unsigned __int8 *v43; // r15
  __int64 v44; // rax
  unsigned __int8 *v45; // r8
  unsigned __int8 *v46; // r9
  unsigned __int16 v47; // dx
  unsigned __int16 v48; // cx
  __int64 v49; // r10
  unsigned __int16 v50; // r9
  int v51; // ecx
  char *v52; // r8
  char *v53; // rcx
  char *v54; // rsi
  __int64 v55; // r12
  char *v56; // r11
  char *v57; // r10
  char *v58; // r8
  unsigned __int16 v59; // dx
  unsigned __int16 v60; // cx
  __int64 v61; // rax
  unsigned __int8 v62; // [rsp+20h] [rbp-68h]
  unsigned __int16 v63; // [rsp+22h] [rbp-66h]
  int v64; // [rsp+24h] [rbp-64h]
  __int64 v65; // [rsp+28h] [rbp-60h]
  char *v66; // [rsp+28h] [rbp-60h]
  __int64 v67; // [rsp+28h] [rbp-60h]
  unsigned __int8 *v68; // [rsp+30h] [rbp-58h]
  __int64 v69; // [rsp+38h] [rbp-50h]
  __int64 v70; // [rsp+40h] [rbp-48h]
  unsigned __int8 v72; // [rsp+A8h] [rbp+20h]

  v7 = a3;
  v8 = a1;
  v72 = 0;
  if ( a4 == 1 )
  {
    v9 = a6;
    if ( a6 >= a5 )
    {
      if ( a6 > a5 )
      {
        v63 = a7;
        v24 = a7 - 1;
        v25 = ((unsigned int)a6 + 7) >> 3;
        v26 = (char *)&v8[v24 * a2];
        v27 = (char *)&v8[v24 * v7];
        if ( a7 )
        {
          v69 = a2;
          v70 = v7;
          v28 = ((a5 - 1) & 7) - 7;
          v29 = a5 >> 1;
          v30 = &v27[(unsigned __int16)v25 - 1];
          v31 = a7;
          v32 = &v26[(unsigned __int16)(((unsigned int)a5 + 7) >> 3) - 1];
          do
          {
            v33 = 0;
            v66 = v30;
            v34 = v29;
            v35 = v32;
            v36 = v28;
            v37 = 7 - ((a6 - 1) & 7);
            v38 = 0;
            if ( (_WORD)v25 )
            {
              v39 = v72;
              do
              {
                if ( v36 <= 0 )
                {
                  v39 = *v35--;
                  v36 += 8;
                  v72 = v39;
                }
                v34 += v9;
                if ( v34 >= a5 )
                {
                  v40 = v66;
                  do
                  {
                    ++v37;
                    v33 = (v39 << (v36 - 1)) & 0x80 | (v33 >> 1);
                    if ( v37 == 8 )
                    {
                      *v40 = v33;
                      v37 = 0;
                      --v40;
                      ++v38;
                    }
                    v34 -= a5;
                  }
                  while ( v34 >= a5 );
                  v39 = v72;
                  v66 = v40;
                  v9 = a6;
                }
                --v36;
              }
              while ( v38 < (unsigned __int16)v25 );
              v31 = v63;
              v28 = ((a5 - 1) & 7) - 7;
            }
            v32 -= v69;
            v30 -= v70;
            v29 = a5 >> 1;
            v41 = v31-- == 1;
            v63 = v31;
          }
          while ( !v41 );
        }
      }
    }
    else
    {
      v10 = a7;
      v11 = a1;
      v12 = ((unsigned int)a6 + 7) >> 3;
      if ( a7 )
      {
        v13 = a2;
        v14 = a5 >> 1;
        v65 = a2;
        do
        {
          v15 = v14;
          v16 = v8;
          v68 = v8;
          v64 = 0;
          v17 = v11;
          v62 = 0;
          v18 = 0;
          v19 = 0;
          if ( (_WORD)v12 )
          {
            do
            {
              while ( v15 >= a6 )
              {
                --v18;
                v15 -= a6;
              }
              if ( v18 > 0 )
              {
                v21 = v72;
              }
              else
              {
                v20 = (unsigned __int16)(((unsigned __int16)-v18 >> 3) + 1);
                v18 += 8 * v20;
                do
                {
                  v21 = *v16++;
                  v72 = v21;
                  --v20;
                }
                while ( v20 );
                v68 = v16;
              }
              v22 = (2 * v62) | (v21 >> (v18 - 1)) & 1;
              HIWORD(v23) = HIWORD(v64);
              LOWORD(v23) = v64 + 1;
              v62 = v22;
              v64 = v23;
              if ( (_WORD)v23 == 8 )
              {
                *v17++ = v22;
                v64 = 0;
                ++v19;
              }
              v16 = v68;
              v15 += a5;
            }
            while ( v19 < (unsigned __int16)v12 );
            v7 = a3;
            v13 = v65;
          }
          if ( v19 < v7 )
          {
            memset(v17, 0, (unsigned __int16)(v7 - v19));
            v13 = v65;
          }
          v8 += v13;
          v11 += v7;
          v14 = a5 >> 1;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  else if ( a6 >= a5 )
  {
    if ( a6 > a5 )
    {
      v50 = a7;
      v51 = a7 - 1;
      v52 = (char *)&v8[v51 * a2];
      v53 = (char *)&v8[v51 * v7];
      if ( a7 )
      {
        v54 = &v52[a5 - 1];
        v55 = a2;
        v56 = &v53[v7 - 1];
        do
        {
          v57 = v54;
          v58 = v56;
          v59 = a5 >> 1;
          v60 = v7;
          if ( v7 > a6 )
          {
            v61 = (unsigned __int16)(v7 - a6);
            do
            {
              *v58 = 0;
              --v60;
              --v58;
              --v61;
            }
            while ( v61 );
          }
          while ( v60 )
          {
            for ( v59 += a6; v59 >= a5; --v58 )
            {
              --v60;
              *v58 = *v57;
              v59 -= a5;
            }
            --v57;
          }
          v54 -= v55;
          v56 -= v7;
          --v50;
        }
        while ( v50 );
      }
    }
  }
  else
  {
    v42 = a7;
    v43 = a1;
    if ( a7 )
    {
      v44 = a2;
      v67 = a2;
      do
      {
        v45 = v8;
        v46 = v43;
        v47 = a5 >> 1;
        v48 = 0;
        if ( a6 )
        {
          v48 = a6;
          v49 = a6;
          do
          {
            while ( v47 >= a6 )
            {
              ++v45;
              v47 -= a6;
            }
            v47 += a5;
            *v46++ = *v45;
            --v49;
          }
          while ( v49 );
          v44 = v67;
        }
        if ( v48 < v7 )
        {
          memset(v46, 0, (unsigned __int16)(v7 - v48));
          v44 = v67;
        }
        v8 += v44;
        v43 += v7;
        --v42;
      }
      while ( v42 );
    }
  }
}
