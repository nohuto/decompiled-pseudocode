/*
 * XREFs of GetObjectPathNoLock @ 0x1C00037FC
 * Callers:
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     GetObjectPathNoLock @ 0x1C00037FC (GetObjectPathNoLock.c)
 *     FindNSObj @ 0x1C0046440 (FindNSObj.c)
 * Callees:
 *     RtlStringCchCatA @ 0x1C0003734 (RtlStringCchCatA.c)
 *     GetObjectPathNoLock @ 0x1C00037FC (GetObjectPathNoLock.c)
 *     RtlStringCchCopyA @ 0x1C0003A00 (RtlStringCchCopyA.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

char *__fastcall GetObjectPathNoLock(__int64 a1)
{
  char *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 ObjectPathNoLock; // rax
  char *v6; // rsi
  __int64 v7; // rdx
  char *PoolWithTag; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed int v14; // edx
  __int64 v15; // r9
  char *i; // rax
  __int64 v17; // r8
  char *v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbp
  char v22; // al
  char *v23; // rax
  int v24; // edi
  char *v25; // rcx
  char *v27; // rax

  v1 = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = -1LL;
    if ( v3 )
    {
      ObjectPathNoLock = GetObjectPathNoLock(v3);
      v6 = (char *)ObjectPathNoLock;
      if ( !ObjectPathNoLock )
        return v1;
      v7 = -1LL;
      do
        ++v7;
      while ( *(_BYTE *)(ObjectPathNoLock + v7) );
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7 + 9, 0x5254535Fu);
      v1 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v6[v9] );
        memset(PoolWithTag, 0, v9 + 9);
        v10 = -1LL;
        do
          ++v10;
        while ( v6[v10] );
        RtlStringCchCopyA(v1, v10 + 1, v6);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v6[v11] );
          RtlStringCchCatA(v1, v11 + 9, ".");
        }
        v12 = -1LL;
        do
          ++v12;
        while ( v6[v12] );
        v13 = v12 + 9;
        v14 = 0;
        if ( (unsigned __int64)(v13 - 1) > 0x7FFFFFFE )
          v14 = -1073741811;
        if ( v14 < 0 )
          goto LABEL_45;
        v15 = v13;
        for ( i = v1; v15; --v15 )
        {
          if ( !*i )
            break;
          ++i;
        }
        v14 = v15 == 0 ? 0xC000000D : 0;
        if ( v15 )
          v17 = v13 - v15;
        else
LABEL_45:
          v17 = 0LL;
        if ( v14 >= 0 )
        {
          v18 = &v1[v17];
          v19 = v13 - v17;
          if ( v13 != v17 )
          {
            v20 = 4LL;
            v21 = a1 - (_QWORD)v18;
            do
            {
              if ( !v20 )
                break;
              v22 = v18[v21 + 40];
              if ( !v22 )
                break;
              *v18 = v22;
              --v20;
              ++v18;
              --v19;
            }
            while ( v19 );
          }
          v23 = v18 - 1;
          if ( v19 )
            v23 = v18;
          *v23 = 0;
        }
      }
      ExFreePoolWithTag(v6, 0x5254535Fu);
    }
    else
    {
      v1 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x5254535Fu);
      if ( !v1 )
        return v1;
      *(_QWORD *)v1 = 0LL;
      *v1 = 92;
    }
    if ( v1 )
    {
      do
        ++v4;
      while ( v1[v4] );
      v24 = v4 - 1;
      if ( v24 >= 0 )
      {
        v25 = &v1[v24];
        do
        {
          if ( *v25 != 95 )
            break;
          *v25-- = 0;
        }
        while ( v25 - v1 >= 0 );
      }
    }
  }
  else
  {
    v27 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 1uLL, 0x5254535Fu);
    v1 = v27;
    if ( v27 )
      *v27 = 0;
  }
  return v1;
}
