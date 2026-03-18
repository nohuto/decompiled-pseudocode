/*
 * XREFs of GetObjectPathNoLock @ 0x1C000C0B0
 * Callers:
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     GetObjectPathNoLock @ 0x1C000C0B0 (GetObjectPathNoLock.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C000D26C (AMLIGetNameSpaceObjectPath.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     FindNSObj @ 0x1C00198E0 (FindNSObj.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C000C0B0 (GetObjectPathNoLock.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

_QWORD *__fastcall GetObjectPathNoLock(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 ObjectPathNoLock; // rax
  void *v4; // rsi
  __int64 v5; // rdx
  _BYTE *PoolWithTag; // rax
  _BYTE *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE *v12; // rdx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // r9
  _BYTE *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  const char *v23; // r9
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // r8
  int v27; // edx
  __int64 v28; // rcx
  _BYTE *v29; // rax
  int v30; // edx
  _BYTE *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // al
  int v36; // ebx
  _BYTE *v37; // rcx
  _QWORD *result; // rax

  v1 = 0LL;
  if ( a1 )
  {
    v2 = -1LL;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      result = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x5254535Fu);
      v7 = result;
      if ( !result )
        return result;
      *result = 0LL;
      *(_BYTE *)result = 92;
      goto LABEL_59;
    }
    ObjectPathNoLock = GetObjectPathNoLock();
    v4 = (void *)ObjectPathNoLock;
    if ( !ObjectPathNoLock )
      return 0LL;
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(ObjectPathNoLock + v5) );
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 9, 0x5254535Fu);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_58:
      ExFreePoolWithTag(v4, 0x5254535Fu);
LABEL_59:
      if ( v7 )
      {
        do
          ++v2;
        while ( v7[v2] );
        v36 = v2 - 1;
        if ( v36 >= 0 )
        {
          v37 = &v7[v36];
          do
          {
            if ( *v37 != 95 )
              break;
            *v37-- = 0;
          }
          while ( v37 - v7 >= 0 );
        }
      }
      return v7;
    }
    v8 = -1LL;
    do
      ++v8;
    while ( *((_BYTE *)v4 + v8) );
    memset(PoolWithTag, 0, v8 + 9);
    v9 = -1LL;
    do
      ++v9;
    while ( *((_BYTE *)v4 + v9) );
    v10 = v9 + 1;
    if ( (unsigned __int64)(v10 - 1) > 0x7FFFFFFE )
    {
      if ( v10 )
        *v7 = 0;
    }
    else
    {
      v11 = 2147483646 - v10;
      v12 = v7;
      while ( v11 + v10 )
      {
        v13 = v12[(_BYTE *)v4 - v7];
        if ( !v13 )
          break;
        *v12++ = v13;
        if ( !--v10 )
          goto LABEL_73;
      }
      if ( v10 )
        goto LABEL_18;
LABEL_73:
      --v12;
LABEL_18:
      *v12 = 0;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
    {
LABEL_38:
      v25 = -1LL;
      do
        ++v25;
      while ( *((_BYTE *)v4 + v25) );
      v26 = v25 + 9;
      v27 = 0;
      if ( (unsigned __int64)(v26 - 1) > 0x7FFFFFFE )
        v27 = -1073741811;
      if ( v27 >= 0 )
      {
        v28 = v26;
        v29 = v7;
        v30 = 0;
        if ( !v26 )
          goto LABEL_78;
        while ( *v29 )
        {
          ++v29;
          if ( !--v28 )
            goto LABEL_78;
        }
        if ( v28 )
          v1 = v26 - v28;
        else
LABEL_78:
          v30 = -1073741811;
        if ( v30 >= 0 )
        {
          v31 = &v7[v1];
          v32 = v26 - v1;
          if ( v26 == v1 )
            goto LABEL_79;
          v33 = 4LL;
          v34 = a1 + 40 - (_QWORD)v31;
          while ( v33 )
          {
            v35 = v31[v34];
            if ( !v35 )
              break;
            *v31 = v35;
            --v33;
            ++v31;
            if ( !--v32 )
              goto LABEL_79;
          }
          if ( !v32 )
LABEL_79:
            --v31;
          *v31 = 0;
        }
      }
      goto LABEL_58;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( *((_BYTE *)v4 + v14) );
    v15 = v14 + 9;
    v16 = 0;
    if ( (unsigned __int64)(v15 - 1) > 0x7FFFFFFE )
      v16 = -1073741811;
    if ( v16 >= 0 )
    {
      v17 = v15;
      v18 = v7;
      v16 = 0;
      if ( v15 )
      {
        while ( *v18 )
        {
          ++v18;
          if ( !--v17 )
            goto LABEL_76;
        }
        if ( v17 )
        {
          v19 = v15 - v17;
          goto LABEL_31;
        }
      }
LABEL_76:
      v16 = -1073741811;
    }
    v19 = 0LL;
LABEL_31:
    if ( v16 >= 0 )
    {
      v20 = &v7[v19];
      v21 = v15 - v19;
      if ( v15 == v19 )
        goto LABEL_67;
      v22 = 2147483646LL;
      v23 = (const char *)("." - v20);
      while ( v22 )
      {
        v24 = v20[(_QWORD)v23];
        if ( !v24 )
          break;
        *v20 = v24;
        --v22;
        ++v20;
        if ( !--v21 )
          goto LABEL_67;
      }
      if ( !v21 )
LABEL_67:
        --v20;
      *v20 = 0;
    }
    goto LABEL_38;
  }
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 1uLL, 0x5254535Fu);
  if ( result )
    *(_BYTE *)result = 0;
  return result;
}
