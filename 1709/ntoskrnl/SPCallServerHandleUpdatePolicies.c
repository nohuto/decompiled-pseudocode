/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x1404F34F0
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdatePolicies(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v7; // r12d
  int v8; // ecx
  unsigned int v9; // eax
  bool v10; // cf
  unsigned int v11; // edx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // r10
  unsigned int i; // r11d
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // r11
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // r15d
  void *v35; // rcx
  __int64 v36; // r10
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  char *v40; // rax
  char *v41; // rdx
  char *v42; // rax
  __int64 v44; // r10
  __int64 v45; // rsi
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // r11d
  char *v49; // r9
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // r15d
  char *v53; // rcx
  char *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  char *PoolWithTag; // rax
  char *v58; // rdx
  char *v59; // rax
  __int64 v60; // r10
  unsigned int v61; // ecx
  unsigned int v62; // eax
  int v63; // r11d
  char *v64; // r9
  __int64 v65; // rdx
  unsigned int v66; // eax
  unsigned int v67; // ecx
  char *v68; // rdx
  char *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // eax
  int v73; // r11d
  char *v74; // r9
  __int64 v75; // rdx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  char *v78; // rdx
  char *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  int v82; // r11d
  __int64 v83; // rdx
  unsigned int v84; // eax
  unsigned int v85; // ecx
  char *v86; // rdx
  char *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // [rsp+20h] [rbp-10h]
  unsigned int v90; // [rsp+20h] [rbp-10h]
  unsigned int v91; // [rsp+20h] [rbp-10h]
  unsigned int v92; // [rsp+20h] [rbp-10h]
  __int64 *v93; // [rsp+28h] [rbp-8h]

  v7 = -1;
  v8 = *(_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 16) + 32;
  v10 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFE0;
  v11 = -1;
  if ( !v10 )
    v11 = v9;
  LODWORD(v12) = v10 ? 0xC0000095 : 0;
  if ( v9 < 0x20 )
    goto LABEL_74;
  v13 = v11 + 4;
  v14 = -1;
  if ( v11 + 4 >= v11 )
    v14 = v11 + 4;
  LODWORD(v12) = v13 < v11 ? 0xC0000095 : 0;
  if ( v13 < v11 )
  {
LABEL_74:
    v15 = v89;
  }
  else
  {
    v15 = v89;
    v16 = v14 + v8;
    v17 = -1;
    if ( v16 >= v14 )
      v17 = v16;
    LODWORD(v12) = v16 < v14 ? 0xC0000095 : 0;
    if ( v16 >= v14 )
      v15 = v17;
  }
  if ( (int)v12 < 0 )
    return (unsigned int)v12;
  if ( a3 < v15 )
  {
    if ( !a4 )
    {
      LODWORD(v12) = -1073741811;
      goto LABEL_106;
    }
    v44 = *(_QWORD *)(a4 + 8);
    v45 = -1LL;
    if ( v44 )
    {
      v48 = 0;
      v49 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v50 = -1;
          v51 = *(_DWORD *)v49 + 4;
          if ( v51 >= 4 )
            v50 = *(_DWORD *)v49 + 4;
          LODWORD(v12) = *(_DWORD *)v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v51 < 4 )
            break;
          v52 = v50;
          v53 = v49;
          v54 = &v49[v50];
          v55 = -1LL;
          if ( v54 >= v49 )
            v55 = (__int64)&v49[v52];
          v49 = (char *)v55;
          LODWORD(v12) = v54 < v53 ? 0xC0000095 : 0;
          if ( v54 < v53 )
            break;
          if ( (unsigned int)++v48 >= *(_DWORD *)a4 )
            goto LABEL_90;
        }
      }
      else
      {
LABEL_90:
        v56 = -1LL;
        if ( v49 + 4 >= v49 )
          v56 = (__int64)(v49 + 4);
        LODWORD(v12) = v49 + 4 < v49 ? 0xC0000095 : 0;
        if ( v49 + 4 >= v49 )
        {
          if ( (unsigned __int64)(v49 + 8) > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_105;
          *(_DWORD *)v49 = 4;
          *(_DWORD *)v56 = 0;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v46 = *(_DWORD *)(a4 + 4);
      v47 = v46 + 8;
      if ( v46 + 8 >= v46 )
        v7 = v46 + 8;
      LODWORD(v12) = v47 < v46 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v7;
      if ( v47 >= v46 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_96;
      }
    }
    if ( (int)v12 < 0 )
      return (unsigned int)v12;
LABEL_96:
    if ( !*(_DWORD *)(a4 + 4) )
    {
      LODWORD(v12) = -1073741762;
      goto LABEL_106;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
    v58 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v12) = -1073741801;
      goto LABEL_106;
    }
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    v59 = PoolWithTag + 4;
    if ( v59 >= v58 )
      v45 = (__int64)v59;
    LODWORD(v12) = v59 < v58 ? 0xC0000095 : 0;
    if ( v59 < v58 )
      goto LABEL_106;
    if ( v58 + 8 <= &v58[*(unsigned int *)(a4 + 4)] )
    {
      *(_DWORD *)v58 = 4;
      *(_DWORD *)v45 = 0;
      ++*(_DWORD *)a4;
      goto LABEL_106;
    }
LABEL_105:
    LODWORD(v12) = -1073741789;
LABEL_106:
    if ( (int)v12 >= 0 )
      LODWORD(v12) = 0;
    return (unsigned int)v12;
  }
  v18 = *(_QWORD *)(a1 + 8);
  v19 = -1LL;
  if ( !v18 || *(_DWORD *)a1 <= 3u )
  {
    LODWORD(v12) = -1073741811;
LABEL_109:
    v27 = v89;
    goto LABEL_31;
  }
  v20 = *(_QWORD *)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v22 = -1LL;
    if ( v20 + 4 >= v20 )
      v22 = v20 + 4;
    LODWORD(v12) = v20 + 4 < v20 ? 0xC0000095 : 0;
    if ( v20 + 4 < v20 )
      goto LABEL_110;
    v23 = v22 + *(unsigned int *)v20;
    v20 = -1LL;
    if ( v23 >= v22 )
      v20 = v23;
    LODWORD(v12) = v23 < v22 ? 0xC0000095 : 0;
    if ( v23 < v22 )
      goto LABEL_110;
  }
  v24 = *(_DWORD *)v20;
  v25 = -1LL;
  if ( v20 + 4 >= v20 )
    v25 = v20 + 4;
  LODWORD(v12) = v20 + 4 < v20 ? 0xC0000095 : 0;
  if ( v20 + 4 < v20 )
  {
LABEL_110:
    v24 = v89;
    v26 = v93;
    goto LABEL_28;
  }
  v26 = 0LL;
  if ( v24 )
    v26 = (__int64 *)v25;
