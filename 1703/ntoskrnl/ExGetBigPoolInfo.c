/*
 * XREFs of ExGetBigPoolInfo @ 0x14025ADD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140714C7C (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v5; // ebx
  char *PoolPages; // rdi
  _DWORD *v8; // r12
  _DWORD *v9; // rax
  KIRQL v10; // al
  KIRQL v11; // r14
  const void *v12; // rdx
  unsigned __int64 v13; // rbx
  size_t v15; // rbx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned int v18; // [rsp+20h] [rbp-58h]
  unsigned int v19; // [rsp+24h] [rbp-54h]
  char *i; // [rsp+28h] [rbp-50h]
  _DWORD *v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v5 = a3;
  PoolPages = 0LL;
  v19 = 0;
  v22 = 0LL;
  if ( a3 == 1 )
  {
    v8 = a1;
    v18 = 8;
    v9 = a1 + 2;
  }
  else
  {
    v8 = a1 + 3;
    v18 = 16;
    v9 = a1 + 4;
  }
  v21 = v9;
  if ( a2 )
    *v8 = 0;
  v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
  while ( 1 )
  {
    v11 = v10;
    if ( v5 == 1 )
    {
      v12 = (const void *)PoolBigPageTable;
      v13 = PoolBigPageTableSize;
    }
    else
    {
      v12 = *(const void **)(qword_14036C178 + 8128);
      v13 = *(_QWORD *)(qword_14036C178 + 8136);
    }
    if ( !v12 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      __writecr8(v11);
      if ( PoolPages )
        MiFreePoolPages((ULONG_PTR)PoolPages);
      *a4 = 0;
      return v19;
    }
    if ( PoolPages && v22 >= v13 )
    {
      v15 = 24 * v13;
      memmove(PoolPages, v12, v15);
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      __writecr8(v11);
      for ( i = PoolPages; i < &PoolPages[v15]; i += 24 )
      {
        v16 = *(_QWORD *)i;
        if ( (*(_QWORD *)i & 1) == 0 )
        {
          if ( a2 )
            ++*v8;
          v18 += 24;
          if ( v18 < 0x18 )
          {
            v19 = -1073741675;
            break;
          }
          if ( v18 <= a2 )
          {
            if ( a2 )
            {
              *(_QWORD *)v21 = v16;
              if ( a3 == 1 && (*((_DWORD *)i + 3) & 0x100) == 0 )
                *(_QWORD *)v21 = v16 | 1;
              v21[4] = *((_DWORD *)i + 2);
              *((_QWORD *)v21 + 1) = *((_QWORD *)i + 2);
              v21 += 6;
            }
          }
          else
          {
            v19 = -1073741820;
          }
        }
      }
      MiFreePoolPages((ULONG_PTR)PoolPages);
      *a4 = v18;
      return v19;
    }
    v22 = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(v11);
    v17 = 24 * v13;
    if ( PoolPages )
      MiFreePoolPages((ULONG_PTR)PoolPages);
    PoolPages = (char *)MiAllocatePoolPages(0x200u, v17);
    if ( !PoolPages )
      return 3221225626LL;
    v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v5 = a3;
  }
}
