/*
 * XREFs of sub_140766B2C @ 0x140766B2C
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140766B2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r12
  __int64 v8; // rsi
  unsigned int v9; // r13d
  __int64 v10; // r14
  signed int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned int i; // r9d
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned int v19; // r11d
  unsigned __int64 v20; // rdx
  int v21; // r9d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  int v26; // r9d
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r15d
  int v31; // ebx
  void *v32; // rcx
  unsigned int j; // edx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  unsigned int v36; // ecx
  __int64 v37; // rdx
  unsigned int *v38; // rax
  void *v39; // r10
  int v40; // r14d
  int v41; // esi
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // r8d
  unsigned int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // r9d
  unsigned int v49; // eax
  int v50; // ecx
  unsigned int v51; // ecx
  int v52; // r11d
  unsigned int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // edx
  PVOID PoolWithTag; // rax
  __int64 v60; // r10
  int v61; // r14d
  unsigned int v62; // edx
  int v63; // eax
  unsigned int v64; // ecx
  char *v65; // r8
  int v66; // r9d
  unsigned int v67; // eax
  unsigned int v68; // r14d
  char *v69; // rcx
  char *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r10
  unsigned int v74; // edx
  int v75; // eax
  unsigned int v76; // ecx
  char *v77; // r8
  int v78; // r9d
  unsigned int v79; // eax
  unsigned int v80; // r14d
  char *v81; // rcx
  char *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // xmm0_8
  void *v86; // r11
  __int64 v87; // r10
  unsigned int v88; // edx
  int v89; // eax
  unsigned int v90; // ecx
  char *v91; // r8
  int v92; // r9d
  unsigned int v93; // eax
  unsigned int v94; // r11d
  char *v95; // rcx
  char *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // r9
  __int64 v99; // r9
  int v100; // r15d
  unsigned int v101; // ecx
  unsigned int v102; // eax
  char *v103; // r8
  int v104; // r10d
  unsigned int v105; // eax
  unsigned int v106; // r11d
  char *v107; // rcx
  char *v108; // rdx
  __int64 v109; // rax
  int v111; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v112; // [rsp+44h] [rbp-1Ch]
  unsigned int v113; // [rsp+48h] [rbp-18h]
  void *Src; // [rsp+50h] [rbp-10h]
  _QWORD *v115; // [rsp+58h] [rbp-8h]
  unsigned int NumberOfBytes; // [rsp+B0h] [rbp+50h]
  int NumberOfBytesa; // [rsp+B0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  NumberOfBytes = 0;
  Src = 0LL;
  v111 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v12 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v14 = -1LL;
      if ( v12 + 4 >= v12 )
        v14 = v12 + 4;
      v11 = v12 + 4 < v12 ? 0xC0000095 : 0;
      if ( v12 + 4 < v12 )
        goto LABEL_18;
      v15 = v14 + *(unsigned int *)v12;
      v12 = -1LL;
      if ( v15 >= v14 )
        v12 = v15;
      v11 = v15 < v14 ? 0xC0000095 : 0;
      if ( v15 < v14 )
        goto LABEL_18;
    }
    v16 = *(_DWORD *)v12;
    v17 = -1LL;
    if ( v12 + 4 >= v12 )
      v17 = v12 + 4;
    v11 = v12 + 4 < v12 ? 0xC0000095 : 0;
    if ( v12 + 4 < v12 )
    {
LABEL_18:
      v16 = 0;
      v18 = v115;
      goto LABEL_19;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = (_QWORD *)v17;
LABEL_19:
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v16 != 8 )
      return (unsigned int)-1073741789;
    v115 = (_QWORD *)*v18;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( !v4 )
    return (unsigned int)-1073741811;
  v19 = *(_DWORD *)a1;
  if ( v19 <= 4 )
    return (unsigned int)-1073741811;
  v20 = v4;
  v21 = 0;
  while ( 1 )
  {
    v22 = -1LL;
    if ( v20 + 4 >= v20 )
      v22 = v20 + 4;
    v11 = v20 + 4 < v20 ? 0xC0000095 : 0;
    if ( v20 + 4 < v20 )
      break;
    v23 = v22 + *(unsigned int *)v20;
    v20 = -1LL;
    if ( v23 >= v22 )
      v20 = v23;
    v11 = v23 < v22 ? 0xC0000095 : 0;
    if ( v23 < v22 )
      break;
    if ( (unsigned int)++v21 >= 4 )
    {
      v24 = -1LL;
      if ( v20 + 4 >= v20 )
        v24 = v20 + 4;
      v11 = v20 + 4 < v20 ? 0xC0000095 : 0;
      if ( v20 + 4 >= v20 )
      {
        v9 = *(_DWORD *)v20;
        if ( *(_DWORD *)v20 )
          v8 = v24;
      }
      break;
    }
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v19 <= 5 )
    return (unsigned int)-1073741811;
  v25 = v4;
  v26 = 0;
  while ( 1 )
  {
    v27 = -1LL;
    if ( v25 + 4 >= v25 )
      v27 = v25 + 4;
    v11 = v25 + 4 < v25 ? 0xC0000095 : 0;
    if ( v25 + 4 < v25 )
      break;
    v28 = v27 + *(unsigned int *)v25;
    v25 = -1LL;
    if ( v28 >= v27 )
      v25 = v28;
    v11 = v28 < v27 ? 0xC0000095 : 0;
    if ( v28 < v27 )
      break;
    if ( (unsigned int)++v26 >= 5 )
    {
      v29 = -1LL;
      if ( v25 + 4 >= v25 )
        v29 = v25 + 4;
      v11 = v25 + 4 < v25 ? 0xC0000095 : 0;
      if ( v25 + 4 >= v25 )
      {
        NumberOfBytes = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 )
          v10 = v29;
      }
      break;
    }
  }
  if ( v11 >= 0 )
  {
    if ( v19 > 6 )
    {
      for ( j = 0; j < 6; ++j )
      {
        v34 = -1LL;
        if ( v4 + 4 >= v4 )
          v34 = v4 + 4;
        v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
          goto LABEL_77;
        v35 = v34 + *(unsigned int *)v4;
        v4 = -1LL;
        if ( v35 >= v34 )
          v4 = v35;
        v11 = v35 < v34 ? 0xC0000095 : 0;
        if ( v35 < v34 )
          goto LABEL_77;
      }
      v36 = *(_DWORD *)v4;
      v37 = -1LL;
      if ( v4 + 4 >= v4 )
        v37 = v4 + 4;
      v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
      {
LABEL_77:
        v36 = NumberOfBytes;
        v38 = (unsigned int *)v115;
        goto LABEL_78;
      }
      v38 = 0LL;
      if ( v36 )
        v38 = (unsigned int *)v37;
LABEL_78:
      if ( v11 >= 0 )
      {
        if ( v36 != 4 )
          return (unsigned int)-1073741789;
        v30 = *v38;
LABEL_59:
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( v30 )
        {
          v31 = 0;
          Src = ExAllocatePoolWithTag(PagedPool, v30, 0x20534C53u);
          v32 = Src;
          if ( !Src )
            return (unsigned int)-1073741801;
        }
        else
        {
          v31 = 1;
          v32 = 0LL;
        }
        if ( qword_1407F33F8 )
        {
          v39 = v32;
          if ( v31 )
            v39 = 0LL;
          v40 = qword_1407F33F8(v8, v9, v10, NumberOfBytes, v39, v30, &v111);
        }
        else
        {
          v40 = -1073741637;
        }
        v41 = -1;
        v112 = v30 + 4;
        v42 = -1;
        if ( v30 < 0xFFFFFFFC )
          v42 = v30 + 4;
        v113 = v30 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        v11 = v113;
        if ( v30 + 4 < 4 )
        {
          v45 = NumberOfBytes;
        }
        else
        {
          v43 = v42;
          v44 = v42 + 20;
          if ( v43 >= 0xFFFFFFEC || (v45 = v44 + 8, v44 + 8 < v44) )
          {
            v11 = -1073741675;
            goto LABEL_214;
          }
          v11 = 0;
        }
        if ( v11 < 0 )
          goto LABEL_214;
        v46 = -1;
        if ( v45 < 0xFFFFFFF8 )
          v46 = v45 + 8;
        v11 = v45 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
        if ( v45 + 8 >= 8 )
        {
          v47 = (v46 + 7) & 0xFFFFFFF8;
          if ( v47 >= v46 )
          {
            v49 = v47 + 8;
            v50 = -1;
            if ( v47 + 8 >= v47 )
              v50 = v47 + 8;
            v11 = v49 < v47 ? 0xC0000095 : 0;
            v48 = NumberOfBytes;
            if ( v49 >= v47 )
              v48 = v50;
          }
          else
          {
            v11 = -1073741675;
            v48 = NumberOfBytes;
          }
          if ( v11 < 0 )
            goto LABEL_214;
          v51 = -1;
          v52 = *(_DWORD *)(a2 + 16);
          if ( v48 < 0xFFFFFFFC )
            v51 = v48 + 4;
          v11 = v48 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v48 + 4 >= 4 )
          {
            v53 = v51 + 4;
            v54 = -1;
            if ( v51 + 4 >= v51 )
              v54 = v51 + 4;
            v11 = v53 < v51 ? 0xC0000095 : 0;
            if ( v53 >= v51 )
            {
              v55 = v54 + v52;
              v56 = -1;
              if ( v54 + v52 >= v54 )
                v56 = v54 + v52;
              v11 = v55 < v54 ? 0xC0000095 : 0;
              if ( v55 >= v54 )
              {
                v57 = v56 + 4;
                v58 = -1;
                if ( v56 + 4 >= v56 )
                  v58 = v56 + 4;
                v11 = v57 < v56 ? 0xC0000095 : 0;
                if ( v57 >= v56 )
                  v11 = v58 + *(_DWORD *)(a2 + 32) < v58 ? 0xC0000095 : 0;
              }
            }
          }
        }
        if ( v11 < 0 )
          goto LABEL_214;
        if ( !a4 )
        {
          v11 = -1073741811;
          goto LABEL_214;
        }
        *(_DWORD *)(a4 + 4) = v45;
        v11 = 0;
        if ( v45 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v45, 0x20534C53u);
          if ( PoolWithTag )
          {
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v11 = -1073741801;
          }
        }
        else
        {
          v11 = -1073741762;
        }
        if ( v11 < 0 )
          goto LABEL_214;
        v60 = *(_QWORD *)(a4 + 8);
        v61 = v40 | 0x10000000;
        NumberOfBytesa = v61;
        if ( v60 )
        {
          v65 = *(char **)(a4 + 8);
          v66 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v67 = -1;
              if ( *(_DWORD *)v65 < 0xFFFFFFFC )
                v67 = *(_DWORD *)v65 + 4;
              v11 = *(_DWORD *)v65 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v65 + 4) < 4 )
                break;
              v68 = v67;
              v69 = v65;
              v70 = &v65[v67];
              v71 = -1LL;
              if ( v70 >= v65 )
                v71 = (__int64)&v65[v68];
              v65 = (char *)v71;
              v11 = v70 < v69 ? 0xC0000095 : 0;
              if ( v70 < v69 )
                break;
              if ( (unsigned int)++v66 >= *(_DWORD *)a4 )
              {
                v61 = NumberOfBytesa;
                goto LABEL_142;
              }
            }
          }
          else
          {
LABEL_142:
            v72 = -1LL;
            if ( v65 + 4 >= v65 )
              v72 = (__int64)(v65 + 4);
            v11 = v65 + 4 < v65 ? 0xC0000095 : 0;
            if ( v65 + 4 >= v65 )
            {
              if ( (unsigned __int64)(v65 + 8) > v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_211;
              *(_DWORD *)v65 = 4;
              *(_DWORD *)v72 = v61;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v62 = *(_DWORD *)(a4 + 4);
          v63 = -1;
          v64 = v62 + 8;
          if ( v62 + 8 >= v62 )
            v63 = v62 + 8;
          v11 = v64 < v62 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v63;
          if ( v64 >= v62 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_148;
          }
        }
        if ( v11 < 0 )
          goto LABEL_214;
LABEL_148:
        v73 = *(_QWORD *)(a4 + 8);
        if ( v73 )
        {
          v77 = *(char **)(a4 + 8);
          v78 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v79 = -1;
              if ( *(_DWORD *)v77 < 0xFFFFFFFC )
                v79 = *(_DWORD *)v77 + 4;
              v11 = *(_DWORD *)v77 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v77 + 4) < 4 )
                break;
              v80 = v79;
              v81 = v77;
              v82 = &v77[v79];
              v83 = -1LL;
              if ( v82 >= v77 )
                v83 = (__int64)&v77[v80];
              v77 = (char *)v83;
              v11 = v82 < v81 ? 0xC0000095 : 0;
              if ( v82 < v81 )
                break;
              if ( (unsigned int)++v78 >= *(_DWORD *)a4 )
                goto LABEL_161;
            }
          }
          else
          {
LABEL_161:
            v84 = -1LL;
            if ( v77 + 4 >= v77 )
              v84 = (__int64)(v77 + 4);
            v11 = v77 + 4 < v77 ? 0xC0000095 : 0;
            if ( v77 + 4 >= v77 )
            {
              if ( (unsigned __int64)(v77 + 12) > v73 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_211;
              v85 = v115;
              *(_DWORD *)v77 = 8;
              *(_QWORD *)v84 = v85;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v74 = *(_DWORD *)(a4 + 4);
          v75 = -1;
          v76 = v74 + 12;
          if ( v74 + 12 >= v74 )
            v75 = v74 + 12;
          v11 = v76 < v74 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v75;
          if ( v76 >= v74 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_167;
          }
        }
        if ( v11 < 0 )
          goto LABEL_214;
LABEL_167:
        v86 = Src;
        if ( Src )
        {
          if ( !v30 )
            goto LABEL_169;
        }
        else if ( v30 )
        {
LABEL_169:
          v11 = -1073741811;
          goto LABEL_193;
        }
        v87 = *(_QWORD *)(a4 + 8);
        if ( v87 )
        {
          v91 = *(char **)(a4 + 8);
          v92 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v93 = -1;
              if ( *(_DWORD *)v91 < 0xFFFFFFFC )
                v93 = *(_DWORD *)v91 + 4;
              v11 = *(_DWORD *)v91 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v91 + 4) < 4 )
                break;
              v94 = v93;
              v95 = v91;
              v96 = &v91[v93];
              v97 = -1LL;
              if ( v96 >= v91 )
                v97 = (__int64)&v91[v94];
              v91 = (char *)v97;
              v11 = v96 < v95 ? 0xC0000095 : 0;
              if ( v96 < v95 )
                break;
              if ( (unsigned int)++v92 >= *(_DWORD *)a4 )
              {
                v86 = Src;
                goto LABEL_186;
              }
            }
          }
          else
          {
LABEL_186:
            v98 = -1LL;
            if ( v91 + 4 >= v91 )
              v98 = (__int64)(v91 + 4);
            v11 = v91 + 4 < v91 ? 0xC0000095 : 0;
            if ( v91 + 4 >= v91 )
            {
              if ( (unsigned __int64)&v91[v30 + 4] > v87 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_211;
              *(_DWORD *)v91 = v30;
              if ( v86 )
                memmove((void *)v98, v86, v30);
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v11 = v113;
          if ( v112 >= 4 )
          {
            v88 = *(_DWORD *)(a4 + 4);
            v89 = -1;
            v90 = v88 + v112;
            if ( v88 + v112 >= v88 )
              v89 = v88 + v112;
            v11 = v90 < v88 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v89;
            if ( v90 >= v88 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_194;
            }
          }
        }
LABEL_193:
        if ( v11 < 0 )
          goto LABEL_214;
LABEL_194:
        v99 = *(_QWORD *)(a4 + 8);
        v100 = v111;
        if ( !v99 )
        {
          v101 = *(_DWORD *)(a4 + 4);
          v102 = v101 + 8;
          if ( v101 + 8 >= v101 )
            v41 = v101 + 8;
          v11 = v102 < v101 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v41;
          if ( v102 < v101 )
            goto LABEL_214;
          v11 = 0;
          goto LABEL_213;
        }
        v103 = *(char **)(a4 + 8);
        v104 = 0;
        if ( *(_DWORD *)a4 )
        {
          do
          {
            v105 = -1;
            if ( *(_DWORD *)v103 < 0xFFFFFFFC )
              v105 = *(_DWORD *)v103 + 4;
            v11 = *(_DWORD *)v103 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v103 + 4) < 4 )
              goto LABEL_214;
            v106 = v105;
            v107 = v103;
            v108 = &v103[v105];
            v109 = -1LL;
            if ( v108 >= v103 )
              v109 = (__int64)&v103[v106];
            v103 = (char *)v109;
            v11 = v108 < v107 ? 0xC0000095 : 0;
            if ( v108 < v107 )
              goto LABEL_214;
          }
          while ( (unsigned int)++v104 < *(_DWORD *)a4 );
        }
        if ( v103 + 4 >= v103 )
          v5 = (__int64)(v103 + 4);
        v11 = v103 + 4 < v103 ? 0xC0000095 : 0;
        if ( v103 + 4 >= v103 )
        {
          if ( (unsigned __int64)(v103 + 8) <= v99 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v103 = 4;
            *(_DWORD *)v5 = v100;
LABEL_213:
            ++*(_DWORD *)a4;
            goto LABEL_214;
          }
LABEL_211:
          v11 = -1073741789;
        }
LABEL_214:
        if ( Src )
          ExFreePoolWithTag(Src, 0x20534C53u);
        return (unsigned int)v11;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    v30 = NumberOfBytes;
    goto LABEL_59;
  }
  return (unsigned int)v11;
}
