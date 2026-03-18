/*
 * XREFs of sub_1407D3F94 @ 0x1407D3F94
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407D3F94(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned int i; // r9d
  unsigned __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 v13; // r9
  size_t *v14; // rax
  void *v15; // r12
  size_t v16; // rsi
  unsigned int v17; // eax
  size_t v18; // r15
  unsigned int j; // edx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  const wchar_t *v24; // r11
  __int64 v25; // r15
  size_t v26; // r11
  PVOID PoolWithTag; // rax
  unsigned __int64 v28; // rdx
  void *v29; // rsi
  size_t v30; // rdi
  unsigned int v31; // eax
  size_t v32; // r15
  unsigned int k; // r8d
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  unsigned int v36; // ecx
  __int64 v37; // r8
  const wchar_t *v38; // r11
  __int64 v39; // r15
  size_t v40; // r11
  PVOID v41; // rax
  int v42; // edi
  char *v43; // rax
  char *v44; // rdx
  int v45; // edi
  char *v46; // rax
  __int64 v47; // r12
  __int64 v48; // r8
  unsigned int v49; // r10d
  char *v50; // r11
  unsigned int v51; // ecx
  int v52; // r9d
  unsigned int v53; // eax
  char *v54; // r8
  int v55; // edi
  unsigned int v56; // eax
  unsigned int v57; // esi
  char *v58; // rcx
  char *v59; // rdx
  __int64 v60; // rax
  size_t v61; // xmm0_8
  PVOID P; // [rsp+30h] [rbp-20h]
  size_t v64; // [rsp+38h] [rbp-18h] BYREF
  size_t v65; // [rsp+40h] [rbp-10h]
  size_t pcbLength; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v67; // [rsp+A0h] [rbp+50h]

  v67 = a3;
  if ( !a1 || !a2 || !a4 )
  {
    v6 = -1073741811;
    goto LABEL_139;
  }
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
    if ( v9 + 4 >= v9 )
      v8 = v9 + 4;
    v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
      goto LABEL_22;
    v11 = v8 + *(unsigned int *)v9;
    v9 = -1LL;
    if ( v11 >= v8 )
      v9 = v11;
    v6 = v11 < v8 ? 0xC0000095 : 0;
    if ( v11 < v8 )
      goto LABEL_22;
    v8 = -1LL;
  }
  v12 = *(_DWORD *)v9;
  v13 = -1LL;
  if ( v9 + 4 >= v9 )
    v13 = v9 + 4;
  v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
  if ( v9 + 4 < v9 )
  {
LABEL_22:
    v12 = v67;
    v14 = (size_t *)pcbLength;
    goto LABEL_23;
  }
  v14 = 0LL;
  if ( v12 )
    v14 = (size_t *)v13;
LABEL_23:
  if ( v6 >= 0 )
  {
    if ( v12 != 8 )
      goto LABEL_137;
    v65 = *v14;
LABEL_26:
    if ( v6 < 0 )
      goto LABEL_139;
    v15 = 0LL;
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v20 = -1LL;
        if ( v7 + 4 >= v7 )
          v20 = v7 + 4;
        v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
        if ( v7 + 4 < v7 )
          goto LABEL_48;
        v21 = v20 + *(unsigned int *)v7;
        v7 = -1LL;
        if ( v21 >= v20 )
          v7 = v21;
        v6 = v21 < v20 ? 0xC0000095 : 0;
        if ( v21 < v20 )
          goto LABEL_48;
      }
      v22 = *(_DWORD *)v7;
      v23 = -1LL;
      if ( v7 + 4 >= v7 )
        v23 = v7 + 4;
      v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
      {
LABEL_48:
        v22 = v67;
        v24 = (const wchar_t *)pcbLength;
        goto LABEL_49;
      }
      v24 = 0LL;
      if ( v22 )
        v24 = (const wchar_t *)v23;
LABEL_49:
      if ( v6 >= 0 )
      {
        if ( !v22 || (v22 & 1) != 0 )
        {
          v6 = -1073741762;
          goto LABEL_66;
        }
        v25 = v22;
        if ( v24[((unsigned __int64)v22 >> 1) - 1] || StringCbLengthW(v24, v22, &pcbLength) < 0 || pcbLength + 2 != v25 )
        {
          v6 = -1073741762;
          goto LABEL_66;
        }
        v16 = pcbLength >> 1;
        pcbLength = v26;
LABEL_30:
        if ( v6 >= 0 )
        {
          v17 = 2 * v16 + 2;
          v6 = 0;
          v18 = v17;
          if ( 2 * (_DWORD)v16 == -2 )
          {
            v6 = -1073741762;
          }
          else
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x20534C53u);
            if ( PoolWithTag )
              v15 = PoolWithTag;
            else
              v6 = -1073741801;
          }
          if ( v6 >= 0 )
          {
            memmove(v15, (const void *)pcbLength, v18);
            P = v15;
            v15 = 0LL;
            LODWORD(pcbLength) = v16;
          }
          if ( v15 )
            ExFreePoolWithTag(v15, 0x20534C53u);
        }
LABEL_66:
        if ( v6 < 0 )
          goto LABEL_139;
        v28 = *(_QWORD *)(a1 + 8);
        v29 = 0LL;
        if ( v28 && *(_DWORD *)a1 > 5u )
        {
          for ( k = 0; k < 5; ++k )
          {
            v34 = -1LL;
            if ( v28 + 4 >= v28 )
              v34 = v28 + 4;
            v6 = v28 + 4 < v28 ? 0xC0000095 : 0;
            if ( v28 + 4 < v28 )
              goto LABEL_88;
            v35 = v34 + *(unsigned int *)v28;
            v28 = -1LL;
            if ( v35 >= v34 )
              v28 = v35;
            v6 = v35 < v34 ? 0xC0000095 : 0;
            if ( v35 < v34 )
              goto LABEL_88;
          }
          v36 = *(_DWORD *)v28;
          v37 = -1LL;
          if ( v28 + 4 >= v28 )
            v37 = v28 + 4;
          v6 = v28 + 4 < v28 ? 0xC0000095 : 0;
          if ( v28 + 4 < v28 )
          {
LABEL_88:
            v36 = v67;
            v38 = (const wchar_t *)pcbLength;
            goto LABEL_89;
          }
          v38 = 0LL;
          if ( v36 )
            v38 = (const wchar_t *)v37;
LABEL_89:
          if ( v6 >= 0 )
          {
            if ( !v36 || (v36 & 1) != 0 )
            {
              v6 = -1073741762;
            }
            else
            {
              v39 = v36;
              if ( !v38[((unsigned __int64)v36 >> 1) - 1] && StringCbLengthW(v38, v36, &v64) >= 0 && v64 + 2 == v39 )
              {
                v30 = v64 >> 1;
                v64 = v40;
                goto LABEL_70;
              }
              v6 = -1073741762;
            }
LABEL_105:
            if ( v6 < 0 )
              goto LABEL_139;
            v42 = ((__int64 (__fastcall *)(_QWORD, PVOID, _QWORD, size_t))qword_140861468)(
                    (unsigned int)(2 * pcbLength + 2),
                    P,
                    2 * v67 + 2,
                    v64);
            if ( v42 >= 0 )
            {
              v42 = qword_140861410 ? qword_140861410(P) : -1073741637;
              if ( v42 == -1073741198 )
                v42 = 0;
            }
            *(_DWORD *)(a4 + 4) = 20;
            v43 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
            v44 = v43;
            if ( !v43 )
            {
              v6 = -1073741801;
              goto LABEL_139;
            }
            *(_QWORD *)(a4 + 8) = v43;
            *(_DWORD *)a4 = 0;
            v45 = v42 | 0x10000000;
            v46 = v43 + 4;
            v47 = -1LL;
            v48 = -1LL;
            v49 = 0;
            if ( v46 >= v44 )
              v48 = (__int64)v46;
            v6 = v46 < v44 ? 0xC0000095 : 0;
            if ( v46 >= v44 )
            {
              if ( v44 + 8 > &v44[*(unsigned int *)(a4 + 4)] )
                goto LABEL_137;
              *(_DWORD *)v44 = 4;
              *(_DWORD *)v48 = v45;
              v49 = ++*(_DWORD *)a4;
            }
            if ( v46 < v44 )
              goto LABEL_139;
            v50 = *(char **)(a4 + 8);
            pcbLength = v65;
            if ( !v50 )
            {
              v51 = *(_DWORD *)(a4 + 4);
              v52 = -1;
              v53 = v51 + 12;
              if ( v51 + 12 >= v51 )
                v52 = v51 + 12;
              v6 = v53 < v51 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v52;
              if ( v53 >= v51 )
              {
                v6 = 0;
                *(_DWORD *)a4 = v49 + 1;
              }
              goto LABEL_139;
            }
            v54 = v50;
            v55 = 0;
            if ( v49 )
            {
              do
              {
                v56 = -1;
                if ( *(_DWORD *)v54 < 0xFFFFFFFC )
                  v56 = *(_DWORD *)v54 + 4;
                v6 = *(_DWORD *)v54 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v54 + 4) < 4 )
                  goto LABEL_139;
                v57 = v56;
                v58 = v54;
                v59 = &v54[v56];
                v60 = -1LL;
                if ( v59 >= v54 )
                  v60 = (__int64)&v54[v57];
                v54 = (char *)v60;
                v6 = v59 < v58 ? 0xC0000095 : 0;
                if ( v59 < v58 )
                  goto LABEL_139;
              }
              while ( ++v55 < v49 );
            }
            if ( v54 + 4 >= v54 )
              v47 = (__int64)(v54 + 4);
            v6 = v54 + 4 < v54 ? 0xC0000095 : 0;
            if ( v54 + 4 < v54 )
              goto LABEL_139;
            if ( v54 + 12 <= &v50[*(unsigned int *)(a4 + 4)] )
            {
              v61 = pcbLength;
              *(_DWORD *)v54 = 8;
              *(_QWORD *)v47 = v61;
              ++*(_DWORD *)a4;
              goto LABEL_139;
            }
LABEL_137:
            v6 = -1073741789;
            goto LABEL_139;
          }
        }
        else
        {
          v6 = -1073741811;
        }
        LODWORD(v30) = v67;
LABEL_70:
        if ( v6 < 0 )
          goto LABEL_139;
        v31 = 2 * v30 + 2;
        v6 = 0;
        v32 = v31;
        if ( 2 * (_DWORD)v30 == -2 )
        {
          v6 = -1073741762;
        }
        else
        {
          v41 = ExAllocatePoolWithTag(PagedPool, v31, 0x20534C53u);
          if ( v41 )
            v29 = v41;
          else
            v6 = -1073741801;
        }
        if ( v6 >= 0 )
        {
          memmove(v29, (const void *)v64, v32);
          v64 = (size_t)v29;
          v29 = 0LL;
          v67 = v30;
        }
        if ( v29 )
          ExFreePoolWithTag(v29, 0x20534C53u);
        goto LABEL_105;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    LODWORD(v16) = v67;
    goto LABEL_30;
  }
LABEL_139:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v64 )
    ExFreePoolWithTag((PVOID)v64, 0x20534C53u);
  return (unsigned int)v6;
}
