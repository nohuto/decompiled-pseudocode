/*
 * XREFs of sub_140727404 @ 0x140727404
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140727404(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // r12
  signed int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned int i; // r10d
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // r9
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int j; // r10d
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // r9
  unsigned int *v24; // rax
  unsigned int v25; // r11d
  unsigned __int64 v26; // rdx
  unsigned int k; // r10d
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned int m; // r10d
  __int64 v33; // rax
  unsigned __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // r15d
  int v37; // ebx
  void *v38; // rcx
  unsigned int n; // r9d
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rdx
  unsigned int *v44; // rax
  void *v45; // r10
  int v46; // r13d
  unsigned int v47; // ecx
  int v48; // esi
  int v49; // eax
  unsigned int v50; // r8d
  unsigned int v51; // ecx
  unsigned int v52; // r9d
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // ecx
  unsigned int v56; // ecx
  int v57; // r11d
  unsigned int v58; // eax
  unsigned int v59; // edx
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // edx
  PVOID PoolWithTag; // rax
  __int64 v65; // r10
  int v66; // r13d
  unsigned int v67; // edx
  int v68; // eax
  unsigned int v69; // ecx
  char *v70; // r8
  int v71; // r9d
  unsigned int v72; // r14d
  int v73; // ecx
  __int64 v74; // rax
  char *v75; // rdx
  char *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r10
  unsigned int v79; // edx
  int v80; // eax
  unsigned int v81; // ecx
  char *v82; // r8
  int v83; // r9d
  unsigned int v84; // r14d
  int v85; // ecx
  __int64 v86; // rax
  char *v87; // rdx
  char *v88; // rcx
  __int64 v89; // rdx
  _QWORD *v90; // xmm0_8
  void *v91; // r11
  __int64 v92; // r10
  unsigned int v93; // ecx
  unsigned int v94; // edx
  int v95; // eax
  unsigned int v96; // ecx
  char *v97; // r8
  int v98; // r9d
  unsigned int v99; // r11d
  int v100; // ecx
  __int64 v101; // rax
  char *v102; // rdx
  char *v103; // rcx
  __int64 v104; // r9
  __int64 v105; // r9
  int v106; // r15d
  unsigned int v107; // ecx
  unsigned int v108; // eax
  char *v109; // r8
  int v110; // r10d
  unsigned int v111; // r11d
  int v112; // ecx
  __int64 v113; // rax
  char *v114; // rdx
  char *v115; // rcx
  __int64 v116; // rdx
  unsigned int v118; // [rsp+50h] [rbp-20h]
  int v119; // [rsp+54h] [rbp-1Ch] BYREF
  void *Src; // [rsp+58h] [rbp-18h]
  _QWORD *v121; // [rsp+60h] [rbp-10h]
  unsigned int NumberOfBytes; // [rsp+C0h] [rbp+50h]
  unsigned int NumberOfBytesa; // [rsp+C0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v118 = 0;
  NumberOfBytes = 0;
  Src = 0LL;
  v119 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v11 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v13 = *(unsigned int *)v11;
      v14 = v11 + 4;
      if ( v11 + 4 < v11 )
      {
        v14 = -1LL;
        v10 = -1073741675;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 < 0 )
        goto LABEL_19;
      v11 = -1LL;
      if ( v14 + v13 >= v14 )
        v11 = v14 + v13;
      v10 = v14 + v13 < v14 ? 0xC0000095 : 0;
      if ( v14 + v13 < v14 )
        goto LABEL_19;
    }
    v15 = *(_DWORD *)v11;
    v16 = -1LL;
    if ( v11 + 4 >= v11 )
      v16 = v11 + 4;
    v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_19:
      v15 = 0;
      v17 = v121;
      goto LABEL_20;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_20:
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v121 = (_QWORD *)*v17;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v18 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v20 = *(unsigned int *)v18;
      v21 = v18 + 4;
      if ( v18 + 4 < v18 )
      {
        v21 = -1LL;
        v10 = -1073741675;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 < 0 )
        goto LABEL_43;
      v18 = -1LL;
      if ( v21 + v20 >= v21 )
        v18 = v21 + v20;
      v10 = v21 + v20 < v21 ? 0xC0000095 : 0;
      if ( v21 + v20 < v21 )
        goto LABEL_43;
    }
    v22 = *(_DWORD *)v18;
    v23 = -1LL;
    if ( v18 + 4 >= v18 )
      v23 = v18 + 4;
    v10 = v18 + 4 < v18 ? 0xC0000095 : 0;
    if ( v18 + 4 < v18 )
    {
LABEL_43:
      v22 = 0;
      v24 = (unsigned int *)v121;
      goto LABEL_44;
    }
    v24 = 0LL;
    if ( v22 )
      v24 = (unsigned int *)v23;
LABEL_44:
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v22 != 4 )
      return (unsigned int)-1073741789;
    v7 = *v24;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !v4 )
    return (unsigned int)-1073741811;
  v25 = *(_DWORD *)a1;
  if ( v25 <= 5 )
    return (unsigned int)-1073741811;
  v26 = v4;
  for ( k = 0; k < 5; ++k )
  {
    v28 = *(unsigned int *)v26;
    v29 = v26 + 4;
    if ( v26 + 4 < v26 )
    {
      v29 = -1LL;
      v10 = -1073741675;
    }
    else
    {
      v10 = 0;
    }
    if ( v10 < 0 )
      return (unsigned int)v10;
    v26 = -1LL;
    if ( v29 + v28 >= v29 )
      v26 = v29 + v28;
    v10 = v29 + v28 < v29 ? 0xC0000095 : 0;
    if ( v29 + v28 < v29 )
      goto LABEL_65;
  }
  v30 = -1LL;
  if ( v26 + 4 >= v26 )
    v30 = v26 + 4;
  v10 = v26 + 4 < v26 ? 0xC0000095 : 0;
  if ( v26 + 4 >= v26 )
  {
    v118 = *(_DWORD *)v26;
    if ( *(_DWORD *)v26 )
      v8 = v30;
  }
LABEL_65:
  if ( v10 >= 0 )
  {
    if ( v25 > 6 )
    {
      v31 = v4;
      for ( m = 0; m < 6; ++m )
      {
        v33 = *(unsigned int *)v31;
        v34 = v31 + 4;
        if ( v31 + 4 < v31 )
        {
          v34 = -1LL;
          v10 = -1073741675;
        }
        else
        {
          v10 = 0;
        }
        if ( v10 < 0 )
          return (unsigned int)v10;
        v31 = -1LL;
        if ( v34 + v33 >= v34 )
          v31 = v34 + v33;
        v10 = v34 + v33 < v34 ? 0xC0000095 : 0;
        if ( v34 + v33 < v34 )
          goto LABEL_81;
      }
      v35 = -1LL;
      if ( v31 + 4 >= v31 )
        v35 = v31 + 4;
      v10 = v31 + 4 < v31 ? 0xC0000095 : 0;
      if ( v31 + 4 >= v31 )
      {
        NumberOfBytes = *(_DWORD *)v31;
        if ( *(_DWORD *)v31 )
          v9 = v35;
      }
LABEL_81:
      if ( v10 < 0 )
        return (unsigned int)v10;
      if ( v25 > 7 )
      {
        for ( n = 0; n < 7; ++n )
        {
          v40 = *(unsigned int *)v4;
          v41 = v4 + 4;
          if ( v4 + 4 < v4 )
          {
            v41 = -1LL;
            v10 = -1073741675;
          }
          else
          {
            v10 = 0;
          }
          if ( v10 < 0 )
            goto LABEL_104;
          v4 = -1LL;
          if ( v41 + v40 >= v41 )
            v4 = v41 + v40;
          v10 = v41 + v40 < v41 ? 0xC0000095 : 0;
          if ( v41 + v40 < v41 )
            goto LABEL_104;
        }
        v42 = *(_DWORD *)v4;
        v43 = -1LL;
        if ( v4 + 4 >= v4 )
          v43 = v4 + 4;
        v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
        {
LABEL_104:
          v42 = NumberOfBytes;
          v44 = (unsigned int *)v121;
          goto LABEL_105;
        }
        v44 = 0LL;
        if ( v42 )
          v44 = (unsigned int *)v43;
LABEL_105:
        if ( v10 >= 0 )
        {
          if ( v42 != 4 )
            return (unsigned int)-1073741789;
          v36 = *v44;
LABEL_85:
          if ( v10 < 0 )
            return (unsigned int)v10;
          if ( v36 )
          {
            v37 = 0;
            Src = ExAllocatePoolWithTag(PagedPool, v36, 0x20534C53u);
            v38 = Src;
            if ( !Src )
              return (unsigned int)-1073741801;
          }
          else
          {
            v37 = 1;
            v38 = 0LL;
          }
          if ( qword_1407AC410 )
          {
            v45 = v38;
            if ( v37 )
              v45 = 0LL;
            v46 = qword_1407AC410(v7, v8, v118, v9, NumberOfBytes, v45, v36, &v119);
          }
          else
          {
            v46 = -1073741637;
          }
          v47 = 12;
          v48 = -1;
          NumberOfBytesa = v36 + 4;
          v49 = -1;
          if ( v36 < 0xFFFFFFFC )
            v49 = v36 + 4;
          v10 = v36 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v36 + 4 >= 4 )
            v47 = v49;
          if ( v36 >= 0xFFFFFFFC )
          {
            v50 = v36 + 4;
          }
          else
          {
            if ( v47 >= 0xFFFFFFEC || (v50 = v47 + 28, v47 + 28 < v47 + 20) )
            {
              v10 = -1073741675;
              goto LABEL_256;
            }
            v10 = 0;
          }
          if ( v10 < 0 )
            goto LABEL_256;
          v51 = -1;
          if ( v50 < 0xFFFFFFF8 )
            v51 = v50 + 8;
          v10 = v50 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
          if ( v50 + 8 >= 8 )
          {
            v52 = v36 + 4;
            v53 = (v51 + 7) & 0xFFFFFFF8;
            if ( v53 >= v51 )
            {
              v54 = v53 + 8;
              v55 = -1;
              if ( v53 + 8 >= v53 )
                v55 = v53 + 8;
              v10 = v54 < v53 ? 0xC0000095 : 0;
              if ( v54 >= v53 )
                v52 = v55;
            }
            else
            {
              v10 = -1073741675;
            }
            if ( v10 < 0 )
              goto LABEL_256;
            v56 = -1;
            v57 = *(_DWORD *)(a2 + 16);
            if ( v52 < 0xFFFFFFFC )
              v56 = v52 + 4;
            v10 = v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( v52 + 4 >= 4 )
            {
              v58 = v56 + 4;
              v59 = -1;
              if ( v56 + 4 >= v56 )
                v59 = v56 + 4;
              v10 = v58 < v56 ? 0xC0000095 : 0;
              if ( v58 >= v56 )
              {
                v60 = v59 + v57;
                v61 = -1;
                if ( v59 + v57 >= v59 )
                  v61 = v59 + v57;
                v10 = v60 < v59 ? 0xC0000095 : 0;
                if ( v60 >= v59 )
                {
                  v62 = v61 + 4;
                  v63 = -1;
                  if ( v61 + 4 >= v61 )
                    v63 = v61 + 4;
                  v10 = v62 < v61 ? 0xC0000095 : 0;
                  if ( v62 >= v61 )
                    v10 = v63 + *(_DWORD *)(a2 + 32) < v63 ? 0xC0000095 : 0;
                }
              }
            }
          }
          if ( v10 < 0 )
            goto LABEL_256;
          if ( !a4 )
          {
            v10 = -1073741811;
            goto LABEL_256;
          }
          *(_DWORD *)(a4 + 4) = v50;
          v10 = 0;
          if ( v50 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v50, 0x20534C53u);
            if ( PoolWithTag )
            {
              *(_QWORD *)(a4 + 8) = PoolWithTag;
              *(_DWORD *)a4 = 0;
            }
            else
            {
              v10 = -1073741801;
            }
          }
          else
          {
            v10 = -1073741762;
          }
          if ( v10 < 0 )
            goto LABEL_256;
          v65 = *(_QWORD *)(a4 + 8);
          v66 = v46 | 0x10000000;
          if ( v65 )
          {
            v70 = *(char **)(a4 + 8);
            v71 = 0;
            if ( *(_DWORD *)a4 )
            {
              v72 = v36 + 4;
              while ( 1 )
              {
                v73 = -1;
                if ( *(_DWORD *)v70 < 0xFFFFFFFC )
                  v73 = *(_DWORD *)v70 + 4;
                if ( (unsigned int)(*(_DWORD *)v70 + 4) >= 4 )
                  v72 = v73;
                v10 = *(_DWORD *)v70 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v70 >= 0xFFFFFFFC )
                  break;
                v74 = -1LL;
                v75 = &v70[v72];
                v76 = v70;
                if ( v75 >= v70 )
                  v74 = (__int64)&v70[v72];
                v70 = (char *)v74;
                v10 = v75 < v76 ? 0xC0000095 : 0;
                if ( v75 < v76 )
                  break;
                if ( (unsigned int)++v71 >= *(_DWORD *)a4 )
                  goto LABEL_173;
              }
            }
            else
            {
LABEL_173:
              v77 = -1LL;
              if ( v70 + 4 >= v70 )
                v77 = (__int64)(v70 + 4);
              v10 = v70 + 4 < v70 ? 0xC0000095 : 0;
              if ( v70 + 4 >= v70 )
              {
                if ( (unsigned __int64)(v70 + 8) > v65 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_253;
                *(_DWORD *)v70 = 4;
                *(_DWORD *)v77 = v66;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v67 = *(_DWORD *)(a4 + 4);
            v68 = -1;
            v69 = v67 + 8;
            if ( v67 + 8 >= v67 )
              v68 = v67 + 8;
            v10 = v69 < v67 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v68;
            if ( v69 >= v67 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_179;
            }
          }
          if ( v10 < 0 )
            goto LABEL_256;
LABEL_179:
          v78 = *(_QWORD *)(a4 + 8);
          if ( v78 )
          {
            v82 = *(char **)(a4 + 8);
            v83 = 0;
            if ( *(_DWORD *)a4 )
            {
              v84 = v36 + 4;
              while ( 1 )
              {
                v85 = -1;
                if ( *(_DWORD *)v82 < 0xFFFFFFFC )
                  v85 = *(_DWORD *)v82 + 4;
                if ( (unsigned int)(*(_DWORD *)v82 + 4) >= 4 )
                  v84 = v85;
                v10 = *(_DWORD *)v82 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v82 >= 0xFFFFFFFC )
                  break;
                v86 = -1LL;
                v87 = &v82[v84];
                v88 = v82;
                if ( v87 >= v82 )
                  v86 = (__int64)&v82[v84];
                v82 = (char *)v86;
                v10 = v87 < v88 ? 0xC0000095 : 0;
                if ( v87 < v88 )
                  break;
                if ( (unsigned int)++v83 >= *(_DWORD *)a4 )
                  goto LABEL_195;
              }
            }
            else
            {
LABEL_195:
              v89 = -1LL;
              if ( v82 + 4 >= v82 )
                v89 = (__int64)(v82 + 4);
              v10 = v82 + 4 < v82 ? 0xC0000095 : 0;
              if ( v82 + 4 >= v82 )
              {
                if ( (unsigned __int64)(v82 + 12) > v78 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_253;
                v90 = v121;
                *(_DWORD *)v82 = 8;
                *(_QWORD *)v89 = v90;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v79 = *(_DWORD *)(a4 + 4);
            v80 = -1;
            v81 = v79 + 12;
            if ( v79 + 12 >= v79 )
              v80 = v79 + 12;
            v10 = v81 < v79 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v80;
            if ( v81 >= v79 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_201;
            }
          }
          if ( v10 < 0 )
            goto LABEL_256;
LABEL_201:
          v91 = Src;
          if ( Src )
          {
            if ( !v36 )
              goto LABEL_203;
          }
          else if ( v36 )
          {
LABEL_203:
            v10 = -1073741811;
            goto LABEL_232;
          }
          v92 = *(_QWORD *)(a4 + 8);
          if ( v92 )
          {
            v97 = *(char **)(a4 + 8);
            v98 = 0;
            if ( *(_DWORD *)a4 )
            {
              v99 = v36 + 4;
              while ( 1 )
              {
                v100 = -1;
                if ( *(_DWORD *)v97 < 0xFFFFFFFC )
                  v100 = *(_DWORD *)v97 + 4;
                if ( (unsigned int)(*(_DWORD *)v97 + 4) >= 4 )
                  v99 = v100;
                v10 = *(_DWORD *)v97 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v97 >= 0xFFFFFFFC )
                  break;
                v101 = -1LL;
                v102 = &v97[v99];
                v103 = v97;
                if ( v102 >= v97 )
                  v101 = (__int64)&v97[v99];
                v97 = (char *)v101;
                v10 = v102 < v103 ? 0xC0000095 : 0;
                if ( v102 < v103 )
                  break;
                if ( (unsigned int)++v98 >= *(_DWORD *)a4 )
                {
                  v91 = Src;
                  goto LABEL_225;
                }
              }
            }
            else
            {
LABEL_225:
              v104 = -1LL;
              if ( v97 + 4 >= v97 )
                v104 = (__int64)(v97 + 4);
              v10 = v97 + 4 < v97 ? 0xC0000095 : 0;
              if ( v97 + 4 >= v97 )
              {
                if ( (unsigned __int64)&v97[v36 + 4] > v92 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_253;
                *(_DWORD *)v97 = v36;
                if ( v91 )
                  memmove((void *)v104, v91, v36);
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v93 = v36 + 4;
            v10 = v36 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( NumberOfBytesa >= 4 )
              v93 = v36 + 4;
            if ( v36 >= 0xFFFFFFFC )
              goto LABEL_256;
            v94 = *(_DWORD *)(a4 + 4);
            v95 = -1;
            v96 = v94 + v93;
            if ( v96 >= v94 )
              v95 = v96;
            v10 = v96 < v94 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v95;
            if ( v96 >= v94 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_233;
            }
          }
LABEL_232:
          if ( v10 < 0 )
            goto LABEL_256;
LABEL_233:
          v105 = *(_QWORD *)(a4 + 8);
          v106 = v119;
          if ( !v105 )
          {
            v107 = *(_DWORD *)(a4 + 4);
            v108 = v107 + 8;
            if ( v107 + 8 >= v107 )
              v48 = v107 + 8;
            v10 = v108 < v107 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v48;
            if ( v108 < v107 )
              goto LABEL_256;
            v10 = 0;
            goto LABEL_255;
          }
          v109 = *(char **)(a4 + 8);
          v110 = 0;
          if ( *(_DWORD *)a4 )
          {
            v111 = NumberOfBytesa;
            do
            {
              v112 = -1;
              if ( *(_DWORD *)v109 < 0xFFFFFFFC )
                v112 = *(_DWORD *)v109 + 4;
              if ( (unsigned int)(*(_DWORD *)v109 + 4) >= 4 )
                v111 = v112;
              v10 = *(_DWORD *)v109 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v109 >= 0xFFFFFFFC )
                goto LABEL_256;
              v113 = -1LL;
              v114 = &v109[v111];
              v115 = v109;
              if ( v114 >= v109 )
                v113 = (__int64)&v109[v111];
              v109 = (char *)v113;
              v10 = v114 < v115 ? 0xC0000095 : 0;
              if ( v114 < v115 )
                goto LABEL_256;
            }
            while ( (unsigned int)++v110 < *(_DWORD *)a4 );
          }
          v116 = -1LL;
          if ( v109 + 4 >= v109 )
            v116 = (__int64)(v109 + 4);
          v10 = v109 + 4 < v109 ? 0xC0000095 : 0;
          if ( v109 + 4 >= v109 )
          {
            if ( (unsigned __int64)(v109 + 8) <= v105 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v109 = 4;
              *(_DWORD *)v116 = v106;
LABEL_255:
              ++*(_DWORD *)a4;
              goto LABEL_256;
            }
LABEL_253:
            v10 = -1073741789;
          }
LABEL_256:
          if ( Src )
            ExFreePoolWithTag(Src, 0x20534C53u);
          return (unsigned int)v10;
        }
      }
      else
      {
        v10 = -1073741811;
      }
      v36 = NumberOfBytes;
      goto LABEL_85;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
