/*
 * XREFs of sub_140766654 @ 0x140766654
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140766654(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v8; // r15
  signed int v9; // r8d
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // r10
  unsigned int i; // ebp
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rbp
  _QWORD *v18; // rax
  unsigned int j; // edx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebp
  int v25; // r14d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  char *PoolWithTag; // rax
  char *v30; // rdx
  int v31; // ebp
  char *v32; // rax
  __int64 v33; // r9
  __int64 v34; // r10
  unsigned int v35; // edx
  int v36; // eax
  unsigned int v37; // ecx
  char *v38; // r9
  int v39; // r11d
  unsigned int v40; // eax
  unsigned int v41; // r15d
  char *v42; // rcx
  char *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r10
  unsigned int v47; // ecx
  unsigned int v48; // eax
  char *v49; // r9
  unsigned int v50; // eax
  unsigned int v51; // r11d
  char *v52; // rcx
  char *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  _OWORD *v56; // rcx
  __int128 v57; // xmm1
  _QWORD *v59; // [rsp+30h] [rbp-148h]
  _BYTE v60[256]; // [rsp+40h] [rbp-138h] BYREF

  v4 = 0;
  v8 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = -1LL;
  if ( v10 && *(_DWORD *)a1 > 3u )
  {
    v12 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v14 = -1LL;
      if ( v12 + 4 >= v12 )
        v14 = v12 + 4;
      v9 = v12 + 4 < v12 ? 0xC0000095 : 0;
      if ( v12 + 4 < v12 )
        goto LABEL_22;
      v15 = v14 + *(unsigned int *)v12;
      v12 = -1LL;
      if ( v15 >= v14 )
        v12 = v15;
      v9 = v15 < v14 ? 0xC0000095 : 0;
      if ( v15 < v14 )
        goto LABEL_22;
    }
    v16 = *(_DWORD *)v12;
    v17 = -1LL;
    if ( v12 + 4 >= v12 )
      v17 = v12 + 4;
    v9 = v12 + 4 < v12 ? 0xC0000095 : 0;
    if ( v12 + 4 < v12 )
    {
LABEL_22:
      v16 = (int)v59;
      v18 = v59;
      goto LABEL_23;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = (_QWORD *)v17;
LABEL_23:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v16 != 8 )
      return (unsigned int)-1073741789;
    v59 = (_QWORD *)*v18;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    if ( !v10 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v20 = -1LL;
      if ( v10 + 4 >= v10 )
        v20 = v10 + 4;
      v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_44;
      v21 = v20 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v21 >= v20 )
        v10 = v21;
      v9 = v21 < v20 ? 0xC0000095 : 0;
      if ( v21 < v20 )
        goto LABEL_44;
    }
    v22 = *(unsigned int *)v10;
    v23 = -1LL;
    if ( v10 + 4 >= v10 )
      v23 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_44:
      v22 = (unsigned int)v59;
      goto LABEL_45;
    }
    if ( (_DWORD)v22 )
      v8 = v23;
LABEL_45:
    if ( v9 >= 0 )
    {
      v24 = qword_1407F33D8 ? qword_1407F33D8(v8, v22, v60, 256LL) : -1073741637;
      v9 = v24;
      if ( v24 >= 0 )
      {
        v25 = -1;
        v26 = -1;
        if ( *(_DWORD *)(a2 + 16) < 0xFFFFFED0 )
          v26 = *(_DWORD *)(a2 + 16) + 304;
        v9 = *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 304) >= 0x130 )
        {
          v27 = v26 + 4;
          v28 = -1;
          if ( v26 + 4 >= v26 )
            v28 = v26 + 4;
          v9 = v27 < v26 ? 0xC0000095 : 0;
          if ( v27 >= v26 )
            v9 = v28 + *(_DWORD *)(a2 + 32) < v28 ? 0xC0000095 : 0;
        }
        if ( v9 >= 0 )
        {
          *(_DWORD *)(a4 + 4) = 280;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x20534C53u);
          v30 = PoolWithTag;
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
          v31 = v24 | 0x10000000;
          v32 = PoolWithTag + 4;
          v33 = -1LL;
          if ( v32 >= v30 )
            v33 = (__int64)v32;
          v9 = v32 < v30 ? 0xC0000095 : 0;
          if ( v32 >= v30 )
          {
            if ( v30 + 8 > &v30[*(unsigned int *)(a4 + 4)] )
              return (unsigned int)-1073741789;
            *(_DWORD *)v30 = 4;
            *(_DWORD *)v33 = v31;
            ++*(_DWORD *)a4;
          }
          if ( v32 < v30 )
            return (unsigned int)v9;
          v34 = *(_QWORD *)(a4 + 8);
          if ( v34 )
          {
            v38 = *(char **)(a4 + 8);
            v39 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v40 = -1;
                if ( *(_DWORD *)v38 < 0xFFFFFFFC )
                  v40 = *(_DWORD *)v38 + 4;
                v9 = *(_DWORD *)v38 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v38 + 4) < 4 )
                  break;
                v41 = v40;
                v42 = v38;
                v43 = &v38[v40];
                v44 = -1LL;
                if ( v43 >= v38 )
                  v44 = (__int64)&v38[v41];
                v38 = (char *)v44;
                v9 = v43 < v42 ? 0xC0000095 : 0;
                if ( v43 < v42 )
                  break;
                if ( (unsigned int)++v39 >= *(_DWORD *)a4 )
                  goto LABEL_79;
              }
            }
            else
            {
LABEL_79:
              v45 = -1LL;
              if ( v38 + 4 >= v38 )
                v45 = (__int64)(v38 + 4);
              v9 = v38 + 4 < v38 ? 0xC0000095 : 0;
              if ( v38 + 4 >= v38 )
              {
                if ( (unsigned __int64)(v38 + 12) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  return (unsigned int)-1073741789;
                *(_DWORD *)v38 = 8;
                *(_QWORD *)v45 = v59;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v35 = *(_DWORD *)(a4 + 4);
            v36 = -1;
            v37 = v35 + 12;
            if ( v35 + 12 >= v35 )
              v36 = v35 + 12;
            v9 = v37 < v35 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v36;
            if ( v37 >= v35 )
            {
              ++*(_DWORD *)a4;
LABEL_85:
              v46 = *(_QWORD *)(a4 + 8);
              if ( !v46 )
              {
                v47 = *(_DWORD *)(a4 + 4);
                v48 = v47 + 260;
                if ( v47 + 260 >= v47 )
                  v25 = v47 + 260;
                v9 = v48 < v47 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v25;
                if ( v48 >= v47 )
                {
                  v9 = 0;
LABEL_105:
                  ++*(_DWORD *)a4;
                  return (unsigned int)v9;
                }
                return (unsigned int)v9;
              }
              v49 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v50 = -1;
                  if ( *(_DWORD *)v49 < 0xFFFFFFFC )
                    v50 = *(_DWORD *)v49 + 4;
                  v9 = *(_DWORD *)v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v49 + 4) < 4 )
                    break;
                  v51 = v50;
                  v52 = v49;
                  v53 = &v49[v50];
                  v54 = -1LL;
                  if ( v53 >= v49 )
                    v54 = (__int64)&v49[v51];
                  v49 = (char *)v54;
                  v9 = v53 < v52 ? 0xC0000095 : 0;
                  if ( v53 < v52 )
                    break;
                  if ( (unsigned int)++v4 >= *(_DWORD *)a4 )
                    goto LABEL_98;
                }
                return (unsigned int)v9;
              }
LABEL_98:
              if ( v49 + 4 >= v49 )
                v11 = (__int64)(v49 + 4);
              v9 = v49 + 4 < v49 ? 0xC0000095 : 0;
              if ( v49 + 4 < v49 )
                return (unsigned int)v9;
              if ( (unsigned __int64)(v49 + 260) <= v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                v55 = 2LL;
                *(_DWORD *)v49 = 256;
                v56 = v60;
                do
                {
                  *(_OWORD *)v11 = *v56;
                  *(_OWORD *)(v11 + 16) = v56[1];
                  *(_OWORD *)(v11 + 32) = v56[2];
                  *(_OWORD *)(v11 + 48) = v56[3];
                  *(_OWORD *)(v11 + 64) = v56[4];
                  *(_OWORD *)(v11 + 80) = v56[5];
                  *(_OWORD *)(v11 + 96) = v56[6];
                  v11 += 128LL;
                  v57 = v56[7];
                  v56 += 8;
                  *(_OWORD *)(v11 - 16) = v57;
                  --v55;
                }
                while ( v55 );
                goto LABEL_105;
              }
              return (unsigned int)-1073741789;
            }
          }
          if ( v9 < 0 )
            return (unsigned int)v9;
          goto LABEL_85;
        }
      }
    }
  }
  return (unsigned int)v9;
}
