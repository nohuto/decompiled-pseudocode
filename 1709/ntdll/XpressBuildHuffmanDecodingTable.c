/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x18008931C
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x180088E00 (RtlDecompressBufferXpressHuff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(_WORD *a1, __int64 a2)
{
  _WORD *v2; // rdi
  __int16 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 i; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int16 v10; // dx
  unsigned __int16 *v11; // rbx
  unsigned __int64 v12; // r11
  __int64 v13; // rdi
  __int16 v14; // cx
  bool v15; // zf
  __int64 v16; // rdx
  _WORD *v17; // r10
  unsigned __int64 v18; // r10
  bool v19; // zf
  __int16 *v20; // rdi
  int v21; // edi
  unsigned __int16 *v22; // rsi
  __int64 v23; // r11
  __int64 v24; // rbx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v28; // rcx
  _WORD *v29; // rax
  __int16 *v30; // r10
  __int64 v31; // rcx
  _WORD *v32; // rax
  __int64 v33; // rcx
  _WORD *v34; // rax
  _WORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  _WORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _WORD *j; // rax
  _WORD *v42; // rdi
  __int64 k; // rcx

  v2 = a1 + 512;
  v5 = 0;
  v6 = 0LL;
  for ( i = 16LL; i; --i )
    *v2++ = 512;
  do
  {
    v8 = *(_BYTE *)(v6 + a2) & 0xF;
    if ( (*(_BYTE *)(v6 + a2) & 0xF) != 0 )
    {
      a1[2 * v6] = a1[v8 + 512];
      a1[v8 + 512] = 2 * v6;
    }
    v9 = (unsigned __int64)*(unsigned __int8 *)(v6 + a2) >> 4;
    if ( v9 )
    {
      a1[2 * v6 + 1] = a1[v9 + 512];
      a1[v9 + 512] = 2 * v6 + 1;
    }
    ++v6;
  }
  while ( v6 < 0x100 );
  v10 = -1024;
  v11 = a1 + 527;
  v12 = 15LL;
  v13 = 1024LL;
  v14 = -1023;
  do
  {
    v15 = v14 == v10;
    if ( v14 < v10 )
    {
      v30 = &a1[v13 + 1552];
      v13 -= (unsigned __int16)(((unsigned __int16)(v10 - v14 - 1) >> 1) + 1);
      do
      {
        *v30-- = v14;
        v14 += 2;
        v15 = v14 == v10;
      }
      while ( v14 < v10 );
    }
    if ( v15 )
      return 3221226050LL;
    v14 = v10 + 1;
    v16 = *v11;
    if ( v16 != 512 )
    {
      v17 = &a1[v13 + 1552];
      do
      {
        --v13;
        *v17-- = v12 + 16 * v16;
        v16 = (unsigned __int16)a1[v16];
      }
      while ( v16 != 512 );
    }
    --v12;
    v10 = -(__int16)v13;
    --v11;
  }
  while ( v12 > 0xA );
  v18 = 1023LL;
  v19 = v14 == v10;
  if ( v14 < v10 )
  {
    v20 = a1 + 1551;
    v18 = 1023LL - (unsigned __int16)(((unsigned __int16)(v10 - v14 - 1) >> 1) + 1);
    do
    {
      *v20-- = v14;
      v14 += 2;
      v19 = v14 == v10;
    }
    while ( v14 < v10 );
  }
  if ( !v19 )
  {
    v21 = 0;
    v22 = a1 + 522;
    v23 = 10LL;
    while ( 1 )
    {
      v24 = *v22;
      while ( v24 != 512 )
      {
        v5 = v23 + 16 * v24;
        if ( v21 )
          return 3221226050LL;
        v25 = 10 - v23;
        if ( (v18 + 1) << (10 - (unsigned __int8)v23) > 0x400 )
          return 3221226050LL;
        v26 = v18 << v25;
        if ( v25 > 5 )
        {
          if ( v25 == 6 )
          {
            v33 = 16LL;
            v34 = &a1[v26 + 529];
            do
            {
              *(v34 - 1) = v5;
              *v34 = v5;
              v34[1] = v5;
              v34[2] = v5;
              v34 += 4;
              --v33;
            }
            while ( v33 );
          }
          else if ( v25 == 7 )
          {
            v37 = 32LL;
            v38 = &a1[v26 + 529];
            do
            {
              *(v38 - 1) = v5;
              *v38 = v5;
              v38[1] = v5;
              v38[2] = v5;
              v38 += 4;
              --v37;
            }
            while ( v37 );
          }
          else
          {
            v35 = &a1[v26 + 529];
            if ( v25 == 8 )
            {
              v36 = 64LL;
              do
              {
                *(v35 - 1) = v5;
                *v35 = v5;
                v35[1] = v5;
                v35[2] = v5;
                v35 += 4;
                --v36;
              }
              while ( v36 );
            }
            else
            {
              v39 = 128LL;
              do
              {
                *(v35 - 1) = v5;
                *v35 = v5;
                v35[1] = v5;
                v35[2] = v5;
                v35 += 4;
                --v39;
              }
              while ( v39 );
            }
          }
          goto LABEL_31;
        }
        if ( v25 == 5 )
        {
          v31 = 8LL;
          v32 = &a1[v26 + 529];
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
          goto LABEL_31;
        }
        if ( v25 )
        {
          if ( v25 != 1 )
          {
            if ( v25 != 2 )
            {
              if ( v25 != 3 )
              {
                v28 = 4LL;
                v29 = &a1[v26 + 529];
                do
                {
                  *(v29 - 1) = v5;
                  *v29 = v5;
                  v29[1] = v5;
                  v29[2] = v5;
                  v29 += 4;
                  --v28;
                }
                while ( v28 );
                goto LABEL_31;
              }
              a1[v26 + 535] = v5;
              a1[v26 + 534] = v5;
              a1[v26 + 533] = v5;
              a1[v26 + 532] = v5;
            }
            a1[v26 + 531] = v5;
            a1[v26 + 530] = v5;
          }
          a1[v26 + 529] = v5;
        }
        a1[v26 + 528] = v5;
LABEL_31:
        v24 = (unsigned __int16)a1[v24];
        if ( !v18 )
          v21 = 1;
        --v18;
      }
      v18 >>= 1;
      --v22;
      if ( !--v23 )
      {
        if ( v21 )
          return 0LL;
        v40 = 2LL;
        for ( j = a1 + 514; *j == 512; ++j )
        {
          if ( (unsigned __int64)++v40 > 0xF )
          {
            if ( a1[513] == 512 )
              return 3221226050LL;
            v42 = a1 + 528;
            for ( k = 512LL; k; --k )
              *v42++ = v5;
            return 0LL;
          }
        }
        return 3221226050LL;
      }
    }
  }
  return 3221226050LL;
}
