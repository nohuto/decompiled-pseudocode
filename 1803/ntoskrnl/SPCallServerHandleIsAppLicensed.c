/*
 * XREFs of SPCallServerHandleIsAppLicensed @ 0x14052773C
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleIsAppLicensed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned int i; // r9d
  unsigned __int64 v10; // r10
  signed int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int ii; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // r9
  unsigned int *v22; // rax
  void *v23; // r15
  unsigned int j; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  const wchar_t *v29; // r11
  __int64 v30; // r14
  void *v31; // r11
  unsigned int v32; // eax
  size_t v33; // r14
  PVOID PoolWithTag; // rax
  unsigned __int64 v35; // rdx
  void *v36; // r15
  unsigned int k; // r8d
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  unsigned int v40; // ecx
  __int64 v41; // r8
  const wchar_t *v42; // r11
  unsigned __int64 v43; // r14
  void *v44; // r11
  unsigned int v45; // eax
  size_t v46; // r14
  PVOID v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned int m; // r9d
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // rcx
  unsigned int v53; // r14d
  __int64 v54; // rcx
  __int64 v55; // r15
  unsigned int n; // r8d
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rcx
  unsigned int v59; // ecx
  __int64 v60; // r8
  int *v61; // rax
  int v62; // eax
  int v63; // r14d
  int v64; // esi
  unsigned int v65; // ecx
  unsigned int v66; // eax
  unsigned int v67; // edx
  char *v68; // rax
  int v69; // r10d
  char *v70; // rdx
  int v71; // r14d
  char *v72; // rax
  __int64 v73; // r8
  unsigned int v74; // r9d
  __int64 v75; // r11
  char *v76; // r8
  unsigned int v77; // eax
  unsigned int v78; // r14d
  char *v79; // rcx
  char *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r9
  char *v84; // r8
  unsigned int v85; // eax
  unsigned int v86; // r11d
  char *v87; // rcx
  char *v88; // rdx
  __int64 v89; // rax
  unsigned int v91; // edx
  int v92; // eax
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // eax
  unsigned int v96; // [rsp+48h] [rbp-29h]
  _QWORD *v97; // [rsp+50h] [rbp-21h]
  size_t pcbLength; // [rsp+58h] [rbp-19h] BYREF
  void *Src; // [rsp+60h] [rbp-11h] BYREF
  PVOID P; // [rsp+68h] [rbp-9h]
  PVOID v101; // [rsp+70h] [rbp-1h]
  __int64 v102; // [rsp+78h] [rbp+7h]
  __int64 v103; // [rsp+80h] [rbp+Fh]
  __int128 v104; // [rsp+88h] [rbp+17h] BYREF

  v103 = a2;
  P = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v104 = 0uLL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = -1LL;
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    v8 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v10 = -1LL;
      if ( v8 + 4 >= v8 )
        v10 = v8 + 4;
      v11 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
        goto LABEL_194;
      v12 = v10 + *(unsigned int *)v8;
      v8 = -1LL;
      if ( v12 >= v10 )
        v8 = v12;
      v11 = v12 < v10 ? 0xC0000095 : 0;
      if ( v12 < v10 )
        goto LABEL_194;
    }
    v13 = *(_DWORD *)v8;
    v14 = -1LL;
    if ( v8 + 4 >= v8 )
      v14 = v8 + 4;
    v11 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
    {
LABEL_194:
      v13 = v96;
      v15 = v97;
      goto LABEL_18;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_18:
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v97 = (_QWORD *)*v15;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( !v6 || *(_DWORD *)a1 <= 4u )
  {
    v11 = -1073741811;
LABEL_40:
    if ( v11 < 0 )
      return (unsigned int)v11;
    v23 = 0LL;
    if ( v6 && *(_DWORD *)a1 > 5u )
    {
      for ( j = 0; j < 5; ++j )
      {
        v25 = -1LL;
        if ( v6 + 4 >= v6 )
          v25 = v6 + 4;
        v11 = v6 + 4 < v6 ? 0xC0000095 : 0;
        if ( v6 + 4 < v6 )
          goto LABEL_199;
        v26 = v25 + *(unsigned int *)v6;
        v6 = -1LL;
        if ( v26 >= v25 )
          v6 = v26;
        v11 = v26 < v25 ? 0xC0000095 : 0;
        if ( v26 < v25 )
          goto LABEL_199;
      }
      v27 = *(_DWORD *)v6;
      v28 = -1LL;
      if ( v6 + 4 >= v6 )
        v28 = v6 + 4;
      v11 = v6 + 4 < v6 ? 0xC0000095 : 0;
      if ( v6 + 4 < v6 )
      {
LABEL_199:
        v27 = v96;
        v29 = (const wchar_t *)v97;
        goto LABEL_56;
      }
      v29 = 0LL;
      if ( v27 )
        v29 = (const wchar_t *)v28;
LABEL_56:
      if ( v11 < 0 )
        goto LABEL_185;
      if ( !v27 || (v27 & 1) != 0 )
      {
        v11 = -1073741762;
        goto LABEL_71;
      }
      v30 = v27;
      if ( v29[((unsigned __int64)v27 >> 1) - 1] || StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v30 )
      {
        v11 = -1073741762;
        goto LABEL_71;
      }
      LODWORD(pcbLength) = pcbLength >> 1;
      Src = v31;
    }
    else
    {
      v11 = -1073741811;
    }
    if ( v11 < 0 )
      goto LABEL_185;
    v11 = 0;
    v32 = 2 * pcbLength + 2;
    v33 = v32;
    if ( 2 * (_DWORD)pcbLength == -2 )
    {
      v11 = -1073741762;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
      if ( PoolWithTag )
        v23 = PoolWithTag;
      else
        v11 = -1073741801;
    }
    if ( v11 >= 0 )
    {
      memmove(v23, Src, v33);
      P = v23;
      v23 = 0LL;
    }
    if ( v23 )
      ExFreePoolWithTag(v23, 0x20534C53u);
LABEL_71:
    if ( v11 < 0 )
      goto LABEL_185;
    v35 = *(_QWORD *)(a1 + 8);
    v36 = 0LL;
    if ( v35 && *(_DWORD *)a1 > 6u )
    {
      for ( k = 0; k < 6; ++k )
      {
        v38 = -1LL;
        if ( v35 + 4 >= v35 )
          v38 = v35 + 4;
        v11 = v35 + 4 < v35 ? 0xC0000095 : 0;
        if ( v35 + 4 < v35 )
          goto LABEL_205;
        v39 = v38 + *(unsigned int *)v35;
        v35 = -1LL;
        if ( v39 >= v38 )
          v35 = v39;
        v11 = v39 < v38 ? 0xC0000095 : 0;
        if ( v39 < v38 )
          goto LABEL_205;
      }
      v40 = *(_DWORD *)v35;
      v41 = -1LL;
      if ( v35 + 4 >= v35 )
        v41 = v35 + 4;
      v11 = v35 + 4 < v35 ? 0xC0000095 : 0;
      if ( v35 + 4 < v35 )
      {
LABEL_205:
        v40 = v96;
        v42 = (const wchar_t *)v97;
        goto LABEL_87;
      }
      v42 = 0LL;
      if ( v40 )
        v42 = (const wchar_t *)v41;
LABEL_87:
      if ( v11 < 0 )
        goto LABEL_185;
      if ( !v40
        || (v40 & 1) != 0
        || (v43 = v40, v42[((unsigned __int64)v40 >> 1) - 1])
        || StringCbLengthW(v42, v40, (size_t *)&Src) < 0
        || (char *)Src + 2 != (void *)v43 )
      {
        v11 = -1073741762;
        goto LABEL_102;
      }
      LODWORD(pcbLength) = (unsigned __int64)Src >> 1;
      Src = v44;
    }
    else
    {
      v11 = -1073741811;
    }
    if ( v11 < 0 )
      goto LABEL_185;
    v11 = 0;
    v45 = 2 * pcbLength + 2;
    v46 = v45;
    if ( 2 * (_DWORD)pcbLength == -2 )
    {
      v11 = -1073741762;
    }
    else
    {
      v47 = ExAllocatePoolWithTag(PagedPool, v45, 0x20534C53u);
      if ( v47 )
        v36 = v47;
      else
        v11 = -1073741801;
    }
    if ( v11 >= 0 )
    {
      memmove(v36, Src, v46);
      v101 = v36;
      v36 = 0LL;
    }
    if ( v36 )
      ExFreePoolWithTag(v36, 0x20534C53u);
LABEL_102:
    if ( v11 < 0 )
      goto LABEL_185;
    v48 = *(_QWORD *)(a1 + 8);
    if ( !v48 || *(_DWORD *)a1 <= 7u )
    {
      v11 = -1073741811;
      goto LABEL_185;
    }
    v49 = *(_QWORD *)(a1 + 8);
    for ( m = 0; m < 7; ++m )
    {
      v51 = -1LL;
      if ( v49 + 4 >= v49 )
        v51 = v49 + 4;
      v11 = v49 + 4 < v49 ? 0xC0000095 : 0;
      if ( v49 + 4 < v49 )
        goto LABEL_209;
      v52 = v51 + *(unsigned int *)v49;
      v49 = -1LL;
      if ( v52 >= v51 )
        v49 = v52;
      v11 = v52 < v51 ? 0xC0000095 : 0;
      if ( v52 < v51 )
        goto LABEL_209;
    }
    v53 = *(_DWORD *)v49;
    v54 = -1LL;
    if ( v49 + 4 >= v49 )
      v54 = v49 + 4;
    v11 = v49 + 4 < v49 ? 0xC0000095 : 0;
    if ( v49 + 4 < v49 )
    {
LABEL_209:
      v53 = v96;
      v55 = v102;
      goto LABEL_118;
    }
    v55 = 0LL;
    if ( v53 )
      v55 = v54;
LABEL_118:
    if ( v11 < 0 )
      goto LABEL_185;
    if ( *(_DWORD *)a1 <= 8u )
    {
      v11 = -1073741811;
    }
    else
    {
      for ( n = 0; n < 8; ++n )
      {
        v57 = -1LL;
        if ( v48 + 4 >= v48 )
          v57 = v48 + 4;
        v11 = v48 + 4 < v48 ? 0xC0000095 : 0;
        if ( v48 + 4 < v48 )
          goto LABEL_212;
        v58 = v57 + *(unsigned int *)v48;
        v48 = -1LL;
        if ( v58 >= v57 )
          v48 = v58;
        v11 = v58 < v57 ? 0xC0000095 : 0;
        if ( v58 < v57 )
          goto LABEL_212;
      }
      v59 = *(_DWORD *)v48;
      v60 = -1LL;
      if ( v48 + 4 >= v48 )
        v60 = v48 + 4;
      v11 = v48 + 4 < v48 ? 0xC0000095 : 0;
      if ( v48 + 4 < v48 )
      {
LABEL_212:
        v59 = v96;
        v61 = (int *)v97;
        goto LABEL_133;
      }
      v61 = 0LL;
      if ( v59 )
        v61 = (int *)v60;
LABEL_133:
      if ( v11 >= 0 )
      {
        if ( v59 != 4 )
          goto LABEL_191;
        v62 = *v61;
LABEL_136:
        if ( v11 < 0 )
          goto LABEL_185;
        if ( qword_1408613A8 )
          v63 = ((__int64 (__fastcall *)(_QWORD, PVOID, PVOID, __int64, unsigned int, int, __int128 *))qword_1408613A8)(
                  v96,
                  P,
                  v101,
                  v55,
                  v53,
                  v62,
                  &v104);
        else
          v63 = -1073700223;
        v64 = -1;
        v65 = -1;
        if ( *(_DWORD *)(v103 + 16) < 0xFFFFFFC0 )
          v65 = *(_DWORD *)(v103 + 16) + 64;
        v11 = *(_DWORD *)(v103 + 16) >= 0xFFFFFFC0 ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)(v103 + 16) + 64) >= 0x40 )
        {
          v66 = v65 + 4;
          v67 = -1;
          if ( v65 + 4 >= v65 )
            v67 = v65 + 4;
          v11 = v66 < v65 ? 0xC0000095 : 0;
          if ( v66 >= v65 )
            v11 = v67 + *(_DWORD *)(v103 + 32) < v67 ? 0xC0000095 : 0;
        }
        if ( v11 < 0 )
          goto LABEL_185;
        *(_DWORD *)(a4 + 4) = 40;
        v68 = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
        v69 = 0;
        v70 = v68;
        if ( !v68 )
        {
          v11 = -1073741801;
          goto LABEL_185;
        }
        *(_QWORD *)(a4 + 8) = v68;
        *(_DWORD *)a4 = 0;
        v71 = v63 | 0x10000000;
        v72 = v68 + 4;
        v73 = -1LL;
        v74 = 0;
        if ( v72 >= v70 )
          v73 = (__int64)v72;
        v11 = v72 < v70 ? 0xC0000095 : 0;
        if ( v72 >= v70 )
        {
          if ( v70 + 8 > &v70[*(unsigned int *)(a4 + 4)] )
            goto LABEL_191;
          *(_DWORD *)v70 = 4;
          *(_DWORD *)v73 = v71;
          v74 = ++*(_DWORD *)a4;
        }
        if ( v72 < v70 )
          goto LABEL_185;
        v75 = *(_QWORD *)(a4 + 8);
        if ( v75 )
        {
          v76 = *(char **)(a4 + 8);
          if ( v74 )
          {
            while ( 1 )
            {
              v77 = -1;
              if ( *(_DWORD *)v76 < 0xFFFFFFFC )
                v77 = *(_DWORD *)v76 + 4;
              v11 = *(_DWORD *)v76 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v76 + 4) < 4 )
                break;
              v78 = v77;
              v79 = v76;
              v80 = &v76[v77];
              v81 = -1LL;
              if ( v80 >= v76 )
                v81 = (__int64)&v76[v78];
              v76 = (char *)v81;
              v11 = v80 < v79 ? 0xC0000095 : 0;
              if ( v80 < v79 )
                break;
              if ( ++v69 >= v74 )
                goto LABEL_163;
            }
          }
          else
          {
LABEL_163:
            v82 = -1LL;
            if ( v76 + 4 >= v76 )
              v82 = (__int64)(v76 + 4);
            v11 = v76 + 4 < v76 ? 0xC0000095 : 0;
            if ( v76 + 4 >= v76 )
            {
              if ( (unsigned __int64)(v76 + 12) > v75 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_191;
              *(_DWORD *)v76 = 8;
              *(_QWORD *)v82 = v97;
              ++*(_DWORD *)a4;
            }
          }
          v69 = 0;
        }
        else
        {
          v91 = *(_DWORD *)(a4 + 4);
          v92 = -1;
          v93 = v91 + 12;
          if ( v91 + 12 >= v91 )
            v92 = v91 + 12;
          v11 = v93 < v91 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v92;
          if ( v93 >= v91 )
          {
            *(_DWORD *)a4 = v74 + 1;
LABEL_170:
            v83 = *(_QWORD *)(a4 + 8);
            if ( !v83 )
            {
              v94 = *(_DWORD *)(a4 + 4);
              v95 = v94 + 20;
              if ( v94 + 20 >= v94 )
                v64 = v94 + 20;
              v11 = v95 < v94 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v64;
              if ( v95 < v94 )
                goto LABEL_185;
              v11 = 0;
              goto LABEL_184;
            }
            v84 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              do
              {
                v85 = -1;
                if ( *(_DWORD *)v84 < 0xFFFFFFFC )
                  v85 = *(_DWORD *)v84 + 4;
                v11 = *(_DWORD *)v84 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v84 + 4) < 4 )
                  goto LABEL_185;
                v86 = v85;
                v87 = v84;
                v88 = &v84[v85];
                v89 = -1LL;
                if ( v88 >= v84 )
                  v89 = (__int64)&v84[v86];
                v84 = (char *)v89;
                v11 = v88 < v87 ? 0xC0000095 : 0;
                if ( v88 < v87 )
                  goto LABEL_185;
              }
              while ( (unsigned int)++v69 < *(_DWORD *)a4 );
            }
            if ( v84 + 4 >= v84 )
              v7 = (__int64)(v84 + 4);
            v11 = v84 + 4 < v84 ? 0xC0000095 : 0;
            if ( v84 + 4 >= v84 )
            {
              if ( (unsigned __int64)(v84 + 20) <= v83 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v84 = 16;
                *(_OWORD *)v7 = v104;
LABEL_184:
                ++*(_DWORD *)a4;
                goto LABEL_185;
              }
LABEL_191:
              v11 = -1073741789;
            }
LABEL_185:
            if ( P )
              ExFreePoolWithTag(P, 0x20534C53u);
            if ( v101 )
              ExFreePoolWithTag(v101, 0x20534C53u);
            return (unsigned int)v11;
          }
        }
        if ( v11 < 0 )
          goto LABEL_185;
        goto LABEL_170;
      }
    }
    v62 = pcbLength;
    goto LABEL_136;
  }
  v16 = v6;
  for ( ii = 0; ii < 4; ++ii )
  {
    v18 = -1LL;
    if ( v16 + 4 >= v16 )
      v18 = v16 + 4;
    v11 = v16 + 4 < v16 ? 0xC0000095 : 0;
    if ( v16 + 4 < v16 )
      goto LABEL_197;
    v19 = v18 + *(unsigned int *)v16;
    v16 = -1LL;
    if ( v19 >= v18 )
      v16 = v19;
    v11 = v19 < v18 ? 0xC0000095 : 0;
    if ( v19 < v18 )
      goto LABEL_197;
  }
  v20 = *(_DWORD *)v16;
  v21 = -1LL;
  if ( v16 + 4 >= v16 )
    v21 = v16 + 4;
  v11 = v16 + 4 < v16 ? 0xC0000095 : 0;
  if ( v16 + 4 < v16 )
  {
LABEL_197:
    v20 = v96;
    v22 = (unsigned int *)v97;
    goto LABEL_37;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = (unsigned int *)v21;
LABEL_37:
  if ( v11 >= 0 )
  {
    if ( v20 == 4 )
    {
      v96 = *v22;
      goto LABEL_40;
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v11;
}
