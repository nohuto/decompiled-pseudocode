/*
 * XREFs of RtlpCombineAcls @ 0x1404BEE60
 * Callers:
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  unsigned __int8 *v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned __int8 *v11; // r12
  char *PoolWithTag; // rsi
  unsigned int v16; // r8d
  unsigned __int8 *v17; // rcx
  unsigned int j; // edx
  unsigned int v19; // r14d
  unsigned __int16 v20; // r14
  unsigned __int16 *v21; // rbp
  unsigned int v22; // r14d
  char *v23; // r15
  char *v24; // rbp
  unsigned int v25; // r14d
  __int64 result; // rax
  unsigned __int8 *v27; // rcx
  unsigned int n; // edx
  unsigned __int16 *v29; // rbx
  unsigned int mm; // r14d
  unsigned __int8 *v31; // rdx
  unsigned int i; // r14d
  unsigned __int16 *v33; // r14
  unsigned int v34; // edx
  char *v35; // r15
  unsigned __int8 *v36; // rcx
  unsigned int k; // edx
  unsigned __int8 *v38; // rdx
  unsigned int v39; // ecx
  unsigned __int8 *v40; // r9
  unsigned int v41; // ecx
  unsigned __int16 *v42; // rbx
  unsigned int jj; // r14d
  unsigned __int16 *v44; // r14
  unsigned int kk; // r15d
  unsigned __int16 *v46; // rbx
  int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // ecx
  unsigned int v53; // [rsp+20h] [rbp-58h]
  unsigned int v54; // [rsp+20h] [rbp-58h]
  unsigned int ii; // [rsp+20h] [rbp-58h]
  char *v56; // [rsp+28h] [rbp-50h]
  unsigned __int8 *m; // [rsp+30h] [rbp-48h]
  int v58; // [rsp+80h] [rbp+8h]

  v8 = a5;
  v9 = 0;
  v10 = 2;
  v11 = a4;
  v58 = 2;
  PoolWithTag = 0LL;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 || a6 )
  {
    v16 = 8;
    if ( a1 )
    {
      v31 = a1 + 8;
      for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v31 += *((unsigned __int16 *)v31 + 1) )
      {
        switch ( *v31 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v16 + *((unsigned __int16 *)v31 + 1) < v16 )
              goto LABEL_105;
            v16 += *((unsigned __int16 *)v31 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v10 )
            {
              v10 = *a1;
              v58 = v10;
            }
            break;
          default:
            break;
        }
        ++i;
      }
    }
    if ( a2 )
    {
      v17 = a2 + 8;
      for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v17 += *((unsigned __int16 *)v17 + 1) )
      {
        if ( *v17 == 17 )
        {
          if ( v16 + *((unsigned __int16 *)v17 + 1) < v16 )
            goto LABEL_105;
          v16 += *((unsigned __int16 *)v17 + 1);
          if ( a8 )
            *a8 |= 0x10u;
          if ( *a2 > v10 )
          {
            v10 = *a2;
            v58 = v10;
          }
        }
        ++j;
      }
    }
    if ( a5 )
    {
      v36 = a5 + 8;
      for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v36 += *((unsigned __int16 *)v36 + 1) )
      {
        if ( *v36 == 20 )
        {
          if ( v16 + *((unsigned __int16 *)v36 + 1) < v16 )
            goto LABEL_105;
          v16 += *((unsigned __int16 *)v36 + 1);
          if ( a8 )
            *a8 |= 0x80u;
          if ( *a5 > v10 )
          {
            v10 = *a5;
            v58 = v10;
          }
        }
        ++k;
      }
    }
    if ( a6 )
    {
      v38 = a6 + 8;
      v39 = 0;
      v54 = 0;
      for ( m = a6 + 8; v39 < *((unsigned __int16 *)a6 + 2); m = v38 )
      {
        if ( *v38 == 21 )
        {
          v47 = -1;
          v48 = v16 + *((unsigned __int16 *)v38 + 1);
          v49 = v16;
          if ( v48 >= v16 )
            v47 = v48;
          v16 = v47;
          v25 = v48 < v49 ? 0xC0000095 : 0;
          if ( v48 < v49 )
            goto LABEL_36;
          if ( a8 )
            *a8 |= 0x100u;
          v38 = m;
          v39 = v54;
          if ( *a6 > v10 )
            v10 = *a6;
          v58 = v10;
        }
        ++v39;
        v38 += *((unsigned __int16 *)v38 + 1);
        v54 = v39;
      }
    }
    if ( a3 )
    {
      v27 = a3 + 8;
      for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v27 += *((unsigned __int16 *)v27 + 1) )
      {
        if ( *v27 == 18 )
        {
          if ( v16 + *((unsigned __int16 *)v27 + 1) < v16 )
            goto LABEL_105;
          v16 += *((unsigned __int16 *)v27 + 1);
          if ( a8 )
            *a8 |= 0x20u;
          if ( *a3 > v10 )
          {
            v10 = *a3;
            v58 = v10;
          }
        }
        ++n;
      }
    }
    if ( a4 )
    {
      v40 = a4 + 8;
      v41 = 0;
      for ( ii = 0; v41 < *((unsigned __int16 *)v11 + 2); ii = v41 )
      {
        if ( *v40 == 19 )
        {
          v50 = -1;
          v51 = v16 + *((unsigned __int16 *)v40 + 1);
          v52 = v16;
          if ( v51 >= v16 )
            v50 = v16 + *((unsigned __int16 *)v40 + 1);
          v16 = v50;
          v25 = v51 < v52 ? 0xC0000095 : 0;
          if ( v51 < v52 )
            goto LABEL_36;
          if ( a8 )
            *a8 |= 0x40u;
          v41 = ii;
          if ( *v11 > v10 )
            v10 = *v11;
          v58 = v10;
        }
        ++v41;
        v40 += *((unsigned __int16 *)v40 + 1);
      }
    }
    if ( v16 + 3 < v16 )
    {
LABEL_105:
      v25 = -1073741675;
    }
    else
    {
      v19 = (v16 + 3) & 0xFFFFFFFC;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x64536553u);
      if ( PoolWithTag )
      {
        if ( v19 < 8 )
        {
          v25 = -1073741789;
        }
        else
        {
          if ( (unsigned int)(v58 - 2) <= 2 && v19 <= 0xFFFC )
          {
            memset(PoolWithTag, 0, v19);
            *PoolWithTag = v58;
            v20 = v19 & 0xFFFC;
            PoolWithTag[1] = 0;
            *((_WORD *)PoolWithTag + 1) = v20;
            *((_DWORD *)PoolWithTag + 1) = 0;
            v56 = 0LL;
            if ( PoolWithTag + 8 <= &PoolWithTag[v20] )
              v56 = PoolWithTag + 8;
            if ( a1 )
            {
              v33 = (unsigned __int16 *)(a1 + 8);
              v34 = 0;
              v53 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                v35 = v56;
                do
                {
                  switch ( *(_BYTE *)v33 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                      memmove(v35, v33, v33[1]);
                      ++*((_WORD *)PoolWithTag + 2);
                      v34 = v53;
                      v35 += v33[1];
                      break;
                    default:
                      break;
                  }
                  ++v34;
                  v33 = (unsigned __int16 *)((char *)v33 + v33[1]);
                  v53 = v34;
                }
                while ( v34 < *((unsigned __int16 *)a1 + 2) );
                v11 = a4;
                v56 = v35;
                v8 = a5;
              }
            }
            if ( a2 )
            {
              v21 = (unsigned __int16 *)(a2 + 8);
              v22 = 0;
              if ( *((_WORD *)a2 + 2) )
              {
                v23 = v56;
                do
                {
                  if ( *(_BYTE *)v21 == 17 )
                  {
                    memmove(v23, v21, v21[1]);
                    ++*((_WORD *)PoolWithTag + 2);
                    v23 += v21[1];
                  }
                  ++v22;
                  v21 = (unsigned __int16 *)((char *)v21 + v21[1]);
                }
                while ( v22 < *((unsigned __int16 *)a2 + 2) );
                v56 = v23;
                v8 = a5;
              }
            }
            v24 = v56;
            if ( v8 )
            {
              v42 = (unsigned __int16 *)(v8 + 8);
              for ( jj = 0; jj < *((unsigned __int16 *)v8 + 2); v42 = (unsigned __int16 *)((char *)v42 + v42[1]) )
              {
                if ( *(_BYTE *)v42 == 20 )
                {
                  memmove(v24, v42, v42[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v24 += v42[1];
                }
                ++jj;
              }
            }
            if ( a6 )
            {
              v44 = (unsigned __int16 *)(a6 + 8);
              for ( kk = 0; kk < *((unsigned __int16 *)a6 + 2); v44 = (unsigned __int16 *)((char *)v44 + v44[1]) )
              {
                if ( *(_BYTE *)v44 == 21 )
                {
                  memmove(v24, v44, v44[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v24 += v44[1];
                }
                ++kk;
              }
            }
            if ( a3 )
            {
              v29 = (unsigned __int16 *)(a3 + 8);
              for ( mm = 0; mm < *((unsigned __int16 *)a3 + 2); v29 = (unsigned __int16 *)((char *)v29 + v29[1]) )
              {
                if ( *(_BYTE *)v29 == 18 )
                {
                  memmove(v24, v29, v29[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v24 += v29[1];
                }
                ++mm;
              }
            }
            if ( v11 && (v46 = (unsigned __int16 *)(v11 + 8), *((_WORD *)v11 + 2)) )
            {
              do
              {
                if ( *(_BYTE *)v46 == 19 )
                {
                  memmove(v24, v46, v46[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v24 += v46[1];
                }
                ++v9;
                v46 = (unsigned __int16 *)((char *)v46 + v46[1]);
              }
              while ( v9 < *((unsigned __int16 *)v11 + 2) );
              v25 = 0;
            }
            else
            {
              v25 = 0;
            }
            goto LABEL_36;
          }
          v25 = -1073741811;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      else
      {
        v25 = -1073741801;
      }
    }
LABEL_36:
    result = v25;
    *a7 = PoolWithTag;
    return result;
  }
  *a7 = 0LL;
  return 0LL;
}
