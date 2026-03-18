/*
 * XREFs of AlpcpInitializeMessageLog @ 0x1405E9CB4
 * Callers:
 *     AlpcpInitSystem @ 0x1405E99C8 (AlpcpInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeMessageLog(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  char *v8; // rbp
  char *v9; // r8
  PVOID v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  char *v13; // rcx
  char **v14; // rax
  __int64 v15; // rax
  char **v16; // rcx
  char *v17; // rax

  v2 = 0;
  AlpcpMessageLogLock = 0LL;
  qword_14036A1E8 = (__int64)&AlpcpMessageLogListHead;
  AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
  qword_14036A1D8 = (__int64)&AlpcpFreeMessageLogListHead;
  AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
  qword_14036A208 = (__int64)&AlpcpFreeMessageSnapshotListHead;
  AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
  if ( !a1 || !a2 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x4000uLL, 0x6C4D6C41u);
  AlpcpMessageLogLookupTable = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 1024LL;
    do
    {
      PoolWithTag[1] = PoolWithTag;
      *PoolWithTag = PoolWithTag;
      PoolWithTag += 2;
      --v7;
    }
    while ( v7 );
    v8 = (char *)ExAllocatePoolWithTag(PagedPool, a1 << 6, 0x6C4D6C41u);
    if ( !v8 )
    {
      v10 = AlpcpMessageLogLookupTable;
      goto LABEL_11;
    }
    v9 = (char *)ExAllocatePoolWithTag(PagedPool, 120 * a2, 0x734D6C41u);
    if ( !v9 )
    {
      ExFreePoolWithTag(AlpcpMessageLogLookupTable, 0);
      v10 = v8;
LABEL_11:
      ExFreePoolWithTag(v10, 0);
      return 3221225626LL;
    }
    v11 = 0;
    if ( a1 )
    {
      v12 = 0LL;
      do
      {
        v13 = &v8[64 * v12];
        *((_QWORD *)v13 + 7) = v13 + 48;
        *((_QWORD *)v13 + 6) = v13 + 48;
        v14 = (char **)qword_14036A1D8;
        if ( *(__int64 **)qword_14036A1D8 != &AlpcpFreeMessageLogListHead )
          __fastfail(3u);
        *((_QWORD *)v13 + 1) = qword_14036A1D8;
        ++v11;
        *(_QWORD *)v13 = &AlpcpFreeMessageLogListHead;
        *v14 = v13;
        v12 = v11;
        qword_14036A1D8 = (__int64)v13;
      }
      while ( v11 < a1 );
    }
    if ( a2 )
    {
      v15 = 0LL;
      do
      {
        v16 = (char **)qword_14036A208;
        v17 = &v9[120 * v15];
        if ( *(__int64 **)qword_14036A208 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        *(_QWORD *)v17 = &AlpcpFreeMessageSnapshotListHead;
        ++v2;
        *((_QWORD *)v17 + 1) = v16;
        *v16 = v17;
        qword_14036A208 = (__int64)v17;
        v15 = v2;
      }
      while ( v2 < a2 );
    }
    return 0LL;
  }
  return 3221225626LL;
}
