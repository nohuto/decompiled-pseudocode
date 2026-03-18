/*
 * XREFs of SPCallServerHandleWaitForDisplayWindow @ 0x1405EB240
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleWaitForDisplayWindow(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  unsigned int i; // r9d
  unsigned __int64 v10; // r10
  unsigned int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  int v16; // esi
  int v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // esi
  NTSTATUS v20; // eax
  int v21; // r9d
  unsigned int v22; // eax
  int v23; // r14d
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // edx
  char *PoolWithTag; // rax
  char *v28; // rdx
  int v29; // esi
  char *v30; // rax
  __int64 v31; // r9
  char *v32; // r10
  unsigned int v33; // edx
  int v34; // eax
  unsigned int v35; // ecx
  char *v36; // r9
  int v37; // r11d
  unsigned int v38; // eax
  unsigned int v39; // r12d
  char *v40; // rcx
  char *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // xmm0_8
  __int64 v45; // r10
  int v46; // r12d
  unsigned int v47; // ecx
  unsigned int v48; // eax
  char *v50; // r9
  unsigned int v51; // eax
  unsigned int v52; // r11d
  char *v53; // rcx
  char *v54; // rdx
  __int64 v55; // rax
  char v56[8]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v57; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v59; // [rsp+90h] [rbp+40h] BYREF
  int v60; // [rsp+A0h] [rbp+50h] BYREF

  v60 = a3;
  v4 = 0;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v10 = -1LL;
      if ( v7 + 4 >= v7 )
        v10 = v7 + 4;
      v11 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
        goto LABEL_36;
      v12 = v10 + *(unsigned int *)v7;
      v7 = -1LL;
      if ( v12 >= v10 )
        v7 = v12;
      v11 = v12 < v10 ? 0xC0000095 : 0;
      if ( v12 < v10 )
        goto LABEL_36;
    }
    v13 = *(_DWORD *)v7;
    v14 = -1LL;
    if ( v7 + 4 >= v7 )
      v14 = v7 + 4;
    v11 = v7 + 4 < v7 ? 0xC0000095 : 0;
    if ( v7 + 4 < v7 )
    {
LABEL_36:
      v13 = v60;
      v15 = v59;
      goto LABEL_19;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_19:
    if ( (v11 & 0x80000000) != 0 )
      return v11;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v57 = (_QWORD *)*v15;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( (v11 & 0x80000000) == 0 )
  {
    v16 = 1;
    RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
    v17 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD **, __int64, char *))qword_1407F3448)(
            &DestinationString,
            &v60,
            &v59,
            4LL,
            v56);
    v11 = v17;
    if ( v17 != -1073741772 )
    {
      if ( v17 < 0 )
        return v11;
      if ( !(_DWORD)v59 || v60 != 4 )
        v16 = 0;
      if ( v16 )
        KeResetEvent(&stru_14035AB20);
    }
    dword_1407F3198 = 1;
    do
    {
      v18 = KeWaitForSingleObject(&stru_14035AB20, UserRequest, 1, 1u, 0LL);
      v19 = v18;
    }
    while ( v18 == 257 );
    if ( v18 >= 0 && v18 != 192 )
    {
      do
      {
        v20 = KeWaitForSingleObject(&stru_14035AB40, UserRequest, 1, 1u, 0LL);
        v19 = v20;
      }
      while ( v20 == 257 );
      if ( v20 >= 0 && v20 != 192 && v20 != 258 )
        KeReleaseMutex(&stru_14035AB40, 0);
    }
    v21 = *(_DWORD *)(a2 + 32);
    v22 = *(_DWORD *)(a2 + 16) + 56;
    v23 = -1;
    v24 = -1;
    if ( v22 >= 0x38 )
      v24 = v22;
    v11 = v22 < 0x38 ? 0xC0000095 : 0;
    if ( v22 >= 0x38 )
    {
      v25 = v24 + 4;
      v26 = -1;
      if ( v24 + 4 >= v24 )
        v26 = v24 + 4;
      v11 = v25 < v24 ? 0xC0000095 : 0;
      if ( v25 >= v24 )
        v11 = v26 + v21 < v26 ? 0xC0000095 : 0;
    }
    if ( (v11 & 0x80000000) == 0 )
    {
      *(_DWORD *)(a4 + 4) = 28;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
      v28 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      v29 = v19 | 0x10000000;
      v30 = PoolWithTag + 4;
      v31 = -1LL;
      if ( v30 >= v28 )
        v31 = (__int64)v30;
      v11 = v30 < v28 ? 0xC0000095 : 0;
      if ( v30 >= v28 )
      {
        if ( v28 + 8 > &v28[*(unsigned int *)(a4 + 4)] )
          return (unsigned int)-1073741789;
        *(_DWORD *)v28 = 4;
        *(_DWORD *)v31 = v29;
        ++*(_DWORD *)a4;
      }
      if ( v30 < v28 )
        return v11;
      v32 = *(char **)(a4 + 8);
      v59 = v57;
      if ( v32 )
      {
        v36 = v32;
        v37 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v38 = -1;
            if ( *(_DWORD *)v36 < 0xFFFFFFFC )
              v38 = *(_DWORD *)v36 + 4;
            v11 = *(_DWORD *)v36 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v36 + 4) < 4 )
              break;
            v39 = v38;
            v40 = v36;
            v41 = &v36[v38];
            v42 = -1LL;
            if ( v41 >= v36 )
              v42 = (__int64)&v36[v39];
            v36 = (char *)v42;
            v11 = v41 < v40 ? 0xC0000095 : 0;
            if ( v41 < v40 )
              break;
            if ( (unsigned int)++v37 >= *(_DWORD *)a4 )
              goto LABEL_73;
          }
        }
        else
        {
LABEL_73:
          v43 = -1LL;
          if ( v36 + 4 >= v36 )
            v43 = (__int64)(v36 + 4);
          v11 = v36 + 4 < v36 ? 0xC0000095 : 0;
          if ( v36 + 4 >= v36 )
          {
            if ( v36 + 12 > &v32[*(unsigned int *)(a4 + 4)] )
              return (unsigned int)-1073741789;
            v44 = v59;
            *(_DWORD *)v36 = 8;
            *(_QWORD *)v43 = v44;
            ++*(_DWORD *)a4;
          }
        }
      }
      else
      {
        v33 = *(_DWORD *)(a4 + 4);
        v34 = -1;
        v35 = v33 + 12;
        if ( v33 + 12 >= v33 )
          v34 = v33 + 12;
        v11 = v35 < v33 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v34;
        if ( v35 >= v33 )
        {
          ++*(_DWORD *)a4;
LABEL_79:
          v45 = *(_QWORD *)(a4 + 8);
          v46 = dword_1407F3060;
          if ( !v45 )
          {
            v47 = *(_DWORD *)(a4 + 4);
            v48 = v47 + 8;
            if ( v47 + 8 >= v47 )
              v23 = v47 + 8;
            v11 = v48 < v47 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v23;
            if ( v48 >= v47 )
            {
              v11 = 0;
LABEL_84:
              ++*(_DWORD *)a4;
              return v11;
            }
            return v11;
          }
          v50 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            do
            {
              v51 = -1;
              if ( *(_DWORD *)v50 < 0xFFFFFFFC )
                v51 = *(_DWORD *)v50 + 4;
              v11 = *(_DWORD *)v50 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v50 + 4) < 4 )
                return v11;
              v52 = v51;
              v53 = v50;
              v54 = &v50[v51];
              v55 = -1LL;
              if ( v54 >= v50 )
                v55 = (__int64)&v50[v52];
              v50 = (char *)v55;
              v11 = v54 < v53 ? 0xC0000095 : 0;
              if ( v54 < v53 )
                return v11;
            }
            while ( (unsigned int)++v4 < *(_DWORD *)a4 );
          }
          if ( v50 + 4 >= v50 )
            v8 = (__int64)(v50 + 4);
          v11 = v50 + 4 < v50 ? 0xC0000095 : 0;
          if ( v50 + 4 < v50 )
            return v11;
          if ( (unsigned __int64)(v50 + 8) <= v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v50 = 4;
            *(_DWORD *)v8 = v46;
            goto LABEL_84;
          }
          return (unsigned int)-1073741789;
        }
      }
      if ( (v11 & 0x80000000) != 0 )
        return v11;
      goto LABEL_79;
    }
  }
  return v11;
}
