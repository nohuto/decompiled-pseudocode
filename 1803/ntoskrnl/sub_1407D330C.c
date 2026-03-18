/*
 * XREFs of sub_1407D330C @ 0x1407D330C
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

__int64 __fastcall sub_1407D330C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  void *v16; // r15
  unsigned int j; // edx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  const wchar_t *v22; // r11
  __int64 v23; // r14
  void *v24; // r11
  unsigned int v25; // eax
  size_t v26; // r14
  PVOID PoolWithTag; // rax
  unsigned __int64 v28; // rdx
  unsigned int k; // r8d
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // esi
  int v36; // r14d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // edx
  char *v40; // rax
  int v41; // r10d
  char *v42; // rdx
  int v43; // esi
  char *v44; // rax
  __int64 v45; // r8
  unsigned int v46; // r9d
  __int64 v47; // r11
  unsigned int v48; // edx
  int v49; // eax
  unsigned int v50; // ecx
  char *v51; // r8
  unsigned int v52; // eax
  unsigned int v53; // esi
  char *v54; // rcx
  char *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // xmm0_8
  __int64 v59; // r9
  unsigned int v60; // ecx
  unsigned int v61; // eax
  char *v62; // r8
  unsigned int v63; // eax
  unsigned int v64; // esi
  char *v65; // rcx
  char *v66; // rdx
  __int64 v67; // rax
  size_t pcbLength; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v70; // [rsp+38h] [rbp-48h]
  PVOID P; // [rsp+40h] [rbp-40h]
  void *Src; // [rsp+48h] [rbp-38h]
  __int64 v73; // [rsp+50h] [rbp-30h]
  __int64 v74; // [rsp+58h] [rbp-28h]
  __int128 v75; // [rsp+60h] [rbp-20h] BYREF

  v74 = a2;
  P = 0LL;
  v73 = 0LL;
  v75 = 0uLL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( !v7 || *(_DWORD *)a1 <= 3u )
  {
    v6 = -1073741811;
    goto LABEL_26;
  }
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
    v13 = pcbLength;
    v15 = v70;
    goto LABEL_22;
  }
  v15 = 0LL;
  if ( v13 )
    v15 = (_QWORD *)v14;
LABEL_22:
  if ( v6 >= 0 )
  {
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v70 = (_QWORD *)*v15;
LABEL_26:
    if ( v6 < 0 )
      return (unsigned int)v6;
    v16 = 0LL;
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = -1LL;
        if ( v7 + 4 >= v7 )
          v18 = v7 + 4;
        v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
        if ( v7 + 4 < v7 )
          goto LABEL_44;
        v19 = v18 + *(unsigned int *)v7;
        v7 = -1LL;
        if ( v19 >= v18 )
          v7 = v19;
        v6 = v19 < v18 ? 0xC0000095 : 0;
        if ( v19 < v18 )
          goto LABEL_44;
      }
      v20 = *(_DWORD *)v7;
      v21 = -1LL;
      if ( v7 + 4 >= v7 )
        v21 = v7 + 4;
      v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
      {
LABEL_44:
        v20 = pcbLength;
        v22 = (const wchar_t *)v70;
        goto LABEL_45;
      }
      v22 = 0LL;
      if ( v20 )
        v22 = (const wchar_t *)v21;
LABEL_45:
      if ( v6 < 0 )
        goto LABEL_142;
      if ( !v20
        || (v20 & 1) != 0
        || (v23 = v20, v22[((unsigned __int64)v20 >> 1) - 1])
        || StringCbLengthW(v22, v20, &pcbLength) < 0
        || pcbLength + 2 != v23 )
      {
        v6 = -1073741762;
        goto LABEL_63;
      }
      LODWORD(pcbLength) = pcbLength >> 1;
      Src = v24;
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      goto LABEL_142;
    v6 = 0;
    v25 = 2 * pcbLength + 2;
    v26 = v25;
    if ( 2 * (_DWORD)pcbLength == -2 )
    {
      v6 = -1073741762;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v25, 0x20534C53u);
      if ( PoolWithTag )
        v16 = PoolWithTag;
      else
        v6 = -1073741801;
    }
    if ( v6 >= 0 )
    {
      memmove(v16, Src, v26);
      P = v16;
      v16 = 0LL;
    }
    if ( v16 )
      ExFreePoolWithTag(v16, 0x20534C53u);
LABEL_63:
    if ( v6 < 0 )
      goto LABEL_142;
    v28 = *(_QWORD *)(a1 + 8);
    if ( !v28 || *(_DWORD *)a1 <= 5u )
    {
      v6 = -1073741811;
      goto LABEL_142;
    }
    for ( k = 0; k < 5; ++k )
    {
      v30 = -1LL;
      if ( v28 + 4 >= v28 )
        v30 = v28 + 4;
      v6 = v28 + 4 < v28 ? 0xC0000095 : 0;
      if ( v28 + 4 < v28 )
        goto LABEL_81;
      v31 = v30 + *(unsigned int *)v28;
      v28 = -1LL;
      if ( v31 >= v30 )
        v28 = v31;
      v6 = v31 < v30 ? 0xC0000095 : 0;
      if ( v31 < v30 )
        goto LABEL_81;
    }
    v32 = *(unsigned int *)v28;
    v33 = -1LL;
    if ( v28 + 4 >= v28 )
      v33 = v28 + 4;
    v6 = v28 + 4 < v28 ? 0xC0000095 : 0;
    if ( v28 + 4 < v28 )
    {
LABEL_81:
      v32 = (unsigned int)pcbLength;
      v34 = v73;
      goto LABEL_82;
    }
    v34 = 0LL;
    if ( (_DWORD)v32 )
      v34 = v33;
LABEL_82:
    if ( v6 < 0 )
      goto LABEL_142;
    if ( qword_1408613C0 )
      v35 = qword_1408613C0(P, v34, v32, &v75);
    else
      v35 = -1073700223;
    v36 = -1;
    v37 = -1;
    if ( *(_DWORD *)(v74 + 16) < 0xFFFFFFC0 )
      v37 = *(_DWORD *)(v74 + 16) + 64;
    v6 = *(_DWORD *)(v74 + 16) >= 0xFFFFFFC0 ? 0xC0000095 : 0;
    if ( (unsigned int)(*(_DWORD *)(v74 + 16) + 64) >= 0x40 )
    {
      v38 = v37 + 4;
      v39 = -1;
      if ( v37 + 4 >= v37 )
        v39 = v37 + 4;
      v6 = v38 < v37 ? 0xC0000095 : 0;
      if ( v38 >= v37 )
        v6 = v39 + *(_DWORD *)(v74 + 32) < v39 ? 0xC0000095 : 0;
    }
    if ( v6 < 0 )
      goto LABEL_142;
    *(_DWORD *)(a4 + 4) = 40;
    v40 = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
    v41 = 0;
    v42 = v40;
    if ( !v40 )
    {
      v6 = -1073741801;
      goto LABEL_142;
    }
    *(_QWORD *)(a4 + 8) = v40;
    *(_DWORD *)a4 = 0;
    v43 = v35 | 0x10000000;
    v44 = v40 + 4;
    v45 = -1LL;
    v46 = 0;
    if ( v44 >= v42 )
      v45 = (__int64)v44;
    v6 = v44 < v42 ? 0xC0000095 : 0;
    if ( v44 >= v42 )
    {
      if ( v42 + 8 > &v42[*(unsigned int *)(a4 + 4)] )
        goto LABEL_139;
      *(_DWORD *)v42 = 4;
      *(_DWORD *)v45 = v43;
      v46 = ++*(_DWORD *)a4;
    }
    if ( v44 < v42 )
      goto LABEL_142;
    v47 = *(_QWORD *)(a4 + 8);
    if ( v47 )
    {
      v51 = *(char **)(a4 + 8);
      if ( v46 )
      {
        while ( 1 )
        {
          v52 = -1;
          if ( *(_DWORD *)v51 < 0xFFFFFFFC )
            v52 = *(_DWORD *)v51 + 4;
          v6 = *(_DWORD *)v51 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( (unsigned int)(*(_DWORD *)v51 + 4) < 4 )
            break;
          v53 = v52;
          v54 = v51;
          v55 = &v51[v52];
          v56 = -1LL;
          if ( v55 >= v51 )
            v56 = (__int64)&v51[v53];
          v51 = (char *)v56;
          v6 = v55 < v54 ? 0xC0000095 : 0;
          if ( v55 < v54 )
            break;
          if ( ++v41 >= v46 )
            goto LABEL_115;
        }
      }
      else
      {
LABEL_115:
        v57 = -1LL;
        if ( v51 + 4 >= v51 )
          v57 = (__int64)(v51 + 4);
        v6 = v51 + 4 < v51 ? 0xC0000095 : 0;
        if ( v51 + 4 >= v51 )
        {
          if ( (unsigned __int64)(v51 + 12) > v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_139;
          v58 = v70;
          *(_DWORD *)v51 = 8;
          *(_QWORD *)v57 = v58;
          ++*(_DWORD *)a4;
        }
      }
      v41 = 0;
    }
    else
    {
      v48 = *(_DWORD *)(a4 + 4);
      v49 = -1;
      v50 = v48 + 12;
      if ( v48 + 12 >= v48 )
        v49 = v48 + 12;
      v6 = v50 < v48 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v49;
      if ( v50 >= v48 )
      {
        *(_DWORD *)a4 = v46 + 1;
LABEL_122:
        v59 = *(_QWORD *)(a4 + 8);
        if ( !v59 )
        {
          v60 = *(_DWORD *)(a4 + 4);
          v61 = v60 + 20;
          if ( v60 + 20 >= v60 )
            v36 = v60 + 20;
          v6 = v61 < v60 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v36;
          if ( v61 < v60 )
            goto LABEL_142;
          v6 = 0;
          goto LABEL_141;
        }
        v62 = *(char **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          do
          {
            v63 = -1;
            if ( *(_DWORD *)v62 < 0xFFFFFFFC )
              v63 = *(_DWORD *)v62 + 4;
            v6 = *(_DWORD *)v62 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v62 + 4) < 4 )
              goto LABEL_142;
            v64 = v63;
            v65 = v62;
            v66 = &v62[v63];
            v67 = -1LL;
            if ( v66 >= v62 )
              v67 = (__int64)&v62[v64];
            v62 = (char *)v67;
            v6 = v66 < v65 ? 0xC0000095 : 0;
            if ( v66 < v65 )
              goto LABEL_142;
          }
          while ( (unsigned int)++v41 < *(_DWORD *)a4 );
        }
        if ( v62 + 4 >= v62 )
          v8 = (__int64)(v62 + 4);
        v6 = v62 + 4 < v62 ? 0xC0000095 : 0;
        if ( v62 + 4 < v62 )
        {
LABEL_142:
          if ( P )
            ExFreePoolWithTag(P, 0x20534C53u);
          return (unsigned int)v6;
        }
        if ( (unsigned __int64)(v62 + 20) <= v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v62 = 16;
          *(_OWORD *)v8 = v75;
LABEL_141:
          ++*(_DWORD *)a4;
          goto LABEL_142;
        }
LABEL_139:
        v6 = -1073741789;
        goto LABEL_142;
      }
    }
    if ( v6 < 0 )
      goto LABEL_142;
    goto LABEL_122;
  }
  return (unsigned int)v6;
}