LABEL_28:
  if ( (int)v12 < 0 )
    goto LABEL_109;
  if ( v24 != 8 )
    goto LABEL_73;
  v27 = *v26;
LABEL_31:
  if ( (int)v12 < 0 )
    return (unsigned int)v12;
  if ( !v27 || !qword_1407F3248 )
  {
    v34 = -1073425151;
    if ( a4 )
    {
      v36 = *(_QWORD *)(a4 + 8);
      if ( !v36 )
        goto LABEL_58;
      v82 = 0;
      v74 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        v83 = (unsigned int)v89;
        while ( 1 )
        {
          v84 = -1;
          v85 = *(_DWORD *)v74 + 4;
          if ( v85 >= 4 )
            v84 = *(_DWORD *)v74 + 4;
          LODWORD(v12) = *(_DWORD *)v74 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v85 >= 4 )
            v83 = v84;
          v92 = v83;
          if ( v85 < 4 )
            goto LABEL_156;
          v86 = &v74[v83];
          v87 = v74;
          v88 = -1LL;
          if ( v86 >= v74 )
            v88 = (__int64)v86;
          v74 = (char *)v88;
          LODWORD(v12) = v86 < v87 ? 0xC0000095 : 0;
          if ( v86 < v87 )
            goto LABEL_156;
          v83 = v92;
          if ( (unsigned int)++v82 >= *(_DWORD *)a4 )
            goto LABEL_151;
        }
      }
      goto LABEL_151;
    }
