/*
 * XREFs of RtlpCombineAcls @ 0x1404C6050
 * Callers:
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
  _WORD *v21; // rbp
  unsigned int v22; // r14d
  char *v23; // r15
  __int64 v24; // rax
  char *v25; // rbp
  unsigned int v26; // r14d
  __int64 result; // rax
  unsigned __int8 *v28; // rcx
  unsigned int n; // edx
  _WORD *v30; // rbx
  unsigned int mm; // r14d
  __int64 v32; // rax
  unsigned __int16 *v33; // r14
  unsigned int v34; // ecx
  char *v35; // r15
  __int64 v36; // rax
  unsigned __int8 *v37; // rdx
  unsigned int i; // r14d
  unsigned __int8 *v39; // rcx
  unsigned int k; // edx
  unsigned __int8 *v41; // rdx
  unsigned int v42; // ecx
  unsigned __int8 *v43; // r9
  unsigned int v44; // ecx
  _WORD *v45; // rbx
  unsigned int jj; // r14d
  __int64 v47; // rax
  _WORD *v48; // r14
  unsigned int kk; // r15d
  __int64 v50; // rax
  _WORD *v51; // rbx
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // edx
  unsigned int v58; // ecx
  unsigned int v59; // [rsp+20h] [rbp-58h]
  unsigned int ii; // [rsp+20h] [rbp-58h]
  char *v61; // [rsp+28h] [rbp-50h]
  unsigned __int8 *m; // [rsp+30h] [rbp-48h]
  int v63; // [rsp+80h] [rbp+8h]
  unsigned int v64; // [rsp+80h] [rbp+8h]

  v8 = a5;
  v9 = 0;
  v10 = 2;
  v11 = a4;
  v63 = 2;
  PoolWithTag = 0LL;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 || a6 )
  {
    v16 = 8;
    if ( a1 )
    {
      v37 = a1 + 8;
      for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v37 += *((unsigned __int16 *)v37 + 1) )
      {
        switch ( *v37 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v16 + *((unsigned __int16 *)v37 + 1) < v16 )
              goto LABEL_106;
            v16 += *((unsigned __int16 *)v37 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v10 )
            {
              v10 = *a1;
              v63 = v10;
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
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v17 + 1);
          if ( a8 )
            *a8 |= 0x10u;
          if ( *a2 > v10 )
          {
            v10 = *a2;
            v63 = v10;
          }
        }
        ++j;
      }
    }
    if ( a5 )
    {
      v39 = a5 + 8;
      for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v39 += *((unsigned __int16 *)v39 + 1) )
      {
        if ( *v39 == 20 )
        {
          if ( v16 + *((unsigned __int16 *)v39 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v39 + 1);
          if ( a8 )
            *a8 |= 0x80u;
          if ( *a5 > v10 )
          {
            v10 = *a5;
            v63 = v10;
          }
        }
        ++k;
      }
    }
    if ( a6 )
    {
      v41 = a6 + 8;
      v42 = 0;
      v59 = 0;
      for ( m = a6 + 8; v42 < *((unsigned __int16 *)a6 + 2); m = v41 )
      {
        if ( *v41 == 21 )
        {
          v53 = -1;
          v54 = v16 + *((unsigned __int16 *)v41 + 1);
          v55 = v16;
          if ( v54 >= v16 )
            v53 = v54;
          v16 = v53;
          v26 = v54 < v55 ? 0xC0000095 : 0;
          if ( v54 < v55 )
            goto LABEL_36;
          if ( a8 )
            *a8 |= 0x100u;
          v41 = m;
          v42 = v59;
          if ( *a6 > v10 )
            v10 = *a6;
          v63 = v10;
        }
        ++v42;
        v41 += *((unsigned __int16 *)v41 + 1);
        v59 = v42;
      }
    }
    if ( a3 )
    {
      v28 = a3 + 8;
      for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v28 += *((unsigned __int16 *)v28 + 1) )
      {
        if ( *v28 == 18 )
        {
          if ( v16 + *((unsigned __int16 *)v28 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v28 + 1);
          if ( a8 )
            *a8 |= 0x20u;
          if ( *a3 > v10 )
          {
            v10 = *a3;
            v63 = v10;
          }
        }
        ++n;
      }
    }
    if ( a4 )
    {
      v43 = a4 + 8;
      v44 = 0;
      for ( ii = 0; v44 < *((unsigned __int16 *)v11 + 2); ii = v44 )
      {
        if ( *v43 == 19 )
        {
          v56 = -1;
          v57 = v16 + *((unsigned __int16 *)v43 + 1);
          v58 = v16;
          if ( v57 >= v16 )
            v56 = v16 + *((unsigned __int16 *)v43 + 1);
          v16 = v56;
          v26 = v57 < v58 ? 0xC0000095 : 0;
          if ( v57 < v58 )
            goto LABEL_36;
          if ( a8 )
            *a8 |= 0x40u;
          v44 = ii;
          if ( *v11 > v10 )
            v10 = *v11;
          v63 = v10;
        }
        ++v44;
        v43 += *((unsigned __int16 *)v43 + 1);
      }
    }
    if ( v16 + 3 < v16 )
    {
LABEL_106:
      v26 = -1073741675;
    }
    else
    {
      v19 = (v16 + 3) & 0xFFFFFFFC;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x64536553u);
      if ( PoolWithTag )
      {
        if ( v19 < 8 )
        {
          v26 = -1073741789;
        }
        else
        {
          if ( (unsigned int)(v63 - 2) <= 2 && v19 <= 0xFFFC )
          {
            memset(PoolWithTag, 0, v19);
            *PoolWithTag = v63;
            v20 = v19 & 0xFFFC;
            PoolWithTag[1] = 0;
            *((_WORD *)PoolWithTag + 1) = v20;
            *((_DWORD *)PoolWithTag + 1) = 0;
            v61 = 0LL;
            if ( PoolWithTag + 8 <= &PoolWithTag[v20] )
              v61 = PoolWithTag + 8;
            if ( a1 )
            {
              v33 = (unsigned __int16 *)(a1 + 8);
              v34 = 0;
              v64 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                v35 = v61;
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
                      v36 = v33[1];
                      v34 = v64;
                      v35 += v36;
                      break;
                    case 4:
                    case 5:
                    case 6:
                    case 9:
                    case 0xA:
                    case 0xB:
                    case 0xC:
                      v34 = v64;
                      goto LABEL_54;
                    default:
LABEL_54:
                      LOWORD(v36) = v33[1];
                      break;
                  }
                  ++v34;
                  v33 = (unsigned __int16 *)((char *)v33 + (unsigned __int16)v36);
                  v64 = v34;
                }
                while ( v34 < *((unsigned __int16 *)a1 + 2) );
                v11 = a4;
                v61 = v35;
                v8 = a5;
              }
            }
            if ( a2 )
            {
              v21 = a2 + 8;
              v22 = 0;
              if ( *((_WORD *)a2 + 2) )
              {
                v23 = v61;
                do
                {
                  LOWORD(v24) = v21[1];
                  if ( *(_BYTE *)v21 == 17 )
                  {
                    memmove(v23, v21, (unsigned __int16)v24);
                    ++*((_WORD *)PoolWithTag + 2);
                    v24 = (unsigned __int16)v21[1];
                    v23 += v24;
                  }
                  ++v22;
                  v21 = (_WORD *)((char *)v21 + (unsigned __int16)v24);
                }
                while ( v22 < *((unsigned __int16 *)a2 + 2) );
                v61 = v23;
                v8 = a5;
              }
            }
            v25 = v61;
            if ( v8 )
            {
              v45 = v8 + 8;
              for ( jj = 0; jj < *((unsigned __int16 *)v8 + 2); v45 = (_WORD *)((char *)v45 + (unsigned __int16)v47) )
              {
                LOWORD(v47) = v45[1];
                if ( *(_BYTE *)v45 == 20 )
                {
                  memmove(v25, v45, (unsigned __int16)v47);
                  ++*((_WORD *)PoolWithTag + 2);
                  v47 = (unsigned __int16)v45[1];
                  v25 += v47;
                }
                ++jj;
              }
            }
            if ( a6 )
            {
              v48 = a6 + 8;
              for ( kk = 0; kk < *((unsigned __int16 *)a6 + 2); v48 = (_WORD *)((char *)v48 + (unsigned __int16)v50) )
              {
                LOWORD(v50) = v48[1];
                if ( *(_BYTE *)v48 == 21 )
                {
                  memmove(v25, v48, (unsigned __int16)v50);
                  ++*((_WORD *)PoolWithTag + 2);
                  v50 = (unsigned __int16)v48[1];
                  v25 += v50;
                }
                ++kk;
              }
            }
            if ( a3 )
            {
              v30 = a3 + 8;
              for ( mm = 0; mm < *((unsigned __int16 *)a3 + 2); v30 = (_WORD *)((char *)v30 + (unsigned __int16)v32) )
              {
                LOWORD(v32) = v30[1];
                if ( *(_BYTE *)v30 == 18 )
                {
                  memmove(v25, v30, (unsigned __int16)v32);
                  ++*((_WORD *)PoolWithTag + 2);
                  v32 = (unsigned __int16)v30[1];
                  v25 += v32;
                }
                ++mm;
              }
            }
            if ( v11 && (v51 = v11 + 8, *((_WORD *)v11 + 2)) )
            {
              do
              {
                LOWORD(v52) = v51[1];
                if ( *(_BYTE *)v51 == 19 )
                {
                  memmove(v25, v51, (unsigned __int16)v52);
                  ++*((_WORD *)PoolWithTag + 2);
                  v52 = (unsigned __int16)v51[1];
                  v25 += v52;
                }
                ++v9;
                v51 = (_WORD *)((char *)v51 + (unsigned __int16)v52);
              }
              while ( v9 < *((unsigned __int16 *)v11 + 2) );
              v26 = 0;
            }
            else
            {
              v26 = 0;
            }
            goto LABEL_36;
          }
          v26 = -1073741811;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      else
      {
        v26 = -1073741801;
      }
    }
LABEL_36:
    result = v26;
    *a7 = PoolWithTag;
    return result;
  }
  *a7 = 0LL;
  return 0LL;
}
