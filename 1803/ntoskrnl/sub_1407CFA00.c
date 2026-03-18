/*
 * XREFs of sub_1407CFA00 @ 0x1407CFA00
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407CFA00(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 *v15; // rax
  void *v16; // r15
  unsigned int j; // edx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  const wchar_t *v22; // r11
  __int64 v23; // r14
  size_t v24; // r11
  unsigned int v25; // eax
  size_t v26; // r14
  PVOID v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int k; // r9d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rcx
  unsigned int v33; // r10d
  __int64 v34; // rcx
  __int64 v35; // r14
  unsigned int m; // r8d
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rcx
  unsigned int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // edi
  int v43; // r14d
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // edx
  char *PoolWithTag; // rax
  char *v48; // rdx
  int v49; // edi
  char *v50; // rax
  __int64 v51; // r8
  unsigned int v52; // r9d
  __int64 v53; // r10
  unsigned int v54; // ecx
  unsigned int v55; // eax
  char *v56; // r8
  int v57; // r11d
  unsigned int v58; // eax
  unsigned int v59; // edi
  char *v60; // rcx
  char *v61; // rdx
  __int64 v62; // rax
  PVOID P; // [rsp+30h] [rbp-20h]
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  __int64 v66; // [rsp+40h] [rbp-10h]
  __int64 v67; // [rsp+48h] [rbp-8h]
  __int64 v69; // [rsp+98h] [rbp+48h]

  P = 0LL;
  v66 = 0LL;
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
    v13 = a3;
    v15 = (__int64 *)a2;
    goto LABEL_22;
  }
  v15 = 0LL;
  if ( v13 )
    v15 = (__int64 *)v14;
LABEL_22:
  if ( v6 >= 0 )
  {
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v67 = *v15;
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
        v20 = a3;
        v22 = (const wchar_t *)a2;
        goto LABEL_45;
      }
      v22 = 0LL;
      if ( v20 )
        v22 = (const wchar_t *)v21;
LABEL_45:
      if ( v6 < 0 )
      {
LABEL_63:
        if ( v6 < 0 )
          goto LABEL_139;
        v28 = *(_QWORD *)(a1 + 8);
        if ( !v28 || *(_DWORD *)a1 <= 5u )
          goto LABEL_65;
        v29 = *(_QWORD *)(a1 + 8);
        for ( k = 0; k < 5; ++k )
        {
          v31 = -1LL;
          if ( v29 + 4 >= v29 )
            v31 = v29 + 4;
          v6 = v29 + 4 < v29 ? 0xC0000095 : 0;
          if ( v29 + 4 < v29 )
            goto LABEL_81;
          v32 = v31 + *(unsigned int *)v29;
          v29 = -1LL;
          if ( v32 >= v31 )
            v29 = v32;
          v6 = v32 < v31 ? 0xC0000095 : 0;
          if ( v32 < v31 )
            goto LABEL_81;
        }
        v33 = *(_DWORD *)v29;
        v34 = -1LL;
        if ( v29 + 4 >= v29 )
          v34 = v29 + 4;
        v6 = v29 + 4 < v29 ? 0xC0000095 : 0;
        if ( v29 + 4 < v29 )
        {
LABEL_81:
          v33 = a3;
          v35 = v66;
          goto LABEL_82;
        }
        v35 = 0LL;
        if ( v33 )
          v35 = v34;
LABEL_82:
        if ( v6 < 0 )
          goto LABEL_139;
        if ( *(_DWORD *)a1 <= 6u )
        {
LABEL_65:
          v6 = -1073741811;
          goto LABEL_139;
        }
        for ( m = 0; m < 6; ++m )
        {
          v37 = -1LL;
          if ( v28 + 4 >= v28 )
            v37 = v28 + 4;
          v6 = v28 + 4 < v28 ? 0xC0000095 : 0;
          if ( v28 + 4 < v28 )
            goto LABEL_98;
          v38 = v37 + *(unsigned int *)v28;
          v28 = -1LL;
          if ( v38 >= v37 )
            v28 = v38;
          v6 = v38 < v37 ? 0xC0000095 : 0;
          if ( v38 < v37 )
            goto LABEL_98;
        }
        v39 = *(_DWORD *)v28;
        v40 = -1LL;
        if ( v28 + 4 >= v28 )
          v40 = v28 + 4;
        v6 = v28 + 4 < v28 ? 0xC0000095 : 0;
        if ( v28 + 4 < v28 )
        {
LABEL_98:
          v39 = a3;
          v41 = a2;
          goto LABEL_99;
        }
        v41 = 0LL;
        if ( v39 )
          v41 = v40;
LABEL_99:
        if ( v6 < 0 )
          goto LABEL_139;
        v42 = qword_1408613D0 ? qword_1408613D0(P, v35, v33, v41, v39) : -1073741637;
        v6 = v42;
        if ( v42 < 0 )
          goto LABEL_139;
        v43 = -1;
        v44 = -1;
        if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
          v44 = *(_DWORD *)(a2 + 16) + 48;
        v6 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
        {
          v45 = v44 + 4;
          v46 = -1;
          if ( v44 + 4 >= v44 )
            v46 = v44 + 4;
          v6 = v45 < v44 ? 0xC0000095 : 0;
          if ( v45 >= v44 )
            v6 = v46 + *(_DWORD *)(a2 + 32) < v46 ? 0xC0000095 : 0;
        }
        if ( v6 < 0 )
          goto LABEL_139;
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        v48 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v6 = -1073741801;
          goto LABEL_139;
        }
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v49 = v42 | 0x10000000;
        v50 = PoolWithTag + 4;
        v51 = -1LL;
        v52 = 0;
        if ( v50 >= v48 )
          v51 = (__int64)v50;
        v6 = v50 < v48 ? 0xC0000095 : 0;
        if ( v50 >= v48 )
        {
          if ( v48 + 8 > &v48[*(unsigned int *)(a4 + 4)] )
          {
LABEL_137:
            v6 = -1073741789;
            goto LABEL_139;
          }
          *(_DWORD *)v48 = 4;
          *(_DWORD *)v51 = v49;
          v52 = ++*(_DWORD *)a4;
        }
        if ( v50 >= v48 )
        {
          v53 = *(_QWORD *)(a4 + 8);
          v69 = v67;
          if ( !v53 )
          {
            v54 = *(_DWORD *)(a4 + 4);
            v55 = v54 + 12;
            if ( v54 + 12 >= v54 )
              v43 = v54 + 12;
            v6 = v55 < v54 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v43;
            if ( v55 >= v54 )
            {
              v6 = 0;
              *(_DWORD *)a4 = v52 + 1;
            }
            goto LABEL_139;
          }
          v56 = *(char **)(a4 + 8);
          v57 = 0;
          if ( v52 )
          {
            do
            {
              v58 = -1;
              if ( *(_DWORD *)v56 < 0xFFFFFFFC )
                v58 = *(_DWORD *)v56 + 4;
              v6 = *(_DWORD *)v56 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v56 + 4) < 4 )
                goto LABEL_139;
              v59 = v58;
              v60 = v56;
              v61 = &v56[v58];
              v62 = -1LL;
              if ( v61 >= v56 )
                v62 = (__int64)&v56[v59];
              v56 = (char *)v62;
              v6 = v61 < v60 ? 0xC0000095 : 0;
              if ( v61 < v60 )
                goto LABEL_139;
            }
            while ( ++v57 < v52 );
          }
          if ( v56 + 4 >= v56 )
            v8 = (__int64)(v56 + 4);
          v6 = v56 + 4 < v56 ? 0xC0000095 : 0;
          if ( v56 + 4 >= v56 )
          {
            if ( (unsigned __int64)(v56 + 12) > v53 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_137;
            *(_DWORD *)v56 = 8;
            *(_QWORD *)v8 = v69;
            ++*(_DWORD *)a4;
          }
        }
LABEL_139:
        if ( P )
          ExFreePoolWithTag(P, 0x20534C53u);
        return (unsigned int)v6;
      }
      if ( !v20
        || (v20 & 1) != 0
        || (v23 = v20, v22[((unsigned __int64)v20 >> 1) - 1])
        || StringCbLengthW(v22, v20, &pcbLength) < 0
        || pcbLength + 2 != v23 )
      {
        v6 = -1073741762;
        goto LABEL_63;
      }
      a3 = pcbLength >> 1;
      pcbLength = v24;
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 >= 0 )
    {
      v6 = 0;
      v25 = 2 * a3 + 2;
      v26 = v25;
      if ( 2 * a3 == -2 )
      {
        v6 = -1073741762;
      }
      else
      {
        v27 = ExAllocatePoolWithTag(PagedPool, v25, 0x20534C53u);
        if ( v27 )
          v16 = v27;
        else
          v6 = -1073741801;
      }
      if ( v6 >= 0 )
      {
        memmove(v16, (const void *)pcbLength, v26);
        P = v16;
        v16 = 0LL;
      }
      if ( v16 )
        ExFreePoolWithTag(v16, 0x20534C53u);
    }
    goto LABEL_63;
  }
  return (unsigned int)v6;
}
