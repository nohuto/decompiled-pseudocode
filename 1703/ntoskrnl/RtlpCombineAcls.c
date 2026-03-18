/*
 * XREFs of RtlpCombineAcls @ 0x140427E70
 * Callers:
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        char **a7,
        _DWORD *a8)
{
  unsigned __int8 *v8; // r12
  unsigned int v9; // r15d
  unsigned __int8 *v10; // r13
  unsigned __int8 *v11; // rdx
  char *PoolWithTag; // rsi
  unsigned int v13; // ebx
  __int64 result; // rax
  unsigned int v15; // r8d
  int v16; // r14d
  unsigned __int8 *v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // ebp
  unsigned __int8 *v24; // r9
  unsigned int i; // r10d
  unsigned int v26; // ecx
  unsigned int v27; // edx
  int v28; // eax
  unsigned __int8 *v29; // r9
  unsigned int j; // r10d
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // eax
  unsigned __int8 *v34; // r9
  unsigned int k; // r10d
  unsigned int v36; // ecx
  unsigned int v37; // edx
  int v38; // eax
  unsigned __int8 *v39; // r9
  unsigned int m; // r10d
  unsigned int v41; // ecx
  unsigned int v42; // edx
  int v43; // eax
  unsigned __int8 *v44; // r9
  unsigned int n; // r10d
  unsigned int v46; // ecx
  unsigned int v47; // edx
  int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // r14d
  unsigned __int64 v51; // rbp
  unsigned __int16 v52; // r14
  char *v53; // rdi
  unsigned __int16 *v54; // rbx
  unsigned int v55; // r14d
  unsigned __int16 *v56; // rbx
  unsigned int ii; // r14d
  unsigned __int16 *v58; // rbx
  unsigned int jj; // r14d
  unsigned __int16 *v60; // rbx
  unsigned int kk; // r14d
  unsigned __int16 *v62; // rbx
  unsigned int mm; // r14d
  unsigned __int16 *v64; // rbx

  v8 = a5;
  v9 = 0;
  v10 = a2;
  v11 = a1;
  PoolWithTag = 0LL;
  v13 = 2;
  if ( !a1 && !v10 && !a3 && !a4 && !a5 && !a6 )
  {
    *a7 = 0LL;
    return 0LL;
  }
  v15 = 8;
  v16 = -1;
  if ( a1 )
  {
    v17 = a1 + 8;
    v18 = 0;
    if ( *((_WORD *)a1 + 2) )
    {
      do
      {
        v19 = v15;
        if ( *v17 <= 0x10u )
        {
          switch ( *v17 )
          {
            case 2u:
            case 3u:
            case 7u:
            case 8u:
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x10u:
              v20 = v15;
              v21 = v15 + *((unsigned __int16 *)v17 + 1);
              v22 = -1;
              if ( v21 >= v15 )
                v22 = v15 + *((unsigned __int16 *)v17 + 1);
              v15 = v22;
              v23 = v21 < v20 ? 0xC0000095 : 0;
              if ( v21 < v19 )
                goto LABEL_121;
              if ( a8 )
                *a8 |= 8u;
              v11 = a1;
              if ( *a1 > v13 )
                v13 = *a1;
              break;
            default:
              break;
          }
        }
        ++v18;
        v17 += *((unsigned __int16 *)v17 + 1);
      }
      while ( v18 < *((unsigned __int16 *)v11 + 2) );
    }
  }
  if ( v10 )
  {
    v24 = v10 + 8;
    for ( i = 0; i < *((unsigned __int16 *)v10 + 2); v24 += *((unsigned __int16 *)v24 + 1) )
    {
      if ( *v24 == 17 )
      {
        v26 = v15;
        v27 = v15 + *((unsigned __int16 *)v24 + 1);
        v28 = -1;
        if ( v27 >= v15 )
          v28 = v15 + *((unsigned __int16 *)v24 + 1);
        v15 = v28;
        v23 = v27 < v26 ? 0xC0000095 : 0;
        if ( v27 < v26 )
          goto LABEL_121;
        if ( a8 )
          *a8 |= 0x10u;
        if ( *v10 > v13 )
          v13 = *v10;
      }
      ++i;
    }
  }
  if ( a5 )
  {
    v29 = a5 + 8;
    for ( j = 0; j < *((unsigned __int16 *)a5 + 2); v29 += *((unsigned __int16 *)v29 + 1) )
    {
      if ( *v29 == 20 )
      {
        v31 = v15;
        v32 = v15 + *((unsigned __int16 *)v29 + 1);
        v33 = -1;
        if ( v32 >= v15 )
          v33 = v15 + *((unsigned __int16 *)v29 + 1);
        v15 = v33;
        v23 = v32 < v31 ? 0xC0000095 : 0;
        if ( v32 < v31 )
          goto LABEL_121;
        if ( a8 )
          *a8 |= 0x80u;
        if ( *a5 > v13 )
          v13 = *a5;
      }
      ++j;
    }
  }
  if ( a6 )
  {
    v34 = a6 + 8;
    for ( k = 0; k < *((unsigned __int16 *)a6 + 2); v34 += *((unsigned __int16 *)v34 + 1) )
    {
      if ( *v34 == 21 )
      {
        v36 = v15;
        v37 = v15 + *((unsigned __int16 *)v34 + 1);
        v38 = -1;
        if ( v37 >= v15 )
          v38 = v15 + *((unsigned __int16 *)v34 + 1);
        v15 = v38;
        v23 = v37 < v36 ? 0xC0000095 : 0;
        if ( v37 < v36 )
          goto LABEL_121;
        if ( a8 )
          *a8 |= 0x100u;
        if ( *a6 > v13 )
          v13 = *a6;
      }
      ++k;
    }
  }
  if ( a3 )
  {
    v39 = a3 + 8;
    for ( m = 0; m < *((unsigned __int16 *)a3 + 2); v39 += *((unsigned __int16 *)v39 + 1) )
    {
      if ( *v39 == 18 )
      {
        v41 = v15;
        v42 = v15 + *((unsigned __int16 *)v39 + 1);
        v43 = -1;
        if ( v42 >= v15 )
          v43 = v15 + *((unsigned __int16 *)v39 + 1);
        v15 = v43;
        v23 = v42 < v41 ? 0xC0000095 : 0;
        if ( v42 < v41 )
          goto LABEL_121;
        if ( a8 )
          *a8 |= 0x20u;
        if ( *a3 > v13 )
          v13 = *a3;
      }
      ++m;
    }
  }
  if ( a4 )
  {
    v44 = a4 + 8;
    for ( n = 0; n < *((unsigned __int16 *)a4 + 2); v44 += *((unsigned __int16 *)v44 + 1) )
    {
      if ( *v44 == 19 )
      {
        v46 = v15;
        v47 = v15 + *((unsigned __int16 *)v44 + 1);
        v48 = -1;
        if ( v47 >= v15 )
          v48 = v15 + *((unsigned __int16 *)v44 + 1);
        v15 = v48;
        v23 = v47 < v46 ? 0xC0000095 : 0;
        if ( v47 < v46 )
          goto LABEL_121;
        if ( a8 )
          *a8 |= 0x40u;
        if ( *a4 > v13 )
          v13 = *a4;
      }
      ++n;
    }
  }
  v49 = v15 + 3;
  if ( v15 + 3 >= v15 )
    v16 = v15 + 3;
  v23 = v49 < v15 ? 0xC0000095 : 0;
  if ( v49 >= v15 )
  {
    v50 = v16 & 0xFFFFFFFC;
    v51 = v50;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v50, 0x64536553u);
    if ( PoolWithTag )
    {
      if ( v50 >= 8 )
      {
        if ( v13 - 2 <= 2 && v50 <= 0xFFFC )
        {
          v52 = v50 & 0xFFFC;
          memset(PoolWithTag, 0, v51);
          v53 = 0LL;
          PoolWithTag[1] = 0;
          v23 = 0;
          *((_WORD *)PoolWithTag + 1) = v52;
          *PoolWithTag = v13;
          *((_DWORD *)PoolWithTag + 1) = 0;
          if ( PoolWithTag + 8 <= &PoolWithTag[v52] )
            v53 = PoolWithTag + 8;
          if ( a1 )
          {
            v54 = (unsigned __int16 *)(a1 + 8);
            v55 = 0;
            if ( *((_WORD *)a1 + 2) )
            {
              do
              {
                if ( *(unsigned __int8 *)v54 <= 0x10u )
                {
                  switch ( *(_BYTE *)v54 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                      memmove(v53, v54, v54[1]);
                      ++*((_WORD *)PoolWithTag + 2);
                      v53 += v54[1];
                      break;
                    default:
                      break;
                  }
                }
                ++v55;
                v54 = (unsigned __int16 *)((char *)v54 + v54[1]);
              }
              while ( v55 < *((unsigned __int16 *)a1 + 2) );
              v10 = a2;
              v8 = a5;
            }
          }
          if ( v10 )
          {
            v56 = (unsigned __int16 *)(v10 + 8);
            for ( ii = 0; ii < *((unsigned __int16 *)v10 + 2); v56 = (unsigned __int16 *)((char *)v56 + v56[1]) )
            {
              if ( *(_BYTE *)v56 == 17 )
              {
                memmove(v53, v56, v56[1]);
                ++*((_WORD *)PoolWithTag + 2);
                v53 += v56[1];
              }
              ++ii;
            }
          }
          if ( v8 )
          {
            v58 = (unsigned __int16 *)(v8 + 8);
            for ( jj = 0; jj < *((unsigned __int16 *)v8 + 2); v58 = (unsigned __int16 *)((char *)v58 + v58[1]) )
            {
              if ( *(_BYTE *)v58 == 20 )
              {
                memmove(v53, v58, v58[1]);
                ++*((_WORD *)PoolWithTag + 2);
                v53 += v58[1];
              }
              ++jj;
            }
          }
          if ( a6 )
          {
            v60 = (unsigned __int16 *)(a6 + 8);
            for ( kk = 0; kk < *((unsigned __int16 *)a6 + 2); v60 = (unsigned __int16 *)((char *)v60 + v60[1]) )
            {
              if ( *(_BYTE *)v60 == 21 )
              {
                memmove(v53, v60, v60[1]);
                ++*((_WORD *)PoolWithTag + 2);
                v53 += v60[1];
              }
              ++kk;
            }
          }
          if ( a3 )
          {
            v62 = (unsigned __int16 *)(a3 + 8);
            for ( mm = 0; mm < *((unsigned __int16 *)a3 + 2); v62 = (unsigned __int16 *)((char *)v62 + v62[1]) )
            {
              if ( *(_BYTE *)v62 == 18 )
              {
                memmove(v53, v62, v62[1]);
                ++*((_WORD *)PoolWithTag + 2);
                v53 += v62[1];
              }
              ++mm;
            }
          }
          if ( a4 )
          {
            v64 = (unsigned __int16 *)(a4 + 8);
            if ( *((_WORD *)a4 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v64 == 19 )
                {
                  memmove(v53, v64, v64[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v53 += v64[1];
                }
                ++v9;
                v64 = (unsigned __int16 *)((char *)v64 + v64[1]);
              }
              while ( v9 < *((unsigned __int16 *)a4 + 2) );
            }
          }
          goto LABEL_121;
        }
        v23 = -1073741811;
      }
      else
      {
        v23 = -1073741789;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
    else
    {
      v23 = -1073741801;
    }
  }
LABEL_121:
  result = v23;
  *a7 = PoolWithTag;
  return result;
}
