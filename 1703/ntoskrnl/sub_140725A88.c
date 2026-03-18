/*
 * XREFs of sub_140725A88 @ 0x140725A88
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140725A88(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r14
  signed int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned int i; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int j; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rdx
  int *v22; // rax
  _OWORD *v23; // r13
  int v24; // esi
  int v25; // r8d
  unsigned int v26; // eax
  int v27; // r15d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edx
  PVOID PoolWithTag; // rax
  __int64 v32; // r10
  int v33; // esi
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // r9d
  char *v38; // r8
  unsigned int v39; // r12d
  int v40; // ecx
  char *v41; // rcx
  char *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // r10d
  char *v50; // r8
  unsigned int v51; // esi
  int v52; // ecx
  char *v53; // rcx
  char *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r9
  unsigned int v58; // edx
  int v59; // eax
  unsigned int v60; // ecx
  int v61; // r10d
  char *v62; // r8
  unsigned int v63; // r11d
  int v64; // ecx
  char *v65; // rcx
  char *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  _OWORD *v70; // rax
  __int128 v71; // xmm1
  __int64 v72; // r9
  unsigned int v73; // ecx
  unsigned int v74; // eax
  int v75; // r10d
  char *v76; // r8
  unsigned int v77; // r11d
  int v78; // ecx
  char *v79; // rcx
  char *v80; // rdx
  __int64 v81; // rax
  _OWORD *P; // [rsp+20h] [rbp-10h]
  _QWORD *v84; // [rsp+28h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = *(unsigned int *)v10;
      v13 = v10 + 4;
      if ( v10 + 4 < v10 )
      {
        v13 = -1LL;
        v9 = -1073741675;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 < 0 )
        goto LABEL_19;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v9 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_19;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_19:
      v14 = a3;
      v16 = v84;
      goto LABEL_20;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_20:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v84 = (_QWORD *)*v16;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !v4 || *(_DWORD *)a1 <= 4u )
  {
    v9 = -1073741811;
    goto LABEL_47;
  }
  for ( j = 0; j < 4; ++j )
  {
    v18 = *(unsigned int *)v4;
    v19 = v4 + 4;
    if ( v4 + 4 < v4 )
    {
      v19 = -1LL;
      v9 = -1073741675;
    }
    else
    {
      v9 = 0;
    }
    if ( v9 < 0 )
      goto LABEL_43;
    v4 = -1LL;
    if ( v19 + v18 >= v19 )
      v4 = v19 + v18;
    v9 = v19 + v18 < v19 ? 0xC0000095 : 0;
    if ( v19 + v18 < v19 )
      goto LABEL_43;
  }
  v20 = *(_DWORD *)v4;
  v21 = -1LL;
  if ( v4 + 4 >= v4 )
    v21 = v4 + 4;
  v9 = v4 + 4 < v4 ? 0xC0000095 : 0;
  if ( v4 + 4 < v4 )
  {
LABEL_43:
    v20 = a3;
    v22 = (int *)v84;
    goto LABEL_44;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = (int *)v21;
LABEL_44:
  if ( v9 >= 0 )
  {
    if ( v20 != 4 )
      return (unsigned int)-1073741789;
    a3 = *v22;
LABEL_47:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( a3 != 2048 )
      return (unsigned int)-1073741762;
    P = ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x20534C53u);
    v23 = P;
    if ( !P )
      return (unsigned int)-1073741801;
    if ( qword_1407AC440 )
      v24 = qword_1407AC440(P);
    else
      v24 = -1073741637;
    v9 = v24;
    if ( v24 < 0 )
      goto LABEL_161;
    v25 = *(_DWORD *)(a2 + 32);
    v26 = *(_DWORD *)(a2 + 16) + 2104;
    v27 = -1;
    v28 = -1;
    if ( v26 >= 0x838 )
      v28 = v26;
    v9 = v26 < 0x838 ? 0xC0000095 : 0;
    if ( v26 >= 0x838 )
    {
      v29 = v28 + 4;
      v30 = -1;
      if ( v28 + 4 >= v28 )
        v30 = v28 + 4;
      v9 = v29 < v28 ? 0xC0000095 : 0;
      if ( v29 >= v28 )
        v9 = v30 + v25 < v30 ? 0xC0000095 : 0;
    }
    if ( v9 < 0 )
      goto LABEL_161;
    if ( !a4 )
    {
      v9 = -1073741811;
      goto LABEL_161;
    }
    v9 = 0;
    *(_DWORD *)(a4 + 4) = 2080;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x820uLL, 0x20534C53u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v9 = -1073741801;
    }
    if ( v9 < 0 )
      goto LABEL_161;
    v32 = *(_QWORD *)(a4 + 8);
    v33 = v24 | 0x10000000;
    if ( v32 )
    {
      v37 = 0;
      v38 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        v39 = 2048;
        while ( 1 )
        {
          v40 = -1;
          if ( *(_DWORD *)v38 < 0xFFFFFFFC )
            v40 = *(_DWORD *)v38 + 4;
          if ( (unsigned int)(*(_DWORD *)v38 + 4) >= 4 )
            v39 = v40;
          v9 = *(_DWORD *)v38 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( *(_DWORD *)v38 >= 0xFFFFFFFC )
            break;
          v41 = v38;
          v42 = &v38[v39];
          v43 = -1LL;
          if ( v42 >= v38 )
            v43 = (__int64)&v38[v39];
          v38 = (char *)v43;
          v9 = v42 < v41 ? 0xC0000095 : 0;
          if ( v42 < v41 )
            break;
          if ( (unsigned int)++v37 >= *(_DWORD *)a4 )
            goto LABEL_86;
        }
      }
      else
      {
LABEL_86:
        v44 = -1LL;
        if ( v38 + 4 >= v38 )
          v44 = (__int64)(v38 + 4);
        v9 = v38 + 4 < v38 ? 0xC0000095 : 0;
        if ( v38 + 4 >= v38 )
        {
          if ( (unsigned __int64)(v38 + 8) > v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_159;
          *(_DWORD *)v38 = 4;
          *(_DWORD *)v44 = v33;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v34 = *(_DWORD *)(a4 + 4);
      v35 = -1;
      v36 = v34 + 8;
      if ( v34 + 8 >= v34 )
        v35 = v34 + 8;
      v9 = v36 < v34 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v35;
      if ( v36 >= v34 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_93;
      }
    }
    if ( v9 < 0 )
      goto LABEL_161;
    v23 = P;
LABEL_93:
    v45 = *(_QWORD *)(a4 + 8);
    if ( v45 )
    {
      v49 = 0;
      v50 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        v51 = 2048;
        while ( 1 )
        {
          v52 = -1;
          if ( *(_DWORD *)v50 < 0xFFFFFFFC )
            v52 = *(_DWORD *)v50 + 4;
          if ( (unsigned int)(*(_DWORD *)v50 + 4) >= 4 )
            v51 = v52;
          v9 = *(_DWORD *)v50 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( *(_DWORD *)v50 >= 0xFFFFFFFC )
            break;
          v53 = v50;
          v54 = &v50[v51];
          v55 = -1LL;
          if ( v54 >= v50 )
            v55 = (__int64)&v50[v51];
          v50 = (char *)v55;
          v9 = v54 < v53 ? 0xC0000095 : 0;
          if ( v54 < v53 )
            break;
          if ( (unsigned int)++v49 >= *(_DWORD *)a4 )
            goto LABEL_109;
        }
      }
      else
      {
LABEL_109:
        v56 = -1LL;
        if ( v50 + 4 >= v50 )
          v56 = (__int64)(v50 + 4);
        v9 = v50 + 4 < v50 ? 0xC0000095 : 0;
        if ( v50 + 4 >= v50 )
        {
          if ( (unsigned __int64)(v50 + 12) > v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_159;
          *(_DWORD *)v50 = 8;
          *(_QWORD *)v56 = v84;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v46 = *(_DWORD *)(a4 + 4);
      v47 = -1;
      v48 = v46 + 12;
      if ( v46 + 12 >= v46 )
        v47 = v46 + 12;
      v9 = v48 < v46 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v47;
      if ( v48 >= v46 )
      {
        ++*(_DWORD *)a4;
LABEL_115:
        v57 = *(_QWORD *)(a4 + 8);
        if ( !v57 )
        {
          v58 = *(_DWORD *)(a4 + 4);
          v59 = -1;
          v60 = v58 + 2052;
          if ( v58 + 2052 >= v58 )
            v59 = v58 + 2052;
          v9 = v60 < v58 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v59;
          if ( v60 >= v58 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_139;
          }
LABEL_138:
          if ( v9 < 0 )
            goto LABEL_161;
LABEL_139:
          v72 = *(_QWORD *)(a4 + 8);
          if ( !v72 )
          {
            v73 = *(_DWORD *)(a4 + 4);
            v74 = v73 + 8;
            if ( v73 + 8 >= v73 )
              v27 = v73 + 8;
            v9 = v74 < v73 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v27;
            if ( v74 >= v73 )
            {
              ++*(_DWORD *)a4;
              v9 = 0;
            }
            goto LABEL_161;
          }
          v75 = 0;
          v76 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            v77 = 2048;
            do
            {
              v78 = -1;
              if ( *(_DWORD *)v76 < 0xFFFFFFFC )
                v78 = *(_DWORD *)v76 + 4;
              if ( (unsigned int)(*(_DWORD *)v76 + 4) >= 4 )
                v77 = v78;
              v9 = *(_DWORD *)v76 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v76 >= 0xFFFFFFFC )
                goto LABEL_161;
              v79 = v76;
              v80 = &v76[v77];
              v81 = -1LL;
              if ( v80 >= v76 )
                v81 = (__int64)&v76[v77];
              v76 = (char *)v81;
              v9 = v80 < v79 ? 0xC0000095 : 0;
              if ( v80 < v79 )
                goto LABEL_161;
            }
            while ( (unsigned int)++v75 < *(_DWORD *)a4 );
          }
          if ( v76 + 4 >= v76 )
            v5 = (__int64)(v76 + 4);
          v9 = v76 + 4 < v76 ? 0xC0000095 : 0;
          if ( v76 + 4 >= v76 )
          {
            if ( (unsigned __int64)(v76 + 8) <= v72 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v76 = 4;
              *(_DWORD *)v5 = 2048;
              ++*(_DWORD *)a4;
              goto LABEL_161;
            }
            goto LABEL_159;
          }
LABEL_161:
          ExFreePoolWithTag(P, 0x20534C53u);
          return (unsigned int)v9;
        }
        v61 = 0;
        v62 = *(char **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          v63 = 2048;
          do
          {
            v64 = -1;
            if ( *(_DWORD *)v62 < 0xFFFFFFFC )
              v64 = *(_DWORD *)v62 + 4;
            if ( (unsigned int)(*(_DWORD *)v62 + 4) >= 4 )
              v63 = v64;
            v9 = *(_DWORD *)v62 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( *(_DWORD *)v62 >= 0xFFFFFFFC )
              goto LABEL_138;
            v65 = v62;
            v66 = &v62[v63];
            v67 = -1LL;
            if ( v66 >= v62 )
              v67 = (__int64)&v62[v63];
            v62 = (char *)v67;
            v9 = v66 < v65 ? 0xC0000095 : 0;
            if ( v66 < v65 )
              goto LABEL_138;
          }
          while ( (unsigned int)++v61 < *(_DWORD *)a4 );
        }
        v68 = -1LL;
        if ( v62 + 4 >= v62 )
          v68 = (__int64)(v62 + 4);
        v9 = v62 + 4 < v62 ? 0xC0000095 : 0;
        if ( v62 + 4 < v62 )
          goto LABEL_138;
        if ( (unsigned __int64)(v62 + 2052) <= v57 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v69 = 16LL;
          *(_DWORD *)v62 = 2048;
          v70 = v23;
          do
          {
            *(_OWORD *)v68 = *v70;
            *(_OWORD *)(v68 + 16) = v70[1];
            *(_OWORD *)(v68 + 32) = v70[2];
            *(_OWORD *)(v68 + 48) = v70[3];
            *(_OWORD *)(v68 + 64) = v70[4];
            *(_OWORD *)(v68 + 80) = v70[5];
            *(_OWORD *)(v68 + 96) = v70[6];
            v68 += 128LL;
            v71 = v70[7];
            v70 += 8;
            *(_OWORD *)(v68 - 16) = v71;
            --v69;
          }
          while ( v69 );
          ++*(_DWORD *)a4;
          goto LABEL_138;
        }
LABEL_159:
        v9 = -1073741789;
        goto LABEL_161;
      }
    }
    if ( v9 < 0 )
      goto LABEL_161;
    goto LABEL_115;
  }
  return (unsigned int)v9;
}
