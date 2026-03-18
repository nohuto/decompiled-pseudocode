/*
 * XREFs of sub_140726B4C @ 0x140726B4C
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140726B4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r13
  __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 v10; // r14
  signed int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned int i; // r10d
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned int v19; // r11d
  unsigned __int64 v20; // rdx
  unsigned int j; // r10d
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned int k; // r10d
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  unsigned int v30; // r15d
  int v31; // ebx
  void *v32; // rcx
  unsigned int m; // r9d
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rdx
  unsigned int *v38; // rax
  void *v39; // r10
  int v40; // r14d
  unsigned int v41; // ecx
  int v42; // esi
  int v43; // eax
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // r9d
  unsigned int v48; // eax
  int v49; // ecx
  unsigned int v50; // ecx
  int v51; // r11d
  unsigned int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // eax
  unsigned int v57; // edx
  PVOID PoolWithTag; // rax
  __int64 v59; // r10
  unsigned int v60; // r14d
  unsigned int v61; // edx
  int v62; // eax
  unsigned int v63; // ecx
  char *v64; // r8
  int v65; // r9d
  int v66; // ecx
  char *v67; // rcx
  char *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r10
  unsigned int v72; // edx
  int v73; // eax
  unsigned int v74; // ecx
  char *v75; // r8
  int v76; // r9d
  unsigned int v77; // r14d
  int v78; // ecx
  char *v79; // rcx
  char *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  _QWORD *v83; // xmm0_8
  void *v84; // r11
  __int64 v85; // r10
  unsigned int v86; // ecx
  unsigned int v87; // edx
  int v88; // eax
  unsigned int v89; // ecx
  char *v90; // r8
  int v91; // r9d
  unsigned int v92; // r11d
  int v93; // ecx
  char *v94; // rcx
  char *v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r9
  __int64 v98; // r9
  int v99; // r15d
  unsigned int v100; // ecx
  unsigned int v101; // eax
  char *v102; // r8
  int v103; // r10d
  unsigned int v104; // r11d
  int v105; // ecx
  char *v106; // rcx
  char *v107; // rdx
  __int64 v108; // rax
  int v110; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v111; // [rsp+44h] [rbp-1Ch]
  signed int v112; // [rsp+48h] [rbp-18h]
  void *Src; // [rsp+50h] [rbp-10h]
  _QWORD *v114; // [rsp+58h] [rbp-8h]
  unsigned int NumberOfBytes; // [rsp+B0h] [rbp+50h]
  unsigned int NumberOfBytesa; // [rsp+B0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  NumberOfBytes = 0;
  Src = 0LL;
  v110 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v12 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v14 = *(unsigned int *)v12;
      v15 = v12 + 4;
      if ( v12 + 4 < v12 )
      {
        v15 = -1LL;
        v11 = -1073741675;
      }
      else
      {
        v11 = 0;
      }
      if ( v11 < 0 )
        goto LABEL_19;
      v12 = -1LL;
      if ( v15 + v14 >= v15 )
        v12 = v15 + v14;
      v11 = v15 + v14 < v15 ? 0xC0000095 : 0;
      if ( v15 + v14 < v15 )
        goto LABEL_19;
    }
    v16 = *(_DWORD *)v12;
    v17 = -1LL;
    if ( v12 + 4 >= v12 )
      v17 = v12 + 4;
    v11 = v12 + 4 < v12 ? 0xC0000095 : 0;
    if ( v12 + 4 < v12 )
    {
LABEL_19:
      v16 = 0;
      v18 = v114;
      goto LABEL_20;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = (_QWORD *)v17;
LABEL_20:
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v16 != 8 )
      return (unsigned int)-1073741789;
    v114 = (_QWORD *)*v18;
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
  for ( j = 0; j < 4; ++j )
  {
    v22 = *(unsigned int *)v20;
    v23 = v20 + 4;
    if ( v20 + 4 < v20 )
    {
      v23 = -1LL;
      v11 = -1073741675;
    }
    else
    {
      v11 = 0;
    }
    if ( v11 < 0 )
      return (unsigned int)v11;
    v20 = -1LL;
    if ( v23 + v22 >= v23 )
      v20 = v23 + v22;
    v11 = v23 + v22 < v23 ? 0xC0000095 : 0;
    if ( v23 + v22 < v23 )
      goto LABEL_42;
  }
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
LABEL_42:
  if ( v11 >= 0 )
  {
    if ( v19 > 5 )
    {
      v25 = v4;
      for ( k = 0; k < 5; ++k )
      {
        v27 = *(unsigned int *)v25;
        v28 = v25 + 4;
        if ( v25 + 4 < v25 )
        {
          v28 = -1LL;
          v11 = -1073741675;
        }
        else
        {
          v11 = 0;
        }
        if ( v11 < 0 )
          return (unsigned int)v11;
        v25 = -1LL;
        if ( v28 + v27 >= v28 )
          v25 = v28 + v27;
        v11 = v28 + v27 < v28 ? 0xC0000095 : 0;
        if ( v28 + v27 < v28 )
          goto LABEL_58;
      }
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
LABEL_58:
      if ( v11 < 0 )
        return (unsigned int)v11;
      if ( v19 > 6 )
      {
        for ( m = 0; m < 6; ++m )
        {
          v34 = *(unsigned int *)v4;
          v35 = v4 + 4;
          if ( v4 + 4 < v4 )
          {
            v35 = -1LL;
            v11 = -1073741675;
          }
          else
          {
            v11 = 0;
          }
          if ( v11 < 0 )
            goto LABEL_81;
          v4 = -1LL;
          if ( v35 + v34 >= v35 )
            v4 = v35 + v34;
          v11 = v35 + v34 < v35 ? 0xC0000095 : 0;
          if ( v35 + v34 < v35 )
            goto LABEL_81;
        }
        v36 = *(_DWORD *)v4;
        v37 = -1LL;
        if ( v4 + 4 >= v4 )
          v37 = v4 + 4;
        v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
        {
LABEL_81:
          v36 = NumberOfBytes;
          v38 = (unsigned int *)v114;
          goto LABEL_82;
        }
        v38 = 0LL;
        if ( v36 )
          v38 = (unsigned int *)v37;
LABEL_82:
        if ( v11 >= 0 )
        {
          if ( v36 != 4 )
            return (unsigned int)-1073741789;
          v30 = *v38;
LABEL_62:
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
          if ( qword_1407AC408 )
          {
            v39 = v32;
            if ( v31 )
              v39 = 0LL;
            v40 = qword_1407AC408(v8, v9, v10, NumberOfBytes, v39, v30, &v110);
          }
          else
          {
            v40 = -1073741637;
          }
          v41 = 12;
          v42 = -1;
          v111 = v30 + 4;
          v43 = -1;
          if ( v30 < 0xFFFFFFFC )
            v43 = v30 + 4;
          v112 = v30 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          v11 = v112;
          if ( v30 + 4 >= 4 )
            v41 = v43;
          if ( v30 >= 0xFFFFFFFC )
          {
            v44 = NumberOfBytes;
          }
          else
          {
            if ( v41 >= 0xFFFFFFEC || (v44 = v41 + 28, v41 + 28 < v41 + 20) )
            {
              v11 = -1073741675;
              goto LABEL_233;
            }
            v11 = 0;
          }
          if ( v11 < 0 )
            goto LABEL_233;
          v45 = -1;
          if ( v44 < 0xFFFFFFF8 )
            v45 = v44 + 8;
          v11 = v44 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
          if ( v44 + 8 >= 8 )
          {
            v46 = (v45 + 7) & 0xFFFFFFF8;
            if ( v46 >= v45 )
            {
              v48 = v46 + 8;
              v49 = -1;
              if ( v46 + 8 >= v46 )
                v49 = v46 + 8;
              v11 = v48 < v46 ? 0xC0000095 : 0;
              v47 = NumberOfBytes;
              if ( v48 >= v46 )
                v47 = v49;
            }
            else
            {
              v11 = -1073741675;
              v47 = NumberOfBytes;
            }
            if ( v11 < 0 )
              goto LABEL_233;
            v50 = -1;
            v51 = *(_DWORD *)(a2 + 16);
            if ( v47 < 0xFFFFFFFC )
              v50 = v47 + 4;
            v11 = v47 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( v47 + 4 >= 4 )
            {
              v52 = v50 + 4;
              v53 = -1;
              if ( v50 + 4 >= v50 )
                v53 = v50 + 4;
              v11 = v52 < v50 ? 0xC0000095 : 0;
              if ( v52 >= v50 )
              {
                v54 = v53 + v51;
                v55 = -1;
                if ( v53 + v51 >= v53 )
                  v55 = v53 + v51;
                v11 = v54 < v53 ? 0xC0000095 : 0;
                if ( v54 >= v53 )
                {
                  v56 = v55 + 4;
                  v57 = -1;
                  if ( v55 + 4 >= v55 )
                    v57 = v55 + 4;
                  v11 = v56 < v55 ? 0xC0000095 : 0;
                  if ( v56 >= v55 )
                    v11 = v57 + *(_DWORD *)(a2 + 32) < v57 ? 0xC0000095 : 0;
                }
              }
            }
          }
          if ( v11 < 0 )
            goto LABEL_233;
          if ( !a4 )
          {
            v11 = -1073741811;
            goto LABEL_233;
          }
          *(_DWORD *)(a4 + 4) = v44;
          v11 = 0;
          if ( v44 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v44, 0x20534C53u);
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
            goto LABEL_233;
          v59 = *(_QWORD *)(a4 + 8);
          v60 = v40 | 0x10000000;
          NumberOfBytesa = v60;
          if ( v59 )
          {
            v64 = *(char **)(a4 + 8);
            v65 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v66 = -1;
                if ( *(_DWORD *)v64 < 0xFFFFFFFC )
                  v66 = *(_DWORD *)v64 + 4;
                if ( (unsigned int)(*(_DWORD *)v64 + 4) >= 4 )
                  v60 = v66;
                v11 = *(_DWORD *)v64 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v64 >= 0xFFFFFFFC )
                  break;
                v67 = v64;
                v68 = &v64[v60];
                v69 = -1LL;
                if ( v68 >= v64 )
                  v69 = (__int64)&v64[v60];
                v64 = (char *)v69;
                v11 = v68 < v67 ? 0xC0000095 : 0;
                if ( v68 < v67 )
                  break;
                if ( (unsigned int)++v65 >= *(_DWORD *)a4 )
                {
                  v60 = NumberOfBytesa;
                  goto LABEL_150;
                }
              }
            }
            else
            {
LABEL_150:
              v70 = -1LL;
              if ( v64 + 4 >= v64 )
                v70 = (__int64)(v64 + 4);
              v11 = v64 + 4 < v64 ? 0xC0000095 : 0;
              if ( v64 + 4 >= v64 )
              {
                if ( (unsigned __int64)(v64 + 8) > v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_230;
                *(_DWORD *)v64 = 4;
                *(_DWORD *)v70 = v60;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v61 = *(_DWORD *)(a4 + 4);
            v62 = -1;
            v63 = v61 + 8;
            if ( v61 + 8 >= v61 )
              v62 = v61 + 8;
            v11 = v63 < v61 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v62;
            if ( v63 >= v61 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_156;
            }
          }
          if ( v11 < 0 )
            goto LABEL_233;
LABEL_156:
          v71 = *(_QWORD *)(a4 + 8);
          if ( v71 )
          {
            v75 = *(char **)(a4 + 8);
            v76 = 0;
            if ( *(_DWORD *)a4 )
            {
              v77 = NumberOfBytesa;
              while ( 1 )
              {
                v78 = -1;
                if ( *(_DWORD *)v75 < 0xFFFFFFFC )
                  v78 = *(_DWORD *)v75 + 4;
                if ( (unsigned int)(*(_DWORD *)v75 + 4) >= 4 )
                  v77 = v78;
                v11 = *(_DWORD *)v75 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v75 >= 0xFFFFFFFC )
                  break;
                v79 = v75;
                v80 = &v75[v77];
                v81 = -1LL;
                if ( v80 >= v75 )
                  v81 = (__int64)&v75[v77];
                v75 = (char *)v81;
                v11 = v80 < v79 ? 0xC0000095 : 0;
                if ( v80 < v79 )
                  break;
                if ( (unsigned int)++v76 >= *(_DWORD *)a4 )
                  goto LABEL_172;
              }
            }
            else
            {
LABEL_172:
              v82 = -1LL;
              if ( v75 + 4 >= v75 )
                v82 = (__int64)(v75 + 4);
              v11 = v75 + 4 < v75 ? 0xC0000095 : 0;
              if ( v75 + 4 >= v75 )
              {
                if ( (unsigned __int64)(v75 + 12) > v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_230;
                v83 = v114;
                *(_DWORD *)v75 = 8;
                *(_QWORD *)v82 = v83;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v72 = *(_DWORD *)(a4 + 4);
            v73 = -1;
            v74 = v72 + 12;
            if ( v72 + 12 >= v72 )
              v73 = v72 + 12;
            v11 = v74 < v72 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v73;
            if ( v74 >= v72 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_178;
            }
          }
          if ( v11 < 0 )
            goto LABEL_233;
LABEL_178:
          v84 = Src;
          if ( Src )
          {
            if ( !v30 )
              goto LABEL_180;
          }
          else if ( v30 )
          {
LABEL_180:
            v11 = -1073741811;
            goto LABEL_209;
          }
          v85 = *(_QWORD *)(a4 + 8);
          if ( v85 )
          {
            v90 = *(char **)(a4 + 8);
            v91 = 0;
            if ( *(_DWORD *)a4 )
            {
              v92 = NumberOfBytesa;
              while ( 1 )
              {
                v93 = -1;
                if ( *(_DWORD *)v90 < 0xFFFFFFFC )
                  v93 = *(_DWORD *)v90 + 4;
                if ( (unsigned int)(*(_DWORD *)v90 + 4) >= 4 )
                  v92 = v93;
                v11 = *(_DWORD *)v90 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v90 >= 0xFFFFFFFC )
                  break;
                v94 = v90;
                v95 = &v90[v92];
                v96 = -1LL;
                if ( v95 >= v90 )
                  v96 = (__int64)&v90[v92];
                v90 = (char *)v96;
                v11 = v95 < v94 ? 0xC0000095 : 0;
                if ( v95 < v94 )
                  break;
                if ( (unsigned int)++v91 >= *(_DWORD *)a4 )
                {
                  v84 = Src;
                  goto LABEL_202;
                }
              }
            }
            else
            {
LABEL_202:
              v97 = -1LL;
              if ( v90 + 4 >= v90 )
                v97 = (__int64)(v90 + 4);
              v11 = v90 + 4 < v90 ? 0xC0000095 : 0;
              if ( v90 + 4 >= v90 )
              {
                if ( (unsigned __int64)&v90[v30 + 4] > v85 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_230;
                *(_DWORD *)v90 = v30;
                if ( v84 )
                  memmove((void *)v97, v84, v30);
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v86 = NumberOfBytesa;
            v11 = v112;
            if ( v111 >= 4 )
              v86 = v111;
            if ( v112 < 0 )
              goto LABEL_233;
            v87 = *(_DWORD *)(a4 + 4);
            v88 = -1;
            v89 = v87 + v86;
            if ( v89 >= v87 )
              v88 = v89;
            v11 = v89 < v87 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v88;
            if ( v89 >= v87 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_210;
            }
          }
LABEL_209:
          if ( v11 < 0 )
            goto LABEL_233;
LABEL_210:
          v98 = *(_QWORD *)(a4 + 8);
          v99 = v110;
          if ( !v98 )
          {
            v100 = *(_DWORD *)(a4 + 4);
            v101 = v100 + 8;
            if ( v100 + 8 >= v100 )
              v42 = v100 + 8;
            v11 = v101 < v100 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v42;
            if ( v101 < v100 )
              goto LABEL_233;
            v11 = 0;
            goto LABEL_232;
          }
          v102 = *(char **)(a4 + 8);
          v103 = 0;
          if ( *(_DWORD *)a4 )
          {
            v104 = NumberOfBytesa;
            do
            {
              v105 = -1;
              if ( *(_DWORD *)v102 < 0xFFFFFFFC )
                v105 = *(_DWORD *)v102 + 4;
              if ( (unsigned int)(*(_DWORD *)v102 + 4) >= 4 )
                v104 = v105;
              v11 = *(_DWORD *)v102 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( *(_DWORD *)v102 >= 0xFFFFFFFC )
                goto LABEL_233;
              v106 = v102;
              v107 = &v102[v104];
              v108 = -1LL;
              if ( v107 >= v102 )
                v108 = (__int64)&v102[v104];
              v102 = (char *)v108;
              v11 = v107 < v106 ? 0xC0000095 : 0;
              if ( v107 < v106 )
                goto LABEL_233;
            }
            while ( (unsigned int)++v103 < *(_DWORD *)a4 );
          }
          if ( v102 + 4 >= v102 )
            v5 = (__int64)(v102 + 4);
          v11 = v102 + 4 < v102 ? 0xC0000095 : 0;
          if ( v102 + 4 >= v102 )
          {
            if ( (unsigned __int64)(v102 + 8) <= v98 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v102 = 4;
              *(_DWORD *)v5 = v99;
LABEL_232:
              ++*(_DWORD *)a4;
              goto LABEL_233;
            }
LABEL_230:
            v11 = -1073741789;
          }
LABEL_233:
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
      goto LABEL_62;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
