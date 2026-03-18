/*
 * XREFs of ExGetBigPoolInfo @ 0x1402B8B38
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1407BABAC (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     ExFreeHeapPages @ 0x1400E17DC (ExFreeHeapPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v5; // ebx
  char *HeapPages; // rdi
  int v8; // eax
  __int64 v9; // rcx
  KIRQL v10; // al
  KIRQL v11; // r14
  const void *v12; // rdx
  unsigned __int64 v13; // rbx
  size_t v15; // rbx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned int v18; // [rsp+20h] [rbp-68h]
  unsigned int v19; // [rsp+24h] [rbp-64h]
  char *v20; // [rsp+28h] [rbp-60h]
  _DWORD *v21; // [rsp+30h] [rbp-58h]
  unsigned __int64 v22; // [rsp+38h] [rbp-50h]
  _DWORD *v23; // [rsp+50h] [rbp-38h]

  v5 = a3;
  HeapPages = 0LL;
  v19 = 0;
  v22 = 0LL;
  v8 = 16;
  v9 = 2LL;
  if ( a3 == 1 )
    v8 = 8;
  v18 = v8;
  if ( a3 != 1 )
    v9 = 4LL;
  v23 = &a1[v9];
  if ( a3 != 1 )
    a1 += 3;
  if ( a2 )
    *a1 = 0;
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
      v12 = *(const void **)(qword_1403CB640 + 8248);
      v13 = *(_QWORD *)(qword_1403CB640 + 8256);
    }
    if ( !v12 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      __writecr8(v11);
      if ( HeapPages )
        ExFreeHeapPages((ULONG_PTR)HeapPages);
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v22 >= v13 )
      break;
    v22 = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(v11);
    v17 = 24 * v13;
    if ( HeapPages )
      ExFreeHeapPages((ULONG_PTR)HeapPages);
    HeapPages = (char *)ExAllocateHeapPages(512LL, v17);
    if ( !HeapPages )
      return 3221225626LL;
    v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v5 = a3;
  }
  v15 = 24 * v13;
  memmove(HeapPages, v12, v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  __writecr8(v11);
  v20 = HeapPages;
  v21 = v23;
  while ( v20 < &HeapPages[v15] )
  {
    v16 = *(_QWORD *)v20;
    if ( (*(_QWORD *)v20 & 1) == 0 )
    {
      if ( a2 )
        ++*a1;
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
          if ( a3 == 1 && (*((_DWORD *)v20 + 3) & 0x100) == 0 )
            *(_QWORD *)v21 = v16 | 1;
          v21[4] = *((_DWORD *)v20 + 2);
          *((_QWORD *)v21 + 1) = *((_QWORD *)v20 + 2);
          v21 += 6;
        }
      }
      else
      {
        v19 = -1073741820;
      }
    }
    v20 += 24;
  }
  ExFreeHeapPages((ULONG_PTR)HeapPages);
  *a4 = v18;
  return v19;
}
