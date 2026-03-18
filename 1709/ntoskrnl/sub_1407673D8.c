/*
 * XREFs of sub_1407673D8 @ 0x1407673D8
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407673D8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r13
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // r14
  signed int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned int i; // r9d
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int j; // r9d
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // r9
  unsigned int *v25; // rax
  unsigned int v26; // r11d
  unsigned __int64 v27; // rdx
  int v28; // r9d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  int v33; // r9d
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // r15d
  int v38; // ebx
  void *v39; // rcx
  unsigned int k; // edx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rcx
  unsigned int v43; // ecx
  __int64 v44; // rdx
  unsigned int *v45; // rax
  void *v46; // r10
  int v47; // r14d
  int v48; // esi
  int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // r8d
  unsigned int v53; // ecx
  unsigned int v54; // edx
  unsigned int v55; // r9d
  unsigned int v56; // eax
  int v57; // ecx
  unsigned int v58; // ecx
  int v59; // r11d
  unsigned int v60; // eax
  unsigned int v61; // edx
  unsigned int v62; // eax
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned int v65; // edx
  PVOID PoolWithTag; // rax
  __int64 v67; // r10
  int v68; // r14d
  unsigned int v69; // edx
  int v70; // eax
  unsigned int v71; // ecx
  char *v72; // r8
  int v73; // r9d
  unsigned int v74; // eax
  unsigned int v75; // r14d
  char *v76; // rcx
  char *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r10
  unsigned int v81; // edx
  int v82; // eax
  unsigned int v83; // ecx
  char *v84; // r8
  int v85; // r9d
  unsigned int v86; // eax
  unsigned int v87; // r14d
  char *v88; // rcx
  char *v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdx
  _QWORD *v92; // xmm0_8
  void *v93; // r11
  __int64 v94; // r10
  unsigned int v95; // edx
  int v96; // eax
  unsigned int v97; // ecx
  char *v98; // r8
  int v99; // r9d
  unsigned int v100; // eax
  unsigned int v101; // r11d
  char *v102; // rcx
  char *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // r9
  __int64 v106; // r9
  int v107; // r15d
  unsigned int v108; // ecx
  unsigned int v109; // eax
  char *v110; // r8
  int v111; // r10d
  unsigned int v112; // eax
  unsigned int v113; // r11d
  char *v114; // rcx
  char *v115; // rdx
  __int64 v116; // rax
  unsigned int v118; // [rsp+50h] [rbp-20h]
  unsigned int v119; // [rsp+50h] [rbp-20h]
  int v120; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v121; // [rsp+58h] [rbp-18h]
  void *Src; // [rsp+60h] [rbp-10h]
  _QWORD *v123; // [rsp+68h] [rbp-8h]
  unsigned int NumberOfBytes; // [rsp+C0h] [rbp+50h]
  int NumberOfBytesa; // [rsp+C0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  v118 = 0;
  NumberOfBytes = 0;
  Src = 0LL;
  v120 = 0;
  v8 = 0;
  v9 = 0LL;
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
      v18 = v123;
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
    v123 = (_QWORD *)*v18;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v19 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v21 = -1LL;
      if ( v19 + 4 >= v19 )
        v21 = v19 + 4;
      v11 = v19 + 4 < v19 ? 0xC0000095 : 0;
      if ( v19 + 4 < v19 )
        goto LABEL_41;
      v22 = v21 + *(unsigned int *)v19;
      v19 = -1LL;
      if ( v22 >= v21 )
        v19 = v22;
      v11 = v22 < v21 ? 0xC0000095 : 0;
      if ( v22 < v21 )
        goto LABEL_41;
    }
    v23 = *(_DWORD *)v19;
    v24 = -1LL;
    if ( v19 + 4 >= v19 )
      v24 = v19 + 4;
    v11 = v19 + 4 < v19 ? 0xC0000095 : 0;
    if ( v19 + 4 < v19 )
    {
LABEL_41:
      v23 = 0;
      v25 = (unsigned int *)v123;
      goto LABEL_42;
    }
    v25 = 0LL;
    if ( v23 )
      v25 = (unsigned int *)v24;
LABEL_42:
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v23 != 4 )
      return (unsigned int)-1073741789;
    v8 = *v25;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( !v4 )
    return (unsigned int)-1073741811;
  v26 = *(_DWORD *)a1;
  if ( v26 <= 5 )
    return (unsigned int)-1073741811;
  v27 = v4;
  v28 = 0;
  while ( 1 )
  {
    v29 = -1LL;
    if ( v27 + 4 >= v27 )
      v29 = v27 + 4;
    v11 = v27 + 4 < v27 ? 0xC0000095 : 0;
    if ( v27 + 4 < v27 )
      break;
    v30 = v29 + *(unsigned int *)v27;
    v27 = -1LL;
    if ( v30 >= v29 )
      v27 = v30;
    v11 = v30 < v29 ? 0xC0000095 : 0;
    if ( v30 < v29 )
      break;
    if ( (unsigned int)++v28 >= 5 )
    {
      v31 = -1LL;
      if ( v27 + 4 >= v27 )
        v31 = v27 + 4;
      v11 = v27 + 4 < v27 ? 0xC0000095 : 0;
      if ( v27 + 4 >= v27 )
      {
        v118 = *(_DWORD *)v27;
        if ( *(_DWORD *)v27 )
          v9 = v31;
      }
      break;
    }
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v26 <= 6 )
    return (unsigned int)-1073741811;
  v32 = v4;
  v33 = 0;
  while ( 1 )
  {
    v34 = -1LL;
    if ( v32 + 4 >= v32 )
      v34 = v32 + 4;
    v11 = v32 + 4 < v32 ? 0xC0000095 : 0;
    if ( v32 + 4 < v32 )
      break;
    v35 = v34 + *(unsigned int *)v32;
    v32 = -1LL;
    if ( v35 >= v34 )
      v32 = v35;
    v11 = v35 < v34 ? 0xC0000095 : 0;
    if ( v35 < v34 )
      break;
    if ( (unsigned int)++v33 >= 6 )
    {
      v36 = -1LL;
      if ( v32 + 4 >= v32 )
        v36 = v32 + 4;
      v11 = v32 + 4 < v32 ? 0xC0000095 : 0;
      if ( v32 + 4 >= v32 )
      {
        NumberOfBytes = *(_DWORD *)v32;
        if ( *(_DWORD *)v32 )
          v10 = v36;
      }
      break;
    }
  }
  if ( v11 >= 0 )
  {
    if ( v26 > 7 )
    {
      for ( k = 0; k < 7; ++k )
      {
        v41 = -1LL;
        if ( v4 + 4 >= v4 )
          v41 = v4 + 4;
        v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
          goto LABEL_99;
        v42 = v41 + *(unsigned int *)v4;
        v4 = -1LL;
        if ( v42 >= v41 )
          v4 = v42;
        v11 = v42 < v41 ? 0xC0000095 : 0;
        if ( v42 < v41 )
          goto LABEL_99;
      }
      v43 = *(_DWORD *)v4;
      v44 = -1LL;
      if ( v4 + 4 >= v4 )
        v44 = v4 + 4;
      v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
      {
LABEL_99:
        v43 = NumberOfBytes;
        v45 = (unsigned int *)v123;
        goto LABEL_100;
      }
      v45 = 0LL;
      if ( v43 )
        v45 = (unsigned int *)v44;
LABEL_100:
      if ( v11 >= 0 )
      {
        if ( v43 != 4 )
          return (unsigned int)-1073741789;
        v37 = *v45;
LABEL_81:
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( v37 )
        {
          v38 = 0;
          Src = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
          v39 = Src;
          if ( !Src )
            return (unsigned int)-1073741801;
        }
        else
        {
          v38 = 1;
          v39 = 0LL;
        }
        if ( qword_1407F3400 )
        {
          v46 = v39;
          if ( v38 )
            v46 = 0LL;
          v47 = qword_1407F3400(v8, v9, v118, v10, NumberOfBytes, v46, v37, &v120);
        }
        else
        {
          v47 = -1073741637;
        }
        v48 = -1;
        v119 = v37 + 4;
        v49 = -1;
        if ( v37 < 0xFFFFFFFC )
          v49 = v37 + 4;
        v121 = v37 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        v11 = v121;
        if ( v37 + 4 < 4 )
        {
          v52 = NumberOfBytes;
        }
        else
        {
          v50 = v49;
          v51 = v49 + 20;
          if ( v50 >= 0xFFFFFFEC || (v52 = v51 + 8, v51 + 8 < v51) )
          {
            v11 = -1073741675;
            goto LABEL_236;
          }
          v11 = 0;
        }
        if ( v11 < 0 )
          goto LABEL_236;
        v53 = -1;
        if ( v52 < 0xFFFFFFF8 )
          v53 = v52 + 8;
        v11 = v52 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
        if ( v52 + 8 >= 8 )
        {
          v54 = (v53 + 7) & 0xFFFFFFF8;
          if ( v54 >= v53 )
          {
            v56 = v54 + 8;
            v57 = -1;
            if ( v54 + 8 >= v54 )
              v57 = v54 + 8;
            v11 = v56 < v54 ? 0xC0000095 : 0;
            v55 = NumberOfBytes;
            if ( v56 >= v54 )
              v55 = v57;
          }
          else
          {
            v11 = -1073741675;
            v55 = NumberOfBytes;
          }
          if ( v11 < 0 )
            goto LABEL_236;
          v58 = -1;
          v59 = *(_DWORD *)(a2 + 16);
          if ( v55 < 0xFFFFFFFC )
            v58 = v55 + 4;
          v11 = v55 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v55 + 4 >= 4 )
          {
            v60 = v58 + 4;
            v61 = -1;
            if ( v58 + 4 >= v58 )
              v61 = v58 + 4;
            v11 = v60 < v58 ? 0xC0000095 : 0;
            if ( v60 >= v58 )
            {
              v62 = v61 + v59;
              v63 = -1;
              if ( v61 + v59 >= v61 )
                v63 = v61 + v59;
              v11 = v62 < v61 ? 0xC0000095 : 0;
              if ( v62 >= v61 )
              {
                v64 = v63 + 4;
                v65 = -1;
                if ( v63 + 4 >= v63 )
                  v65 = v63 + 4;
                v11 = v64 < v63 ? 0xC0000095 : 0;
                if ( v64 >= v63 )
                  v11 = v65 + *(_DWORD *)(a2 + 32) < v65 ? 0xC0000095 : 0;
              }
            }
          }
        }
        if ( v11 < 0 )
          goto LABEL_236;
        if ( !a4 )
        {
          v11 = -1073741811;
          goto LABEL_236;
        }
        *(_DWORD *)(a4 + 4) = v52;
        v11 = 0;
        if ( v52 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v52, 0x20534C53u);
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
          goto LABEL_236;
        v67 = *(_QWORD *)(a4 + 8);
        v68 = v47 | 0x10000000;
        NumberOfBytesa = v68;
        if ( v67 )
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
              v11 = *(_DWORD *)v72 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v72 + 4) < 4 )
                break;
              v75 = v74;
              v76 = v72;
              v77 = &v72[v74];
              v78 = -1LL;
              if ( v77 >= v72 )
                v78 = (__int64)&v72[v75];
              v72 = (char *)v78;
              v11 = v77 < v76 ? 0xC0000095 : 0;
              if ( v77 < v76 )
                break;
              if ( (unsigned int)++v73 >= *(_DWORD *)a4 )
              {
                v68 = NumberOfBytesa;
                goto LABEL_164;
              }
            }
          }
          else
          {
LABEL_164:
            v79 = -1LL;
            if ( v72 + 4 >= v72 )
              v79 = (__int64)(v72 + 4);
            v11 = v72 + 4 < v72 ? 0xC0000095 : 0;
            if ( v72 + 4 >= v72 )
            {
              if ( (unsigned __int64)(v72 + 8) > v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_233;
              *(_DWORD *)v72 = 4;
              *(_DWORD *)v79 = v68;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v69 = *(_DWORD *)(a4 + 4);
          v70 = -1;
          v71 = v69 + 8;
          if ( v69 + 8 >= v69 )
            v70 = v69 + 8;
          v11 = v71 < v69 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v70;
          if ( v71 >= v69 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_170;
          }
        }
        if ( v11 < 0 )
          goto LABEL_236;
LABEL_170:
        v80 = *(_QWORD *)(a4 + 8);
        if ( v80 )
        {
          v84 = *(char **)(a4 + 8);
          v85 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v86 = -1;
              if ( *(_DWORD *)v84 < 0xFFFFFFFC )
                v86 = *(_DWORD *)v84 + 4;
              v11 = *(_DWORD *)v84 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v84 + 4) < 4 )
                break;
              v87 = v86;
              v88 = v84;
              v89 = &v84[v86];
              v90 = -1LL;
              if ( v89 >= v84 )
                v90 = (__int64)&v84[v87];
              v84 = (char *)v90;
              v11 = v89 < v88 ? 0xC0000095 : 0;
              if ( v89 < v88 )
                break;
              if ( (unsigned int)++v85 >= *(_DWORD *)a4 )
                goto LABEL_183;
            }
          }
          else
          {
LABEL_183:
            v91 = -1LL;
            if ( v84 + 4 >= v84 )
              v91 = (__int64)(v84 + 4);
            v11 = v84 + 4 < v84 ? 0xC0000095 : 0;
            if ( v84 + 4 >= v84 )
            {
              if ( (unsigned __int64)(v84 + 12) > v80 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_233;
              v92 = v123;
              *(_DWORD *)v84 = 8;
              *(_QWORD *)v91 = v92;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v81 = *(_DWORD *)(a4 + 4);
          v82 = -1;
          v83 = v81 + 12;
          if ( v81 + 12 >= v81 )
            v82 = v81 + 12;
          v11 = v83 < v81 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v82;
          if ( v83 >= v81 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_189;
          }
        }
        if ( v11 < 0 )
          goto LABEL_236;
LABEL_189:
        v93 = Src;
        if ( Src )
        {
          if ( !v37 )
            goto LABEL_191;
        }
        else if ( v37 )
        {
LABEL_191:
          v11 = -1073741811;
          goto LABEL_215;
        }
        v94 = *(_QWORD *)(a4 + 8);
        if ( v94 )
        {
          v98 = *(char **)(a4 + 8);
          v99 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v100 = -1;
              if ( *(_DWORD *)v98 < 0xFFFFFFFC )
                v100 = *(_DWORD *)v98 + 4;
              v11 = *(_DWORD *)v98 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v98 + 4) < 4 )
                break;
              v101 = v100;
              v102 = v98;
              v103 = &v98[v100];
              v104 = -1LL;
              if ( v103 >= v98 )
                v104 = (__int64)&v98[v101];
              v98 = (char *)v104;
              v11 = v103 < v102 ? 0xC0000095 : 0;
              if ( v103 < v102 )
                break;
              if ( (unsigned int)++v99 >= *(_DWORD *)a4 )
              {
                v93 = Src;
                goto LABEL_208;
              }
            }
          }
          else
          {
LABEL_208:
            v105 = -1LL;
            if ( v98 + 4 >= v98 )
              v105 = (__int64)(v98 + 4);
            v11 = v98 + 4 < v98 ? 0xC0000095 : 0;
            if ( v98 + 4 >= v98 )
            {
              if ( (unsigned __int64)&v98[v37 + 4] > v94 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_233;
              *(_DWORD *)v98 = v37;
              if ( v93 )
                memmove((void *)v105, v93, v37);
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v11 = v121;
          if ( v119 >= 4 )
          {
            v95 = *(_DWORD *)(a4 + 4);
            v96 = -1;
            v97 = v95 + v119;
            if ( v95 + v119 >= v95 )
              v96 = v95 + v119;
            v11 = v97 < v95 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v96;
            if ( v97 >= v95 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_216;
            }
          }
        }
LABEL_215:
        if ( v11 < 0 )
          goto LABEL_236;
LABEL_216:
        v106 = *(_QWORD *)(a4 + 8);
        v107 = v120;
        if ( !v106 )
        {
          v108 = *(_DWORD *)(a4 + 4);
          v109 = v108 + 8;
          if ( v108 + 8 >= v108 )
            v48 = v108 + 8;
          v11 = v109 < v108 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v48;
          if ( v109 < v108 )
            goto LABEL_236;
          v11 = 0;
          goto LABEL_235;
        }
        v110 = *(char **)(a4 + 8);
        v111 = 0;
        if ( *(_DWORD *)a4 )
        {
          do
          {
            v112 = -1;
            if ( *(_DWORD *)v110 < 0xFFFFFFFC )
              v112 = *(_DWORD *)v110 + 4;
            v11 = *(_DWORD *)v110 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v110 + 4) < 4 )
              goto LABEL_236;
            v113 = v112;
            v114 = v110;
            v115 = &v110[v112];
            v116 = -1LL;
            if ( v115 >= v110 )
              v116 = (__int64)&v110[v113];
            v110 = (char *)v116;
            v11 = v115 < v114 ? 0xC0000095 : 0;
            if ( v115 < v114 )
              goto LABEL_236;
          }
          while ( (unsigned int)++v111 < *(_DWORD *)a4 );
        }
        if ( v110 + 4 >= v110 )
          v5 = (__int64)(v110 + 4);
        v11 = v110 + 4 < v110 ? 0xC0000095 : 0;
        if ( v110 + 4 >= v110 )
        {
          if ( (unsigned __int64)(v110 + 8) <= v106 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v110 = 4;
            *(_DWORD *)v5 = v107;
LABEL_235:
            ++*(_DWORD *)a4;
            goto LABEL_236;
          }
LABEL_233:
          v11 = -1073741789;
        }
LABEL_236:
        if ( Src )
          ExFreePoolWithTag(Src, 0x20534C53u);
        return (unsigned int)v11;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    v37 = NumberOfBytes;
    goto LABEL_81;
  }
  return (unsigned int)v11;
}