LABEL_71:
    LODWORD(v12) = -1073741811;
    return (unsigned int)v12;
  }
  if ( v27 == qword_1407F3248 )
  {
    if ( v18 && *(_DWORD *)a1 > 4u )
    {
      v28 = 0LL;
      do
      {
        v29 = -1LL;
        if ( v18 + 4 >= v18 )
          v29 = v18 + 4;
        v12 = v18 + 4 < v18 ? 0xC0000095 : 0;
        if ( v18 + 4 < v18 )
          goto LABEL_137;
        v30 = v29 + *(unsigned int *)v18;
        v18 = -1LL;
        if ( v30 >= v29 )
          v18 = v30;
        v12 = v30 < v29 ? 0xC0000095 : 0;
        if ( v30 < v29 )
          goto LABEL_137;
        v28 = (unsigned int)(v28 + 1);
      }
      while ( (unsigned int)v28 < 4 );
      v31 = *(unsigned int *)v18;
      v28 = -1LL;
      if ( v18 + 4 >= v18 )
        v28 = v18 + 4;
      v12 = v18 + 4 < v18 ? 0xC0000095 : 0;
      if ( v18 + 4 < v18 )
      {
LABEL_137:
        v31 = (unsigned int)v89;
        v32 = (__int64)v93;
        goto LABEL_50;
      }
      v32 = 0LL;
      if ( (_DWORD)v31 )
        v32 = v28;
LABEL_50:
      if ( (int)v12 < 0 )
        return (unsigned int)v12;
      v33 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1407F3440)(v31, v32, v12, v28);
      if ( v33 == 263 )
      {
        v34 = 1074058754;
      }
      else if ( v33 == 0x40000000 )
      {
        v34 = 1074058753;
      }
      else if ( v33 < 0 )
      {
        v34 = v33 | 0x10000000;
      }
      else
      {
        v34 = 0;
      }
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      v35 = *(void **)(a4 + 8);
      if ( v35 )
      {
        ExFreePoolWithTag(v35, 0x20534C53u);
        *(_QWORD *)(a4 + 8) = 0LL;
      }
      v36 = *(_QWORD *)(a4 + 8);
      if ( !v36 )
      {
LABEL_58:
        v37 = *(_DWORD *)(a4 + 4);
        v38 = v37 + 8;
        if ( v37 + 8 >= v37 )
          v7 = v37 + 8;
        LODWORD(v12) = v38 < v37 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v7;
        if ( v38 >= v37 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_62;
        }
LABEL_156:
        if ( (int)v12 < 0 )
          return (unsigned int)v12;
LABEL_62:
        v39 = *(_DWORD *)(a4 + 4);
        if ( v39 )
        {
          v40 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x20534C53u);
          v41 = v40;
          if ( v40 )
            goto LABEL_64;
LABEL_72:
          LODWORD(v12) = -1073741801;
          return (unsigned int)v12;
        }
LABEL_172:
        LODWORD(v12) = -1073741762;
        return (unsigned int)v12;
      }
      v73 = 0;
      v74 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        v75 = (unsigned int)v89;
        do
        {
          v76 = -1;
          v77 = *(_DWORD *)v74 + 4;
          if ( v77 >= 4 )
            v76 = *(_DWORD *)v74 + 4;
          LODWORD(v12) = *(_DWORD *)v74 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v77 >= 4 )
            v75 = v76;
          v91 = v75;
          if ( v77 < 4 )
            goto LABEL_156;
          v78 = &v74[v75];
          v79 = v74;
          v80 = -1LL;
          if ( v78 >= v74 )
            v80 = (__int64)v78;
          v74 = (char *)v80;
          LODWORD(v12) = v78 < v79 ? 0xC0000095 : 0;
          if ( v78 < v79 )
            goto LABEL_156;
          v75 = v91;
        }
        while ( (unsigned int)++v73 < *(_DWORD *)a4 );
      }
