/*
 * XREFs of sub_140262394 @ 0x140262394
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140262394(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r12
  signed int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned int i; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int v17; // r11d
  unsigned __int64 v18; // rdx
  unsigned int j; // r10d
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int v25; // r14d
  int v26; // ebx
  PVOID v27; // rcx
  unsigned int k; // r9d
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rdx
  unsigned int *v33; // rax
  PVOID v34; // r8
  int v35; // r15d
  unsigned int v36; // ecx
  int v37; // esi
  int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // r9d
  unsigned int v43; // eax
  int v44; // ecx
  int v45; // r11d
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // edx
  PVOID PoolWithTag; // rax
  __int64 v54; // r10
  int v55; // r15d
  unsigned int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  char *v59; // r8
  int v60; // r9d
  unsigned int v61; // r15d
  int v62; // ecx
  char *v63; // rcx
  char *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r10
  unsigned int v68; // edx
  int v69; // eax
  unsigned int v70; // ecx
  char *v71; // r8
  int v72; // r9d
  unsigned int v73; // r15d
  int v74; // ecx
  char *v75; // rcx
  char *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  const void *v79; // r11
  __int64 v80; // r10
  unsigned int v81; // ecx
  unsigned int v82; // edx
  int v83; // eax
  unsigned int v84; // ecx
  char *v85; // r8
  int v86; // r9d
  unsigned int v87; // r11d
  int v88; // ecx
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
  unsigned int v99; // r11d
  int v100; // ecx
  char *v101; // rcx
  char *v102; // rdx
  __int64 v103; // rax
  int v105; // [rsp+30h] [rbp-20h]
  PVOID Src; // [rsp+40h] [rbp-10h]
  _QWORD *v107; // [rsp+48h] [rbp-8h]
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
      v12 = *(unsigned int *)v10;
      v13 = v10 + 4;
      if ( v10 + 4 < v10 )
      {
        v13 = -1LL;
        v9 = -1073741675;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 < 0 )
        goto LABEL_19;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v9 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_19;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_19:
      v14 = NumberOfBytes;
      v16 = v107;
      goto LABEL_20;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_20:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v107 = (_QWORD *)*v16;
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
      v20 = *(unsigned int *)v18;
      v21 = v18 + 4;
      if ( v18 + 4 < v18 )
      {
        v21 = -1LL;
        v9 = -1073741675;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 < 0 )
        goto LABEL_43;
      v18 = -1LL;
      if ( v21 + v20 >= v21 )
        v18 = v21 + v20;
      v9 = v21 + v20 < v21 ? 0xC0000095 : 0;
      if ( v21 + v20 < v21 )
        goto LABEL_43;
    }
    v22 = *(_DWORD *)v18;
    v23 = -1LL;
    if ( v18 + 4 >= v18 )
      v23 = v18 + 4;
    v9 = v18 + 4 < v18 ? 0xC0000095 : 0;
    if ( v18 + 4 < v18 )
    {
LABEL_43:
      v22 = NumberOfBytes;
      v24 = (__int64)v107;
      goto LABEL_44;
    }
    v24 = 0LL;
    if ( v22 )
      v24 = v23;
LABEL_44:
    if ( v9 >= 0 )
    {
      if ( v17 > 5 )
      {
        for ( k = 0; k < 5; ++k )
        {
          v29 = *(unsigned int *)v4;
          v30 = v4 + 4;
          if ( v4 + 4 < v4 )
          {
            v30 = -1LL;
            v9 = -1073741675;
          }
          else
          {
            v9 = 0;
          }
          if ( v9 < 0 )
            goto LABEL_67;
          v4 = -1LL;
          if ( v30 + v29 >= v30 )
            v4 = v30 + v29;
          v9 = v30 + v29 < v30 ? 0xC0000095 : 0;
          if ( v30 + v29 < v30 )
            goto LABEL_67;
        }
        v31 = *(_DWORD *)v4;
        v32 = -1LL;
        if ( v4 + 4 >= v4 )
          v32 = v4 + 4;
        v9 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
        {
LABEL_67:
          v31 = NumberOfBytes;
          v33 = (unsigned int *)v107;
          goto LABEL_68;
        }
        v33 = 0LL;
        if ( v31 )
          v33 = (unsigned int *)v32;
LABEL_68:
        if ( v9 >= 0 )
        {
          if ( v31 != 4 )
            return (unsigned int)-1073741789;
          v25 = *v33;
LABEL_48:
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
          if ( qword_1407AC3D8 )
          {
            v34 = v27;
            if ( v26 )
              v34 = 0LL;
            v35 = qword_1407AC3D8(v24, v22, v34, v25, &NumberOfBytes);
          }
          else
          {
            v35 = -1073741637;
          }
          v36 = 12;
          v37 = -1;
          v38 = -1;
          if ( v25 < 0xFFFFFFFC )
            v38 = v25 + 4;
          v9 = v25 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v25 + 4 >= 4 )
            v36 = v38;
          if ( v25 >= 0xFFFFFFFC )
          {
            v39 = NumberOfBytes;
          }
          else
          {
            if ( v36 >= 0xFFFFFFEC || (v39 = v36 + 28, v36 + 28 < v36 + 20) )
            {
              v9 = -1073741675;
              goto LABEL_220;
            }
            v9 = 0;
          }
          if ( v9 < 0 )
            goto LABEL_220;
          v40 = -1;
          if ( v39 < 0xFFFFFFF8 )
            v40 = v39 + 8;
          v9 = v39 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
          if ( v39 + 8 >= 8 )
          {
            v41 = (v40 + 7) & 0xFFFFFFF8;
            if ( v41 >= v40 )
            {
              v43 = v41 + 8;
              v44 = -1;
              if ( v41 + 8 >= v41 )
                v44 = v41 + 8;
              v9 = v43 < v41 ? 0xC0000095 : 0;
              v42 = NumberOfBytes;
              if ( v43 >= v41 )
                v42 = v44;
            }
            else
            {
              v9 = -1073741675;
              v42 = NumberOfBytes;
            }
            if ( v9 >= 0 )
            {
              v45 = *(_DWORD *)(a2 + 16);
              v46 = -1;
              if ( v42 < 0xFFFFFFFC )
                v46 = v42 + 4;
              v9 = v42 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( v42 + 4 >= 4 )
              {
                v47 = v46 + 4;
                v48 = -1;
                if ( v46 + 4 >= v46 )
                  v48 = v46 + 4;
                v9 = v47 < v46 ? 0xC0000095 : 0;
                if ( v47 >= v46 )
                {
                  v49 = v48 + v45;
                  v50 = -1;
                  if ( v48 + v45 >= v48 )
                    v50 = v48 + v45;
                  v9 = v49 < v48 ? 0xC0000095 : 0;
                  if ( v49 >= v48 )
                  {
                    v51 = v50 + 4;
                    v52 = -1;
                    if ( v50 + 4 >= v50 )
                      v52 = v50 + 4;
                    v9 = v51 < v50 ? 0xC0000095 : 0;
                    if ( v51 >= v50 )
                      v9 = v52 + *(_DWORD *)(a2 + 32) < v52 ? 0xC0000095 : 0;
                  }
                }
              }
            }
          }
          if ( v9 < 0 )
            goto LABEL_220;
          if ( !a4 )
          {
            v9 = -1073741811;
            goto LABEL_220;
          }
          *(_DWORD *)(a4 + 4) = v39;
          v9 = 0;
          if ( v39 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v39, 0x20534C53u);
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
            goto LABEL_220;
          v54 = *(_QWORD *)(a4 + 8);
          v55 = v35 | 0x10000000;
          v105 = v55;
          if ( v54 )
          {
            v59 = *(char **)(a4 + 8);
            v60 = 0;
            if ( *(_DWORD *)a4 )
            {
              v61 = NumberOfBytes;
              while ( 1 )
              {
                v62 = -1;
                if ( *(_DWORD *)v59 < 0xFFFFFFFC )
                  v62 = *(_DWORD *)v59 + 4;
                if ( (unsigned int)(*(_DWORD *)v59 + 4) >= 4 )
                  v61 = v62;
                v9 = *(_DWORD *)v59 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v59 >= 0xFFFFFFFC )
                  break;
                v63 = v59;
                v64 = &v59[v61];
                v65 = -1LL;
                if ( v64 >= v59 )
                  v65 = (__int64)&v59[v61];
                v59 = (char *)v65;
                v9 = v64 < v63 ? 0xC0000095 : 0;
                if ( v64 < v63 )
                  break;
                if ( (unsigned int)++v60 >= *(_DWORD *)a4 )
                {
                  v55 = v105;
                  goto LABEL_137;
                }
              }
            }
            else
            {
LABEL_137:
              v66 = -1LL;
              if ( v59 + 4 >= v59 )
                v66 = (__int64)(v59 + 4);
              v9 = v59 + 4 < v59 ? 0xC0000095 : 0;
              if ( v59 + 4 >= v59 )
              {
                if ( (unsigned __int64)(v59 + 8) > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_217;
                *(_DWORD *)v59 = 4;
                *(_DWORD *)v66 = v55;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v56 = *(_DWORD *)(a4 + 4);
            v57 = -1;
            v58 = v56 + 8;
            if ( v56 + 8 >= v56 )
              v57 = v56 + 8;
            v9 = v58 < v56 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v57;
            if ( v58 >= v56 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_143;
            }
          }
          if ( v9 < 0 )
            goto LABEL_220;
LABEL_143:
          v67 = *(_QWORD *)(a4 + 8);
          if ( v67 )
          {
            v71 = *(char **)(a4 + 8);
            v72 = 0;
            if ( *(_DWORD *)a4 )
            {
              v73 = NumberOfBytes;
              while ( 1 )
              {
                v74 = -1;
                if ( *(_DWORD *)v71 < 0xFFFFFFFC )
                  v74 = *(_DWORD *)v71 + 4;
                if ( (unsigned int)(*(_DWORD *)v71 + 4) >= 4 )
                  v73 = v74;
                v9 = *(_DWORD *)v71 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v71 >= 0xFFFFFFFC )
                  break;
                v75 = v71;
                v76 = &v71[v73];
                v77 = -1LL;
                if ( v76 >= v71 )
                  v77 = (__int64)&v71[v73];
                v71 = (char *)v77;
                v9 = v76 < v75 ? 0xC0000095 : 0;
                if ( v76 < v75 )
                  break;
                if ( (unsigned int)++v72 >= *(_DWORD *)a4 )
                  goto LABEL_159;
              }
            }
            else
            {
LABEL_159:
              v78 = -1LL;
              if ( v71 + 4 >= v71 )
                v78 = (__int64)(v71 + 4);
              v9 = v71 + 4 < v71 ? 0xC0000095 : 0;
              if ( v71 + 4 >= v71 )
              {
                if ( (unsigned __int64)(v71 + 12) > v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_217;
                *(_DWORD *)v71 = 8;
                *(_QWORD *)v78 = v107;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v68 = *(_DWORD *)(a4 + 4);
            v69 = -1;
            v70 = v68 + 12;
            if ( v68 + 12 >= v68 )
              v69 = v68 + 12;
            v9 = v70 < v68 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v69;
            if ( v70 >= v68 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_165;
            }
          }
          if ( v9 < 0 )
            goto LABEL_220;
LABEL_165:
          v79 = Src;
          if ( Src )
          {
            if ( !v25 )
              goto LABEL_167;
          }
          else if ( v25 )
          {
LABEL_167:
            v9 = -1073741811;
            goto LABEL_196;
          }
          v80 = *(_QWORD *)(a4 + 8);
          if ( v80 )
          {
            v85 = *(char **)(a4 + 8);
            v86 = 0;
            if ( *(_DWORD *)a4 )
            {
              v87 = NumberOfBytes;
              while ( 1 )
              {
                v88 = -1;
                if ( *(_DWORD *)v85 < 0xFFFFFFFC )
                  v88 = *(_DWORD *)v85 + 4;
                if ( (unsigned int)(*(_DWORD *)v85 + 4) >= 4 )
                  v87 = v88;
                v9 = *(_DWORD *)v85 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v85 >= 0xFFFFFFFC )
                  break;
                v89 = v85;
                v90 = &v85[v87];
                v91 = -1LL;
                if ( v90 >= v85 )
                  v91 = (__int64)&v85[v87];
                v85 = (char *)v91;
                v9 = v90 < v89 ? 0xC0000095 : 0;
                if ( v90 < v89 )
                  break;
                if ( (unsigned int)++v86 >= *(_DWORD *)a4 )
                {
                  v79 = Src;
                  goto LABEL_189;
                }
              }
            }
            else
            {
LABEL_189:
              v92 = -1LL;
              if ( v85 + 4 >= v85 )
                v92 = (__int64)(v85 + 4);
              v9 = v85 + 4 < v85 ? 0xC0000095 : 0;
              if ( v85 + 4 >= v85 )
              {
                if ( (unsigned __int64)&v85[v25 + 4] > v80 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_217;
                *(_DWORD *)v85 = v25;
                if ( v79 )
                  memmove((void *)v92, v79, v25);
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v81 = NumberOfBytes;
            v9 = v25 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( v25 + 4 >= 4 )
              v81 = v25 + 4;
            if ( v25 >= 0xFFFFFFFC )
              goto LABEL_220;
            v82 = *(_DWORD *)(a4 + 4);
            v83 = -1;
            v84 = v82 + v81;
            if ( v84 >= v82 )
              v83 = v84;
            v9 = v84 < v82 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v83;
            if ( v84 >= v82 )
            {
              ++*(_DWORD *)a4;
LABEL_197:
              v93 = *(_QWORD *)(a4 + 8);
              v94 = NumberOfBytes;
              if ( !v93 )
              {
                v95 = *(_DWORD *)(a4 + 4);
                v96 = v95 + 8;
                if ( v95 + 8 >= v95 )
                  v37 = v95 + 8;
                v9 = v96 < v95 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v37;
                if ( v96 < v95 )
                  goto LABEL_220;
                v9 = 0;
                goto LABEL_219;
              }
              v97 = *(char **)(a4 + 8);
              v98 = 0;
              if ( *(_DWORD *)a4 )
              {
                v99 = NumberOfBytes;
                do
                {
                  v100 = -1;
                  if ( *(_DWORD *)v97 < 0xFFFFFFFC )
                    v100 = *(_DWORD *)v97 + 4;
                  if ( (unsigned int)(*(_DWORD *)v97 + 4) >= 4 )
                    v99 = v100;
                  v9 = *(_DWORD *)v97 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( *(_DWORD *)v97 >= 0xFFFFFFFC )
                    goto LABEL_220;
                  v101 = v97;
                  v102 = &v97[v99];
                  v103 = -1LL;
                  if ( v102 >= v97 )
                    v103 = (__int64)&v97[v99];
                  v97 = (char *)v103;
                  v9 = v102 < v101 ? 0xC0000095 : 0;
                  if ( v102 < v101 )
                    goto LABEL_220;
                }
                while ( (unsigned int)++v98 < *(_DWORD *)a4 );
              }
              if ( v97 + 4 >= v97 )
                v5 = (__int64)(v97 + 4);
              v9 = v97 + 4 < v97 ? 0xC0000095 : 0;
              if ( v97 + 4 < v97 )
              {
LABEL_220:
                if ( Src )
                  ExFreePoolWithTag(Src, 0x20534C53u);
                return (unsigned int)v9;
              }
              if ( (unsigned __int64)(v97 + 8) <= v93 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v97 = 4;
                *(_DWORD *)v5 = v94;
LABEL_219:
                ++*(_DWORD *)a4;
                goto LABEL_220;
              }
LABEL_217:
              v9 = -1073741789;
              goto LABEL_220;
            }
          }
LABEL_196:
          if ( v9 < 0 )
            goto LABEL_220;
          goto LABEL_197;
        }
      }
      else
      {
        v9 = -1073741811;
      }
      v25 = NumberOfBytes;
      goto LABEL_48;
    }
  }
  return (unsigned int)v9;
}
