/*
 * XREFs of sub_180084110 @ 0x180084110
 * Callers:
 *     sub_180083BF0 @ 0x180083BF0 (sub_180083BF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180084110(_WORD *a1, __int64 a2)
{
  _WORD *v2; // rdi
  __int16 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 i; // rcx
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int16 v11; // dx
  unsigned __int16 *v12; // rbx
  unsigned __int64 v13; // r11
  __int64 v14; // rdi
  __int16 v15; // cx
  bool v16; // zf
  __int64 v17; // rdx
  _WORD *v18; // r10
  unsigned __int64 v19; // r10
  bool v20; // zf
  __int16 *v21; // rdi
  int v22; // edi
  unsigned __int16 *v23; // rsi
  __int64 v24; // r11
  __int64 v25; // rbx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdx
  __int64 v29; // rcx
  _WORD *v30; // rax
  __int64 v31; // rcx
  _WORD *v32; // rax
  __int16 *v33; // r10
  _WORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  _WORD *v37; // rax
  __int64 v38; // rcx
  _WORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  _WORD *j; // rax
  _WORD *v43; // rdi
  __int64 k; // rcx

  v2 = a1 + 512;
  v5 = 0;
  v6 = 0LL;
  for ( i = 16LL; i; --i )
    *v2++ = 512;
  do
  {
    v8 = *(_BYTE *)(v6 + a2);
    v9 = v8 & 0xF;
    if ( (v8 & 0xF) != 0 )
    {
      a1[2 * v6] = a1[v9 + 512];
      a1[v9 + 512] = 2 * v6;
      v8 = *(_BYTE *)(v6 + a2);
    }
    v10 = (unsigned __int64)v8 >> 4;
    if ( v10 )
    {
      a1[2 * v6 + 1] = a1[v10 + 512];
      a1[v10 + 512] = 2 * v6 + 1;
    }
    ++v6;
  }
  while ( v6 < 0x100 );
  v11 = -1024;
  v12 = a1 + 527;
  v13 = 15LL;
  v14 = 1024LL;
  v15 = -1023;
  do
  {
    v16 = v15 == v11;
    if ( v15 < v11 )
    {
      v33 = &a1[v14 + 1552];
      v14 -= (unsigned __int16)(((unsigned __int16)(v11 - v15 - 1) >> 1) + 1);
      do
      {
        *v33-- = v15;
        v15 += 2;
        v16 = v15 == v11;
      }
      while ( v15 < v11 );
    }
    if ( v16 )
      return 3221226050LL;
    v15 = v11 + 1;
    v17 = *v12;
    if ( v17 != 512 )
    {
      v18 = &a1[v14 + 1552];
      do
      {
        --v14;
        *v18-- = v13 + 16 * v17;
        v17 = (unsigned __int16)a1[v17];
      }
      while ( v17 != 512 );
    }
    --v13;
    v11 = -(__int16)v14;
    --v12;
  }
  while ( v13 > 0xA );
  v19 = 1023LL;
  v20 = v15 == v11;
  if ( v15 < v11 )
  {
    v21 = a1 + 1551;
    v19 = 1023LL - (unsigned __int16)(((unsigned __int16)(v11 - v15 - 1) >> 1) + 1);
    do
    {
      *v21-- = v15;
      v15 += 2;
      v20 = v15 == v11;
    }
    while ( v15 < v11 );
  }
  if ( !v20 )
  {
    v22 = 0;
    v23 = a1 + 522;
    v24 = 10LL;
    while ( 1 )
    {
      v25 = *v23;
      while ( v25 != 512 )
      {
        v5 = v24 + 16 * v25;
        if ( v22 )
          return 3221226050LL;
        v26 = 10 - v24;
        if ( (v19 + 1) << (10 - (unsigned __int8)v24) > 0x400 )
          return 3221226050LL;
        v27 = v19 << v26;
        if ( v26 > 5 )
        {
          if ( v26 == 6 )
          {
            v36 = 16LL;
            v37 = &a1[v27 + 529];
            do
            {
              *(v37 - 1) = v5;
              *v37 = v5;
              v37[1] = v5;
              v37[2] = v5;
              v37 += 4;
              --v36;
            }
            while ( v36 );
          }
          else if ( v26 == 7 )
          {
            v38 = 32LL;
            v39 = &a1[v27 + 529];
            do
            {
              *(v39 - 1) = v5;
              *v39 = v5;
              v39[1] = v5;
              v39[2] = v5;
              v39 += 4;
              --v38;
            }
            while ( v38 );
          }
          else
          {
            v34 = &a1[v27 + 529];
            if ( v26 == 8 )
            {
              v35 = 64LL;
              do
              {
                *(v34 - 1) = v5;
                *v34 = v5;
                v34[1] = v5;
                v34[2] = v5;
                v34 += 4;
                --v35;
              }
              while ( v35 );
            }
            else
            {
              v40 = 128LL;
              do
              {
                *(v34 - 1) = v5;
                *v34 = v5;
                v34[1] = v5;
                v34[2] = v5;
                v34 += 4;
                --v40;
              }
              while ( v40 );
            }
          }
          goto LABEL_33;
        }
        if ( v26 == 5 )
        {
          v31 = 8LL;
          v32 = &a1[v27 + 529];
          do
          {
            *(v32 - 1) = v5;
            *v32 = v5;
            v32[1] = v5;
            v32[2] = v5;
            v32 += 4;
            --v31;
          }
          while ( v31 );
          goto LABEL_33;
        }
        if ( v26 )
        {
          if ( v26 != 1 )
          {
            if ( v26 != 2 )
            {
              if ( v26 != 3 )
              {
                v29 = 4LL;
                v30 = &a1[v27 + 529];
                do
                {
                  *(v30 - 1) = v5;
                  *v30 = v5;
                  v30[1] = v5;
                  v30[2] = v5;
                  v30 += 4;
                  --v29;
                }
                while ( v29 );
                goto LABEL_33;
              }
              a1[v27 + 535] = v5;
              a1[v27 + 534] = v5;
              a1[v27 + 533] = v5;
              a1[v27 + 532] = v5;
            }
            a1[v27 + 531] = v5;
            a1[v27 + 530] = v5;
          }
          a1[v27 + 529] = v5;
        }
        a1[v27 + 528] = v5;
LABEL_33:
        v25 = (unsigned __int16)a1[v25];
        if ( !v19 )
          v22 = 1;
        --v19;
      }
      v19 >>= 1;
      --v23;
      if ( !--v24 )
      {
        if ( v22 )
          return 0LL;
        v41 = 2LL;
        for ( j = a1 + 514; *j == 512; ++j )
        {
          if ( (unsigned __int64)++v41 > 0xF )
          {
            if ( a1[513] == 512 )
              return 3221226050LL;
            v43 = a1 + 528;
            for ( k = 512LL; k; --k )
              *v43++ = v5;
            return 0LL;
          }
        }
        return 3221226050LL;
      }
    }
  }
  return 3221226050LL;
}
