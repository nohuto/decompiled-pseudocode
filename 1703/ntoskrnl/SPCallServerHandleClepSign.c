/*
 * XREFs of SPCallServerHandleClepSign @ 0x1405973B8
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleClepSign(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r10
  unsigned int i; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  signed int v14; // r8d
  int v15; // ecx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  unsigned int j; // r10d
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  int v24; // ebp
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  char *PoolWithTag; // rax
  char *v29; // rdx
  int v30; // esi
  char *v31; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  int v34; // r11d
  char *v35; // r9
  unsigned int v36; // r14d
  int v37; // ecx
  char *v38; // rcx
  char *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r10
  int v43; // r11d
  char *v44; // r9
  unsigned int v45; // r14d
  int v46; // ecx
  char *v47; // rcx
  char *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  _OWORD *v51; // rcx
  __int128 v52; // xmm1
  unsigned int v54; // edx
  int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  _QWORD *v59; // [rsp+30h] [rbp-148h]
  _BYTE v60[256]; // [rsp+40h] [rbp-138h] BYREF

  v4 = 0LL;
  if ( !a1 || !a2 || !a4 )
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
        v14 = -1073741675;
      }
      else
      {
        v14 = 0;
      }
      if ( v14 < 0 )
        goto LABEL_99;
      v10 = -1LL;
      if ( v13 + v12 >= v13 )
        v10 = v13 + v12;
      v14 = v13 + v12 < v13 ? 0xC0000095 : 0;
      if ( v13 + v12 < v13 )
        goto LABEL_99;
    }
    v15 = *(_DWORD *)v10;
    v16 = -1LL;
    if ( v10 + 4 >= v10 )
      v16 = v10 + 4;
    v14 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_99:
      v15 = (int)v59;
      v17 = v59;
      goto LABEL_19;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_19:
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v59 = (_QWORD *)*v17;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
  {
    if ( !v8 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *(unsigned int *)v8;
      v20 = v8 + 4;
      if ( v8 + 4 < v8 )
      {
        v20 = -1LL;
        v14 = -1073741675;
      }
      else
      {
        v14 = 0;
      }
      if ( v14 < 0 )
        goto LABEL_101;
      v8 = -1LL;
      if ( v20 + v19 >= v20 )
        v8 = v20 + v19;
      v14 = v20 + v19 < v20 ? 0xC0000095 : 0;
      if ( v20 + v19 < v20 )
        goto LABEL_101;
    }
    v21 = *(unsigned int *)v8;
    v22 = -1LL;
    if ( v8 + 4 >= v8 )
      v22 = v8 + 4;
    v14 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
    {
LABEL_101:
      v21 = (unsigned int)v59;
      goto LABEL_38;
    }
    if ( (_DWORD)v21 )
      v4 = v22;
LABEL_38:
    if ( v14 >= 0 )
    {
      v23 = qword_1407AC3E8 ? qword_1407AC3E8(v4, v21, v60, 256LL) : -1073741637;
      v14 = v23;
      if ( v23 >= 0 )
      {
        v24 = -1;
        v25 = -1;
        if ( *(_DWORD *)(a2 + 16) < 0xFFFFFED0 )
          v25 = *(_DWORD *)(a2 + 16) + 304;
        v14 = *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 304) >= 0x130 )
        {
          v26 = v25 + 4;
          v27 = -1;
          if ( v25 + 4 >= v25 )
            v27 = v25 + 4;
          v14 = v26 < v25 ? 0xC0000095 : 0;
          if ( v26 >= v25 )
            v14 = v27 + *(_DWORD *)(a2 + 32) < v27 ? 0xC0000095 : 0;
        }
        if ( v14 >= 0 )
        {
          *(_DWORD *)(a4 + 4) = 280;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x20534C53u);
          v29 = PoolWithTag;
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
          v30 = v23 | 0x10000000;
          v31 = PoolWithTag + 4;
          v32 = -1LL;
          if ( v31 >= v29 )
            v32 = (__int64)v31;
          v14 = v31 < v29 ? 0xC0000095 : 0;
          if ( v31 >= v29 )
          {
            if ( v29 + 8 > &v29[*(unsigned int *)(a4 + 4)] )
              return (unsigned int)-1073741789;
            *(_DWORD *)v29 = 4;
            *(_DWORD *)v32 = v30;
            ++*(_DWORD *)a4;
          }
          if ( v31 < v29 )
            return (unsigned int)v14;
          v33 = *(_QWORD *)(a4 + 8);
          if ( v33 )
          {
            v34 = 0;
            v35 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              v36 = (unsigned int)v59;
              while ( 1 )
              {
                v37 = -1;
                if ( *(_DWORD *)v35 < 0xFFFFFFFC )
                  v37 = *(_DWORD *)v35 + 4;
                if ( (unsigned int)(*(_DWORD *)v35 + 4) >= 4 )
                  v36 = v37;
                v14 = *(_DWORD *)v35 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( *(_DWORD *)v35 >= 0xFFFFFFFC )
                  break;
                v38 = v35;
                v39 = &v35[v36];
                v40 = -1LL;
                if ( v39 >= v35 )
                  v40 = (__int64)&v35[v36];
                v35 = (char *)v40;
                v14 = v39 < v38 ? 0xC0000095 : 0;
                if ( v39 < v38 )
                  break;
                if ( (unsigned int)++v34 >= *(_DWORD *)a4 )
                  goto LABEL_69;
              }
            }
            else
            {
LABEL_69:
              v41 = -1LL;
              if ( v35 + 4 >= v35 )
                v41 = (__int64)(v35 + 4);
              v14 = v35 + 4 < v35 ? 0xC0000095 : 0;
              if ( v35 + 4 >= v35 )
              {
                if ( (unsigned __int64)(v35 + 12) > v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  return (unsigned int)-1073741789;
                *(_DWORD *)v35 = 8;
                *(_QWORD *)v41 = v59;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v54 = *(_DWORD *)(a4 + 4);
            v55 = -1;
            v56 = v54 + 12;
            if ( v54 + 12 >= v54 )
              v55 = v54 + 12;
            v14 = v56 < v54 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v55;
            if ( v56 >= v54 )
            {
              ++*(_DWORD *)a4;
LABEL_75:
              v42 = *(_QWORD *)(a4 + 8);
              if ( !v42 )
              {
                v57 = *(_DWORD *)(a4 + 4);
                v58 = v57 + 260;
                if ( v57 + 260 >= v57 )
                  v24 = v57 + 260;
                v14 = v58 < v57 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v24;
                if ( v58 >= v57 )
                {
                  ++*(_DWORD *)a4;
                  return 0;
                }
                return (unsigned int)v14;
              }
              v43 = 0;
              v44 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                v45 = (unsigned int)v59;
                while ( 1 )
                {
                  v46 = -1;
                  if ( *(_DWORD *)v44 < 0xFFFFFFFC )
                    v46 = *(_DWORD *)v44 + 4;
                  if ( (unsigned int)(*(_DWORD *)v44 + 4) >= 4 )
                    v45 = v46;
                  v14 = *(_DWORD *)v44 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( *(_DWORD *)v44 >= 0xFFFFFFFC )
                    break;
                  v47 = v44;
                  v48 = &v44[v45];
                  v49 = -1LL;
                  if ( v48 >= v44 )
                    v49 = (__int64)&v44[v45];
                  v44 = (char *)v49;
                  v14 = v48 < v47 ? 0xC0000095 : 0;
                  if ( v48 < v47 )
                    break;
                  if ( (unsigned int)++v43 >= *(_DWORD *)a4 )
                    goto LABEL_87;
                }
                return (unsigned int)v14;
              }
LABEL_87:
              if ( v44 + 4 >= v44 )
                v9 = (__int64)(v44 + 4);
              v14 = v44 + 4 < v44 ? 0xC0000095 : 0;
              if ( v44 + 4 < v44 )
                return (unsigned int)v14;
              if ( (unsigned __int64)(v44 + 260) <= v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                v50 = 2LL;
                *(_DWORD *)v44 = 256;
                v51 = v60;
                do
                {
                  *(_OWORD *)v9 = *v51;
                  *(_OWORD *)(v9 + 16) = v51[1];
                  *(_OWORD *)(v9 + 32) = v51[2];
                  *(_OWORD *)(v9 + 48) = v51[3];
                  *(_OWORD *)(v9 + 64) = v51[4];
                  *(_OWORD *)(v9 + 80) = v51[5];
                  *(_OWORD *)(v9 + 96) = v51[6];
                  v9 += 128LL;
                  v52 = v51[7];
                  v51 += 8;
                  *(_OWORD *)(v9 - 16) = v52;
                  --v50;
                }
                while ( v50 );
                ++*(_DWORD *)a4;
                return (unsigned int)v14;
              }
              return (unsigned int)-1073741789;
            }
          }
          if ( v14 < 0 )
            return (unsigned int)v14;
          goto LABEL_75;
        }
      }
    }
  }
  return (unsigned int)v14;
}
