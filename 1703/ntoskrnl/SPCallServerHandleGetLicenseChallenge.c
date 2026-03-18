/*
 * XREFs of SPCallServerHandleGetLicenseChallenge @ 0x1405989F8
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetLicenseChallenge(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r14
  unsigned __int64 v9; // rdx
  unsigned int i; // r10d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  signed int v13; // ebx
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
  int v34; // r9d
  char *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r9
  int v38; // r10d
  char *v39; // r8
  unsigned int v40; // esi
  int v41; // ecx
  char *v42; // rcx
  char *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r9
  int v47; // r10d
  char *v48; // r8
  unsigned int v49; // r11d
  int v50; // ecx
  char *v51; // rcx
  char *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _OWORD *v56; // rax
  __int128 v57; // xmm1
  __int64 v58; // r9
  int v59; // r10d
  char *v60; // r8
  unsigned int v61; // r11d
  int v62; // ecx
  char *v63; // rcx
  char *v64; // rdx
  __int64 v65; // rax
  unsigned int v67; // edx
  int v68; // eax
  unsigned int v69; // ecx
  unsigned int v70; // r12d
  int v71; // ecx
  char *v72; // rcx
  char *v73; // rdx
  __int64 v74; // rax
  unsigned int v75; // edx
  int v76; // eax
  unsigned int v77; // ecx
  unsigned int v78; // edx
  int v79; // eax
  unsigned int v80; // ecx
  unsigned int v81; // ecx
  unsigned int v82; // eax
  _OWORD *P; // [rsp+20h] [rbp-10h]
  _QWORD *v84; // [rsp+28h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = *(unsigned int *)v9;
      v12 = v9 + 4;
      if ( v9 + 4 < v9 )
      {
        v12 = -1LL;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_125;
      v9 = -1LL;
      if ( v12 + v11 >= v12 )
        v9 = v12 + v11;
      v13 = v12 + v11 < v12 ? 0xC0000095 : 0;
      if ( v12 + v11 < v12 )
        goto LABEL_125;
    }
    v14 = *(_DWORD *)v9;
    v15 = -1LL;
    if ( v9 + 4 >= v9 )
      v15 = v9 + 4;
    v13 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_125:
      v14 = a3;
      v16 = v84;
      goto LABEL_16;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_16:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v84 = (_QWORD *)*v16;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v18 = *(unsigned int *)v4;
      v19 = v4 + 4;
      if ( v4 + 4 < v4 )
      {
        v19 = -1LL;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_129;
      v4 = -1LL;
      if ( v19 + v18 >= v19 )
        v4 = v19 + v18;
      v13 = v19 + v18 < v19 ? 0xC0000095 : 0;
      if ( v19 + v18 < v19 )
        goto LABEL_129;
    }
    v20 = *(_DWORD *)v4;
    v21 = -1LL;
    if ( v4 + 4 >= v4 )
      v21 = v4 + 4;
    v13 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_129:
      v20 = a3;
      v22 = (int *)v84;
      goto LABEL_35;
    }
    v22 = 0LL;
    if ( v20 )
      v22 = (int *)v21;
LABEL_35:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( v20 == 4 )
    {
      a3 = *v22;
      goto LABEL_38;
    }
    return (unsigned int)-1073741789;
  }
  v13 = -1073741811;
LABEL_38:
  if ( v13 >= 0 )
  {
    if ( a3 != 4104 )
      return (unsigned int)-1073741762;
    P = ExAllocatePoolWithTag(PagedPool, 0x1008uLL, 0x20534C53u);
    v23 = P;
    if ( !P )
      return (unsigned int)-1073741801;
    if ( qword_1407AC368 )
      v24 = qword_1407AC368(P);
    else
      v24 = -1073741637;
    v13 = v24;
    if ( v24 < 0 )
      goto LABEL_120;
    v25 = *(_DWORD *)(a2 + 32);
    v26 = *(_DWORD *)(a2 + 16) + 4160;
    v27 = -1;
    v28 = -1;
    if ( v26 >= 0x1040 )
      v28 = v26;
    v13 = v26 < 0x1040 ? 0xC0000095 : 0;
    if ( v26 >= 0x1040 )
    {
      v29 = v28 + 4;
      v30 = -1;
      if ( v28 + 4 >= v28 )
        v30 = v28 + 4;
      v13 = v29 < v28 ? 0xC0000095 : 0;
      if ( v29 >= v28 )
        v13 = v30 + v25 < v30 ? 0xC0000095 : 0;
    }
    if ( v13 < 0 )
      goto LABEL_120;
    if ( !a4 )
    {
      v13 = -1073741811;
      goto LABEL_120;
    }
    v13 = 0;
    *(_DWORD *)(a4 + 4) = 4136;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1028uLL, 0x20534C53u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v13 = -1073741801;
    }
    if ( v13 < 0 )
      goto LABEL_120;
    v32 = *(_QWORD *)(a4 + 8);
    v33 = v24 | 0x10000000;
    if ( v32 )
    {
      v34 = 0;
      v35 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        v70 = 4104;
        while ( 1 )
        {
          v71 = -1;
          if ( *(_DWORD *)v35 < 0xFFFFFFFC )
            v71 = *(_DWORD *)v35 + 4;
          if ( (unsigned int)(*(_DWORD *)v35 + 4) >= 4 )
            v70 = v71;
          v13 = *(_DWORD *)v35 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( *(_DWORD *)v35 >= 0xFFFFFFFC )
            break;
          v72 = v35;
          v73 = &v35[v70];
          v74 = -1LL;
          if ( v73 >= v35 )
            v74 = (__int64)&v35[v70];
          v35 = (char *)v74;
          v13 = v73 < v72 ? 0xC0000095 : 0;
          if ( v73 < v72 )
            break;
          if ( (unsigned int)++v34 >= *(_DWORD *)a4 )
            goto LABEL_58;
        }
      }
      else
      {
LABEL_58:
        v36 = -1LL;
        if ( v35 + 4 >= v35 )
          v36 = (__int64)(v35 + 4);
        v13 = v35 + 4 < v35 ? 0xC0000095 : 0;
        if ( v35 + 4 >= v35 )
        {
          if ( (unsigned __int64)(v35 + 8) > v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_122;
          *(_DWORD *)v35 = 4;
          *(_DWORD *)v36 = v33;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v67 = *(_DWORD *)(a4 + 4);
      v68 = -1;
      v69 = v67 + 8;
      if ( v67 + 8 >= v67 )
        v68 = v67 + 8;
      v13 = v69 < v67 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v68;
      if ( v69 >= v67 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_65;
      }
    }
    if ( v13 < 0 )
      goto LABEL_120;
    v23 = P;
LABEL_65:
    v37 = *(_QWORD *)(a4 + 8);
    if ( v37 )
    {
      v38 = 0;
      v39 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        v40 = 4104;
        while ( 1 )
        {
          v41 = -1;
          if ( *(_DWORD *)v39 < 0xFFFFFFFC )
            v41 = *(_DWORD *)v39 + 4;
          if ( (unsigned int)(*(_DWORD *)v39 + 4) >= 4 )
            v40 = v41;
          v13 = *(_DWORD *)v39 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( *(_DWORD *)v39 >= 0xFFFFFFFC )
            break;
          v42 = v39;
          v43 = &v39[v40];
          v44 = -1LL;
          if ( v43 >= v39 )
            v44 = (__int64)&v39[v40];
          v39 = (char *)v44;
          v13 = v43 < v42 ? 0xC0000095 : 0;
          if ( v43 < v42 )
            break;
          if ( (unsigned int)++v38 >= *(_DWORD *)a4 )
            goto LABEL_77;
        }
      }
      else
      {
LABEL_77:
        v45 = -1LL;
        if ( v39 + 4 >= v39 )
          v45 = (__int64)(v39 + 4);
        v13 = v39 + 4 < v39 ? 0xC0000095 : 0;
        if ( v39 + 4 >= v39 )
        {
          if ( (unsigned __int64)(v39 + 12) > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_122;
          *(_DWORD *)v39 = 8;
          *(_QWORD *)v45 = v84;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v75 = *(_DWORD *)(a4 + 4);
      v76 = -1;
      v77 = v75 + 12;
      if ( v75 + 12 >= v75 )
        v76 = v75 + 12;
      v13 = v77 < v75 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v76;
      if ( v77 >= v75 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_83;
      }
    }
    if ( v13 < 0 )
      goto LABEL_120;
LABEL_83:
    v46 = *(_QWORD *)(a4 + 8);
    if ( v46 )
    {
      v47 = 0;
      v48 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        v49 = 4104;
        while ( 1 )
        {
          v50 = -1;
          if ( *(_DWORD *)v48 < 0xFFFFFFFC )
            v50 = *(_DWORD *)v48 + 4;
          if ( (unsigned int)(*(_DWORD *)v48 + 4) >= 4 )
            v49 = v50;
          v13 = *(_DWORD *)v48 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( *(_DWORD *)v48 >= 0xFFFFFFFC )
            break;
          v51 = v48;
          v52 = &v48[v49];
          v53 = -1LL;
          if ( v52 >= v48 )
            v53 = (__int64)&v48[v49];
          v48 = (char *)v53;
          v13 = v52 < v51 ? 0xC0000095 : 0;
          if ( v52 < v51 )
            break;
          if ( (unsigned int)++v47 >= *(_DWORD *)a4 )
            goto LABEL_95;
        }
      }
      else
      {
LABEL_95:
        v54 = -1LL;
        if ( v48 + 4 >= v48 )
          v54 = (__int64)(v48 + 4);
        v13 = v48 + 4 < v48 ? 0xC0000095 : 0;
        if ( v48 + 4 >= v48 )
        {
          if ( (unsigned __int64)(v48 + 4108) > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_122;
          v55 = 32LL;
          *(_DWORD *)v48 = 4104;
          v56 = v23;
          do
          {
            *(_OWORD *)v54 = *v56;
            *(_OWORD *)(v54 + 16) = v56[1];
            *(_OWORD *)(v54 + 32) = v56[2];
            *(_OWORD *)(v54 + 48) = v56[3];
            *(_OWORD *)(v54 + 64) = v56[4];
            *(_OWORD *)(v54 + 80) = v56[5];
            *(_OWORD *)(v54 + 96) = v56[6];
            v54 += 128LL;
            v57 = v56[7];
            v56 += 8;
            *(_OWORD *)(v54 - 16) = v57;
            --v55;
          }
          while ( v55 );
          *(_QWORD *)v54 = *(_QWORD *)v56;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v78 = *(_DWORD *)(a4 + 4);
      v79 = -1;
      v80 = v78 + 4108;
      if ( v78 + 4108 >= v78 )
        v79 = v78 + 4108;
      v13 = v80 < v78 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v79;
      if ( v80 >= v78 )
      {
        ++*(_DWORD *)a4;
LABEL_103:
        v58 = *(_QWORD *)(a4 + 8);
        if ( !v58 )
        {
          v81 = *(_DWORD *)(a4 + 4);
          v82 = v81 + 8;
          if ( v81 + 8 >= v81 )
            v27 = v81 + 8;
          v13 = v82 < v81 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v27;
          if ( v82 >= v81 )
          {
            ++*(_DWORD *)a4;
            v13 = 0;
          }
          goto LABEL_120;
        }
        v59 = 0;
        v60 = *(char **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          v61 = 4104;
          do
          {
            v62 = -1;
            if ( *(_DWORD *)v60 < 0xFFFFFFFC )
              v62 = *(_DWORD *)v60 + 4;
            if ( (unsigned int)(*(_DWORD *)v60 + 4) >= 4 )
              v61 = v62;
            v13 = *(_DWORD *)v60 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( *(_DWORD *)v60 >= 0xFFFFFFFC )
              goto LABEL_120;
            v63 = v60;
            v64 = &v60[v61];
            v65 = -1LL;
            if ( v64 >= v60 )
              v65 = (__int64)&v60[v61];
            v60 = (char *)v65;
            v13 = v64 < v63 ? 0xC0000095 : 0;
            if ( v64 < v63 )
              goto LABEL_120;
          }
          while ( (unsigned int)++v59 < *(_DWORD *)a4 );
        }
        if ( v60 + 4 >= v60 )
          v5 = (__int64)(v60 + 4);
        v13 = v60 + 4 < v60 ? 0xC0000095 : 0;
        if ( v60 + 4 >= v60 )
        {
          if ( (unsigned __int64)(v60 + 8) <= v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v60 = 4;
            *(_DWORD *)v5 = 4104;
            ++*(_DWORD *)a4;
            goto LABEL_120;
          }
LABEL_122:
          v13 = -1073741789;
        }
LABEL_120:
        ExFreePoolWithTag(P, 0x20534C53u);
        return (unsigned int)v13;
      }
    }
    if ( v13 < 0 )
      goto LABEL_120;
    goto LABEL_103;
  }
  return (unsigned int)v13;
}
