/*
 * XREFs of sub_14072A730 @ 0x14072A730
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14006B320 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14072A730(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r8
  unsigned int i; // r10d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 *v15; // rax
  size_t v16; // rsi
  unsigned int v17; // eax
  size_t v18; // r15
  PVOID PoolWithTag; // rax
  size_t v20; // rbx
  unsigned int j; // r9d
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned int v24; // ecx
  __int64 v25; // r8
  const wchar_t *v26; // r11
  unsigned __int64 v27; // rdx
  size_t v28; // rdi
  unsigned int v29; // eax
  size_t v30; // r15
  PVOID v31; // rax
  size_t v32; // rbx
  __int64 v33; // r15
  size_t v34; // r11
  unsigned int k; // r9d
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  unsigned int v38; // ecx
  __int64 v39; // r8
  const wchar_t *v40; // r11
  __int64 v41; // rcx
  size_t v42; // rsi
  int v43; // edi
  __int64 v44; // r15
  size_t v45; // r11
  char *v46; // rax
  char *v47; // rdx
  int v48; // edi
  char *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r10
  unsigned int v52; // ecx
  int v53; // r9d
  unsigned int v54; // eax
  char *v55; // r8
  int v56; // r11d
  unsigned int v57; // esi
  int v58; // ecx
  char *v59; // rcx
  char *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // xmm0_8
  size_t v64; // [rsp+30h] [rbp-10h] BYREF
  __int64 v65; // [rsp+38h] [rbp-8h]
  size_t pcbLength; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v67; // [rsp+90h] [rbp+50h]

  v67 = a3;
  if ( !a1 || !a2 || !a4 )
  {
    v6 = -1073741811;
    goto LABEL_135;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = *(unsigned int *)v9;
      v12 = v9 + 4;
      if ( v9 + 4 < v9 )
      {
        v12 = -1LL;
        v6 = -1073741675;
      }
      else
      {
        v6 = 0;
      }
      if ( v6 < 0 )
        goto LABEL_23;
      v9 = -1LL;
      if ( v12 + v11 >= v12 )
        v9 = v12 + v11;
      v6 = v12 + v11 < v12 ? 0xC0000095 : 0;
      if ( v12 + v11 < v12 )
        goto LABEL_23;
    }
    v13 = *(_DWORD *)v9;
    v14 = -1LL;
    if ( v9 + 4 >= v9 )
      v14 = v9 + 4;
    v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_23:
      v13 = v67;
      v15 = (__int64 *)pcbLength;
      goto LABEL_24;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (__int64 *)v14;
LABEL_24:
    if ( v6 < 0 )
      goto LABEL_135;
    if ( v13 != 8 )
    {
LABEL_132:
      v6 = -1073741789;
      goto LABEL_135;
    }
    v65 = *v15;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
    goto LABEL_135;
  if ( !v7 || *(_DWORD *)a1 <= 4u )
  {
    v6 = -1073741811;
LABEL_30:
    LODWORD(v16) = v67;
    goto LABEL_31;
  }
  for ( j = 0; j < 4; ++j )
  {
    v22 = *(unsigned int *)v7;
    v23 = v7 + 4;
    if ( v7 + 4 < v7 )
    {
      v23 = -1LL;
      v6 = -1073741675;
    }
    else
    {
      v6 = 0;
    }
    if ( v6 < 0 )
      goto LABEL_51;
    v7 = -1LL;
    if ( v23 + v22 >= v23 )
      v7 = v23 + v22;
    v6 = v23 + v22 < v23 ? 0xC0000095 : 0;
    if ( v23 + v22 < v23 )
      goto LABEL_51;
  }
  v24 = *(_DWORD *)v7;
  v25 = -1LL;
  if ( v7 + 4 >= v7 )
    v25 = v7 + 4;
  v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
  if ( v7 + 4 < v7 )
  {
LABEL_51:
    v24 = v67;
    v26 = (const wchar_t *)pcbLength;
    goto LABEL_52;
  }
  v26 = 0LL;
  if ( v24 )
    v26 = (const wchar_t *)v25;
LABEL_52:
  if ( v6 < 0 )
    goto LABEL_30;
  if ( !v24 || (v24 & 1) != 0 )
  {
LABEL_54:
    v6 = -1073741762;
    goto LABEL_135;
  }
  v33 = v24;
  if ( v26[((unsigned __int64)v24 >> 1) - 1] )
  {
    v6 = -1073741762;
    goto LABEL_135;
  }
  if ( StringCbLengthW(v26, v24, &pcbLength) < 0 || pcbLength + 2 != v33 )
  {
    v6 = -1073741762;
    goto LABEL_135;
  }
  v16 = pcbLength >> 1;
  pcbLength = v34;
LABEL_31:
  if ( v6 < 0 )
    goto LABEL_135;
  v17 = 2 * v16 + 2;
  if ( 2 * (_DWORD)v16 == -2 )
    goto LABEL_54;
  v18 = v17;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x20534C53u);
  v20 = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v6 = -1073741801;
    goto LABEL_135;
  }
  memmove(PoolWithTag, (const void *)pcbLength, v18);
  pcbLength = v20;
  v27 = *(_QWORD *)(a1 + 8);
  if ( !v27 )
  {
    v6 = -1073741811;
LABEL_57:
    LODWORD(v28) = v67;
    goto LABEL_58;
  }
  if ( *(_DWORD *)a1 <= 5u )
  {
    v6 = -1073741811;
    goto LABEL_57;
  }
  for ( k = 0; k < 5; ++k )
  {
    v36 = *(unsigned int *)v27;
    v37 = v27 + 4;
    if ( v27 + 4 < v27 )
    {
      v37 = -1LL;
      v6 = -1073741675;
    }
    else
    {
      v6 = 0;
    }
    if ( v6 < 0 )
      goto LABEL_87;
    v27 = -1LL;
    if ( v37 + v36 >= v37 )
      v27 = v37 + v36;
    v6 = v37 + v36 < v37 ? 0xC0000095 : 0;
    if ( v37 + v36 < v37 )
      goto LABEL_87;
  }
  v38 = *(_DWORD *)v27;
  v39 = -1LL;
  if ( v27 + 4 >= v27 )
    v39 = v27 + 4;
  v6 = v27 + 4 < v27 ? 0xC0000095 : 0;
  if ( v27 + 4 < v27 )
  {
LABEL_87:
    v38 = v67;
    v40 = (const wchar_t *)pcbLength;
    goto LABEL_88;
  }
  v40 = 0LL;
  if ( v38 )
    v40 = (const wchar_t *)v39;
LABEL_88:
  if ( v6 < 0 )
    goto LABEL_57;
  if ( !v38 || (v38 & 1) != 0 )
  {
LABEL_90:
    v6 = -1073741762;
    goto LABEL_135;
  }
  v44 = v38;
  if ( v40[((unsigned __int64)v38 >> 1) - 1] || StringCbLengthW(v40, v38, &v64) < 0 || v64 + 2 != v44 )
  {
    v6 = -1073741762;
    goto LABEL_135;
  }
  v28 = v64 >> 1;
  v64 = v45;
LABEL_58:
  if ( v6 < 0 )
    goto LABEL_135;
  v29 = 2 * v28 + 2;
  if ( 2 * (_DWORD)v28 == -2 )
    goto LABEL_90;
  v30 = v29;
  v31 = ExAllocatePoolWithTag(PagedPool, v29, 0x20534C53u);
  v32 = (size_t)v31;
  if ( !v31 )
  {
    v6 = -1073741801;
    goto LABEL_135;
  }
  memmove(v31, (const void *)v64, v30);
  v64 = v32;
  v41 = (unsigned int)(2 * v16 + 2);
  v42 = pcbLength;
  v43 = ((__int64 (__fastcall *)(__int64, size_t, _QWORD, size_t))qword_1407AC460)(
          v41,
          pcbLength,
          (unsigned int)(2 * v28 + 2),
          v64);
  if ( v43 >= 0 )
  {
    v43 = qword_1407AC420 ? qword_1407AC420(v42) : -1073741637;
    if ( v43 == -1073741198 )
      v43 = 0;
  }
  *(_DWORD *)(a4 + 4) = 20;
  v46 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  v47 = v46;
  if ( !v46 )
  {
    v6 = -1073741801;
    goto LABEL_135;
  }
  *(_QWORD *)(a4 + 8) = v46;
  *(_DWORD *)a4 = 0;
  v48 = v43 | 0x10000000;
  v49 = v46 + 4;
  v50 = -1LL;
  if ( v49 >= v47 )
    v50 = (__int64)v49;
  v6 = v49 < v47 ? 0xC0000095 : 0;
  if ( v49 >= v47 )
  {
    if ( v47 + 8 > &v47[*(unsigned int *)(a4 + 4)] )
      goto LABEL_132;
    *(_DWORD *)v47 = 4;
    *(_DWORD *)v50 = v48;
    ++*(_DWORD *)a4;
  }
  if ( v49 < v47 )
    goto LABEL_135;
  v51 = *(_QWORD *)(a4 + 8);
  if ( v51 )
  {
    v55 = *(char **)(a4 + 8);
    v56 = 0;
    if ( *(_DWORD *)a4 )
    {
      v57 = v67;
      do
      {
        v58 = -1;
        if ( *(_DWORD *)v55 < 0xFFFFFFFC )
          v58 = *(_DWORD *)v55 + 4;
        if ( (unsigned int)(*(_DWORD *)v55 + 4) >= 4 )
          v57 = v58;
        v6 = *(_DWORD *)v55 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( *(_DWORD *)v55 >= 0xFFFFFFFC )
          goto LABEL_135;
        v59 = v55;
        v60 = &v55[v57];
        v61 = -1LL;
        if ( v60 >= v55 )
          v61 = (__int64)&v55[v57];
        v55 = (char *)v61;
        v6 = v60 < v59 ? 0xC0000095 : 0;
        if ( v60 < v59 )
          goto LABEL_135;
      }
      while ( (unsigned int)++v56 < *(_DWORD *)a4 );
    }
    if ( v55 + 4 >= v55 )
      v8 = (__int64)(v55 + 4);
    v6 = v55 + 4 < v55 ? 0xC0000095 : 0;
    if ( v55 + 4 < v55 )
      goto LABEL_135;
    if ( (unsigned __int64)(v55 + 12) <= v51 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v62 = v65;
      *(_DWORD *)v55 = 8;
      *(_QWORD *)v8 = v62;
      goto LABEL_134;
    }
    goto LABEL_132;
  }
  v52 = *(_DWORD *)(a4 + 4);
  v53 = -1;
  v54 = v52 + 12;
  if ( v52 + 12 >= v52 )
    v53 = v52 + 12;
  v6 = v54 < v52 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v53;
  if ( v54 >= v52 )
  {
    v6 = 0;
LABEL_134:
    ++*(_DWORD *)a4;
  }
LABEL_135:
  if ( pcbLength )
    ExFreePoolWithTag((PVOID)pcbLength, 0x20534C53u);
  if ( v64 )
    ExFreePoolWithTag((PVOID)v64, 0x20534C53u);
  return (unsigned int)v6;
}
