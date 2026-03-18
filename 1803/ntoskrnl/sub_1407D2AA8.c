/*
 * XREFs of sub_1407D2AA8 @ 0x1407D2AA8
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407D2AA8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int j; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // r9
  unsigned int *v22; // rax
  void *v23; // r14
  unsigned int k; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  const wchar_t *v29; // r11
  __int64 v30; // rsi
  size_t v31; // r11
  unsigned int v32; // eax
  size_t v33; // rsi
  PVOID PoolWithTag; // rax
  unsigned __int64 v35; // rdx
  void *v36; // r14
  unsigned int m; // r8d
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  unsigned int v40; // ecx
  __int64 v41; // r8
  const wchar_t *v42; // r11
  __int64 v43; // rsi
  size_t v44; // r11
  unsigned int v45; // eax
  size_t v46; // rsi
  PVOID v47; // rax
  unsigned __int64 v48; // rdx
  unsigned int v49; // r11d
  unsigned __int64 v50; // r8
  unsigned int n; // r9d
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // rcx
  unsigned int v54; // esi
  __int64 v55; // rcx
  __int64 v56; // r14
  unsigned __int64 v57; // r8
  unsigned int ii; // r9d
  unsigned __int64 v59; // r10
  unsigned __int64 v60; // rcx
  unsigned int v61; // r10d
  __int64 v62; // rcx
  __int64 v63; // r13
  unsigned int jj; // r8d
  unsigned __int64 v65; // r9
  unsigned __int64 v66; // rcx
  unsigned int v67; // ecx
  __int64 v68; // r8
  __int64 v69; // rdx
  int v70; // edi
  int v71; // esi
  unsigned int v72; // ecx
  unsigned int v73; // eax
  unsigned int v74; // edx
  char *v75; // rax
  char *v76; // rdx
  int v77; // edi
  char *v78; // rax
  __int64 v79; // r8
  unsigned int v80; // r9d
  __int64 v81; // r10
  unsigned int v82; // ecx
  unsigned int v83; // eax
  int v84; // r11d
  char *v85; // r8
  unsigned int v86; // eax
  unsigned int v87; // edi
  char *v88; // rcx
  char *v89; // rdx
  __int64 v90; // rax
  unsigned int v92; // [rsp+58h] [rbp-19h]
  PVOID P; // [rsp+60h] [rbp-11h]
  PVOID v94; // [rsp+68h] [rbp-9h]
  size_t pcbLength; // [rsp+70h] [rbp-1h] BYREF
  __int64 v96; // [rsp+78h] [rbp+7h]
  __int64 v97; // [rsp+80h] [rbp+Fh]
  __int64 v98; // [rsp+88h] [rbp+17h]
  __int64 v99; // [rsp+90h] [rbp+1Fh]
  __int64 v101; // [rsp+E0h] [rbp+6Fh]

  P = 0LL;
  v94 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = -1LL;
      if ( v9 + 4 >= v9 )
        v11 = v9 + 4;
      v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
      if ( v9 + 4 < v9 )
        goto LABEL_21;
      v12 = v11 + *(unsigned int *)v9;
      v9 = -1LL;
      if ( v12 >= v11 )
        v9 = v12;
      v6 = v12 < v11 ? 0xC0000095 : 0;
      if ( v12 < v11 )
        goto LABEL_21;
    }
    v13 = *(_DWORD *)v9;
    v14 = -1LL;
    if ( v9 + 4 >= v9 )
      v14 = v9 + 4;
    v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_21:
      v13 = a3;
      v15 = (__int64 *)a2;
      goto LABEL_22;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (__int64 *)v14;
LABEL_22:
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v99 = *v15;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( !v7 || *(_DWORD *)a1 <= 4u )
  {
    v6 = -1073741811;
    goto LABEL_48;
  }
  v16 = v7;
  for ( j = 0; j < 4; ++j )
  {
    v18 = -1LL;
    if ( v16 + 4 >= v16 )
      v18 = v16 + 4;
    v6 = v16 + 4 < v16 ? 0xC0000095 : 0;
    if ( v16 + 4 < v16 )
      goto LABEL_44;
    v19 = v18 + *(unsigned int *)v16;
    v16 = -1LL;
    if ( v19 >= v18 )
      v16 = v19;
    v6 = v19 < v18 ? 0xC0000095 : 0;
    if ( v19 < v18 )
      goto LABEL_44;
  }
  v20 = *(_DWORD *)v16;
  v21 = -1LL;
  if ( v16 + 4 >= v16 )
    v21 = v16 + 4;
  v6 = v16 + 4 < v16 ? 0xC0000095 : 0;
  if ( v16 + 4 < v16 )
  {
LABEL_44:
    v20 = a3;
    v22 = (unsigned int *)a2;
    goto LABEL_45;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = (unsigned int *)v21;
LABEL_45:
  if ( v6 >= 0 )
  {
    if ( v20 != 4 )
      return (unsigned int)-1073741789;
    v92 = *v22;
LABEL_48:
    if ( v6 < 0 )
      return (unsigned int)v6;
    v23 = 0LL;
    if ( v7 && *(_DWORD *)a1 > 5u )
    {
      for ( k = 0; k < 5; ++k )
      {
        v25 = -1LL;
        if ( v7 + 4 >= v7 )
          v25 = v7 + 4;
        v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
        if ( v7 + 4 < v7 )
          goto LABEL_66;
        v26 = v25 + *(unsigned int *)v7;
        v7 = -1LL;
        if ( v26 >= v25 )
          v7 = v26;
        v6 = v26 < v25 ? 0xC0000095 : 0;
        if ( v26 < v25 )
          goto LABEL_66;
      }
      v27 = *(_DWORD *)v7;
      v28 = -1LL;
      if ( v7 + 4 >= v7 )
        v28 = v7 + 4;
      v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
      {
LABEL_66:
        v27 = a3;
        v29 = (const wchar_t *)a2;
        goto LABEL_67;
      }
      v29 = 0LL;
      if ( v27 )
        v29 = (const wchar_t *)v28;
LABEL_67:
      if ( v6 < 0 )
        goto LABEL_216;
      if ( !v27 || (v27 & 1) != 0 )
      {
        v6 = -1073741762;
        goto LABEL_86;
      }
      v30 = v27;
      if ( v29[((unsigned __int64)v27 >> 1) - 1] || StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v30 )
      {
        v6 = -1073741762;
        goto LABEL_86;
      }
      a3 = pcbLength >> 1;
      pcbLength = v31;
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      goto LABEL_216;
    v6 = 0;
    v32 = 2 * a3 + 2;
    v33 = v32;
    if ( 2 * a3 == -2 )
    {
      v6 = -1073741762;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
      if ( PoolWithTag )
        v23 = PoolWithTag;
      else
        v6 = -1073741801;
    }
    if ( v6 >= 0 )
    {
      memmove(v23, (const void *)pcbLength, v33);
      P = v23;
      v23 = 0LL;
    }
    if ( v23 )
      ExFreePoolWithTag(v23, 0x20534C53u);
LABEL_86:
    if ( v6 < 0 )
      goto LABEL_216;
    v35 = *(_QWORD *)(a1 + 8);
    v36 = 0LL;
    if ( v35 && *(_DWORD *)a1 > 6u )
    {
      for ( m = 0; m < 6; ++m )
      {
        v38 = -1LL;
        if ( v35 + 4 >= v35 )
          v38 = v35 + 4;
        v6 = v35 + 4 < v35 ? 0xC0000095 : 0;
        if ( v35 + 4 < v35 )
          goto LABEL_104;
        v39 = v38 + *(unsigned int *)v35;
        v35 = -1LL;
        if ( v39 >= v38 )
          v35 = v39;
        v6 = v39 < v38 ? 0xC0000095 : 0;
        if ( v39 < v38 )
          goto LABEL_104;
      }
      v40 = *(_DWORD *)v35;
      v41 = -1LL;
      if ( v35 + 4 >= v35 )
        v41 = v35 + 4;
      v6 = v35 + 4 < v35 ? 0xC0000095 : 0;
      if ( v35 + 4 < v35 )
      {
LABEL_104:
        v40 = a3;
        v42 = (const wchar_t *)a2;
        goto LABEL_105;
      }
      v42 = 0LL;
      if ( v40 )
        v42 = (const wchar_t *)v41;
LABEL_105:
      if ( v6 < 0 )
        goto LABEL_216;
      if ( !v40
        || (v40 & 1) != 0
        || (v43 = v40, v42[((unsigned __int64)v40 >> 1) - 1])
        || StringCbLengthW(v42, v40, &pcbLength) < 0
        || pcbLength + 2 != v43 )
      {
        v6 = -1073741762;
LABEL_123:
        if ( v6 >= 0 )
        {
          v48 = *(_QWORD *)(a1 + 8);
          if ( !v48 )
            goto LABEL_125;
          v49 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 <= 7u )
            goto LABEL_125;
          v50 = *(_QWORD *)(a1 + 8);
          for ( n = 0; n < 7; ++n )
          {
            v52 = -1LL;
            if ( v50 + 4 >= v50 )
              v52 = v50 + 4;
            v6 = v50 + 4 < v50 ? 0xC0000095 : 0;
            if ( v50 + 4 < v50 )
              goto LABEL_141;
            v53 = v52 + *(unsigned int *)v50;
            v50 = -1LL;
            if ( v53 >= v52 )
              v50 = v53;
            v6 = v53 < v52 ? 0xC0000095 : 0;
            if ( v53 < v52 )
              goto LABEL_141;
          }
          v54 = *(_DWORD *)v50;
          v55 = -1LL;
          if ( v50 + 4 >= v50 )
            v55 = v50 + 4;
          v6 = v50 + 4 < v50 ? 0xC0000095 : 0;
          if ( v50 + 4 < v50 )
          {
LABEL_141:
            v54 = a3;
            v56 = v96;
            goto LABEL_142;
          }
          v56 = 0LL;
          if ( v54 )
            v56 = v55;
LABEL_142:
          if ( v6 < 0 )
            goto LABEL_216;
          if ( v49 <= 8 )
            goto LABEL_125;
          v57 = *(_QWORD *)(a1 + 8);
          for ( ii = 0; ii < 8; ++ii )
          {
            v59 = -1LL;
            if ( v57 + 4 >= v57 )
              v59 = v57 + 4;
            v6 = v57 + 4 < v57 ? 0xC0000095 : 0;
            if ( v57 + 4 < v57 )
              goto LABEL_158;
            v60 = v59 + *(unsigned int *)v57;
            v57 = -1LL;
            if ( v60 >= v59 )
              v57 = v60;
            v6 = v60 < v59 ? 0xC0000095 : 0;
            if ( v60 < v59 )
              goto LABEL_158;
          }
          v61 = *(_DWORD *)v57;
          v62 = -1LL;
          if ( v57 + 4 >= v57 )
            v62 = v57 + 4;
          v6 = v57 + 4 < v57 ? 0xC0000095 : 0;
          if ( v57 + 4 < v57 )
          {
LABEL_158:
            v61 = a3;
            v63 = v97;
            goto LABEL_159;
          }
          v63 = 0LL;
          if ( v61 )
            v63 = v62;
LABEL_159:
          if ( v6 < 0 )
            goto LABEL_216;
          if ( v49 > 9 )
          {
            for ( jj = 0; jj < 9; ++jj )
            {
              v65 = -1LL;
              if ( v48 + 4 >= v48 )
                v65 = v48 + 4;
              v6 = v48 + 4 < v48 ? 0xC0000095 : 0;
              if ( v48 + 4 < v48 )
                goto LABEL_175;
              v66 = v65 + *(unsigned int *)v48;
              v48 = -1LL;
              if ( v66 >= v65 )
                v48 = v66;
              v6 = v66 < v65 ? 0xC0000095 : 0;
              if ( v66 < v65 )
                goto LABEL_175;
            }
            v67 = *(_DWORD *)v48;
            v68 = -1LL;
            if ( v48 + 4 >= v48 )
              v68 = v48 + 4;
            v6 = v48 + 4 < v48 ? 0xC0000095 : 0;
            if ( v48 + 4 < v48 )
            {
LABEL_175:
              v67 = a3;
              v69 = v98;
              goto LABEL_176;
            }
            v69 = 0LL;
            if ( v67 )
              v69 = v68;
LABEL_176:
            if ( v6 < 0 )
              goto LABEL_216;
            v70 = qword_140861408 ? qword_140861408(v92, P, v94, v56, v54, v63, v61, v69, v67) : -1073741637;
            v6 = v70;
            if ( v70 < 0 )
              goto LABEL_216;
            v71 = -1;
            v72 = -1;
            if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
              v72 = *(_DWORD *)(a2 + 16) + 48;
            v6 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
            {
              v73 = v72 + 4;
              v74 = -1;
              if ( v72 + 4 >= v72 )
                v74 = v72 + 4;
              v6 = v73 < v72 ? 0xC0000095 : 0;
              if ( v73 >= v72 )
                v6 = v74 + *(_DWORD *)(a2 + 32) < v74 ? 0xC0000095 : 0;
            }
            if ( v6 < 0 )
              goto LABEL_216;
            *(_DWORD *)(a4 + 4) = 20;
            v75 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
            v76 = v75;
            if ( !v75 )
            {
              v6 = -1073741801;
              goto LABEL_216;
            }
            *(_QWORD *)(a4 + 8) = v75;
            *(_DWORD *)a4 = 0;
            v77 = v70 | 0x10000000;
            v78 = v75 + 4;
            v79 = -1LL;
            v80 = 0;
            if ( v78 >= v76 )
              v79 = (__int64)v78;
            v6 = v78 < v76 ? 0xC0000095 : 0;
            if ( v78 >= v76 )
            {
              if ( v76 + 8 > &v76[*(unsigned int *)(a4 + 4)] )
              {
LABEL_195:
                v6 = -1073741789;
                goto LABEL_216;
              }
              *(_DWORD *)v76 = 4;
              *(_DWORD *)v79 = v77;
              v80 = ++*(_DWORD *)a4;
            }
            if ( v78 >= v76 )
            {
              v81 = *(_QWORD *)(a4 + 8);
              v101 = v99;
              if ( !v81 )
              {
                v82 = *(_DWORD *)(a4 + 4);
                v83 = v82 + 12;
                if ( v82 + 12 >= v82 )
                  v71 = v82 + 12;
                v6 = v83 < v82 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v71;
                if ( v83 >= v82 )
                {
                  v6 = 0;
                  *(_DWORD *)a4 = v80 + 1;
                }
                goto LABEL_216;
              }
              v84 = 0;
              v85 = *(char **)(a4 + 8);
              if ( v80 )
              {
                do
                {
                  v86 = -1;
                  if ( *(_DWORD *)v85 < 0xFFFFFFFC )
                    v86 = *(_DWORD *)v85 + 4;
                  v6 = *(_DWORD *)v85 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v85 + 4) < 4 )
                    goto LABEL_216;
                  v87 = v86;
                  v88 = v85;
                  v89 = &v85[v86];
                  v90 = -1LL;
                  if ( v89 >= v85 )
                    v90 = (__int64)&v85[v87];
                  v85 = (char *)v90;
                  v6 = v89 < v88 ? 0xC0000095 : 0;
                  if ( v89 < v88 )
                    goto LABEL_216;
                }
                while ( ++v84 < v80 );
              }
              if ( v85 + 4 >= v85 )
                v8 = (__int64)(v85 + 4);
              v6 = v85 + 4 < v85 ? 0xC0000095 : 0;
              if ( v85 + 4 >= v85 )
              {
                if ( (unsigned __int64)(v85 + 12) <= v81 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v85 = 8;
                  *(_QWORD *)v8 = v101;
                  ++*(_DWORD *)a4;
                  goto LABEL_216;
                }
                goto LABEL_195;
              }
            }
          }
          else
          {
LABEL_125:
            v6 = -1073741811;
          }
        }
LABEL_216:
        if ( P )
          ExFreePoolWithTag(P, 0x20534C53u);
        if ( v94 )
          ExFreePoolWithTag(v94, 0x20534C53u);
        return (unsigned int)v6;
      }
      a3 = pcbLength >> 1;
      pcbLength = v44;
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      goto LABEL_216;
    v6 = 0;
    v45 = 2 * a3 + 2;
    v46 = v45;
    if ( 2 * a3 == -2 )
    {
      v6 = -1073741762;
    }
    else
    {
      v47 = ExAllocatePoolWithTag(PagedPool, v45, 0x20534C53u);
      if ( v47 )
        v36 = v47;
      else
        v6 = -1073741801;
    }
    if ( v6 >= 0 )
    {
      memmove(v36, (const void *)pcbLength, v46);
      v94 = v36;
      v36 = 0LL;
    }
    if ( v36 )
      ExFreePoolWithTag(v36, 0x20534C53u);
    goto LABEL_123;
  }
  return (unsigned int)v6;
}
