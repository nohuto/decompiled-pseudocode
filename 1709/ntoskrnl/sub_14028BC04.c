/*
 * XREFs of sub_14028BC04 @ 0x14028BC04
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14028BC04(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r12
  signed int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned int i; // r10d
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int v17; // r11d
  unsigned __int64 v18; // rdx
  unsigned int j; // r10d
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int v25; // r14d
  int v26; // ebx
  PVOID v27; // rcx
  unsigned int k; // r9d
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rdx
  unsigned int *v33; // rax
  PVOID v34; // r8
  int v35; // r15d
  int v36; // esi
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // r8d
  unsigned int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // r9d
  unsigned int v44; // eax
  int v45; // ecx
  int v46; // r11d
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // edx
  PVOID PoolWithTag; // rax
  __int64 v55; // r10
  int v56; // r15d
  unsigned int v57; // edx
  int v58; // eax
  unsigned int v59; // ecx
  char *v60; // r8
  int v61; // r9d
  unsigned int v62; // eax
  unsigned int v63; // r15d
  char *v64; // rcx
  char *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r10
  unsigned int v69; // edx
  int v70; // eax
  unsigned int v71; // ecx
  char *v72; // r8
  int v73; // r9d
  unsigned int v74; // eax
  unsigned int v75; // r15d
  char *v76; // rcx
  char *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  const void *v80; // r11
  __int64 v81; // r10
  unsigned int v82; // edx
  int v83; // eax
  unsigned int v84; // ecx
  char *v85; // r8
  int v86; // r9d
  unsigned int v87; // eax
  unsigned int v88; // r11d
  char *v89; // rcx
  char *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r9
  __int64 v93; // r9
  int v94; // r15d
  unsigned int v95; // ecx
  unsigned int v96; // eax
  char *v97; // r8
  int v98; // r10d
  unsigned int v99; // eax
  unsigned int v100; // r11d
  char *v101; // rcx
  char *v102; // rdx
  __int64 v103; // rax
  int v105; // [rsp+30h] [rbp-20h]
  unsigned int v106; // [rsp+34h] [rbp-1Ch]
  PVOID Src; // [rsp+40h] [rbp-10h]
  _QWORD *v108; // [rsp+48h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+40h] BYREF

  LODWORD(NumberOfBytes) = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  Src = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v10 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v12 = -1LL;
      if ( v10 + 4 >= v10 )
        v12 = v10 + 4;
      v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_18;
      v13 = v12 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v13 >= v12 )
        v10 = v13;
      v9 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        goto LABEL_18;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_18:
      v14 = NumberOfBytes;
      v16 = v108;
      goto LABEL_19;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_19:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v108 = (_QWORD *)*v16;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    if ( !v4 )
      return (unsigned int)-1073741811;
    v17 = *(_DWORD *)a1;
    if ( v17 <= 4 )
      return (unsigned int)-1073741811;
    v18 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v20 = -1LL;
      if ( v18 + 4 >= v18 )
        v20 = v18 + 4;
      v9 = v18 + 4 < v18 ? 0xC0000095 : 0;
      if ( v18 + 4 < v18 )
        goto LABEL_41;
      v21 = v20 + *(unsigned int *)v18;
      v18 = -1LL;
      if ( v21 >= v20 )
        v18 = v21;
      v9 = v21 < v20 ? 0xC0000095 : 0;
      if ( v21 < v20 )
        goto LABEL_41;
    }
    v22 = *(_DWORD *)v18;
    v23 = -1LL;
    if ( v18 + 4 >= v18 )
      v23 = v18 + 4;
    v9 = v18 + 4 < v18 ? 0xC0000095 : 0;
    if ( v18 + 4 < v18 )
    {
LABEL_41:
      v22 = NumberOfBytes;
      v24 = (__int64)v108;
      goto LABEL_42;
    }
    v24 = 0LL;
    if ( v22 )
      v24 = v23;
LABEL_42:
    if ( v9 >= 0 )
    {
      if ( v17 > 5 )
      {
        for ( k = 0; k < 5; ++k )
        {
          v29 = -1LL;
          if ( v4 + 4 >= v4 )
            v29 = v4 + 4;
          v9 = v4 + 4 < v4 ? 0xC0000095 : 0;
          if ( v4 + 4 < v4 )
            goto LABEL_64;
          v30 = v29 + *(unsigned int *)v4;
          v4 = -1LL;
          if ( v30 >= v29 )
            v4 = v30;
          v9 = v30 < v29 ? 0xC0000095 : 0;
          if ( v30 < v29 )
            goto LABEL_64;
        }
        v31 = *(_DWORD *)v4;
        v32 = -1LL;
        if ( v4 + 4 >= v4 )
          v32 = v4 + 4;
        v9 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
        {
LABEL_64:
          v31 = NumberOfBytes;
          v33 = (unsigned int *)v108;
          goto LABEL_65;
        }
        v33 = 0LL;
        if ( v31 )
          v33 = (unsigned int *)v32;
LABEL_65:
        if ( v9 >= 0 )
        {
          if ( v31 != 4 )
            return (unsigned int)-1073741789;
          v25 = *v33;
LABEL_46:
          if ( v9 < 0 )
            return (unsigned int)v9;
          if ( v25 )
          {
            v26 = 0;
            Src = ExAllocatePoolWithTag(PagedPool, v25, 0x20534C53u);
            v27 = Src;
            if ( !Src )
              return (unsigned int)-1073741801;
          }
          else
          {
            v26 = 1;
            v27 = 0LL;
          }
          if ( qword_1407F33C8 )
          {
            v34 = v27;
            if ( v26 )
              v34 = 0LL;
            v35 = qword_1407F33C8(v24, v22, v34, v25, &NumberOfBytes);
          }
          else
          {
            v35 = -1073741637;
          }
          v36 = -1;
          v106 = v25 + 4;
          v37 = -1;
          if ( v25 < 0xFFFFFFFC )
            v37 = v25 + 4;
          v9 = v25 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v25 + 4 < 4 )
          {
            v40 = NumberOfBytes;
          }
          else
          {
            v38 = v37;
            v39 = v37 + 20;
            if ( v38 >= 0xFFFFFFEC || (v40 = v39 + 8, v39 + 8 < v39) )
            {
              v9 = -1073741675;
              goto LABEL_201;
            }
            v9 = 0;
          }
          if ( v9 < 0 )
            goto LABEL_201;
          v41 = -1;
          if ( v40 < 0xFFFFFFF8 )
            v41 = v40 + 8;
          v9 = v40 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
          if ( v40 + 8 >= 8 )
          {
            v42 = (v41 + 7) & 0xFFFFFFF8;
            if ( v42 >= v41 )
            {
              v44 = v42 + 8;
              v45 = -1;
              if ( v42 + 8 >= v42 )
                v45 = v42 + 8;
              v9 = v44 < v42 ? 0xC0000095 : 0;
              v43 = NumberOfBytes;
              if ( v44 >= v42 )
                v43 = v45;
            }
            else
            {
              v9 = -1073741675;
              v43 = NumberOfBytes;
            }
            if ( v9 >= 0 )
            {
              v46 = *(_DWORD *)(a2 + 16);
              v47 = -1;
              if ( v43 < 0xFFFFFFFC )
                v47 = v43 + 4;
              v9 = v43 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( v43 + 4 >= 4 )
              {
                v48 = v47 + 4;
                v49 = -1;
                if ( v47 + 4 >= v47 )
                  v49 = v47 + 4;
                v9 = v48 < v47 ? 0xC0000095 : 0;
                if ( v48 >= v47 )
                {
                  v50 = v49 + v46;
                  v51 = -1;
                  if ( v49 + v46 >= v49 )
                    v51 = v49 + v46;
                  v9 = v50 < v49 ? 0xC0000095 : 0;
                  if ( v50 >= v49 )
                  {
                    v52 = v51 + 4;
                    v53 = -1;
                    if ( v51 + 4 >= v51 )
                      v53 = v51 + 4;
                    v9 = v52 < v51 ? 0xC0000095 : 0;
                    if ( v52 >= v51 )
                      v9 = v53 + *(_DWORD *)(a2 + 32) < v53 ? 0xC0000095 : 0;
                  }
                }
              }
            }
          }
          if ( v9 < 0 )
            goto LABEL_201;
          if ( !a4 )
          {
            v9 = -1073741811;
            goto LABEL_201;
          }
          *(_DWORD *)(a4 + 4) = v40;
          v9 = 0;
          if ( v40 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v40, 0x20534C53u);
            if ( PoolWithTag )
            {
              *(_QWORD *)(a4 + 8) = PoolWithTag;
              *(_DWORD *)a4 = 0;
            }
            else
            {
              v9 = -1073741801;
            }
          }
          else
          {
            v9 = -1073741762;
          }
          if ( v9 < 0 )
            goto LABEL_201;
          v55 = *(_QWORD *)(a4 + 8);
          v56 = v35 | 0x10000000;
          v105 = v56;
          if ( v55 )
          {
            v60 = *(char **)(a4 + 8);
            v61 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v62 = -1;
                if ( *(_DWORD *)v60 < 0xFFFFFFFC )
                  v62 = *(_DWORD *)v60 + 4;
                v9 = *(_DWORD *)v60 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v60 + 4) < 4 )
                  break;
                v63 = v62;
                v64 = v60;
                v65 = &v60[v62];
                v66 = -1LL;
                if ( v65 >= v60 )
                  v66 = (__int64)&v60[v63];
                v60 = (char *)v66;
                v9 = v65 < v64 ? 0xC0000095 : 0;
                if ( v65 < v64 )
                  break;
                if ( (unsigned int)++v61 >= *(_DWORD *)a4 )
                {
                  v56 = v105;
                  goto LABEL_129;
                }
              }
            }
            else
            {
LABEL_129:
              v67 = -1LL;
              if ( v60 + 4 >= v60 )
                v67 = (__int64)(v60 + 4);
              v9 = v60 + 4 < v60 ? 0xC0000095 : 0;
              if ( v60 + 4 >= v60 )
              {
                if ( (unsigned __int64)(v60 + 8) > v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_198;
                *(_DWORD *)v60 = 4;
                *(_DWORD *)v67 = v56;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v57 = *(_DWORD *)(a4 + 4);
            v58 = -1;
            v59 = v57 + 8;
            if ( v57 + 8 >= v57 )
              v58 = v57 + 8;
            v9 = v59 < v57 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v58;
            if ( v59 >= v57 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_135;
            }
          }
          if ( v9 < 0 )
            goto LABEL_201;
LABEL_135:
          v68 = *(_QWORD *)(a4 + 8);
          if ( v68 )
          {
            v72 = *(char **)(a4 + 8);
            v73 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v74 = -1;
                if ( *(_DWORD *)v72 < 0xFFFFFFFC )
                  v74 = *(_DWORD *)v72 + 4;
                v9 = *(_DWORD *)v72 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v72 + 4) < 4 )
                  break;
                v75 = v74;
                v76 = v72;
                v77 = &v72[v74];
                v78 = -1LL;
                if ( v77 >= v72 )
                  v78 = (__int64)&v72[v75];
                v72 = (char *)v78;
                v9 = v77 < v76 ? 0xC0000095 : 0;
                if ( v77 < v76 )
                  break;
                if ( (unsigned int)++v73 >= *(_DWORD *)a4 )
                  goto LABEL_148;
              }
            }
            else
            {
LABEL_148:
              v79 = -1LL;
              if ( v72 + 4 >= v72 )
                v79 = (__int64)(v72 + 4);
              v9 = v72 + 4 < v72 ? 0xC0000095 : 0;
              if ( v72 + 4 >= v72 )
              {
                if ( (unsigned __int64)(v72 + 12) > v68 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_198;
                *(_DWORD *)v72 = 8;
                *(_QWORD *)v79 = v108;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v69 = *(_DWORD *)(a4 + 4);
            v70 = -1;
            v71 = v69 + 12;
            if ( v69 + 12 >= v69 )
              v70 = v69 + 12;
            v9 = v71 < v69 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v70;
            if ( v71 >= v69 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_154;
            }
          }
          if ( v9 < 0 )
            goto LABEL_201;
LABEL_154:
          v80 = Src;
          if ( Src )
          {
            if ( !v25 )
              goto LABEL_156;
          }
          else if ( v25 )
          {
LABEL_156:
            v9 = -1073741811;
            goto LABEL_180;
          }
          v81 = *(_QWORD *)(a4 + 8);
          if ( v81 )
          {
            v85 = *(char **)(a4 + 8);
            v86 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v87 = -1;
                if ( *(_DWORD *)v85 < 0xFFFFFFFC )
                  v87 = *(_DWORD *)v85 + 4;
                v9 = *(_DWORD *)v85 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v85 + 4) < 4 )
                  break;
                v88 = v87;
                v89 = v85;
                v90 = &v85[v87];
                v91 = -1LL;
                if ( v90 >= v85 )
                  v91 = (__int64)&v85[v88];
                v85 = (char *)v91;
                v9 = v90 < v89 ? 0xC0000095 : 0;
                if ( v90 < v89 )
                  break;
                if ( (unsigned int)++v86 >= *(_DWORD *)a4 )
                {
                  v80 = Src;
                  goto LABEL_173;
                }
              }
            }
            else
            {
LABEL_173:
              v92 = -1LL;
              if ( v85 + 4 >= v85 )
                v92 = (__int64)(v85 + 4);
              v9 = v85 + 4 < v85 ? 0xC0000095 : 0;
              if ( v85 + 4 >= v85 )
              {
                if ( (unsigned __int64)&v85[v25 + 4] > v81 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_198;
                *(_DWORD *)v85 = v25;
                if ( v80 )
                  memmove((void *)v92, v80, v25);
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v9 = v25 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( v106 >= 4 )
            {
              v82 = *(_DWORD *)(a4 + 4);
              v83 = -1;
              v84 = v82 + v106;
              if ( v82 + v106 >= v82 )
                v83 = v82 + v106;
              v9 = v84 < v82 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v83;
              if ( v84 >= v82 )
              {
                ++*(_DWORD *)a4;
LABEL_181:
                v93 = *(_QWORD *)(a4 + 8);
                v94 = NumberOfBytes;
                if ( !v93 )
                {
                  v95 = *(_DWORD *)(a4 + 4);
                  v96 = v95 + 8;
                  if ( v95 + 8 >= v95 )
                    v36 = v95 + 8;
                  v9 = v96 < v95 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v36;
                  if ( v96 < v95 )
                    goto LABEL_201;
                  v9 = 0;
                  goto LABEL_200;
                }
                v97 = *(char **)(a4 + 8);
                v98 = 0;
                if ( *(_DWORD *)a4 )
                {
                  do
                  {
                    v99 = -1;
                    if ( *(_DWORD *)v97 < 0xFFFFFFFC )
                      v99 = *(_DWORD *)v97 + 4;
                    v9 = *(_DWORD *)v97 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v97 + 4) < 4 )
                      goto LABEL_201;
                    v100 = v99;
                    v101 = v97;
                    v102 = &v97[v99];
                    v103 = -1LL;
                    if ( v102 >= v97 )
                      v103 = (__int64)&v97[v100];
                    v97 = (char *)v103;
                    v9 = v102 < v101 ? 0xC0000095 : 0;
                    if ( v102 < v101 )
                      goto LABEL_201;
                  }
                  while ( (unsigned int)++v98 < *(_DWORD *)a4 );
                }
                if ( v97 + 4 >= v97 )
                  v5 = (__int64)(v97 + 4);
                v9 = v97 + 4 < v97 ? 0xC0000095 : 0;
                if ( v97 + 4 < v97 )
                {
LABEL_201:
                  if ( Src )
                    ExFreePoolWithTag(Src, 0x20534C53u);
                  return (unsigned int)v9;
                }
                if ( (unsigned __int64)(v97 + 8) <= v93 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v97 = 4;
                  *(_DWORD *)v5 = v94;
LABEL_200:
                  ++*(_DWORD *)a4;
                  goto LABEL_201;
                }
LABEL_198:
                v9 = -1073741789;
                goto LABEL_201;
              }
            }
          }
LABEL_180:
          if ( v9 < 0 )
            goto LABEL_201;
          goto LABEL_181;
        }
      }
      else
      {
        v9 = -1073741811;
      }
      v25 = NumberOfBytes;
      goto LABEL_46;
    }
  }
  return (unsigned int)v9;
}
