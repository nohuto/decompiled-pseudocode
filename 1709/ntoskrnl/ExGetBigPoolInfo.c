/*
 * XREFs of ExGetBigPoolInfo @ 0x14028451C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x14074DA54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140753E0C (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v5; // ebx
  char *PoolPages; // rdi
  unsigned __int64 v8; // rsi
  _DWORD *v9; // r12
  __int64 v10; // rax
  KIRQL v11; // al
  KIRQL v12; // r14
  const void *v13; // rdx
  unsigned __int64 v14; // rbx
  size_t v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned int v21; // [rsp+20h] [rbp-68h]
  unsigned int v22; // [rsp+24h] [rbp-64h]
  char *v23; // [rsp+28h] [rbp-60h]
  _DWORD *v24; // [rsp+30h] [rbp-58h]
  unsigned __int64 v25; // [rsp+38h] [rbp-50h]
  _DWORD *v26; // [rsp+50h] [rbp-38h]

  v5 = a3;
  PoolPages = 0LL;
  v8 = 0LL;
  v22 = 0;
  v25 = 0LL;
  if ( a3 == 1 )
  {
    v9 = a1;
    v10 = 2LL;
  }
  else
  {
    v9 = a1 + 3;
    v10 = 4LL;
  }
  v21 = v10 * 4;
  v26 = &a1[v10];
  if ( a2 )
    *v9 = 0;
  v11 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
  while ( 1 )
  {
    v12 = v11;
    if ( v5 == 1 )
    {
      v13 = (const void *)PoolBigPageTable;
      v14 = PoolBigPageTableSize;
    }
    else
    {
      v13 = *(const void **)(qword_1403884B8 + 8128);
      v14 = *(_QWORD *)(qword_1403884B8 + 8136);
    }
    if ( !v13 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      __writecr8(v12);
      if ( PoolPages )
        MiFreePoolPages((ULONG_PTR)PoolPages, v8);
      *a4 = 0;
      return 0LL;
    }
    if ( PoolPages && v25 >= v14 )
      break;
    v25 = v14;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(v12);
    v20 = 24 * v14;
    if ( PoolPages )
      MiFreePoolPages((ULONG_PTR)PoolPages, v8);
    PoolPages = (char *)MiAllocatePoolPages(0x200u, v20, v18, v19);
    if ( !PoolPages )
      return 3221225626LL;
    v8 = v20;
    v11 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v5 = a3;
  }
  v16 = 24 * v14;
  memmove(PoolPages, v13, v16);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  __writecr8(v12);
  v23 = PoolPages;
  v24 = v26;
  while ( v23 < &PoolPages[v16] )
  {
    v17 = *(_QWORD *)v23;
    if ( (*(_QWORD *)v23 & 1) == 0 )
    {
      if ( a2 )
        ++*v9;
      v21 += 24;
      if ( v21 < 0x18 )
      {
        v22 = -1073741675;
        break;
      }
      if ( v21 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v24 = v17;
          if ( a3 == 1 && (*((_DWORD *)v23 + 3) & 0x100) == 0 )
            *(_QWORD *)v24 = v17 | 1;
          v24[4] = *((_DWORD *)v23 + 2);
          *((_QWORD *)v24 + 1) = *((_QWORD *)v23 + 2);
          v24 += 6;
        }
      }
      else
      {
        v22 = -1073741820;
      }
    }
    v23 += 24;
  }
  MiFreePoolPages((ULONG_PTR)PoolPages, v8);
  *a4 = v21;
  return v22;
}
