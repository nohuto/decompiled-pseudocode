/*
 * XREFs of sub_140729EF8 @ 0x140729EF8
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14006B320 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140729EF8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r13
  signed int v7; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned int i; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // r9
  __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int j; // r10d
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned int v21; // ecx
  __int64 v22; // r9
  unsigned int *v23; // rax
  unsigned int k; // r9d
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  const wchar_t *v29; // r11
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  size_t v32; // r11
  unsigned int v33; // eax
  size_t v34; // rsi
  PVOID PoolWithTag; // rax
  PVOID v36; // rbx
  unsigned int m; // r9d
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  unsigned int v40; // ecx
  __int64 v41; // r8
  const wchar_t *v42; // r11
  unsigned __int64 v43; // r8
  __int64 v44; // rsi
  size_t v45; // r11
  unsigned int v46; // eax
  size_t v47; // rsi
  PVOID v48; // rax
  PVOID v49; // rbx
  unsigned int v50; // r11d
  unsigned __int64 v51; // rdx
  unsigned int n; // r10d
  __int64 v53; // rax
  unsigned __int64 v54; // r9
  unsigned int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // r14
  unsigned __int64 v58; // rdx
  unsigned int ii; // r10d
  __int64 v60; // rax
  unsigned __int64 v61; // r9
  unsigned int v62; // r10d
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int jj; // r9d
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned int v68; // ecx
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
  __int64 v80; // r9
  unsigned int v81; // ecx
  unsigned int v82; // eax
  char *v83; // r8
  int v84; // r10d
  unsigned int v85; // r11d
  int v86; // ecx
  char *v87; // rcx
  char *v88; // rdx
  __int64 v89; // rax
  unsigned int v91; // [rsp+58h] [rbp-19h]
  PVOID P; // [rsp+60h] [rbp-11h]
  PVOID v93; // [rsp+68h] [rbp-9h]
  __int64 v94; // [rsp+70h] [rbp-1h]
  size_t pcbLength; // [rsp+78h] [rbp+7h] BYREF
  __int64 v96; // [rsp+80h] [rbp+Fh]
  __int64 v97; // [rsp+88h] [rbp+17h]
  __int64 v99; // [rsp+E0h] [rbp+6Fh]

  v93 = 0LL;
  v6 = 0LL;
  v96 = 0LL;
  v94 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = *(unsigned int *)v10;
      v13 = v10 + 4;
      if ( v10 + 4 < v10 )
      {
        v13 = -1LL;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 0 )
        goto LABEL_22;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v7 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_22;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_22:
      v14 = a3;
      v16 = (__int64 *)a2;
      goto LABEL_23;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (__int64 *)v15;
LABEL_23:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v97 = *v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    v17 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *(unsigned int *)v17;
      v20 = v17 + 4;
      if ( v17 + 4 < v17 )
      {
        v20 = -1LL;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 0 )
        goto LABEL_46;
      v17 = -1LL;
      if ( v20 + v19 >= v20 )
        v17 = v20 + v19;
      v7 = v20 + v19 < v20 ? 0xC0000095 : 0;
      if ( v20 + v19 < v20 )
        goto LABEL_46;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v7 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_46:
      v21 = a3;
      v23 = (unsigned int *)a2;
      goto LABEL_47;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (unsigned int *)v22;
LABEL_47:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v21 != 4 )
      return (unsigned int)-1073741789;
    v91 = *v23;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( !v8 || *(_DWORD *)a1 <= 5u )
  {
    v7 = -1073741811;
    goto LABEL_84;
  }
  for ( k = 0; k < 5; ++k )
  {
    v25 = *(unsigned int *)v8;
    v26 = v8 + 4;
    if ( v8 + 4 < v8 )
    {
      v26 = -1LL;
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 < 0 )
      goto LABEL_69;
    v8 = -1LL;
    if ( v26 + v25 >= v26 )
      v8 = v26 + v25;
    v7 = v26 + v25 < v26 ? 0xC0000095 : 0;
    if ( v26 + v25 < v26 )
      goto LABEL_69;
  }
  v27 = *(_DWORD *)v8;
  v28 = -1LL;
  if ( v8 + 4 >= v8 )
    v28 = v8 + 4;
  v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_69:
    v27 = a3;
    v29 = (const wchar_t *)a2;
    goto LABEL_70;
  }
  v29 = 0LL;
  if ( v27 )
    v29 = (const wchar_t *)v28;
LABEL_70:
  if ( v7 >= 0 )
  {
    if ( !v27 || (v27 & 1) != 0 )
      return (unsigned int)-1073741762;
    v31 = v27;
    if ( v29[((unsigned __int64)v27 >> 1) - 1] )
      return (unsigned int)-1073741762;
    if ( StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v31 )
      return (unsigned int)-1073741762;
    a3 = pcbLength >> 1;
    pcbLength = v32;
LABEL_84:
    if ( v7 < 0 )
      return (unsigned int)v7;
    v33 = 2 * a3 + 2;
    if ( 2 * a3 != -2 )
    {
      v34 = v33;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
      v36 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, (const void *)pcbLength, v34);
      P = v36;
      v30 = *(_QWORD *)(a1 + 8);
      if ( v30 && *(_DWORD *)a1 > 6u )
      {
        for ( m = 0; m < 6; ++m )
        {
          v38 = *(unsigned int *)v30;
          v39 = v30 + 4;
          if ( v30 + 4 < v30 )
          {
            v39 = -1LL;
            v7 = -1073741675;
          }
          else
          {
            v7 = 0;
          }
          if ( v7 < 0 )
            goto LABEL_105;
          v30 = -1LL;
          if ( v39 + v38 >= v39 )
            v30 = v39 + v38;
          v7 = v39 + v38 < v39 ? 0xC0000095 : 0;
          if ( v39 + v38 < v39 )
            goto LABEL_105;
        }
        v40 = *(_DWORD *)v30;
        v41 = -1LL;
        if ( v30 + 4 >= v30 )
          v41 = v30 + 4;
        v7 = v30 + 4 < v30 ? 0xC0000095 : 0;
        if ( v30 + 4 < v30 )
        {
LABEL_105:
          v40 = a3;
          v42 = (const wchar_t *)a2;
          goto LABEL_106;
        }
        v42 = 0LL;
        if ( v40 )
          v42 = (const wchar_t *)v41;
LABEL_106:
        if ( v7 < 0 )
          goto LABEL_220;
        if ( !v40 || (v40 & 1) != 0 )
          goto LABEL_108;
        v44 = v40;
        if ( v42[((unsigned __int64)v40 >> 1) - 1] || StringCbLengthW(v42, v40, &pcbLength) < 0 || pcbLength + 2 != v44 )
        {
          v7 = -1073741762;
          goto LABEL_220;
        }
        a3 = pcbLength >> 1;
        pcbLength = v45;
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v7 < 0 )
        goto LABEL_220;
      v46 = 2 * a3 + 2;
      if ( 2 * a3 != -2 )
      {
        v47 = v46;
        v48 = ExAllocatePoolWithTag(PagedPool, v46, 0x20534C53u);
        v49 = v48;
        if ( !v48 )
        {
          v7 = -1073741801;
          goto LABEL_220;
        }
        memmove(v48, (const void *)pcbLength, v47);
        v93 = v49;
        v43 = *(_QWORD *)(a1 + 8);
        if ( !v43 )
          goto LABEL_111;
        v50 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 <= 7u )
          goto LABEL_111;
        v51 = *(_QWORD *)(a1 + 8);
        for ( n = 0; n < 7; ++n )
        {
          v53 = *(unsigned int *)v51;
          v54 = v51 + 4;
          if ( v51 + 4 < v51 )
          {
            v54 = -1LL;
            v7 = -1073741675;
          }
          else
          {
            v7 = 0;
          }
          if ( v7 < 0 )
            goto LABEL_140;
          v51 = -1LL;
          if ( v54 + v53 >= v54 )
            v51 = v54 + v53;
          v7 = v54 + v53 < v54 ? 0xC0000095 : 0;
          if ( v54 + v53 < v54 )
            goto LABEL_140;
        }
        v55 = *(_DWORD *)v51;
        v56 = -1LL;
        if ( v51 + 4 >= v51 )
          v56 = v51 + 4;
        v7 = v51 + 4 < v51 ? 0xC0000095 : 0;
        if ( v51 + 4 < v51 )
        {
LABEL_140:
          v55 = a3;
          v57 = v96;
          goto LABEL_141;
        }
        v57 = 0LL;
        if ( v55 )
          v57 = v56;
LABEL_141:
        if ( v7 < 0 )
          goto LABEL_220;
        if ( v50 <= 8 )
          goto LABEL_111;
        v58 = v43;
        for ( ii = 0; ii < 8; ++ii )
        {
          v60 = *(unsigned int *)v58;
          v61 = v58 + 4;
          if ( v58 + 4 < v58 )
          {
            v61 = -1LL;
            v7 = -1073741675;
          }
          else
          {
            v7 = 0;
          }
          if ( v7 < 0 )
            goto LABEL_158;
          v58 = -1LL;
          if ( v61 + v60 >= v61 )
            v58 = v61 + v60;
          v7 = v61 + v60 < v61 ? 0xC0000095 : 0;
          if ( v61 + v60 < v61 )
            goto LABEL_158;
        }
        v62 = *(_DWORD *)v58;
        v63 = -1LL;
        if ( v58 + 4 >= v58 )
          v63 = v58 + 4;
        v7 = v58 + 4 < v58 ? 0xC0000095 : 0;
        if ( v58 + 4 < v58 )
        {
LABEL_158:
          v62 = a3;
          goto LABEL_159;
        }
        v64 = 0LL;
        if ( v62 )
          v64 = v63;
        v94 = v64;
LABEL_159:
        if ( v7 < 0 )
          goto LABEL_220;
        if ( v50 > 9 )
        {
          for ( jj = 0; jj < 9; ++jj )
          {
            v66 = *(unsigned int *)v43;
            v67 = v43 + 4;
            if ( v43 + 4 < v43 )
            {
              v67 = -1LL;
              v7 = -1073741675;
            }
            else
            {
              v7 = 0;
            }
            if ( v7 < 0 )
              goto LABEL_176;
            v43 = -1LL;
            if ( v67 + v66 >= v67 )
              v43 = v67 + v66;
            v7 = v67 + v66 < v67 ? 0xC0000095 : 0;
            if ( v67 + v66 < v67 )
              goto LABEL_176;
          }
          v68 = *(_DWORD *)v43;
          v69 = -1LL;
          if ( v43 + 4 >= v43 )
            v69 = v43 + 4;
          v7 = v43 + 4 < v43 ? 0xC0000095 : 0;
          if ( v43 + 4 < v43 )
          {
LABEL_176:
            v68 = a3;
            goto LABEL_177;
          }
          if ( v68 )
            v6 = v69;
LABEL_177:
          if ( v7 < 0 )
            goto LABEL_220;
          v70 = qword_1407AC418 ? qword_1407AC418(v91, P, v93, v57, v55, v94, v62, v6, v68) : -1073741637;
          v7 = v70;
          if ( v70 < 0 )
            goto LABEL_220;
          v71 = -1;
          v72 = -1;
          if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
            v72 = *(_DWORD *)(a2 + 16) + 48;
          v7 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
          if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
          {
            v73 = v72 + 4;
            v74 = -1;
            if ( v72 + 4 >= v72 )
              v74 = v72 + 4;
            v7 = v73 < v72 ? 0xC0000095 : 0;
            if ( v73 >= v72 )
              v7 = v74 + *(_DWORD *)(a2 + 32) < v74 ? 0xC0000095 : 0;
          }
          if ( v7 < 0 )
            goto LABEL_220;
          *(_DWORD *)(a4 + 4) = 20;
          v75 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
          v76 = v75;
          if ( !v75 )
          {
            v7 = -1073741801;
            goto LABEL_220;
          }
          *(_QWORD *)(a4 + 8) = v75;
          *(_DWORD *)a4 = 0;
          v77 = v70 | 0x10000000;
          v78 = v75 + 4;
          v79 = -1LL;
          if ( v78 >= v76 )
            v79 = (__int64)v78;
          v7 = v78 < v76 ? 0xC0000095 : 0;
          if ( v78 >= v76 )
          {
            if ( v76 + 8 > &v76[*(unsigned int *)(a4 + 4)] )
            {
LABEL_196:
              v7 = -1073741789;
              goto LABEL_220;
            }
            *(_DWORD *)v76 = 4;
            *(_DWORD *)v79 = v77;
            ++*(_DWORD *)a4;
          }
          if ( v78 >= v76 )
          {
            v80 = *(_QWORD *)(a4 + 8);
            v99 = v97;
            if ( !v80 )
            {
              v81 = *(_DWORD *)(a4 + 4);
              v82 = v81 + 12;
              if ( v81 + 12 >= v81 )
                v71 = v81 + 12;
              v7 = v82 < v81 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v71;
              if ( v82 >= v81 )
              {
                ++*(_DWORD *)a4;
                v7 = 0;
              }
              goto LABEL_220;
            }
            v83 = *(char **)(a4 + 8);
            v84 = 0;
            if ( *(_DWORD *)a4 )
            {
              v85 = a3;
              do
              {
                v86 = -1;
                if ( *(_DWORD *)v83 < 0xFFFFFFFC )
                  v86 = *(_DWORD *)v83 + 4;
                if ( (unsigned int)(*(_DWORD *)v83 + 4) >= 4 )
                  v85 = v86;
                v7 = *(_DWORD *)v83 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v83 >= 0xFFFFFFFC )
                  goto LABEL_220;
                v87 = v83;
                v88 = &v83[v85];
                v89 = -1LL;
                if ( v88 >= v83 )
                  v89 = (__int64)&v83[v85];
                v83 = (char *)v89;
                v7 = v88 < v87 ? 0xC0000095 : 0;
                if ( v88 < v87 )
                  goto LABEL_220;
              }
              while ( (unsigned int)++v84 < *(_DWORD *)a4 );
            }
            if ( v83 + 4 >= v83 )
              v9 = (__int64)(v83 + 4);
            v7 = v83 + 4 < v83 ? 0xC0000095 : 0;
            if ( v83 + 4 >= v83 )
            {
              if ( (unsigned __int64)(v83 + 12) <= v80 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v83 = 8;
                *(_QWORD *)v9 = v99;
                ++*(_DWORD *)a4;
                goto LABEL_220;
              }
              goto LABEL_196;
            }
          }
        }
        else
        {
LABEL_111:
          v7 = -1073741811;
        }
LABEL_220:
        if ( P )
          ExFreePoolWithTag(P, 0x20534C53u);
        if ( v93 )
          ExFreePoolWithTag(v93, 0x20534C53u);
        return (unsigned int)v7;
      }
LABEL_108:
      v7 = -1073741762;
      goto LABEL_220;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v7;
}