LABEL_151:
      v81 = -1LL;
      if ( v74 + 4 >= v74 )
        v81 = (__int64)(v74 + 4);
      LODWORD(v12) = v74 + 4 < v74 ? 0xC0000095 : 0;
      if ( v74 + 4 >= v74 )
      {
        if ( (unsigned __int64)(v74 + 8) > v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_73;
        *(_DWORD *)v74 = 4;
        *(_DWORD *)v81 = v34;
        ++*(_DWORD *)a4;
      }
      goto LABEL_156;
    }
    goto LABEL_71;
  }
  v34 = -1073425151;
  if ( !a4 )
    goto LABEL_71;
  v60 = *(_QWORD *)(a4 + 8);
  if ( v60 )
  {
    v63 = 0;
    v64 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      v65 = (unsigned int)v89;
      while ( 1 )
      {
        v66 = -1;
        v67 = *(_DWORD *)v64 + 4;
        if ( v67 >= 4 )
          v66 = *(_DWORD *)v64 + 4;
        LODWORD(v12) = *(_DWORD *)v64 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( v67 >= 4 )
          v65 = v66;
        v90 = v65;
        if ( v67 < 4 )
          break;
        v68 = &v64[v65];
        v69 = v64;
        v70 = -1LL;
        if ( v68 >= v64 )
          v70 = (__int64)v68;
        v64 = (char *)v70;
        LODWORD(v12) = v68 < v69 ? 0xC0000095 : 0;
        if ( v68 < v69 )
          break;
        v65 = v90;
        if ( (unsigned int)++v63 >= *(_DWORD *)a4 )
          goto LABEL_128;
      }
    }
    else
    {
LABEL_128:
      v71 = -1LL;
      if ( v64 + 4 >= v64 )
        v71 = (__int64)(v64 + 4);
      LODWORD(v12) = v64 + 4 < v64 ? 0xC0000095 : 0;
      if ( v64 + 4 >= v64 )
      {
        if ( (unsigned __int64)(v64 + 8) > v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_73;
        *(_DWORD *)v64 = 4;
        *(_DWORD *)v71 = -1073425151;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v61 = *(_DWORD *)(a4 + 4);
    v62 = v61 + 8;
    if ( v61 + 8 >= v61 )
      v7 = v61 + 8;
    LODWORD(v12) = v62 < v61 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v7;
    if ( v62 >= v61 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_134;
    }
  }
  if ( (int)v12 < 0 )
    return (unsigned int)v12;
LABEL_134:
  v72 = *(_DWORD *)(a4 + 4);
  if ( !v72 )
    goto LABEL_172;
  v40 = (char *)ExAllocatePoolWithTag(PagedPool, v72, 0x20534C53u);
  v41 = v40;
  if ( !v40 )
    goto LABEL_72;
LABEL_64:
  *(_DWORD *)a4 = 0;
  v42 = v40 + 4;
  *(_QWORD *)(a4 + 8) = v41;
  if ( v42 >= v41 )
    v19 = (__int64)v42;
  LODWORD(v12) = v42 < v41 ? 0xC0000095 : 0;
  if ( v42 >= v41 )
  {
    if ( v41 + 8 <= &v41[*(unsigned int *)(a4 + 4)] )
    {
      *(_DWORD *)v41 = 4;
      *(_DWORD *)v19 = v34;
      ++*(_DWORD *)a4;
      return (unsigned int)v12;
    }
LABEL_73:
    LODWORD(v12) = -1073741789;
  }
  return (unsigned int)v12;
}
